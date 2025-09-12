#include <stdio.h>

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void quickSort(int arr[], int firstIndex, int lastIndex)
{
  if (firstIndex < lastIndex)
  {
    int pivotIndex = partition(arr, firstIndex, lastIndex);
    quickSort(arr, firstIndex, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, lastIndex);
  }
}

int partition(int arr[], int firstIndex, int lastIndex)
{
  int middleIndex = firstIndex + (lastIndex - firstIndex) / 2;
  int pivot = arr[middleIndex];

  int temp = arr[middleIndex];
  arr[middleIndex] = arr[lastIndex];
  arr[lastIndex] = temp;

  int i = firstIndex - 1;

  for (int j = firstIndex; j < lastIndex; j++)
  {
    if (arr[j] < pivot)
    {
      i++;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  temp = arr[i + 1];
  arr[i + 1] = arr[lastIndex];
  arr[lastIndex] = temp;

  return i + 1;
}

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45, 10, 50};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: \n");
  printArray(arr, size);

  quickSort(arr, 0, size - 1);

  printf("Sorted array: \n");
  printArray(arr, size);

  return 0;
}