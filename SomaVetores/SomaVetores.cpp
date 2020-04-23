// SomaVetores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

vector<int> verificarIndicesVetor(vector<int> vetor, int numeroVerificacao)
{
	vector<int> vetorResultado;
	for (int i = 0; i < vetor.size(); i++)
	{
		for (int j = 0; j < vetor.size(); j++)
		{
			if (i == j)
				continue;
			if (vetor[i] + vetor[j] == numeroVerificacao)
			{
				vetorResultado.push_back(i);
				vetorResultado.push_back(j);
				return vetorResultado;
			}
		}
	}
	return vetorResultado;
}

int main()
{
	setlocale(LC_ALL, "pt-Br");

	vector<int> vetorTeste = { 12, 4, 5, 3, 2, 8 };
	int numeroVerificacao;
	cout << "Digite um valor" << endl;
	cin >> numeroVerificacao;

	cout << "Valores do vetor: " << endl;

	for (int i = 0; i < vetorTeste.size(); i++)
	{
		cout << vetorTeste[i] << " ";
	}

	cout << endl;


	vector<int> resultado = verificarIndicesVetor(vetorTeste, numeroVerificacao);
	if (resultado.size() == 2)
	{
		std::cout << "Os indices foram:" << resultado[0] << " e " << resultado[1] << endl;
		std::cout << "Os valores desses indices são:" << vetorTeste[resultado[0]] << " e " << vetorTeste[resultado[1]] << endl;

	}
	else
		cout << "Nenhum valor consegue resolver o problema.";
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
