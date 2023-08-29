#include<stdio.h>
#include<stdlib.h>
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

int main(){
	node *root;
	root=(node*)malloc(sizeof(node));
	root->x=12;
	node *iter;
	iter=root;
	for(int i=0;i<5;i++){
		ekle(iter,i*10);
		
		
	}
	bastir(root);
	

}
