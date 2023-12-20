#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    Wskaźniki umożliwiają pobieranie adresu pamięci dla
    poszczególnych zmiennych.
    Do pobrania adresu wybranej zmiennej posługujemy się operatorem &.
    Deklaracja wskaźnika jest możliwa dzięki użyciu * zaraz po typie tworzonej zmiennej.
    */

    int *firstPointer;

    cout << firstPointer;
    cout << endl;
    // cout << *firstPointer;
    // cout << endl;

    cout << "<----------------------------------------------->" << endl;

    /*
     Przykładowe przypisanie wartości do wskaźnika, wypisanie adresu i wartości zmiennej.
    */

    int number = 10;
    int secondNumber = 50;
    firstPointer = &number;

    cout << firstPointer << endl;
    cout << &number << endl;       // address
    cout << *firstPointer << endl; // value

    cout << "<----------------------------------------------->" << endl;

    /*
    Operacje na wskaźnikach
    */

    *firstPointer = 40;
    cout << *firstPointer << endl;

    int *secondPointer = &secondNumber;
    cout << *secondPointer << endl;
    int *thirdPointer = &number;
    // secondPointer = 30;
    *secondPointer = *firstPointer;
    cout << *secondPointer << endl;
    cout << *thirdPointer << endl;
    thirdPointer = &secondNumber;
    cout << *thirdPointer << endl;

    cout << "<----------------------------------------------->" << endl;

    /*
    Wskaźniki i tablice
    */

    int testArrayOne[4] = {1, 2, 3, 4};
    int testArrayTwo[4] = {5, 6, 7, 8};
    int *pointerToArrayOne = testArrayOne;
    int *pointerToArrayTwo = &testArrayTwo[0];

    cout << "value: " << *pointerToArrayOne << " address of pointer: " << pointerToArrayOne << " address of array: " << &testArrayOne << endl;
    cout << "value: " << *pointerToArrayTwo << " address of pointer: " << pointerToArrayTwo << " address of array: " << &testArrayTwo << endl;

    pointerToArrayOne += 1;
    pointerToArrayTwo += 1;

    cout << "value: " << *pointerToArrayOne << " address: " << pointerToArrayOne << endl;
    cout << "value: " << *pointerToArrayTwo << " address: " << pointerToArrayTwo << endl;

    cout << "value of third array element: " << *pointerToArrayOne + 2 << endl; // Jaka bedzie wartość?

    cout << "<----------------------------------------------->" << endl;

    /*
    Dynamiczne alokowanie tablic i przypisanie wartości
    */

    int *dynamicAlocTab = new int[4];
    dynamicAlocTab[0] = 1;
    dynamicAlocTab[1] = 2;
    dynamicAlocTab[2] = 3;
    dynamicAlocTab[3] = 4;

    cout << *dynamicAlocTab + 3 << endl; // Co zostanie wypisanie?

    delete dynamicAlocTab;

    cout << *dynamicAlocTab << endl; // Co zostanie wypisanie?

    cout << "<----------------------------------------------->" << endl;

    /*
    Tablica wskaźników(dynamicznie alokowana tablica dwuwymiarowa)
    */

    int **dynamicAloc2DTab = new int *[2];
    dynamicAloc2DTab[0] = new int[2];
    dynamicAloc2DTab[1] = new int[2];

    // dynamicAloc2DTab[0][1] = 100;

    // cout << dynamicAloc2DTab[0][1] << endl;

    // delete[] dynamicAloc2DTab[0];
    // delete[] dynamicAloc2DTab[1];
    // delete[] dynamicAlocTab;

    // cout << dynamicAloc2DTab[0][1] << endl;

    cout << "<----------------------------------------------->" << endl;

    /*
    Uzupelnianie tablicy
    */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            dynamicAloc2DTab[i][j] = i + j;
        }
    }

    cout << "<----------------------------------------------->" << endl;

    /*
    Zawartość tablicy dwuwymiarowej
    */

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << dynamicAloc2DTab[i][j] << " ";
        }
    }

    delete[] dynamicAloc2DTab[0];
    delete[] dynamicAloc2DTab[1];
    delete[] dynamicAlocTab;

    cout << dynamicAloc2DTab[0][1] << endl;

    return 0;
}
