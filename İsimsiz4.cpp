#include<stdio.h>
#include<stdlib.h>
/*Toplam eleman say�s�n� kullan�c�dan alarak bu say� kadar bellekten calloc fonksiyonunu kullanarak
gerekli yeri al�n�z. Ay�rd���n�z bu bellek alan�na eleman say�s� kadar de�eri kullan�c�dan al�n�z. Daha
sonra girilen en b�y�k de�eri tan�mlad���n�z i�aret�i de�i�keni kullanarak bulunuz ve ekrana
yazd�r�n�z.*/
int big(int a[],int size);
int main(){
	int a;
	printf("toplam eleman say�s�n� giriniz");
	scanf("%d",&a);
	int *ptr=(int*)calloc(a,sizeof(int));
	for(int i=0;i<a;i++){
		printf("de�erleri giriniz\n");
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

