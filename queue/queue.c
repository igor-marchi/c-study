#include <stdio.h>

int max = 10;
int queue[10];
int start = 0;
int end = 0;

void enqueue(int value)
{
  if (end == max)
  {
    printf("Queue is full\n");
    return;
  }
  queue[end] = value;
  end++;
}

int dequeue()
{
  if (start == end)
  {
    printf("Queue is empty\n");
    return -1;
  }

  int value = queue[start];

  for (int i = 0; i < end - 1; i++)
  {
    queue[i] = queue[i + 1];
  }
  end--;

  return value;
}

int main()
{
  enqueue(10);
  enqueue(20);
  enqueue(30);
  printf("Dequeued: %d\n", dequeue());
  for (int i = start; i < end; i++)
  {
    printf("%d ", queue[i]);
  }
  printf("\n");
  return 0;
}