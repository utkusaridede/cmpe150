#include<stdio.h>

int main(){
	
	int input, i, j;
	printf("Input giriniz: ");
	scanf("%d",&input);
	printf("\n");
	
	for(i=1; i<=input; i++){
		for(j=1; j<=i; j++){
			printf(" ");
		}
		for(j=1; j<=2*(input-i)+1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	anykey();
	return 0;
}