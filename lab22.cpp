//Seçim Sýralamasý'ný kullanarak belirli bir diziyi sýralamak için bir C programý yazýn
#include<stdio.h>
#include<string.h>
void selectionSort(int [],int );
int main()
{
	int i;
	int A[10];
	printf("dizi elemanlarýný giriniz =\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&A[i]);
	}
	i=0;
	selectionSort(A,10);
	printf("secim sýralamasý ile sýralanmýþ hali =\n");
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

