#include<stdio.h>
#include<stdlib.h>


void was_marry(char,int);
int main(void)
{
	char sex;
	int age;
	printf("�п�J�ʧO\n�O�k�ͽп�Jm,�k�ͽп�Jw\n");
	scanf("%c",&sex);
	printf("�п�J�~��\n");
	scanf("%d",&age);
	was_marry(sex,age);
}
void was_marry(char sex,int age){
	switch(sex){
		case 'm':
		case 'M':
		{
			if(age>=18){
				printf("�b����100�~�H�e�i���B\n");
			}
			else{
				printf("�b����100�~�H�e���i���B\n");
			}
			break;
		}
		case 'w':
		case 'W':{
			if(age>=16){
				printf("�b����100�~�H�e�i���B\n");
			}
			else{
				printf("�b����100�~�H�e���i���B\n");
			}
			break;
		}
		default:{
			printf("�п�J���T�N��");
			break;
		}
	}

}
