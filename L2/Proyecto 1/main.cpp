#include <iostream>
//#include "startShip.h"
//#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    system("cls");

    int opcion = 0;

    while (true)
    {
        cout<<"**************"<<endl;
        cout<<"MENU DE JUEGOS"<<endl;
        cout<<"**************"<<endl<<endl;

        cout<<"1- StarShip"<<endl;
        cout<<"2- Snake"<<endl;

        cout<<"Ingrese un numero del menu para seleccionar un juego:"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            //starShip();
            break;
        case 2:
            //snake();
            break;
        
        default:
            break;
        }

        if (opcion == 0)
        {
            break;
            system("cls");
        }

    }
    

    return 0;
}
