#ifndef NODE_H
#define NODE_H
//#define NULL 0

template <typename E>
class Node
{
    public:
        E element;
        Node<E>* next;
        Node(E pElement,Node<E>* pNext = NULL){
            element = pElement;
            next = pNext;
        }
        Node(Node<E>* pNext = NULL){
            next = pNext;
        }

};

#endif // NODE_H
