/*3. Bir ba�l� do�rusal listelerde listenin ortas�nda yer alan eleman� silen (tuttu�u alan� belle�e geri
iade eden) bir fonksiyon yaz�n�z (Liste 100 ya da 101 elemanl� ise 50. elaman� silecek �ekilde).
Fonksiyon parametre olarak bir liste al�p g�ncellenen listeyi geri d�nd�recektir*/
#include<stdio.h>
#include<stdlib.h>

struct listem{
	int number;
	struct listem *sonraki;
};
typedef struct listem node;
node *head, *p, *yeni, *q;
int main()
{
	int n,i=0,k;
	printf("eleman sayisini giriniz ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		if(i==0)
		{
			head=(node *)malloc(sizeof(node));
			p=head;
			p->sonraki=NULL;
		}
		else
		{
			yeni=(node *)malloc(sizeof(node));
			p->sonraki=yeni;
			p=p->sonraki;
			
		}
		printf("enter number"); scanf("%d",&p->number);
	}
		yeni->sonraki=NULL;
		
	k=n/2;
	p=head;
	for(i=0; i<k; i++)
	{
		q=p;//bir �nceki d���m� g�sterir.
		p=p->sonraki;
	}
	q=p->sonraki;
	free(p);
	
	//listeleme k�sm�
	p=head;
	while(p!=NULL)
	{
		printf("%d",p->number);
		p=p->sonraki;
	}
}
