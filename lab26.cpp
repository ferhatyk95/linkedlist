/*1. Klavyeden girilen iki kelimenin ayný olup olmadýðýný ayný deðillerse hangisinin kelime olarak daha uzun
olduðunu belirten program kodunu yazýnýz.*/
#include<stdio.h>
#include<string.h>
int main(){
	int i,cnt=0, len;
	char a,b;
	char kelime1[10];
	char kelime2[10];
	printf("ilk kelimeyi giriniz=\n");
	gets(kelime1);
	printf("ikinci kelimeyi giriniz=\n");
	gets(kelime2);	
	
	
	
	len=strcmp(kelime1,kelime2);
	if(len<0)
	{
		printf("ikinci kelime daha uzun");
	}
	else if(len>0)
	{
		printf("ilk kelime daha uzun");
	}
	else 
		printf("ikisi de ayni uzunlukta ");
}


