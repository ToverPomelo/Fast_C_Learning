#include <stdio.h>
#include <limits.h>

// just print an int array
void printIntArr(int arr[], int len) {
  for (int i=0; i<len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// search x and return first index
// return -1 if not found
int naiveSearch(int arr[], int len, int x) {
  for (int i=0; i<len; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

// return the max number in arr
// using the same method to search the min one
int naiveMax(int arr[], int len) {
  int max = arr[0];
  for (int i=1; i<len; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

// return the average number in arr
double naiveAvr(int arr[], int len) {
  int sum = 0;
  for (int i=0; i<len; i++) {
    sum += arr[i];
  }
  double avr = (double)sum/len;
  return avr;
}

// return the average number in arr (better ver. (maybe))
double betterAvr(int arr[], int len) {
  double avr = arr[0];
  for (int i=1; i<len; i++) {
    avr = (avr*i + arr[i]) / (i+1);
  }
  return avr;
}

int main() {
  int arr[7] = {1,2,3,4,5,6,7};
  printIntArr(arr, 6);

  printf("naiveSearch(5) -> %d\n", naiveSearch(arr, 7, 5));
  printf("naiveSearch(500) -> %d\n", naiveSearch(arr, 7, 500));
  printf("naiveMax -> %d\n", naiveMax(arr, 7));
  printf("naiveAvr -> %lf\n", naiveAvr(arr, 7));
  printf("betterAvr -> %lf\n", betterAvr(arr, 7));

  return 0;
}

