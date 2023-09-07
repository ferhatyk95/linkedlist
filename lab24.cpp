//Araya Ekleme Sýralamasý'ný kullanarak belirli bir diziyi sýralamak için bir C programý yazýn
#include<stdio.h>
void insertionSort(int dizi[], int n)
{
	int ekle,k,i;
	for(i=1; i<n; i++)
	{
		ekle = dizi[i];
		for(k=i-1; k>=0 && ekle<=dizi[k]; k--){
			dizi[k+1]= dizi[k];
		}
			
		dizi[k+1]=ekle;
	}
}
int main(){
	int i;
	int A[5];
	printf("dizi elemannlarýný giriniz=\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &A[i]);
	}
	insertionSort(A,5);
	printf("siralanmis hali=\n");
	for(i=0; i<5; i++)
	{
		printf("%d\n",A[i]);
	}
	
}
