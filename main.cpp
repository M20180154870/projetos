#include <iostream>
#include <ponto.h>
#include <poligono.h>
#include <retangulo.h>
#include <cmath>


using namespace std;

int main(void)
{
    Poligono p(3), po;
    Retangulo r(0,0,2,4), t;

    //t = r;
    cout << p.areaPoligono() << endl;
    po = p;
    po.print();
    //po.rotaciona(360);
    cout << endl;
    //po.print();
    cout << endl;
    cout << p.areaPoligono() << endl;

    //t.print();
    cout << endl;
    //cout << t.areaPoligono() << endl;


    //Poligono p(3), k;

    //k = p;

    //cout << endl;
    //k.move(2,2);
    //k.print();
    //cout << endl;
    //cout << "Área do poligono: " << k.areaPoligono() << endl;

    return 0;
}
