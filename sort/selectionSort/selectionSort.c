#include <stdio.h>
#include <stdbool.h>

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45, 10, 50};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: \n");
  printArray(arr, size);

  selectionSort(arr, size);

  printf("Sorted array: \n");
  printArray(arr, size);

  return 0;
}

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void selectionSort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {

    // find the minimum element in unsorted array
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }

    // swap the found minimum element with the first element
    if (minIndex != i)
    {
      int temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}