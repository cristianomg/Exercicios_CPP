#include <iostream>
#include "Vetor.h"

int main()
{
    setlocale(LC_ALL, "pt-Br");


    Vetor vetor = Vetor();
    vetor.Add(5);
    vetor.Add(1);

    for (int i = 0; i < vetor.Size(); i++)
    {
        cout << vetor.Get(i) << endl;

    }

    vetor.Remove(1);

    for (int i = 0; i < vetor.Size(); i++)
    {
        cout << vetor.Get(i) << endl;

    }

    cout << vetor.Size() << endl; 
    
    vetor.Add(5);

    cout << vetor.IndexOf(5) << endl;
    
    cout << vetor.LastIndexOf(5) << endl;

    cout << vetor.IsEmpty() << endl;

    vetor.Clear();

    cout << vetor.IsEmpty() << endl;

}
