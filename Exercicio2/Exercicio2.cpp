// Exercicio2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int grupoA[5];
    int grupoB[5];
    float resultado = 0;

    for (int i = 0 ;i < 5; i++)
    {
        grupoA[i] = rand() % 10;
        grupoB[i] = rand() % 10;
        cout << "A[" << i + 1 << "]" << grupoA[i] << " ";
        cout << "B[" << i + 1 << "]" << grupoB[i] << endl;

        resultado += grupoA[i] * grupoB[i];
    }

    cout << "O resultado foi : " << resultado << endl;

    return 0;
}
