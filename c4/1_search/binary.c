#include <stdio.h>
#include <limits.h>

// just a demo (it's a tree! (maybe))
void binaryPrintArr(int arr[], int left, int right) {
  if (left > right) return;
  int mid = (left + right) / 2;
  printf("%d ", arr[mid]);
  binaryPrintArr(arr, left, mid-1);
  binaryPrintArr(arr, mid+1, right);
}

// search x and return first index (binary ver.)
// return -1 if not found
int binarySearch(int arr[], int left, int right, int x) {
  if (left > right) return -1;
  int mid = (left + right) / 2;
  if (arr[mid] == x) {
    return mid;
  } else if (x < arr[mid]) {
    return binarySearch(arr, left, mid-1, x);
  } else if (arr[mid] < x) {
    return binarySearch(arr, mid+1, right, x);
  }
  return -1;
}

// return the max number in arr (binary ver.)
// using the same method to search the min one
int binaryMax(int arr[], int left, int right) {
  if (left == right) return arr[left];
  int mid = (left + right) / 2;
  int lMax = binaryMax(arr, left, mid-1);
  int rMax = binaryMax(arr, mid+1, right);
  return lMax>rMax ? lMax : rMax;
}

// return the average number in arr (binary ver.)
double binaryAvr(int arr[], int left, int right) {
  if (left == right) return arr[left];
  int mid = (left + right) / 2;
  return (binaryAvr(arr, left, mid-1)  * ((mid-1)-left+1)  +
          binaryAvr(arr, mid+1, right) * (right-(mid+1)+1) +
          arr[mid]) / (right-left+1);
}

// return a^m
int fastPower(int a, int m) {
  if (!m) return 1;
  int tmp = fastPower(a, m/2);
  if (m&1) return tmp*tmp*a;
  return tmp*tmp;
}

int main() {
  int arr[7] = {1, 2, 3, 4, 5, 6, 7};
  binaryPrintArr(arr, 0, 7-1);
  printf("\n");

  printf("binarySearch(5) -> %d\n", binarySearch(arr, 0, 7-1, 5));
  printf("binarySearch(500) -> %d\n", binarySearch(arr, 0, 7-1, 500));
  printf("binaryMax -> %d\n", binaryMax(arr, 0, 7-1));
  printf("binaryAvr -> %lf\n", binaryAvr(arr, 0, 7-1));
  printf("fastPwoer(2, 11) -> %d\n", fastPower(2, 11));

  return 0;
}
