#include<stdio.h>

int main(){
		
	int a[50];
	int *b[50];
	int i,j;
	
	for(j=0 ; j<5 ; j++){
		
		printf("Enter Value [%d]: ",j+1);
		scanf("%d",&a[j]);
	} 
		
	for(i=0 ; i<5 ; i++){
		
		b[i] = &a[i];
		printf("Answer : %d\n",*b[i]);
	}
	return 0;
}
