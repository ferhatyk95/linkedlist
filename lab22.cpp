//Se�im S�ralamas�'n� kullanarak belirli bir diziyi s�ralamak i�in bir C program� yaz�n
#include<stdio.h>
#include<string.h>
void selectionSort(int [],int );
int main()
{
	int i;
	int A[10];
	printf("dizi elemanlar�n� giriniz =\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&A[i]);
	}
	i=0;
	selectionSort(A,10);
	printf("secim s�ralamas� ile s�ralanm�� hali =\n");
	for(i=0; i<10; i++)
	{
		printf("%d\n",A[i]);
	}
}
void selectionSort(int dizi[], int n)
{
	int i,j;
	int index, en_kucuk;
	for(i=0; i<n-1; i++)
	{
		en_kucuk = dizi[n-1];
		index = n-1;
		for(j=i; j<n-1; j++)
		{
			if(dizi[j]<en_kucuk)
			{
				en_kucuk = dizi[j];
				index = j;
				}	
		}
		dizi[index] = dizi[i];
		dizi[i] = en_kucuk;
		
		
	}
	
}

