#include "Node.h"
#include <stdexcept>

template <typename E>

class LinkedList{
private:
    Node<E>* head;
    Node<E>* tail;
    Node<E>* current;
    int size;

public:
    LinkedList(){
        head = tail = current = new Node<E>();
        size = 0;
    }

    ~LinkedList(){
        clear();
        delete head;
    }
    void insert(E pElement){
        current->next = new Node<E>(pElement,current->next);
        if(current == tail){
            tail = tail->next;
        }
        size++;
    }
    void append(E pElement){
        tail -> next = new Node<E>(pElement);
        tail = tail->next;
        size++;
    }
    E remove(){
        if(current->next = NULL){
            return NULL;
        }
        E result = current->next->element;
        Node<E>* temp = current->next;
        current->next = current->next->next;
        if (temp == tail){
            tail = current;
        }
        delete temp;
        size--;
        return result;

    }
    void clear(){
        current = head;
        while(head != NULL){
            head = head->next;
            delete current;
            current = head;
        }
        head = tail = current = new Node<E>();
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
    }

    void goToPos(int nPos){
        if(!((nPos < 0) || (nPos > size ))){
			current = head;
			for (int i = 0; i < nPos; i++) {
				current = current->next;
			}
        }
        
    }
    Node<E>* searchPrevious(Node<E>* pNode){
        if(current == head){
            return NULL;
        }
        Node<E>* res = head;
        while(res->next != current){
            res = res->next;
        }
        return res;
    }
    void previous(){
        if(current != head){
            current = searchPrevious(current);
        }
    }
    int getPos(){
        int pos = 0;
        Node<E>* temp = head;
        while(temp != current){
            pos++;
            temp = temp->next;
        }
        return pos;
    }
    int getSize(){
        return size;
    }
    void next(){
        if(current != tail){
            current = current->next;
        }
    }
	E getInPos(int pos) {
		goToPos(pos);
		return current->next->element;
	}
};

