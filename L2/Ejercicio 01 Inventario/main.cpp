#include<iostream>
#include <string>

using namespace std;

string productos [5][3]{
    {"001","Iphone X","10"},
    {"002","Table Samsumg A8","100"},
    {"003","Laptop Dell","85"},
    {"004","CPU Dell","20"},
    {"005","Monitor HP","24"}
};

void listarProductos (){
    system("cls");
    cout<<endl;
    cout<<"LISTADO DE PRODUCTOS"<<endl;
    cout<<"********************"<<endl;
    cout<<"Codigo, Descripcion y Existencia"<<endl;

    for (int i = 0; i <5; i++)
        {
            cout<<productos[i][0]<<" | "<< productos[i][1]<<" | "<< productos[i][2]<<endl;
        }
}

void movimientoInventario (string codigo, int cantidad, string tipoMovimiento){
    for (int i = 0; i <5; i++)
    {
        if (productos[i][0]== codigo)
        {
            if (tipoMovimiento == "+")
                {
                    productos[i][2]= to_string(stoi(productos[i][2]) + cantidad);
                    //       stoi convierte texto a tipo entero      
                }else{
                    productos[i][2]= to_string(stoi(productos[i][2]) - cantidad);
                }
        }

    }
   
}

void ajustePositivo(){
    //llama la funcion para aumentar la cantidad de productos
    movimientoInventario();
}

void ingresoInventario(){
    string codigoProducto= "";
    int cantidad = 0;

    system("cls");
    cout<<endl;
    cout<<"INGRESO DE PRODUCTOS AL INVENTARIO"<<endl;
    cout<<"**********************************"<<endl;
    cout<<"Ingrese el Codigo de Producto: ";
    cin>>codigoProducto;
    cout<<endl;
    cout<<"Ingrese la cantidad del Producto: ";
    cin>>cantidad;
    cout<<endl;

    movimientoInventario(codigoProducto, cantidad, "+");
}

void ajusteNegativo(){
    //llama la funcion para disminuir la cantidad del producto.
    movimientoInventario();
}

void salidaInventario(){
    string codigoProducto= "";
    int cantidad = 0;

    system("cls");
    cout<<endl;
    cout<<"SALIDA DE PRODUCTOS DEL INVENTARIO"<<endl;
    cout<<"**********************************"<<endl;
    cout<<"Ingrese el Codigo de Producto: ";
    cin>>codigoProducto;
    cout<<endl;
    cout<<"Ingrese la cantidad del Producto: ";
    cin>>cantidad;
    cout<<endl;

    movimientoInventario(codigoProducto, cantidad, "-");
}

int main(int argc, char const *argv[])
{

    int opcion = 0;

    while (true)
    {
        system("cls");
        cout<<"Sistema de Inventario"<<endl;
        cout<<"---------------------"<<endl<<endl;
        cout<<endl;
        cout<<"1- Productos"<<endl;
        cout<<"2- Ingreso de Inventario "<<endl;
        cout<<"3- Salida de Inventario "<<endl;
        cout<<"4- Ajuste Positivo "<<endl;
        cout<<"5- Ajuste Negativo "<<endl;
        cout<<"0- Salir "<<endl;


        cout<<"Ingrese una Opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            listarProductos ();
            break;  
        case 2:
            ingresoInventario();
            break;
        case 3:
            salidaInventario();
            break;
        case 4:
            ajustePositivo();
            break;
        case 5:
            ajusteNegativo();
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

