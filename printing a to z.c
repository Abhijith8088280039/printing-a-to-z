#include <stdio.h>
void main()
{
	int i;
    for(i=65;i<91;i++)
		printf( "%c", (char)i );
    printf("\n");
    for(i=97;i<123;i++)
		printf( "%c", (char)i );
}

sum of first 10 elements with its square using array
#include<stdio.h>
void main()
{
    int x[10],i, value, total=0, size ;
    clrscr();
    for( i = 0 ; i < 10 ; i++ )
    {
	scanf("%d", &value) ;
	x[i] = value ;
    }
    for( i = 0 ; i < 10 ; i++ )
	total = total + x[i] * x[i] ;
    printf("\ntotal = %d\n", total) ;
    getch();
}