//programa: Seguridad tres capas
//autor: Fernanda Torres
//fecha: 05-10-2023
#include <iostream>
using namespace std;
int main()
{
        int c11, c12, c13, c01= 5,c02= 10, c03= 15, s=1000;
        cout<<"Ingrese c11,c12,c13:";
        cin>>c11>>c12>>c13;
        if(c11==c01){
                if(c12==c02){
                        if(c13==c03){
                                cout<<"Acceso correcto";
                        }else{
                                cout<<"La clave 3 fallo";
                        }
                }else{
                        cout<<"La clave 2 fallo";
                }
        }else{
                cout<<"La clave 1 fallo";
        }
        return(0);
}
