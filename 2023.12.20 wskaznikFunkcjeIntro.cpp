#include <iostream>

using namespace std;

// wskaźnik jako parametr funkcji
void increaseNumber (int *number, int evNum)
{
    *number+= evNum;
}

void increaseNumberV2 (int number, int evNum)
{
    number+= evNum;
    cout << number << " from inside function" << endl;
}

int main()
{
    int numberToInc = 5;
    int *ptr = &numberToInc;

    increaseNumberV2(numberToInc, 50);

    cout << numberToInc << endl;
    
    increaseNumber(ptr, 20); //przekazanie wskaźnika
    
    cout << numberToInc << endl; // 25
    
    increaseNumber(&numberToInc, 30); //przekazanie adresu
    
    cout << numberToInc << endl; // 55
    
    return 0;
}
