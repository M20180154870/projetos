#ifndef POLIGONO_H

#include <ponto.h>
#define N 100
#define POLIGONO_H

class Poligono
{
private:
public:
    int n;
    Ponto verticesPoligono[N];
    Ponto arestasPoligono[N];

    Poligono();

    Poligono(int _n);

    Poligono(Poligono &p);

    void inserirVertices(float cx, float cy);

    void cArestas(int n);

    float areaPoligono();

    void move(float a, float b);

    void rotacionaOrigem(float t);

    void rotacionaPonto(float a, float b, float t);

    void centroDeMassa(float &cox, float &coy);

    void rotacionaCentro(float t);

    void print();
};

#endif // POLIGONO_H
