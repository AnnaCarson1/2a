#include "sort.h"

void read(int a[], int n)

{

	int i;

	for (i = 0; i < n; i++)

            scanf("%d", &a[i]);

}



void print(int a[], int n)

{

	int i;

	for (i = 0; i < n; i++)

		printf("%d ", a[i]);

	printf("\n");

}



void insertion_sort(int a[], int n)

{
    for ( int i = 1 ; i < n ; i ++ ) {
        for ( int j = 0 ; j <= i ; j ++ ) {
            if ( a [ j ] >= a [ i ] ) {
                int x = a [ i ] ;
                for ( int l = i ; l > j ; l -- ) {
                    a [ l ] = a [ l - 1 ] ;
                }
                a [ j ] = x ;
		break ;
            }
        }
    }
}



void selection_sort(int a[], int n)

{
	for ( int i = 0 ; i < n ; i ++ ) {
        	int x = a [ i ] ;
        	int y = i ;
        	for ( int j = i ; j < n ; j ++ ) {
            		if ( a [ j ] < x ) {
                		x = a [ j ] ;
                		y = j ;
            		}
        	}
        	a [ y ] = a [ i ] ;
        	a [ i ] = x ;
	}
}



void bubble_sort(int a[], int n)

{
    for ( int i = 0 ; i < n ; i ++ ) {
        for ( int j = 0 ; j < n - i - 1 ; j ++ ) {
            if ( a [ j ] > a [ j + 1 ] ) {
                int x = a [ j ] ;
                a [ j ] = a [ j + 1 ] ;
                a [ j + 1 ] = x ;
            }
        }
    }
}
