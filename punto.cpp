#include <iostream>
#include "punto.h"
using namespace std;

punto::punto()
{
    x = 0;
    y = 0;
}

punto::punto(int _x, int _y){
    x = _x;
    y = _y;
}

int punto::getX() const{
    return x;
}

int punto::getY() const{
    return y;
}

void punto::setX(const int nuevo_x){
    x = nuevo_x;
}

void punto::setY(const int nuevo_y){
    y = nuevo_y;
}

punto::~punto()
{
    cout << "Destruyendo el punto" << endl;
}

ArreglodePuntos::ArreglodePuntos(const punto puntos[], const int tam)
{
    size = tam;
    puntos = new punto[tam];    
      
}

ArreglodePuntos::ArreglodePuntos(const ArreglodePuntos &o){

    ptr_punto = new punto[o.size];
    for (size_t i = 0; i < size; ++i)
    {
        ptr_punto[i] = o.ptr_punto[i];
    }  
    size = o.size;  
}

void ArreglodePuntos::Redimensionar(int n){
    size = size + n;
    ptr_punto = new punto[size];    
    
}

void ArreglodePuntos::push_back(const punto &p){
    size++;
    Redimensionar(size);
    ptr_punto[ size ] = p;
}

void ArreglodePuntos::insert(const int posicion, const punto &p){
   if (posicion >= 0 && posicion < size)
    {   
        size++;
        Redimensionar(size);
        for (size_t i = size; i > posicion; i--)
        {
            ptr_punto[i+1] = ptr_punto[i];
            if (i == posicion)
            {
                ptr_punto[posicion] = p;
            }            
        }
        
    }
}
    
    
void ArreglodePuntos::remove(const int pos){
    if (pos >= 0 && pos < size)
    {
        for (size_t i = pos; i < size; i++)
        {
            ptr_punto[i] = ptr_punto[i+1];
        }
        Redimensionar(size);
    }
    
}

const int ArreglodePuntos::getSize() const{
    return size;
}

void ArreglodePuntos::clear(){
    while(size>0)
    {         
        size--;
        Redimensionar(size);
    }
    ptr_punto=new punto[size];
}

ArreglodePuntos::~ArreglodePuntos()
{
    delete [] ptr_punto;
}