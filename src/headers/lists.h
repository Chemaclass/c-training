#pragma once

typedef struct node {
  char *value;
  struct node *next;
} Node;

typedef struct list {
	Node *start;
	Node *end;
	int size;
} List;

void listsMain();
List * ListCreate();
int ListPrepend(List *list, char *value);
int ListAppend(List *list, char *value);
void ListToString(List *list);
void ListFree(List *list);
