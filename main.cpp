#include <stdio.h>
#include <stdlib.h>
#include "Test_Libry.c"
int main( void ) {
int result = power( 2, 4 );
printf( "2� == %d\n", result );
result = fact( 5 );
printf( "6! == %d\n", result );
 afficherBonjour();
 inverse();
 produit ();
 parite ();
 comparaison ();
 ordre ();
return EXIT_SUCCESS;
}
