#include <iostream>

using namespace std;

void mostrar(int x, int y);

int main(int argc, char const *argv[])
{
     int x, y;

    cout << "Digit un #: " << endl;
    cin >> x;

    cout << "Digita otro #: " << endl;
    cin >> y;

    cout << "Los numeros impares del " << x << " al " << y << " son: " << endl;

        mostrar(x, y);

        cout << argc;
    return 0;
}


void mostrar(int x, int y)
{
    for (int i = x; i < y; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}