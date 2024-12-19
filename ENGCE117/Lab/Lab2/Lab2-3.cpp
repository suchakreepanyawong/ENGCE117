#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) ;

int main() {
    char str1[] = "I/Love/You" ;
    char splitter = '/' ;
    char str2[ 20 ][ 10 ] ; 
    int count ;

    explode( str1, splitter, str2, &count ) ;

    for( int i = 0 ; i < count ; i++ )  {
        printf( "str2[%d] = \"%s\"\n", i, str2[ i ] ) ;
    }//end for
    printf( "count = %d\n ", count ) ;

    return 0 ;
}//end function

void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) {

    int i = 0, k = 0 ;
    *count = 0 ;

    while( str1[ i ] != '\0' ) {
        if( str1[ i ] == splitter ) {
            str2[ *count ][ k ] = '\0' ;
            ( *count )++ ;
            k = 0 ; 
        } else {
            str2[ *count ][ k++ ] = str1[ i ] ;
        }//end if else
        i++ ;
    }//end while
    
    str2[ *count ][ k ] = '\0' ;
    ( *count )++ ;
}//end function