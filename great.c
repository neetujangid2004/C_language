#include<stdio.h>
int main(){
	int i,j,k;
	int num = 3;
    char ch = num;
    printf("%c\n",ch);
		
	for(j=1;j<3;j++){
		printf("     ");
	for(i=1;i<4;i++){
		printf("%c",ch);
	}}
    printf("\n");
    printf("   ");
    for(j=1;j<3;j++){
	for(i=1;i<8;i++){
		printf("%c",ch);
    }
	printf(" ");
    }
    for(k=1;k<4;k++){
    printf("\n  ");
	for(i=1;i<10;i++){
		printf("%c",ch);
		printf("%c",ch);
    }}
    printf("\n    ");
	for(i=1;i<8;i++){
		printf("%c",ch);
		printf("%c",ch);
	}
	printf("\n      ");
	for(k=1;k<6;k++){
		printf("%c",ch);
		printf("%c",ch);
	}
	printf("\n        ");
	for(k=1;k<4;k++){
		printf("%c",ch);
		printf("%c",ch);
	}
	printf("\n          ");
	for(i=0;i<2;i++){
		printf("%c",ch);
	}
	return 0;
}
