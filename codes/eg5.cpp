 #include <stdio.h>
 int main()
 {
	int i, n, rev=0, digit;
 	printf("Enter a number = ");
 	scanf("%d", &n);
 	do
 	{
 		digit = n%10;
 		rev = rev*10+digit;
 		n/=10;
 	}while(i<n);
	printf("Reverse = %d", rev);
 	return 0;
 }
