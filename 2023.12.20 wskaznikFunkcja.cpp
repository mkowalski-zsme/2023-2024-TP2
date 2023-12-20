#include <iostream>

using namespace std;

// Funkcja obliczająca kwadrat dwóch liczb, sumująca je i zwracająca wynik
int obliczKwadratDwochLiczb(int* liczba1, int* liczba2) {
    int kwadrat1 = (*liczba1) * (*liczba1);
    int kwadrat2 = (*liczba2) * (*liczba2);

    int sumaKwadratow = kwadrat1 + kwadrat2;

    return sumaKwadratow;
}

int main() {
    // Inicjalizacja dwóch liczb
    int liczbaA = 5;
    int liczbaB = 3;

    // Wyświetlenie wartości początkowych
    cout << "Liczba A: " << liczbaA << endl;
    cout << "Liczba B: " << liczbaB << endl;

    // Wywołanie funkcji, przekazanie wskaźników do liczb
    int wynik = obliczKwadratDwochLiczb(&liczbaA, &liczbaB);

    // Wyświetlenie wyniku
    cout << "Suma kwadratów dwóch liczb: " << wynik << endl;

    return 0;
}
