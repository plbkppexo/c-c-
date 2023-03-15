#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;  
};


void printLinkedList (struct Node *head) {
    printf("[ ");
    for (struct Node *node = head; node != NULL; node = node->next) {
        printf("%d ", node->data);
    }
    printf("]\n");
}
void insertNode (struct Node **head, struct Node **tail, int num) {
    struct Node *NewNode = (struct Node *)malloc(sizeof(struct Node));
    NewNode->data = num;
    NewNode->next = NULL;
    if (*head == NULL) {
        *head = NewNode;
        *tail = NewNode;
        return;
    }
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    for (node = *head; node != NULL; *tail = node, node = node->next) {
        if ((NewNode->data) <= (node->data)) break;
    }
    if (node == NULL) {
        (*tail)->next = NewNode;
        *tail = NewNode;
        return;
    } else if (node == *head) {
        NewNode->next = *head;
        *head = NewNode;
        return;
    } else {
    	NewNode->next = node;
    	(*tail)->next = NewNode;
    }
}

void deleteNode (struct Node **head, int num) {
    struct Node *target = NULL;
    struct Node *before = NULL;
    for (target = *head; target != NULL; target = target->next) {
        if (target->data == num) {
        if (target == *head) {
        *head = target->next;
    } else {
        before->next = target->next;
        continue;
    }
        	};
        	before = target;
    }
}

int main() {
    struct Node *head = NULL;
    struct Node *tail = NULL;
    char str[100];
    char num[100];
    int n;
    int i, j;
    while (1) {
        printf("input> ");
        fgets(str, 100, stdin);
        if (str[0] == 'q') {
            break;
        }
        if (str[0] == 'p') {
            printLinkedList(head);
        } else if (str[0] == 'i') {
            i = 2;
            for (j = 0; j < 100; j++) {
                num[j] = str[i + j];
            }
            n = atoi(num);
            insertNode(&head, &tail, n);
        } else {
            i = 2;
            for (j = 0; j < 100; j++) {
                num[j] = str[i + j];
            }
            n = atoi(num);
            deleteNode(&head, n);
        }

    }
}