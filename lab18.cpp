/*Write a program in C to Calculate the length of the string using a pointer*/
#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,cnt=0;
	char str[100];
	char *p;
	p=str;
	//string girme k�sm� 
	printf("string giriniz=\n");
	gets(str);
	//stringin uzunlu�unu pointer kullanarak bulma k�sm�
	while(*p!='\0')
	{
		cnt++;
		p++;
	}
	printf("%d", cnt);
	
}

