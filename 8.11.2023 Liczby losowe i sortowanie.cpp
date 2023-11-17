#include <iostream>
#include <time.h>
#include <stdlib.h>
 
using namespace std;
 
int Random(int a, int b)
{
   /// return rand()%(b-a) + a;
   return (b-a)*(double)rand()/RAND_MAX + a;
}
 
void Gen(int t[], int n, int a = 0, int b = 100)
{
    for(int i=0;i<n;i++)
        t[i] = Random(a,b);
}
 
void Show(int t[], int n)
{
    for(int i=0;i<n;i++)
        cout<<t[i]<<", ";
    cout<<endl;
}
 
int Bubble(int t[], int n, int r = 1)
{
    int run;
    int j=0;
    int iter = 0;
    do
    {
        run = 0;
        for(int i=0 ; i< n - j - 1 ; i++ , iter++)
        {
            int temp;
            if(t[i]>t[i+1])
            {
                temp = t[i];
                t[i] = t[i+1];
                t[i+1] = temp;
                run = 1;
            }
        }
 
        j++;
    }while(run != 0);
 
    return iter;
}
 
int main()
{
    srand(time(NULL));
    for(int i = 0; i<20;i++) rand();
    int tab[10];
 
    Gen(tab,10);
    Show(tab,10);
 
    int ile = Bubble(tab,10);
 
    Show(tab,10);
 
    cout<<"Posortowano po "<<ile<<" iteracjach"<<endl;
    return 0;
}
