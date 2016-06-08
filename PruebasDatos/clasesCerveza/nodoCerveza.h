#include <stdexcept>
//#include <string.h>
#include <string>
#include "LinkedList.h"

template <typename E>
class nodoCerveza {
   private:
       int* adyacentes;
       std::string caracteristicas;
	   std::string tipoFertilizacion;
       std::string tiempoFertilizacion;
       int temperatura;
	   std::string color;
	   std::string estilo;
	   std::string cuerpo;
       int precio;
	   std::string subestilo;
	   LinkedList<std::string>* cervezas;

public:
	nodoCerveza<E>* next;
	E element;
	nodoCerveza(E pElement, nodoCerveza<E>* pnext = NULL){
       element = pElement;
       next = pnext;
       adyacentes = new int [1024] ;
	   cervezas = new LinkedList<std::string>();
    }
    nodoCerveza(nodoCerveza<E>* pnext = NULL){
       next = pnext;
    }
	void setNombre(E pNombre) { element = pNombre; }
	E getNombre() { return element; }
	void setCarac(E pCarac) { caracteristicas = pCarac; }
	E getCarac() { return caracteristicas; }
	void setTipo(E pTipo) { tipoFertilizacion = pTipo; }
	E getTipo() { return tipoFertilizacion; }
	void setTiempo(E pTiempo) { tiempoFertilizacion = pTiempo; }
	E getTiempo() { return tiempoFertilizacion; }
	void setTemperatura(int pTemp) { temperatura = pTemp; }
	int getTemperatura() { return temperatura; }
	void setColor(E pColor) { color = pColor; }
	E getColor() { return color; }
	void setEstilo(E pEstilo) { estilo = pEstilo; }
	E getEstilo() { return estilo; }
	void setCuerpo(E pCuerpo) { cuerpo = pCuerpo; }
	E getCuerpo() { return cuerpo; }
	void setPrecio(int Pprecio) { precio = Pprecio; }
	int getPrecio() { return precio; }
	void setSub(E pSub) { subestilo = pSub; }
	E getSub() { return subestilo; }
	void agregarCerveza(std::string nombre) {
		cervezas->insert(nombre);
	}
	LinkedList<std::string>* getCervezas() { return cervezas; }
 };
