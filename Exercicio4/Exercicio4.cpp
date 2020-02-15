// Exercicio4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <math.h> 
using namespace std;

const float TINTA_A = 24;
const float TINTA_B = 5.4;
const float VALOR_TINTA_A = 91;
const float VALOR_TINTA_B = 23;

int calcularQtdTintaA(float metrosPintar)
{
    return floor((metrosPintar / TINTA_A));
}

int calcularQtdTintaB(float metrosPintar)
{
    return floor((metrosPintar / TINTA_B));
}

int* calcularQtdTintaAB(float metrosPintar)
{
    int qtdA = 0;
    int qtdB = 0;
    int results[2];
    while (metrosPintar > 0)
    {
        if (metrosPintar > TINTA_A)
        {
            metrosPintar -= TINTA_A;
            qtdA++;
        }
        else
        {
            metrosPintar -= TINTA_B;
            qtdB++;
        }
    }
    results[0] = qtdA;
    results[1] = qtdB;
    return results;
}

int main()
{
    float metrosQuadrados;
    int resultA;
    int resultB;
    int* results;
    cout << "Informe a quantidade de metros quadrados a pintar: ";
    cin >> metrosQuadrados;
    cout << "a) A quantidade de latas de tinta e o preço final, considerando apenas latas de 24 litros." << endl;
    resultA = calcularQtdTintaA(metrosQuadrados);
    cout << fixed << setprecision(3) << "a) " << resultA << " lata(s) de 24 litros: R$ " << (float)(resultA * VALOR_TINTA_A) << endl;

    cout << "b) A quantidade de latas de tinta e o preço final, considerando apenas latas de 5.4 litros." << endl;
    resultB= calcularQtdTintaB(metrosQuadrados);
    cout << fixed << setprecision(2) << "b) " << resultB << " lata(s) de 5,4 litros: R$ " << (float)(resultB * VALOR_TINTA_B) << endl;

    cout << "c) A quantidade de latas de tinta e o preço final, considerando ambas as latas, de 24 e 5.4 litros." << endl;
    results = calcularQtdTintaAB(metrosQuadrados);
    resultA = results[0];
    resultB = results[1];
    cout << "c) " << resultA << " lata(s) de 24 litros e "<< resultB <<" lata(s) de 5,4 litros: R$ " << (float)((resultA * VALOR_TINTA_A)+ (resultB * VALOR_TINTA_B)) << endl;
    cout << "teste";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
