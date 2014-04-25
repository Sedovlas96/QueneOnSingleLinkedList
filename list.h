#ifndef LIST_H
#define LIST_H

typedef int Data;

class SingleLinkedList
{
    public:
        SingleLinkedList( );
        ~SingleLinkedList( );
        void push( Data datum );
        Data pop( );
        void showQuene( ) const;
        void clearQuene( );
        void showTop ( );
        void showTail( );
        bool isEmpty( ) const noexcept;
        int showLengthOfQuene( ) const;
        void addSize( int a );
    private:
        int lengthOfQuene;
        struct Node
        {
            Data datum;
            Node *link;
        }; *tail, *top;

};

#endif
