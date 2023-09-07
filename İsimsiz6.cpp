#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char a[100]="aliatab";
	char b[100]="veliatannd";
	int c=strlen(a);
	int d=strlen(b);
	if(c!=d&&c>d){
		printf("%s",a);
	}
	else if(c!=d&&d>c){
		printf("%s",b);
	}
	else if(c==d){
		for(int i=0;i<c;i++){
			if(a[i]==b[i]){
				continue;
			}
			else{
				break;
			}
			
		}
		printf("ayný degiller");
		
		
		
		
		
		
		
	}
	
	
	
	
	
	return 0;
}
