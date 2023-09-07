/*Klavyeden -1 girilene kadar verilen tek say�lar� tek ba�l� do�rusal bir listenin ba��na, verilen �ift
say�lar� ise listenin sonuna ekleyen program� yaz�n�z. */
#include<stdio.h>
#include<stdlib.h>
//yap�y� olu�tur
struct sayilar{
	int number;
	struct sayilar *sonraki;
};
typedef struct sayilar node;
node *head, *p, *q, *yeni;

int main()
{
	int sayi,k;
	printf("sayi giriniz ");
	scanf("%d", &sayi);
	if(sayi!=-1){//ilk d���m� olu�turdum ve i�ine sayiyi yerle�tirdim
		head=(node *)malloc(sizeof(node));
		head->number=sayi;
		head->sonraki=NULL;
		p=head;
	}
	else 
	{
		return 0;
	}
	// bu k�s�mdan sonra girilen b�t�n sayilar ya ba�a ya da sona eklenecek;
	while(1)
	{
		printf("sayi giriniz ");
		scanf("%d",&sayi);
		if(sayi!=-1)
		{
			k=sayi%10;//sayinin son basama��n� kontrol ettim.
			yeni=(node *)malloc(sizeof(node));
			yeni->number=sayi;
			if(k%2==0)// sayi e�er �ift ise listenin sonuna eklenecek.
			{
				yeni->sonraki=p->sonraki;
				p->sonraki=yeni;
				p=p->sonraki;
				 //s�ran�n sonuna ekledim
				//p zaten listenin sonunu g�steriyor
			}
			else  //ba�a ekleyecek
			{
				yeni->sonraki=head;
				head=yeni;
			}
		}
		else
		break;
	}
	p=head;
	
	 //girilen veriler do�ru mu diye kontrol etmemiz laz�m 
	 // o y�zden listeyi g�rmemiz gerekiyor
	 
	while(p!=NULL)
	{
		printf("%d\n", p->number);
		p=p->sonraki;	
	} 
	 
	 
	
}
