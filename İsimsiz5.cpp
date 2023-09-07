#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main() {
    char isim[] = "ferhat";
    char soyad[] = "yuksel";

    int b = strlen(isim);
    int a = strlen(isim) + strlen(soyad);

    char *ptr;
    ptr = (char *)malloc(sizeof(char) * (b)); // +1 for null-terminator
	strcpy(ptr,isim);
	ptr=realloc(ptr,sizeof(char)*(a+1));
	strcat(ptr,"");
	strcat(ptr,soyad);
	printf("%s",ptr);
    

    return 0;
} 




Klavyeden alýnan iki tane karakter dizisini (String) birleþtirip ekrana yazdýran programý pointer
kullanarak C dilinde yazýnýz.
int main(){
	char a[50];
	char b[50];
	scanf("%s",a);
	scanf("%s",b);
	int c=strlen(a);
	int d=strlen(b);
	char *ptr;
	ptr=(char*)calloc(c+d,sizeof(char));
	for(int i=0;i<c;i++){
		ptr[i]=a[i];
	}
	for(int j=0;j<d;j++){
		ptr[c+j]=b[j];
	}
	for(int i=0;i<c+d;i++){
		printf("%c",ptr[i]);
	}
	
	
	
	
	
	
	
	return 0;
}. Öðrenci numaranýzdaki tek sayýlarý bir int dinamik diziye, çift sayýlýarý ise bir char dinamik diziye
ekleyen fonksiyonu yazýnýz. Fonksiyon öðrenci numaranýzý ve int ile char pointer baþlangýç adreslerini
parametre olarak alacaktýr. */
int main(){
	char a[]="150719540";
	int k=0,l=0;
	char c[50];
	int d[50];
	int b=strlen(a);
	for(int i=0;i<b;i++){
		if((float)a[i]%2==0){
			c[k]=a[i];
			k++;	
		}
		else(){
			d[l]=(int)a[i];
			l++;	
		}
	}
	
	
	
	
	
	return 0;
}

