#include <iostream>
#include "list.h"
#include "list.console.h"
#include <stdlib.h>


using namespace std;

int main()
{
    SingleLinkedList = singleLinkedList;
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
        cout << " ~5~ - For show element on the top " << endl;
        cout << " ~6~ - For show element ob the tail endl;
        cout << " ~7~ - For check the list is empty or not " << endl;
        cout << " ~8~ - For show the length of the list " << endl;
        cout << " ~0~ - For exit " << endl;
        cin >> key;
        switch( key )
        {
        case 1:
        {
            system( " cls " );
            data = inputData( data );
            singleLinkedList.push( data );
            singleLinkedList.addSize( 1 );
        }
        break;
        case 2:
        {
            system( " cls " );

        }
        break;
        case 3:
        {
            system( " cls " );
        }
        break;
        case 4:
        {
            system( " cls " );
        }
        break;
        case 5:
        {
            system( " cls " );
        }
        break;
        case 6:
        {
            system( " cls " );
        }
        break;
        case 7:
        {
            system( " cls " );
        }
        }

    }
    while( key );
    return 0;
}
