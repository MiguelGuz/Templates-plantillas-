#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<float> arreglo;

    for(size_t i=0;i<4;i++){
        arreglo.insertar_final(i);
    }
    
    arreglo.eliminar_inicio(); 
    arreglo.insertar(9,2);
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for(size_t i=0;i<arreglo.size();i++){
    cout<<arreglo[i]<<" ";
    }

    //mostrar();

    cout <<endl;
    return 0;
}