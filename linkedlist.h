#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "nodo.h"
using namespace std;

template <typename E>
class LinkedList
{
    private:
        nodo <E>* head;
        nodo <E>* tail;
        nodo <E>* current;
        int size;
    public:
        LinkedList(){
        head = tail = current = new nodo <E>();
        size = 0;
        }

        ~LinkedList(){
        clear ();
        delete head;
    }

    void insert(E pElement){
        current->next = new nodo<E>(pElement, current->next);
        if(current == tail){
            tail = tail->next;
        }
        size++;
    }

//pElement elemento tipo E el cual se le va a agregar
    void append(E pElement){
        tail->next = new nodo<E>(pElement);
        tail = tail->next;
        size++;
    }

//current siempre va a ser el anterior al cual se quiere borrar/insertar/etc...
    E remove() throw(runtime_error){
        if(current->next == NULL){
            throw runtime_error("no element to remove");
        }
    E result = current->next->element;
    nodo<E> *temp = current->next;
    current->next = current->next->next;
    if(temp == tail){
        tail = current;
        previous();
    }
    delete temp;
    size--;
    return result;
    }

    void clear(){
        current = head;
        while (head != NULL){
            head = head->next;
            delete current;
            current = head;
        }
        head = tail = current = new nodo<E>();
        size = 0;
    }

    E getElement() throw(runtime_error){

        if(current->next == NULL){
            throw runtime_error("no elemento to get");
        }

            return current->next->element;

    }


    void goToStart(){
        current = head;
    }

    void goToEnd(){
        current = tail;
        previous();
    }

    void goToPos(int nPos) throw(runtime_error){
    if ((nPos<0) || (nPos>size)){
        throw runtime_error("index out of bounds");
        }
        current = head;
        for (int i = 0; i < nPos; i++){
            current = current->next;
        }
    }

    nodo<E>* serachPrevious(nodo<E>* pnodo){
        if (current == head){
            return NULL;
        }
        nodo<E> *res = head;
        while (res->next != current){
            res = res->next;
        }
    return res;
    }

    void previous(){
        if (current != head){
            current= serachPrevious(current);
        }
    }



    void next(){
        if (current!=tail){
            current = current->next;
        }
    }


    int getPos(){
        int pos = 0;
    nodo<E>* temp = head;
    while(temp!=current){
        pos++;
        temp = temp->next;
    }
    return pos;
    }

    int getSize(){
        return size;
    }
    };



#endif // LINKEDLIST_H
