#include <stdio.h>
#include <stdbool.h>

int max = 10;
int stack[10];
int top = -1;

void push(int data)
{
  if (top == max - 1)
  {
    printf("Stack Overflow\n");
    return;
  }
  stack[++top] = data;
}

int topElement()
{
  if (top == -1)
  {
    printf("Stack is empty\n");
    return -1;
  }
  return stack[top];
}

int pop()
{
  if (top == -1)
  {
    printf("Stack Underflow\n");
    return -1;
  }
  int poppedValue = stack[top];
  top--;
  return poppedValue;
}

void printStack()
{
  for (int i = 0; i <= top; i++)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main()
{
  push(5);
  push(5);
  push(10);
  printStack();
  printf("Pop element: %d\n", pop());
  printf("Top element: %d\n", topElement());
  printStack();
  return 0;
}