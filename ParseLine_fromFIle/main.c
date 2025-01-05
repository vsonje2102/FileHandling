#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 512
typedef struct Node {
	char line[MAX_LINE_LENGTH];
	struct Node *next;
} Node;
void conditionCheck(Node **head, char *condition);
void freeList(Node *head);
int main(int argc, char *argv[]){
	if(argc != 2){
		printf("Usage: %s <input_file>\n", argv[0]);
		return 1;
	}
	Node *head = NULL;
	Node *tail = NULL;
	char line[MAX_LINE_LENGTH];
	FILE *fd = fopen(argv[1], "r");
	if(fd == NULL){
		printf("Error opening file\n");
		return 1;
	}
	while(fgets(line, sizeof(line), fd)){
		Node *newNode = (Node *)malloc(sizeof(Node));
		strcpy(newNode->line, line);
		newNode->next = NULL;
		if(head == NULL){
			head = newNode;
			tail = newNode;
		} else {
			tail->next = newNode;
			tail = newNode;
		}
	}
	fclose(fd);
	char *condition = "MSc";
	conditionCheck(&head, condition);
	condition="2024";
	conditionCheck(&head, condition);
	condition="Female";
	conditionCheck(&head, condition);
	Node *current = head;
	while (current != NULL) {
		printf("%s", current->line);
		current = current->next;
	}
	freeList(head);
	return 0;
}
void conditionCheck(Node **head, char *condition){
	Node *current = *head;
	Node *prev = NULL;
	while(current != NULL){
		if (strstr(current->line, condition) == NULL){
			if (prev == NULL) {
				*head = current->next; // if first node dont match condition
			} 
			else{
				prev->next = current->next;
			}
			Node *temp = current;
			current = current->next;
			free(temp);
		}
		else{
			prev = current;
			current = current->next;
		}
	}
}
void freeList(Node *head){
	Node *current = head;
	while (current != NULL){
		Node *temp = current;
		current = current->next;
		free(temp);
	}
}

