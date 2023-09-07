/*Klavyeden -1 girilene kadar verilen tek sayýlarý tek baðlý doðrusal bir listenin baþýna, verilen çift
sayýlarý ise listenin sonuna ekleyen programý yazýnýz. */
#include<stdio.h>
#include<stdlib.h>
//yapýyý oluþtur
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
	if(sayi!=-1){//ilk düðümü oluþturdum ve içine sayiyi yerleþtirdim
		head=(node *)malloc(sizeof(node));
		head->number=sayi;
		head->sonraki=NULL;
		p=head;
	}
	else 
	{
		return 0;
	}
	// bu kýsýmdan sonra girilen bütün sayilar ya baþa ya da sona eklenecek;
	while(1)
	{
		printf("sayi giriniz ");
		scanf("%d",&sayi);
		if(sayi!=-1)
		{
			k=sayi%10;//sayinin son basamaðýný kontrol ettim.
			yeni=(node *)malloc(sizeof(node));
			yeni->number=sayi;
			if(k%2==0)// sayi eðer çift ise listenin sonuna eklenecek.
			{
				yeni->sonraki=p->sonraki;
				p->sonraki=yeni;
				p=p->sonraki;
				 //sýranýn sonuna ekledim
				//p zaten listenin sonunu gösteriyor
			}
			else  //baþa ekleyecek
			{
				yeni->sonraki=head;
				head=yeni;
			}
		}
		else
		break;
	}
	p=head;
	
	 //girilen veriler doðru mu diye kontrol etmemiz lazým 
	 // o yüzden listeyi görmemiz gerekiyor
	 
	while(p!=NULL)
	{
		printf("%d\n", p->number);
		p=p->sonraki;	
	} 
	 
	 
	
}
