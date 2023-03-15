#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;
void insertNode(Node **head, Node **tail, int num) {
    Node *NewNode = (Node *)malloc(sizeof(Node));
    NewNode->item = num;
    NewNode->next = NULL;
    if (*head == NULL)
    {
        *head = NewNode;
        *tail = NewNode;
        return;
    }
    NewNode->next = *head;
    *head = NewNode;
}

void printLinkedList(Node *head) {
    for (Node *node = head; node != NULL; node = node->next)
    {
        printf("%d ", node->item);
    }
    printf("\n");
}

int main() {
    char str[100];
    Node *head[SIZE];
    Node *tail[SIZE];
    char num[100];
    int n, i, j, k;
    for (k = 0; k < SIZE; k++) {
        head[k] = NULL;
        tail[k] = NULL;
    }
    while (1) {
        printf("input> ");
        fgets(str, 100, stdin);
        if (str[0] == 'q') {
            break;
        }
        if (str[0] == 'a') {
            i = 2;
            for (j = 0; j < 100; j++)
            {
                num[j] = str[i + j];
            }
            n = atoi(num);
            k = n % SIZE;
            insertNode(&head[k], &tail[k], n);
        } else if (str[0] == 'p') {
            for (i = 0; i < SIZE; i++) {
                printf("KEY %2d: ", i);
                printLinkedList(head[i]);
            }
        }
    }
}