#include <stdexcept>
using namespace std;

template <typename E>
class nodo {
   public:
       E element;
       nodo<E>* next;
       int* adyacentes;
       string caracteristicas;
       string tipoFertilizacion;
       int tiempoFertilizacion;
       int temperatura;
       string color;
       string estilo;
       string cuerpo;
       int precio;
       string subestilo;


    nodo(E pElement, nodo<E>* pnext = NULL){
       element = pElement;
       next = pnext;
       adyacentes = new int [1024] ;
    }
    nodo(nodo<E>* pnext = NULL){

       next = pnext;
    }
 };
