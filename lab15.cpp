/*Dizinin adresini ve eleman say�s�n� parametre olarak alan ve dizinin i�inde ka� tane tek say� oldu�unu
d�nd�ren recursive bir fonksiyon yaz�n�z. (Global de�i�ken kullanmay�n�z). */
#include<stdio.h>
int fun(int *dizi,int size)
{
	int static tek_cnt=0;
	if(size==0)
	{
		return tek_cnt;
	}
	else
	{		
		if(dizi[size-1] % 2 != 0)
		{
			tek_cnt++;
			fun(dizi,size-1);
			return tek_cnt;
		}
		else
		{
			fun(dizi,size-1);
			return tek_cnt;
		}
	}
}
int main()
{
	int i,n;
	printf("eleman sayisini giriniz=\n");
	scanf("%d",&n);
	int dizi[n];
	printf("dizi elemanlarini giriniz=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&dizi[i]);
	}
	printf("%d",fun(&dizi[0],n));
	
	
	
	
	
	
}
