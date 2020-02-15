// Exercicio3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double CalculateValor(int code, int qnt)
{
	double valor;
	switch (code)
	{
	case 1:
		valor = qnt * 5.30;
		if (qnt >= 15 || valor >= 40)
			valor = valor * 0.85;
		break;
	case 2:
		valor = qnt * 6.0;
		if (qnt >= 15 || valor >= 40)
			valor = valor * 0.85;
		break;
	case 3:
		valor = qnt * 3.20;
		if (qnt >= 15 || valor >= 40)
			valor = valor * 0.85;
		break;
	case 4:
		valor = qnt * 2.50;
		if (qnt >= 15 || valor >= 40)
			valor = valor * 0.85;
	default:
		cout << "Item não encontrado no estoque." << endl;
		break;
	}
	return valor;
}

int main()
{
	int code;
	int qnt;
	cout << "Informe o codigo do produto: ";
	cin >> code;
	cout << "Informe a quantidade do produto: ";
	cin >> qnt;

	double valor = CalculateValor(code, qnt);

	cout << "O valor final foi : " << valor << endl;
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
