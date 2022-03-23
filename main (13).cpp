#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct cita
{
    char nombre[50];
    char descripcion[300];
    char tratamiento[50];
    float fecha;
};
int main()
{
    int i=0;
    cita dental[3];
    int opc;
    int menu = 1;
    int otracita = 1;

    while (menu == 1)
    {
        cout << "Bienvenido, favor de indicar la opcion que desea: " << endl;
        cout << "1. Agendar cita " << endl;
        cout << "2. Modificar cita " << endl;
        cout << "3. Eliminar cita " << endl;
        cout << "4. Lista de citas vigentes " << endl;
        cout << "5. Limpiar pantalla " << endl;
        cout << "6. Salir " << endl;
        cin >> opc;

        switch (opc)
        {
        case 1:
            for(i=0;i<3;i++)
            {
                cout <<"Numero de cita: "<<i+1<<endl;
                cout << "Ingrese nombre del paciente:" << endl;
                cin.ignore();
                cin.getline(dental[i].nombre, 50, '\n');

                cout << "Especifique el tratamiento a recibir" << endl;
                cout << "1. limpieza (mil pesos)" << endl;
                cout << "2. endodoncia (tres mil doscientos pesos)" << endl;
                cout << "3. brackets (seis mil pesos)" << endl;
                cout << "4. coronillas (cuatro mil pesos)" << endl;
                cin >> dental[i].tratamiento;

                cout << "Ingrese descripción del tratamiento:" << endl; 
                cin.ignore();
                cin.getline(dental[i].descripcion, 300, '\n');

                cout << "Que dia desea agendar la cita? (Dia y mes)" << endl;
                cin >> dental[i].fecha;

               
            }

            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
        for(i=0;i<3;i++)
        {
             cout <<"Numero de cita: "<<i+1<<endl;
             cout <<"Nombre del paciente: "<<endl;
             cout <<dental[i].nombre<<endl;
             cout <<"Tratamiento a llevar: "<<endl;
             cout <<dental[i].tratamiento<<endl;
             cout <<"Descripcion del tratamiento"<<endl;
             cout <<dental[i].descripcion<<endl;
             cout <<"Fecha de la cita"<<endl;
             cout<<dental[i].fecha<<endl;
        }
            break;

        case 5:
        system("cls");
            break;

        case 6:
            exit(EXIT_SUCCESS);
            menu=2;
            break; 

        default:
            cout << "opcion invalida" << endl; 
        }

        cout << "Quiere volver al menu?" << endl;
        cout << "1. si" << endl;
        cout << "2. no" << endl;
        cin >> menu;
    }
}