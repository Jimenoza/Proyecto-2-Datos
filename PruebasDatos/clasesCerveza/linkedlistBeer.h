#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "nodoCerveza.h"

template <typename E>
class LinkedListBeer
{
    private:
        nodoCerveza <E>* head;
        nodoCerveza <E>* tail;
        nodoCerveza <E>* current;
        int size;
    public:
        LinkedListBeer(){
        head = tail = current = new nodoCerveza <E>();
        size = 0;
        }

        ~LinkedListBeer(){
        clear ();
        delete head;
    }

    nodoCerveza<E>* insert(E pElement){
        current->next = new nodoCerveza<E>(pElement, current->next);
        if(current == tail){
            tail = tail->next;
        }
        size++;
		return current->next;
    }

//pElement elemento tipo E el cual se le va a agregar
    void append(E pElement){
        tail->next = new nodoCerveza<E>(pElement);
        tail = tail->next;
        size++;
    }

//current siempre va a ser el anterior al cual se quiere borrar/insertar/etc...
    E remove(){
        if(current->next == NULL){
            return NULL;
        }
    E result = current->next->element;
    nodoCerveza<E> *temp = current->next;
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
        head = tail = current = new nodoCerveza<E>();
        size = 0;
    }

    E getElement(){

        if(current->next == NULL){
            return NULL;
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

    void goToPos(int nPos){
        current = head;
        for (int i = 0; i < nPos; i++){
            current = current->next;
        }
    }

    nodoCerveza<E>* serachPrevious(nodoCerveza<E>* pnodo){
		if (current == head){
			return NULL;
        }
		nodoCerveza<E> *res = head;
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
    nodoCerveza<E>* temp = head;
    while(temp!=current){
        pos++;
        temp = temp->next;
    }
    return pos;
    }

    int getSize(){
        return size;
    }
	nodoCerveza<E>* getInPos(int pos) {
		goToPos(pos);
		return current->next;
	}
	nodoCerveza<E>* getTipo(std::string tipo) {
		for (int i = 0; i < size; i++) {
			goToPos(i);
			if (current->next->element == tipo) { return current->next; }
		}
		return NULL;
	}
    };



#endif // LINKEDLIST_H
