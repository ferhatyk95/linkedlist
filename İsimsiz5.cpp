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




Klavyeden al�nan iki tane karakter dizisini (String) birle�tirip ekrana yazd�ran program� pointer
kullanarak C dilinde yaz�n�z.
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
}. ��renci numaran�zdaki tek say�lar� bir int dinamik diziye, �ift say�l�ar� ise bir char dinamik diziye
ekleyen fonksiyonu yaz�n�z. Fonksiyon ��renci numaran�z� ve int ile char pointer ba�lang�� adreslerini
parametre olarak alacakt�r. */
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

