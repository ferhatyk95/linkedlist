//Derste anlattýðýmýz tüm string fonksiyonlarý kullanan tek bir C programý yazýnýz.
#include<stdio.h>
#include<string.h>
int main()
{
	char A[20];
	char B[50];
	strcpy(A,"ozlem");
	strcpy(B,"Hezer");
	printf("%s %s\n",A,B);
	printf("adinin uzunlugu=%d\n", strlen(A));
	printf("soyadinin uzunlugu=%d\n",strlen(B));
	strcat(A,B);
	printf("ad soyad=%s\n",A);
	if(strcmp(A,B)<0)
		printf("A kucuktur B den");
	else if(strcmp(A,B)>0)
		printf("B kucuktur A dan");
	else
		printf("A ve B esit");
		
	return(0);
}
