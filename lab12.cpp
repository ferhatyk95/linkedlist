//Girilen dizideki en büyük elemaný bulan programý C dilinde Rekürsif olarak yazýnýz
#include<stdio.h>

int max(int dizi[], int size)
{

	if(size==1)
	{
		return dizi[0];
	}
	int maxElement = max(dizi,size-1);
	
	if(dizi[size-1]>maxElement)
	{
		return dizi[size-1];
	}
	else
	{
		return maxElement;
	}
	
}
int main()
{
	int n,i;
	printf("dizi boyutunu giriniz");
	scanf("%d",&n);
	int dizi[n];
	printf("dizi elemanlarini giriniz.\n");
	for(i=0; i < n; i++)
	{
		scanf("%d",&dizi[i]);
	}
	printf("%d", max(dizi,n));
	
}
	
