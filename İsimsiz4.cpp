#include<stdio.h>
#include<stdlib.h>
/*Toplam eleman sayýsýný kullanýcýdan alarak bu sayý kadar bellekten calloc fonksiyonunu kullanarak
gerekli yeri alýnýz. Ayýrdýðýnýz bu bellek alanýna eleman sayýsý kadar deðeri kullanýcýdan alýnýz. Daha
sonra girilen en büyük deðeri tanýmladýðýnýz iþaretçi deðiþkeni kullanarak bulunuz ve ekrana
yazdýrýnýz.*/
int big(int a[],int size);
int main(){
	int a;
	printf("toplam eleman sayýsýný giriniz");
	scanf("%d",&a);
	int *ptr=(int*)calloc(a,sizeof(int));
	for(int i=0;i<a;i++){
		printf("deðerleri giriniz\n");
		scanf("%d",ptr[i]);
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(ptr[j]>ptr[j+1]){
				int temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}
	printf("%d",ptr[a]);
	
	
	
	return 0;
	
}

