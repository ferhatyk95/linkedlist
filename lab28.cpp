/*Bir baðlý doðrusal listelerde listenin sonundaki düðümü keserek listenin baþýna ekleyen ve
oluþan listenin son halini geri döndüren prototipi aþaðýda verilmiþ fonksiyonu yazýnýz. 
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

//fonksiyonu yazma kýsmý
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
		if(i==0)//ilk düðüm oluþturulacak
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
			//yeni düðümde oluþturuldu
		}
		printf("enter number "); 
		scanf("%d",&yeni->number);
	}
	
	
	p->sonraki=NULL;
	//liste oluþturuldu þimdi fonksiyonu çaðýr;
	head = cut_last_add_head(head);
		//listeleme kýsmý
	while(p= NULL) {
		printf("%d",p->number);
		p=p->sonraki;
	
}


















