#ifndef LIST_H
#define LIST_H
#include <iostream>

typedef int Data;

class QueneOnSingleLinkedList
{
public:
    QueneOnSingleLinkedList( );
    ~QueneOnSingleLinkedList( );
    void push( Data datum );
    Data pop( );
    void showQuene( ) const;
    void clearQuene( );
    bool queneIsEmpty( ) const;

private:
    QueneOnSingleLinkedList (const QueneOnSingleLinkedList &original);
    QueneOnSingleLinkedList & operator = (const QueneOnSingleLinkedList & rhs);
    struct Node
    {
        Data datum;
        Node *link;
    } *top;

};

#endif
