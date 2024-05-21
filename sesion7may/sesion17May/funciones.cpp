#include <iostream>
#include "variables.h"
using namespace std;

int menu();
void start();
void addGrade();
void showGrade();

int menu()
{
    int option;
    cout << "1. ingresar notas" << endl;
    cout << "2. mostrar notas" << endl;
    cout << "3. nota mas alta" << endl;
    cout << "4. Nota mas baja" << endl;
    cout << "5. promedio" << endl;
    cout << "6. salir" << endl;
    cin >> option;

    return option;
}

void start()
{
    int option = menu();
    system("Cls || clear");
    while (option != 6)
    {
        option = menu();
        switch (option)
        {
        case 1:
            cout << "Ingresar notas" << endl;
            addGrade();
            system("pause");
            break;
            case 2:
            showGrade();
            
        case 6:
            cout << "salir" << endl;
            system("pause");
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    }
}

void addGrade()
{
    if (position < MAX)
    {
        cout << "Ingrese la nota: ";
        cin >> grades[position];
        position++;
    }
    else
    {
        cout << "No hay mas espacio para notas" << endl;
    }
}

void showGrade()
{
    cout << "Mostrar notas" << endl;
    for (int i = 0; i < position; i++)
    {
        cout << "Nota" << i + 1 << ": " << grades[i] << endl;
        system("pause");
    }
}
