#include <iostream>
#include "startShip.h"
#include "snake.h"
//Jaime J. Toledo
using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    int x=0;

    cout<<"**************"<<endl;
    cout<<"MENU DE JUEGOS"<<endl;
    cout<<"**************"<<endl;

    cout<<"Seleccione un juego"<<endl;
    cout<<"1. StarShip"<<endl;
    cout<<"2. Snake"<<endl;
    cout<<"Ingrese un numero del menu para seleccionar un juego:";
    cin>>x;

    if (x == 1 ) //Comparacion
	 {
         starShip();

     }
	 else 
	    if ( x == 2) //comparacion
	     {
             snake();

            }
	        else //comparacion
	        {
	            cout<<" Tiene que escoger una de las dos opciones "<<x<<endl;
                }

    // starShip();
    // snake();

    return 0;
}
