#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    char letter ;
    int i ;
    ifstream reader( "poem.txt" ) ;

    if ( ! reader )
    {
        cout << "Error, unable to open file for reading." ;
        return -1 ;
    }
    else
    {
        for ( i = 0; ! reader.eof(); i++)
        {
            reader.get( letter ) ;
            cout << letter ;

        }
        reader.close() ;
        cout << endl << "Number of iterations: " << i << endl ;
    }

    return 0;
}
