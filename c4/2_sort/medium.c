#include <stdio.h>
#include <stdlib.h>

// just print an int array
void printIntArr(int arr[], int len) {
  for (int i=0; i<len; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// merge arr1+arr2 to arr3
// supposed arr1 and arr2 are sorted
// supposed len of arr3 has enough space
void mergeArr(int arr1[], int len1, int arr2[], int len2, int arr3[]) {
  int i1 = 0;                         // how to write C codes like Py (x
  int i2 = 0;
  int i = 0;
  while (i1<len1 && i2<len2)
    if (arr1[i1] < arr2[i2])
      arr3[i++] = arr1[i1++];
    else
      arr3[i++] = arr2[i2++];
  while (i1<len1)
    arr3[i++] = arr1[i1++];
  while (i2<len2)
    arr3[i++] = arr2[i2++];
}

// copy arr1 to arr2
void copyArr(int arr1[], int arr2[], int len) {
  for (int i=0; i<len; i++)
    arr2[i] = arr1[i];
}

void naiveMergeSort(int arr[], int left, int right) {
  if (left >= right) return;
  int mid = (left+right)/2;
  naiveMergeSort(arr, left, mid);
  naiveMergeSort(arr, mid+1, right);
  int lenl = mid-left+1;
  int lenr = right-(mid+1)+1;
  int* arrl = (int*)malloc(lenl*sizeof(int));
  int* arrr = (int*)malloc(lenr*sizeof(int));
  copyArr(arr+left, arrl, lenl);               // enmm
  copyArr(arr+mid+1, arrr, lenr);
  mergeArr(arrl, lenl, arrr, lenr, arr+left);  // lenl+lenr == right-left+1
  free(arrl);
  free(arrr);
}

// quickSort split, leftside of pivot is less then pivot
// return the split point (pivot position)
int split(int arr[], int left, int right) {
  int pivot = arr[right];                   //choose the last one to be the pivot
  int sp = left;                            // spilt point
  for (int i=left; i<right; i++)
    if (arr[i] < pivot)
      swap(&arr[i], &arr[sp++]);
  swap(&arr[sp], &arr[right]);
  //printf("debug -> %d %d (%d %d)\n", sp, pivot, left, right);
  //printIntArr(arr+left, right-left+1);
  return sp;
}

void naiveQuickSort(int arr[], int left, int right) {
  if (left >= right) return;
  int sp = split(arr, left, right);
  naiveQuickSort(arr, left, sp-1);
  naiveQuickSort(arr, sp+1, right);
}

int main() {
  int arr1[3] = {1, 3, 5};
  int arr2[3] = {2, 4, 6};
  int arr3[6] = {0};
  mergeArr(arr1, 3, arr2, 3, arr3);
  printIntArr(arr3, 6);

  int* arr4 = (int*)malloc(6*sizeof(int));    // another method
  mergeArr(arr2, 3, arr1, 3, arr4);
  printIntArr(arr4, 6);
  free(arr4);

  int arr5[7] = {123, 233, 985, 211, 996, 251, 404};
  naiveMergeSort(arr5, 0, 7-1);
  printIntArr(arr5, 7);

  int arr6[7] = {123, 233, 985, 211, 996, 251, 404};
  naiveQuickSort(arr6, 0, 7-1);
  printIntArr(arr6, 7);

  return 0;
}
