#include <iostream>

using namespace std;

// Funkcja obliczająca kwadrat dwóch liczb, sumująca je i zwracająca wynik
void obliczKwadratDwochLiczb(int* liczba1, int* liczba2, int* wyn) {
    int kwadrat1 = (*liczba1) * (*liczba1);
    int kwadrat2 = (*liczba2) * (*liczba2);

    *wyn = kwadrat1 + kwadrat2;
}

int main() {
    // Inicjalizacja dwóch liczb
    int liczbaA = 5;
    int liczbaB = 3;

    int* wynik2;

    // Wyświetlenie wartości początkowych
    cout << "Liczba A: " << liczbaA << endl;
    cout << "Liczba B: " << liczbaB << endl;

    // Wywołanie funkcji, przekazanie wskaźników do liczb
    obliczKwadratDwochLiczb(&liczbaA, &liczbaB, wynik2);

    // Wyświetlenie wyniku
    cout << "Suma kwadratów dwóch liczb: " << *wynik2 << endl;

    return 0;
}
