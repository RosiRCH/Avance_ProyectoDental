#include <iostream>
using namespace std;
int main()
{
    char nombre[50];
    char descripcion[300];
    int opc;
    int nss;
    int tratamiento;
    int dia;
    int mes;
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
            while (otracita == 1)
            {

                cout << "Ingrese nombre del paciente:" << endl;
                cin.ignore();
                cin.getline(nombre, 50, '\n');

                cout << "Ingrese numero del servicio social del paciente:" << endl;
                cin >> nss;

                cout << "Especifique el tratamiento a recibir" << endl;
                cout << "1. limpieza" << endl;
                cout << "2. endodoncia" << endl;
                cout << "3. brackets" << endl;
                cout << " 4. coronillas" << endl;
                cin >> tratamiento;

                cout << "Ingrese descripción del tratamiento:" << endl; 
                cin.ignore();
                cin.getline(descripcion, 300, '\n');

                cout << "Que dia desea agendar la cita? (Dia y mes)" << endl;
                cin >> dia >> mes;

                cout << "desea agendar otra cita?" << endl;
                cout << "1. si" << endl;
                cout << "2. no" << endl;
                cin >> otracita;
            }

            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            cout << "Esperamos que vuelva pronto" << endl; 
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
