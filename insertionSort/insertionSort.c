#include <stdio.h>
#include <stdbool.h>

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45, 10, 50};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: \n");
  printArray(arr, size);

  insertionSort(arr, size);

  printf("Sorted array: \n");
  printArray(arr, size);
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void insertionSort(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    while (arr[i] < arr[i - 1] && i > 0)
    {
      int temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      i--;
    }
  }
}