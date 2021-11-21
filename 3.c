#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	FILE *fs;
	char ch='y';
	int n;
	struct student{
		char name[20];
		int roll;
		float grade;
	};
	struct student s;
	fs=fopen("std1234.txt","w");
	if(fs==NULL){
		puts("Can not open source file");
		exit(0);
	}
	printf("Enter the number of students: ");
	scanf("%d",&n);
	while(n--){
		printf("\n Enter name,Roll,Grade: ");
		scanf("%s%d%f",s.name,&s.roll,&s.grade);
		fprintf(fs,"Name=%s Roll=%d Grade=%f\n",s.name,s.roll,s.grade);
	}
	
	fclose(fs);
}
