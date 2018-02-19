/* Multiline 
comment */
// Single line comment
#include <stdio.h>
#include <string.h>

#define MYNAME "YS Hwang"

int globalVar =100;

void main(){
	char firstLetter ='D';
	int age = 38;
	printf("Hello World\n");
	printf("Hello World2\n");
	printf("Hello World4\n");
	char myName[] = "Bob Banas";
	strcpy(myName, "Bob Banas");
	printf("My Name is %s\n\n", myName);
	
	char middleInitial;
	printf("What is your middle initial? ");
	scanf(" %c", &middleInitial);
	printf("Middle initial %c ", middleInitial);
	char firstName[30], lastName[30];
	printf("What is your name? ");
	scanf(" %s %s", firstName, lastName);
	printf("Your name is %s %c %s\n\n", firstName, middleInitial, lastName);
	
}