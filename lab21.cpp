/*- Write a program in C to print a string in reverse using a pointer.*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[10];
	char temp;
	int size=10;
	char *p;
	p=str;
	printf("string giriniz=\n");
	gets(str);
	//reverse kýsmý
	for(i=0; i<(size-1)/2 ;i++)
	{
		temp=*(p+i);
		*(p+i) = *(p+size-1-i-1);
		*(p+size-1-i-1) = temp;
	}
	puts(str);
	
}
