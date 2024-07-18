#include<stdio.h>
int main(){
	int i,j,k;
	char choice;
	
	printf("Enter the choice :\n");
	scanf("%c",&choice);
	
	for(j=1;j<3;j++){
		printf("     ");
	for(i=1;i<4;i++){
		printf("%c",choice);
	}}
    printf("\n");
    printf("   ");
    for(j=1;j<3;j++){
	for(i=1;i<8;i++){
		printf("%c",choice);
    }
	printf(" ");
    }
    for(k=1;k<4;k++){
    printf("\n p");
	for(i=1;i<10;i++){
		printf("%c",choice);
		printf("%c",choice);
    }}
    printf("\n   p");
	for(i=1;i<8;i++){
		printf("%c",choice);
		printf("%c",choice);
	}
	printf("\n      ");
	for(k=1;k<6;k++){
		printf("%c",choice);
		printf("%c",choice);
	}
	printf("\n        ");
	for(k=1;k<4;k++){
		printf("%c",choice);
		printf("%c",choice);
	}
	printf("\n          ");
	printf("pp");

	return 0;
}
