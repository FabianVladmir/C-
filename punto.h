#include <iostream>
using namespace std;

class punto
{
private:
    int x, y;    
public:
    punto();
    punto(int, int);
    int getX() const;
    int getY() const;
    void setX(const int);
    void setY(const int);
    ~punto();
};

class ArreglodePuntos
{
private:
    punto *ptr_punto;    
    int size;
    void Redimensionar(int);
public:
    ArreglodePuntos(const punto puntos[], const int tam);
    ArreglodePuntos(const ArreglodePuntos &o);    
    void push_back(const punto &);
    void insert(const int , const punto &);
    void remove(const int);
    const int getSize() const;
    void clear();
    ~ArreglodePuntos();
};