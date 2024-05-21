#include <iostream>
using namespace std;

int sumaDesde1HastaN(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cout << "Ingrese un número natural: ";
    cin >> n;
    cout << "La suma de los números desde 1 hasta " << n << " es: " << sumaDesde1HastaN(n) << endl;
    return 0;
}