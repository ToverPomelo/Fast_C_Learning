#include <stdio.h>

// just print an int array
void printIntArr(int arr[], int len) {
  for (int i=0; i<len; i++) 
    printf("%d ", arr[i]);
  printf("\n");
}

// but no use enmm
void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// shift arr, from left to right (included)
// eg: shr([1,2,3,4,5], 1, 3) -> [1,2,2,3,5]
void shr(int arr[], int left, int right) {
  for (int i=right-1; i>=left; i--)
    arr[i+1] = arr[i];
}

// round shift arr, from left to right (included)
// eg: ror([1,2,3,4,5], 1, 3) -> [1,4,2,3,5]
void ror(int arr[], int left, int right) {
  int tmp = arr[right];
  shr(arr, left, right);
  arr[left] = tmp;
}

void insertionSort(int arr[], int len) {
  for (int i=1; i<len; i++)             // i -> now element
    for (int j=0; j<i; j++)             // j -> insertion position
      if (arr[i] < arr[j])              // '<' -> a[i]<a[i+1]
        ror(arr, j, i);
}

// find min num in [left...right] and return position
int naiveMinPos(int arr[], int left, int right) {
  int min = arr[left];
  int minPos = left;
  for (int i=left+1; i<=right; i++) {
    if (arr[i] < min) {
      min = arr[i];
      minPos = i;
    }
  }
  return minPos;
}

void selectionSort(int arr[], int len) {
  for (int i=1; i<len; i++) {                 // i -> split point
    int minPos = naiveMinPos(arr, i, len-1);  // Max if from big to small
    ror(arr, i, minPos);
  }
}

void bubbleSort(int arr[], int len) {
  for (int i=1; i<len; i++)                   // i -> split point
    for (int j=len-1; j>=i; j--) 
      if (arr[j] < arr[j-1])                  // '>' -> 秤砣排序(
        swap(&arr[j], &arr[j-1]);
}

int main() {
  int arr1[5] = {1, 2, 3, 4, 5};
  shr(arr1, 1, 3);
  printIntArr(arr1, 5);

  int arr2[5] = {1, 2, 3, 4, 5};
  ror(arr2, 1, 3);
  printIntArr(arr2, 5);

  int arr3[7] = {123, 233, 985, 211, 996, 251, 404};
  insertionSort(arr3, 7);
  printIntArr(arr3, 7);

  int arr4[7] = {123, 233, 985, 211, 996, 251, 404};
  selectionSort(arr4, 7);
  printIntArr(arr4, 7);

  int arr5[7] = {123, 233, 985, 211, 996, 251, 404};
  bubbleSort(arr5, 7);
  printIntArr(arr5, 7);

  return 0;
}
