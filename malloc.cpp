#include<stdio.h>
#include<stdlib.h>
/*int main(){
	
	int *z; 
	z=(int*)malloc(sizeof(int)*10);
	for(int i=0;i<10;i++){
		z[i]=10-i;
	}
	for(int i=0;i<10;i++){
		printf("z[%d]=[%d]",i,z[i]);
		printf("/n");	
	}
	printf("/n");
	printf("%p|n",z);
	free(z);
	int *ptrs;
	ptrs=(*int)malloc(sizeof(int)*10);
	ptrs=realloc(ptrs,22*sizeof(int));
	free(ptrs);
	char *ptr;
	ptr=(char*)calloc(10,sizeof(char));
	ptr=realloc(ptr,20*sizeof(char));
	free(ptr);
	return 0;
	
	
	
}*/
//dizileri birlestir
int *diziler(int[],int,int[],int);
int main(){
	int dizi1[5]={1,23,4,3,12};
	int dizi2[7]={32,11,34,124,654,15};
	diziler(dizi1,5,dizi2,7);
	for(int i=0;i<12;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
int *diziler(int a[],int c,int b[],int d){
	int *sonuc;
	sonuc=(*int)calloc((c+d),sizeof(int));
	for(int i=0;i<5;i++){
		sonuc[i]=a[i];
	}
	for(int j=0;j<7;j++,i++){
		sonuc[i]=b[j];
	}
	return sonuc;
}
