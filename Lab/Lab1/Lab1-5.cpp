#include <stdio.h>

void GetMatrix( int *value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;

    // null = incorrect number
    if( data == NULL ) {
        printf( "Error: Incorrect number of elements." ) ;
        return 0 ;
    }//end if

    // check is mul by 0
    if( (m > 0 && n < 1 ) || (n > 0 && m < 1 ) ) {
        printf( "Error: Invalid matrix dimensions." ) ;
        return 0 ;
    }//end if

    // print out by condition
    if( m > 1 && n > 1 ) {
        printf( "Matrix (%dx%d): \n", m, n ) ;
    } else {
        printf( "Matrix: \n" ) ;
    }//end if

    if( m && n ) {
        for( int i = 0 ; i < m ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                printf( "%d ", data[ i * n + j ] ) ;
            }//end for

            // line break on new row
            printf("\n") ;
        }//end for
    } else {
        printf( "(empty)" ) ;
    }//end if

    // clear mem
    delete[] data ;

    return 0 ;
}//end function

void GetMatrix( int *value[], int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;

    int size = ( *row ) * ( *col ) ;
    *value = new int[ size ] ;

    if(size > 0) {
        printf( "Enter the matrix elements: " ) ;

        for( int i = 0 ; i < size ; i++ ) {
            scanf( "%d", &( *value )[ i ] ) ;
            
            // handle line break
            if( getchar() == '\n' ) {
                // if current index is not end
                if( i < ( size - 1 ) ) {
                    // dirty way to told is it error or not
                    *value = NULL ;
                }//end if

                break ;
            }//end if
        }//end for
    }//end if
}//end function