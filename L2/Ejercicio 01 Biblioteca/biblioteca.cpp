#include <iostream>
#include <string>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][3];

void cargarLibros(){
    // Arreglo con Categoria y descripcion	
	//string libros[39][2];
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; libros[0][2] = "JUAN CARLOS LOPEZ GARCIA";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; libros[1][2] = "MARQUÉS DE SADE";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; libros[2][2] = "GOETHE";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"; libros[3][2] = "JANE AUSTEN";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"; libros[4][2] = "MARY SHELLEY";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"; libros[1][2] = "VICTOR HUGO";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1"; libros[1][2] = "CHARLES DICKENS";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)"; libros[1][2] = "HERMAN MELVILLE";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)"; libros[1][2] = "FIÓDOR DOSTOYEVSKI";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)"; libros[1][2] = "JULIO VERNE ";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos"; libros[1][2] = "LEÓN TOLSTÓI";
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes"; libros[1][2] = "EMILE ZOLA";
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion"; libros[1][2] = "BRAM STOKER";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software"; libros[1][2] = "OSCAR WILDE";
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD"; libros[1][2] = "MARCEL PROUST";
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion"; libros[1][2] = "JAMES JOYCE";
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores)"; libros[1][2] = "FRANZ KAFKA";
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras"; libros[1][2] = "ISAK DINESEN";
	libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber"; libros[1][2] = "VLADIMIR NABOKOV";
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker"; libros[1][2] = "MARGUERITE DURAS";
	libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador"; libros[1][2] = "CHARLES BUKOWSKI";
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker"; libros[1][2] = "TRUMAN CAPOTE";
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL"; libros[1][2] = "EDGAR ALLAN POE";
	libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural"; libros[1][2] = "H.P LOVECRAFT ";
	libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos"; libros[1][2] = "RAMON DEL VALLE";
	libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP"; libros[1][2] = "GABRIEL GARCIA MARQUEZ";
	libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial"; libros[1][2] = "ISABEL ALLENDE";
	libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva"; libros[1][2] = "ISAAC ASIMOV";
	libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial"; libros[1][2] = "CARLOS FUENTES";
	libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python)"; libros[1][2] = "EMILY BRONTE";
	libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python"; libros[1][2] = "FRANCISCO QUEVEDO";
	libros[31][0] = "Python"; libros[31][1] = "Inmersion en Python"; libros[1][2] = "ROBERTO BOLAÑO";
	libros[32][0] = "Python"; libros[32][1] = "Inmersion en Python 3"; libros[1][2] = "DANTE ALIGHIERI";
	libros[33][0] = "Python"; libros[33][1] = "Introduccion a la programacion con Python"; libros[1][2] = "MIGUEL DE CERVANTES SAAVEDRA";
	libros[34][0] = "Python"; libros[34][1] = "Introduccion a Programando con Python"; libros[1][2] = "DR. CAMILO CRUZ";
	libros[35][0] = "Python"; libros[35][1] = "Python instantaneo (1999)"; libros[1][2] = "RAMON AMAYA AMADOR";
	libros[36][0] = "Python"; libros[36][1] = "Python para ciencia e ingenieria"; libros[1][2] = "PAULO COELHO";
	libros[37][0] = "Python"; libros[37][1] = "Python para principiantes"; libros[1][2] = "LUCILA GAMERO DE MEDINA";
	libros[38][0] = "Python"; libros[38][1] = "Python para todos"; libros[1][2] = "MARCELA FRANCO RIVERA";
}

int main(int argc, char const *argv[])
{
    cargarLibros();

    srand(time(NULL));

    bool salir = false;

    while (salir == false)
    {
        string buscar ="";
        system("cls");
        cout<<"Ingrese la descripcion del Libro que busca: ";
        cin>>buscar;

        //Busqueda
        for (int i = 0; i <39; i++)
        {
            string libro = libros[i][1] + libros[i][2];
            string libroEnminuscula = libro;
            //transformamos el texto en minusculas
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            //string buscarEnMinuscula = buscar;
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos)
            {
                cout<<"Libro encontrado: "<<libro <<endl<<endl;

                //autores
                int autor1 = rand()% 38 + 1;
                cout<<"--> Autor: "<<libros[autor1][2]<<endl;

                cout<<endl;

                int sugerencia1 = rand()% 38 + 1;
                int sugerencia2 = rand()% 38 + 1;
                int sugerencia3 = rand()% 38 + 1;

                cout<<"  Otras Sugerencias..."<<endl;
                cout<<"Sugerencia 1: "<< libros[sugerencia1][1]<<endl;
                cout<<"Sugerencia 2: "<< libros[sugerencia2][1]<<endl;
                cout<<"Sugerencia 3: "<< libros[sugerencia3][1]<<endl;


                salir = true;
                break;
            }
    
        }
        
        if (salir == false)
        {
            char continuar = 'n';
            while (true)
            {
                system("cls");
                cout<<"No se encontro el Libro que Buscas. Desea continuar? s/n "<<endl;
                cin>>continuar;

                if (continuar == 's' || continuar == 'S')
                {
                    break;
                }else if(continuar == 'n' || continuar =='N'){
                    salir = true;
                    break;
                }    
            }
            
        }
        

    }
    
  

    return 0;
}
