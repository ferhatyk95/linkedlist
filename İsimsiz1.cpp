/*#include<stdio.h>
int main(){
	int a[10]={1,32,11,5,2,7,6,8,4,5};
	for(int i=0;i<10;i++){
	for(int j=0;j<a[i];j++){
		printf("*");
	}
	printf("\n");
	}
	
	
	
	
	return 0;
}*/
#include<stdio.h>
/*#include<stdlib.h>
#include<time.h>
int main(){
	int yuz;
	int frekans[6];
	srand( time( NULL ));
	for(int i=0;i<60000;i++){
		yuz=1+rand()%6;
		++frekans[yuz];
	}
	for(int i=0;i<6;i++){
		printf("%d %d\n",yuz,frekans[i]);
	}
	return 0;
}
*/
int main(){
	int boyut=10;
	int a[boyut]={21,3,65,1,43,15,144,11,554,90};
	int temp;
	puts("orjinal sýradaki veriler");
	for(int i=0;i<boyut;i++){
		printf("%d\n",a[i]);
	}
	for(int j=1;j<boyut;j++){
		for(int i=0;i<boyut-1;i++){
			if(a[i]<a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	puts("/n elemanlarýn yer deðiþtirdiði hali");
	for(int i=0;i<boyut;i++){
		printf("%d\n",a[i]);
	}
	
	
	return 0;
}
