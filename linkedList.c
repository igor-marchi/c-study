#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int value;
  struct Node *next;
  struct Node *prev;
};

int main()
{

  int listSize = 10;

  struct Node *first = NULL;
  struct Node *last = NULL;

  for (int i = 0; i < listSize; i++)
  {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->value = i + 1 * 2;
    newNode->next = NULL;
    if (first == NULL)
    {
      first = newNode;
      last = newNode;
      newNode->prev = NULL;
    }
    else
    {
      last->next = newNode;
      newNode->prev = last;
      last = newNode;
    }
  }

  printf("Valores da lista duplamente encadeada:\n");
  struct Node *current = first;
  while (current != NULL)
  {
    printf("%d ", current->value);
    current = current->next;
  }
  printf("\n");

  current = first;
  while (current != NULL)
  {
    struct Node *temp = current->next;
    free(current);
    current = temp;
  }

  return 0;
}