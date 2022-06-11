#include <iostream>
#include "startShip.h"
#include "snake.h"

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

        cout<<"1- StarShip"<<endl<<endl;
        cout<<"2- Snake"<<endl<<endl;

        cout<<"Ingrese un numero del menu para seleccionar un juego:"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            starShip();
            break;
        case 2:
            snake();
            break;
        
        default:
            break;
        }
        system("pause");
        cout<<endl;

        if (opcion == 0)
        {
            break;
            system("cls");
        }

    }
    

    return 0;
}
