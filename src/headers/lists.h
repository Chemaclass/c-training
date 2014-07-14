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
void ListInit(List *list);
int ListPrepend(List *list, char *value);
int ListAppend(List *list, char *value);
void ListToString(List *list);

