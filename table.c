#include<stdio.h>
void table(int num) ;
int main()
{
	int num ;
	
	printf("Enter A Number Whose Table You Want :\t") ;
	scanf("%d" , &num) ;
	printf("\n") ;
	
	table(num) ;
	
	printf("\n") ;
	return 0 ;
}

void table(int num)
{
	for(int i = 1 ; i <= 10 ; i++)
		printf("%4d x %2d = %5d\n" , num , i , num * i) ;

}

