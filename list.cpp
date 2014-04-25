#include "list.h"
#include <iostream>

list::list():
    top( nullptr ),
    lengthOfQuene( 0 )
    { }

list::~list()
{
    clearQuene( );
}

void list::push( Data datum )
{
    Node *p = nullptr;
    p = new Node;
    top = p;
    p = nullptr;
}

void list::pop( )
{
    if( top )
    {
        Node *p = nullptr;
        p = top;
        cout << " Element " << top -> datum << " Left ";
        top = top -> link
        delete p;
        p = nullptr;
    }
}

void list::showQuene( ) const
{
    Node *p = nullptr;
    p = top;
    while( p )
    {
        cout << p -> datum;
        p = p -> link;
    }
    cout << endl;
}

void clearQuene( )
{
    Node *p = nullptr;
    p = tail;
    while( tail )
    {
        p = tail ->
    }
}
