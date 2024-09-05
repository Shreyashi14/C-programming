#include<stdio.h>
int main(){
	int i=2;
	switch (i)
	{
		case 1:
			printf("Case1 ");
 			break;
 		case 2:
 			printf("Case2 ");
 		case 3:
			printf("Case3 ");
 			break;
 		case 4:
 			printf("Case4 ");
 		default:
 			printf("Default ");
 	}
}