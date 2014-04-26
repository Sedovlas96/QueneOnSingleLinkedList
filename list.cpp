#include "list.h"
#include <iostream>

QueneOnSingleLinkedList::QueneOnSingleLinkedList():
    top( nullptr )
    { }

QueneOnSingleLinkedList::~QueneOnSingleLinkedList()
{
    clearQuene( );
}

void QueneOnSingleLinkedList::push( Data data )
{
    Node *p = nullptr;
    p = new Node;
    p -> datum = data;
    p -> link = top;
    top = p;
    p = nullptr;
}

Data QueneOnSingleLinkedList::pop( )
{
    if( top )
    {
        Node *p = nullptr;
        p = top;
        top = top -> link;
        p -> link = nullptr;
        p -> datum = 0;
        delete p;
        p = nullptr;
    }
}

void QueneOnSingleLinkedList::showQuene( ) const
{
    Node *p = nullptr;
    p = top;
    while( p )
    {
        cout << p -> datum << " ";
        p = p -> link;
    }
    cout << endl;
}

void QueneOnSingleLinkedList::clearQuene( )
{
    Node *p = nullptr;
    p = top;
    while( top )
    {
        p = top -> link;
        delete top;
        top = p;
    }
    top = nullptr;
}

bool QueneOnSingleLinkedList::queneIsEmpty( ) const
{
    if( nullptr == top )
    {
        throw -1;
    }
    return top -> datum;
}
