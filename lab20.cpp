/*Write a program in C to compute the sum of all elements in an array using pointers*/
#include<stdio.h>
int main()
{
	int toplam=0,i=0;
	int dizi[10];
	int *p;
	p=dizi;
	printf("dizi elemanlarini giriniz=\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0; i<10; i++)
	{
		toplam+=*(p+i);
	}
	printf("%d",toplam);
}

