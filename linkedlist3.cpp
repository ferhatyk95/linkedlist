#include<stdio.h>
#include<stdlib.h>
//araya ekleme sýrali ekleme
struct n{
	int x;
	n *next;
};
typedef n node;
void bastir(node *r){
	while(r!=NULL){
		printf("%d\n",r->x);
		r=r->next;
	}
}
void ekle(node *r,int x){
	while(r->next!=NULL){
		r->next=(node*)malloc(sizeof(node));
		r->next->x=x;
		r->next->next=NULL;
	}
}	
node *eklesirali(node *r,int x){
	if(r==NULL){
		r=(node*)malloc(sizeof(node));
		r->next=NULL;
		r->x=x;
		return r;
	}
	if(r->x>x){
		node *temp=(node*)malloc(sizof(node));
		temp->x=x;
		temp->next=r;
		return temp;
	}
	node *iter=r;
	while(iter->next!=NULL&&iter->next->x < x){
		iter=iter->next;
	}
	node *temp=(node*)malloc(sizeof(node));
	temp->next=iter->next;
	iter->next=temp;
	temp->x=x;
	
}
int main(){
	node *root;
	root=NULL;
	root=eklesirali(root,25);
	root=eklesirali(root,33);
	root=eklesirali(root,3);
	root=eklesirali(root,323);
	root=eklesirali(root,3313);
	root=eklesirali(root,2);

	
	bastir(root);
	node *iterr;
	iterr=root;
	for(i=0;i<3;i++){
		iterr=iterr->next;
	}
	node *temp=(node*)malloc(sizeof(node));//yeni node yap baðlantý kur
	temp->next=iterr->next;
	iterr->next=temp;
	//araya sýkýþtýrmýþ olduk
	temp->x=100;
	bastir(root);
	//araya eklenmiþ oldu

}
