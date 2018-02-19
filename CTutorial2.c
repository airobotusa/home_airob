/* Multiline 
comment */
// Single line comment
#include <stdio.h>
#include <string.h>

#define MYNAME "YS Hwang"

int globalVar =100;

void main(){
	//gcc programName.c -o ProgramName
	//./ProgramName ./a.exe
	printf("Please enter max number for counter: \n");
	
	int max_num;
	scanf(" %d", &max_num);
	printf("\n");
	int counter;
//	for(int counter =0; counter <= 99999500000; counter++){
	for(int counter =0; counter <= max_num; counter++){

	if ((counter %2) ==0) continue;
		//max_num= max_num-2;
		printf("\n\n counter is %d , max_num is %d", counter, (max_num-2));
	}
	printf("\nGreat !!! ");
	/*char sizeofShirts;
	do{
		printf("What size of shirts (S, M, L): ");
		scanf(" %c", &sizeofShirts);
	}while(sizeofShirts !='S' && sizeofShirts !='M' && sizeofShirts !='L');
	*/
//	int num1=1, num2=21;
//	printf("num2 is %d\n", num2);
	
//	printf("Is 1 > 2 : %d %d \n\n", num1 , num2);
	/*int secretNumber = 10, numberGuessed =0;
	while(1){
		//printf("Guess my secret number: ");
		//scanf( " %d", &numberGuessed);
		if(numberGuessed == secretNumber){
			printf("You got it ");
			break;
		}
	
	}*/
	
	/*
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
	*/
}