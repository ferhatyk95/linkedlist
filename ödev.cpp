#include<stdio.h>
#include<stdlib.h>
int *dizileribirlestir(int[],int,int[],int);
int main(){
	int i;
	int a[]={6,12,15,18,24};
	int b[]={1,5,7,10,14,16,25};
	int *ptr;
	ptr=dizileribirlestir(a,5,b,7);
	for(i=0;i<12;i++){
		printf("%d ",ptr[i]);
	}
	printf("\n");
	
	return 0;
}
int* dizileribirlestir(int a[], int boyut1, int b[], int boyut2) {
    int* sonuc = (int*)calloc(boyut1 + boyut2, sizeof(int));
    if (sonuc == NULL) {
        printf("Bellek ayirma hatasi!");
        return NULL;
    }
    
    int i, k = 0, j = 0;
    for (i = 0; i < boyut1 + boyut2; i++) {
        if (k >= boyut2 || (j < boyut1 && a[j] <= b[k])) {
            sonuc[i] = a[j];
            j++;
        } else {
            sonuc[i] = b[k];
            k++;
        }
    }

    return sonuc;
}	

