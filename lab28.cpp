/*Bir ba�l� do�rusal listelerde listenin sonundaki d���m� keserek listenin ba��na ekleyen ve
olu�an listenin son halini geri d�nd�ren prototipi a�a��da verilmi� fonksiyonu yaz�n�z. 
struct node* cutlastaddhead(struct node* head);
struct node {
int number;
struct node * next;
}; 
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int number;
	struct node *sonraki;
};
struct node *head, *p, *yeni, *q, *temp;

//fonksiyonu yazma k�sm�
struct node *cut_last_add_head(struct node *head){
	p=head;
	while(p->sonraki !=NULL){
		q=p;
		p=p->sonraki;
	}
	q->sonraki=NULL;
	p->sonraki=head;
	head=p;
	}
	return head;
}



int main(){
	int n, i;

	printf("kac eleman girilecek?\n");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		if(i==0)//ilk d���m olu�turulacak
		{
			head=(struct node*)malloc(sizeof(struct node));
			p=head;
			p->sonraki=NULL;
		}
		else
		{
			yeni = (struct node *)malloc(sizeof(struct node));
			p->sonraki=yeni;
			p=yeni;
			//yeni d���mde olu�turuldu
		}
		printf("enter number "); 
		scanf("%d",&yeni->number);
	}
	
	
	p->sonraki=NULL;
	//liste olu�turuldu �imdi fonksiyonu �a��r;
	head = cut_last_add_head(head);
		//listeleme k�sm�
	while(p= NULL) {
		printf("%d",p->number);
		p=p->sonraki;
	
}


















