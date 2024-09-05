#include<stdio.h>
int main(){
	int i=0, ua=0, ub=0, uc=0, fail=0;
	while(i<=5)
 	{
 		switch(i++)
 		{
 			case 1: 
				++ua;
 			case 2: 
			 	++ub;
 			case 3:
 			case 4: 
			 	++uc; 
			default:
				++fail;
 		}
 	}
 	printf("ua=%d, ub=%d, uc=%d, fail=%d", ua,ub,uc,fail);
}