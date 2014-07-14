#include "headers/base.h"
#include "headers/lists.h"

void listsMain(){
	printChapter("Lists");
	
	List *list = (List*) malloc(sizeof(List));
	ListInit(list);
	char str[50];
	for(int i = 0; i < 10; i++) {
		sprintf(str, "%d", i);
		ListPrepend(list, str);
	}
	for(int i = 1; i < 10; i++) {
		sprintf(str, "%d", i);
		ListAppend(list, str);
	}
	ListToString(list);
}

// Init
void ListInit(List *list) {
	list->start = NULL;
	list->end = NULL;
	list->size = 0;
}

// Prepend
int ListPrepend(List *list, char *value) {
	Node *newNode;
	if((newNode = (Node*)malloc(sizeof(Node))) == NULL) {
		return -1;
	}
	if((newNode->value = (char*) malloc(50*sizeof(char))) == NULL) {
		return -1;
	}
	
	strcpy(newNode->value, value);

	newNode->next = list->start;
	list->start = newNode;
	list->size++;
	return 0;
}

// Append
int ListAppend(List *list, char *value) {
	Node *newNode, *aux = list->start;
	if ((newNode = (Node*) malloc(sizeof(Node))) == NULL) {
		return -1;
	}
	if((newNode->value = (char*)malloc(50*sizeof(char))) == NULL) {
		return -1;
	}

	strcpy(newNode->value, value);
	
	while (aux->next != NULL) {
		aux = aux->next;
	}
	
	aux->next = newNode;
	
	return 0;
}

// toString
void ListToString(List *list) {
	Node *aux = list->start;
	printf("List{");
	while( aux != NULL) {
		printf("%s,", aux->value);
		aux = aux->next;
	}
	printf("}\n");
}

