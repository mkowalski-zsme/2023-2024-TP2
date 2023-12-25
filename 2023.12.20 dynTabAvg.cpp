#include <iostream>

using namespace std;

double obliczSrednia(int** tablica, int liczbaWierszy, int liczbaKolumn) {
    double suma;
    double srednia;

    for (int i = 0; i < liczbaWierszy; ++i) {
        suma = 0.0;

        for (int j = 0; j < liczbaKolumn; ++j) {
            suma += tablica[i][j];
        }

        srednia = suma / liczbaKolumn;

        std::cout << "Średnia dla wiersza " << i + 1 << " to: " << srednia << std::endl;
    }
}

int main() {
    const int liczbaWierszy = 3;
    const int liczbaKolumn = 4;

    // Alokuje dynamicznie dwuwymiarową tablicę
    int** dynamicArray = new int*[liczbaWierszy];

    for (int i = 0; i < liczbaWierszy; ++i) {
        dynamicArray[i] = new int[liczbaKolumn];
    }

    // Inicjalizuje tablicę
    for (int i = 0; i < liczbaWierszy; ++i) {
        for (int j = 0; j < liczbaKolumn; ++j) {
            dynamicArray[i][j] = i * liczbaKolumn + j;
        }
    }

    // Oblicza i wypisuje średnie arytmetyczne
    obliczSrednia(dynamicArray, liczbaWierszy, liczbaKolumn);

    // Zwolnienie pamięci
    for (int i = 0; i < liczbaWierszy; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}
