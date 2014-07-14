#include "headers/base.h"
#include "headers/lists.h"

void listsMain(){
	printChapter("Lists");
	
	List *list = ListCreate();
	char str[50];
	for(int i = 1; i < 10; i++) {
		sprintf(str, "-%d", i);
		ListPrepend(list, str);
	}
	for(int i = 0; i < 10; i++) {
		sprintf(str, "%d", i);
		ListAppend(list, str);
	}
	ListToString(list);
	ListFree(list);
	
	List * list2 = ListCreate();
	ListAppend(list2, "A");
	ListAppend(list2, "B");
	ListPrepend(list2, "C");
	
	ListToString(list2);
}

// Init
List * ListCreate() {
	List * list = (List*) malloc(sizeof(List));
	list->start = NULL;
	list->end = NULL;
	list->size = 0;
	return list;
}

void ListFree(List *list){
	Node *aux = list->start, *temp;
	while ( aux != NULL ){
		temp = aux;
		free(aux->value);
		free(aux);
		aux = NULL;
		aux = temp->next;
		list->size--;
	}
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
	
	newNode->next = NULL;
	strcpy(newNode->value, value);
	
	if(aux == NULL){
	
		list->start = newNode;
		list->end = newNode;
		
	} else {
	
		while (aux->next != NULL) {
			aux = aux->next;
		}
		aux->next = newNode;
	}
	
	list->size++;
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
	printf("} .size:%d\n", list->size);
}

