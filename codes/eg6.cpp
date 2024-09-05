#include<stdio.h>
int main(){
	int inner, outer;
 	for(outer=6; outer>=1; --outer)
 	{
 		for (inner=1; inner<=outer; inner++){
 			printf("%d", inner);
 		}
 		printf("\n");
	}
}