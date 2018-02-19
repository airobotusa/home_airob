/* Multiline 
comment */
// Needed for exit()
// Single line comment
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MYNAME "YS Hwang"
int globalVar =0;
int addTwoInts(int num1, int num2){
	return num1 + num2;
}

void main(){
	//gcc programName.c -o ProgramName
	//./ProgramName ./a.exe
	printf("\n Welcome to << CTutorial3.c >> !\n\n");
	
	int total = addTwoInts(4,5);
	printf("the sumis %d\n\n", total);
	
	int whatToDo = 0;
	char yourCity[30];
	printf("What city do you live in? ");
	fgets(yourCity, 30, stdin);
	printf("Hello %s\n\n", yourCity);
	for(int i =0; i < 30; i++){
		if(yourCity[i] == '\n'){
			yourCity[i] = '\0';
			break;
		}
	}
	printf("Hello %s\n\n", yourCity);
	
	do{
		printf("\n");
		printf("1. What time is it?\n");
		printf("2. What is todays date?\n");
		printf("3. What day is it?\n");
		printf("4. Quit\n");
		scanf(" %d", &whatToDo);
	}while(whatToDo < 1 || whatToDo > 4);
	
	if(whatToDo == 1){
	printf("Print the time\n");
	}else if(whatToDo == 2){
	printf("Print the date\n");
	}else if(whatToDo == 3){
	printf("Print the day\n");
	}else {
		printf("Bye Bye\n");
	}

	
	
}