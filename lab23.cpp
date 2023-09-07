//Kabarcýk Sýralamasý'ný kullanarak belirli bir diziyi sýralamak için bir C programý yazýn.
#include<stdio.h>
void bubbleSort(int dizi[],int n)
{
	int gecici, i;
	for(i=0; i<n-1; i++)
	{
		for(int k=0; k<n-1-i; k++)
		{
			if(dizi[k]>dizi[k+1])
			{
				gecici = dizi[k];
				dizi[k] = dizi[k+1];
				dizi[k+1] = gecici;
			}
		}
	}
	
}
int main(){
	int i; 
	int A[5];
	printf("dizi elemanlarýný giriniz=\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &A[i]);
	}
	//i=0; 
	bubbleSort(A,5);
	printf("bubbleSorttan sonraki dizi=\n");
	for(i=0; i<5; i++)
	{
		printf("%d\n",A[i]);
	}
	
}
