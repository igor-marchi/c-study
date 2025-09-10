#include <stdio.h>

int main()
{
  int arr[10] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45};

  printf("Original array: \n");
  printArray(arr);

  bubbleSort(arr);
  printf("Sorted array: \n");
  printArray(arr);
}

void printArray(int arr[])
{
  int size = sizeof(arr);
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void bubbleSort(int arr[])
{
  int size = sizeof(arr);
  for (int i = 1; i < size; i++)
  {
    int swapped = 0;
    for (int j = 0; j < size - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = 1;
      }
    }
    if (!swapped)
      break;
  }
}