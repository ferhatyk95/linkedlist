#include<stdio.h>
#include<ctype.h>
//büyük harfe dönüþtürme 
/*void converttoupper(char *ptr);
int main(){
	char a[]="aliatabak alii";
	printf("before the converst %s\n",a);
	converttoupper(a);
	printf("after to convert %s\n",a);
	
	
	
	return 0;
}
void converttoupper(char *ptr){
	while(*ptr!='\0'){
		*ptr=toupper(*ptr);
		++ptr;
	}

}*/
/*void print(const char *ptr);
int main(){
	char string[]="print the caharacter";
	puts("the string is");
	print(string);
	puts("");

	
	return 0;
}
void print(const char *ptr){
	for(;*ptr!='\0';++ptr){
		printf("%c",*ptr);
	}
	
}
*/


#include<stdio.h>
void bubles(int *const array[],int size);
void swap(int *ptr1,int *ptr2);
int main(){
	
	int a[10]={1,32,11,22,42,134,54,32,5211,6};
	int i=0;
	puts("sýralamadan önceki hali\n");
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
	bubles(a,10);
	puts("\nsýralamadan sonraki hali\n");
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
	
	return 0;
}
void swap(int *ptr1,int *ptr2){
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
void bubles(int *const array[],int size){
	int i;
	int j;
	for(i=1;i<size;i++){
		
		for(j=0;size-1;j++){
			if(array[j]>array[j+1]){
				swap(&array[j],&array[j+1]);
			}
		}
	}
	
	
}
