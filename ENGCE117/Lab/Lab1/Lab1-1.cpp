#include <stdio.h>

void showen(int count) ;

int main() {
    int count ;
    showen(count);
    
    return 0 ;
} //end function

void showen(int count) {

    printf( "Enter your number : " ) ;
    scanf( "%d", &count ) ;

    for(int i = 1 ; i <= count ; i++ ) {
        printf( "[%d] Hello World\n ",i ) ;
    }//end for
}//end function