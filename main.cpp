#include <iostream>
#include "list.h"
#include "list.console.h"
#include <stdlib.h>


using namespace std;

int main()
{
    QueneOnSingleLinkedList = quene;
    Data data;
    int key = 0;
    do
    {
        cout << " It's Singly-Linked List: " << endl;
        showNumber( firstNumber );
        cout<<endl;
        showNumber( secondNumber );
        cout << endl;
        cout << " What do you want to do with these QUENE? " << endl;
        cout << " ~1~ - For enter data into the tail " << endl;
        cout << " ~2~ - For delete element from the head " << endl;
        cout << " ~3~ - For show the Singly-Linked List " << endl;
        cout << " ~4~ - For clear the whole list " << endl;
        cout << " ~5~ - For check the list is empty or not " << endl;
        cout << " ~0~ - For exit " << endl;
        cin >> key;
        switch( key )
        {
        case 1:
        {
            system( " cls " );
            data = inputData( data );
            quene.push( data );
        }
        break;
        case 2:
        {
            system( " cls " );
            quene.pop( );

        }
        break;
        case 3:
        {
            system( " cls " );
            quene.showQuene( );
        }
        break;
        case 4:
        {
            system( " cls " );
            quene.clearQuene( );

        }
        break;
        case 5:
        {
            system( " cls " );
             if( quene.queneIsEmpty( ) )
            {
                cout << " Quene isn't empty ";
            }
            else
            {
                cout << " Quene is empty ";
            }
        }
        break;

    }
    while( key );
    return 0;
}
