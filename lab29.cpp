/*3. Bir baðlý doðrusal listelerde listenin ortasýnda yer alan elemaný silen (tuttuðu alaný belleðe geri
iade eden) bir fonksiyon yazýnýz (Liste 100 ya da 101 elemanlý ise 50. elamaný silecek þekilde).
Fonksiyon parametre olarak bir liste alýp güncellenen listeyi geri döndürecektir*/
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
		q=p;//bir önceki düðümü gösterir.
		p=p->sonraki;
	}
	q=p->sonraki;
	free(p);
	
	//listeleme kýsmý
	p=head;
	while(p!=NULL)
	{
		printf("%d",p->number);
		p=p->sonraki;
	}
}
