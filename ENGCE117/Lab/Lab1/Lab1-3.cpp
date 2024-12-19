#include <stdio.h>

int *Getset( int * ) ;

int main() {

    int *data , num ;
    data = Getset( &num ) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] );
    }

    return 0 ;
}//end function

int *Getset( int *num ) {

    printf( "Enter the number of Element : " ) ;
    scanf( "%d", num ) ;

    int *tmp ;
    tmp = new int[ *num ] ;

    printf( "Enter the elements : " ) ;
    for( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &tmp[ i ] ) ;
    }//end for

    return tmp ;
}//end function