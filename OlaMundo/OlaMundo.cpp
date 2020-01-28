// OlaMundo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;
void questaoUm()
{
	float anterior = 0;
	float s = 0;
	float numerador = 0;
	for (float denominador = 1; denominador <= 50; denominador++)
	{
		numerador = anterior + denominador; 
		cout << numerador << "/" << denominador << "  ";
		s += ((numerador) / denominador);
		anterior = denominador;
	}
	cout << endl;
	cout << s;
}
void questaoDois() 
{
	float numerador = 4;
	float denominador = 3;
	int quantidade;
	float resultado = 4;
	cout << "digite a quantidade" << endl;
	cin >> quantidade;
	cout << "4 - ";
	for (int i = 1; i < quantidade; i++) 
	{
		
		if (i % 2 == 0)
		{
			cout << numerador << "/" << denominador << " - ";
			resultado += (numerador / denominador);
		}
		else
		{
			cout << numerador << "/" << denominador << " + ";
			resultado -= (numerador / denominador);
		}
		denominador += 2;
	}
	cout << endl<< resultado;
}
void questaoTres()
{
	double resultado = 0;
	int denominador = 50;
	for (int i = 1; i <= 50; i++)
	{
		cout << pow(2, i) << "/" << denominador << " + ";
		resultado += (pow(2, i) / denominador);
		denominador--;

	}
	cout << endl << resultado << endl;
}
void questaoQuatro()
{
	int quantidade;
	cout << "Digite a quantidade: "; 
 	cin >> quantidade;
	for (int i=1; i<= quantidade; i++)
	{
		cout << pow(i, 2) << " ";
	}
}
void questaoCinco()
{
	int posicao = 1;
	int primeiroNumero = 1;
	int segundoNumero = 4;
	int quantidade;
	cout << "Digite a quantidade: ";
	cin >> quantidade;
	for (int i = 0; i < quantidade; i++)
	{
		if (posicao == 1)
		{
			cout << primeiroNumero++ << "  ";
			posicao++;
		}
		else if (posicao == 2)
		{
			cout << segundoNumero << "  ";
			posicao++;
		}
		else
		{
			cout << segundoNumero++ << "  ";
			posicao = 1;
		}
	}
}
void questaoSeis()
{
	int quantidade = 0;
	cout << "Digite a quantidade: ";
	cin >> quantidade;
	cout << 0 << " ";
	long* numeros =  new long[quantidade];
	numeros[0] = 0;
	for (int i = 1; i < quantidade; i++)
	{
		if (i == 1)
		{
			cout << 1 << " ";
			numeros[1] = 1;
		}
		else if (i == 2)
		{
			cout << 1 << " ";
			numeros[2] = 1;
		}
		else
		{
			cout << numeros[i - 1] + numeros[i - 2] << " ";
			numeros[i] = numeros[i - 1] + numeros[i - 2];
		}
	}
}
void questaoSete()
{
	char notas[] = { 'A', 'B', 'C', 'D', 'E' };
	float maiorPessimo = 0;
	float maiorOtimo = 0;
	float maiorRuim = 0;
	float otimo = 0;
	float bom = 0;
	float regular = 0;
	float ruim = 0;
	float pessimo = 0;
	float dif = 0;
	float idadeRuim = 0;
	char nota;
	float idade = 0;
	for (short i = 0; i < 100; i++)
	{
		nota = notas[rand() % 4];
		idade = rand() % 50 + 15;
		cout << "Idade: " << idade << " " << "Nota: " << nota << endl;
		switch (nota)
		{
		case 'A':
			otimo++;
			if (idade > maiorOtimo)
				maiorOtimo = idade;
			break;
		case 'B':
			bom++;
			break;
		case 'C':
			regular++;
			break;
		case 'D':
			ruim++;
			if (idade > maiorOtimo)
				maiorOtimo = idade;
			break;
		case 'E':
			pessimo++;
			if (idade > maiorPessimo)
				maiorPessimo = idade;
			break;
		default:
			break;
		}
	}
	dif = ((bom / 100) - (regular / 100)) >= 0.0 ? ((bom / 100) - (regular / 100)) : ((regular / 100) - (bom / 100));
	cout << "A quantidade de respostas otimas é: " << otimo << endl;
	cout << "A diferença percentual entre respostas bom e regular é: " << dif << endl;
	cout << "A media de idade das pessoas que responderam ruim: " << idadeRuim / ruim << endl;
	cout << "A porcentagem de respostas pessimo e a maior nota que utilizou essa opçao: " << pessimo / 100 << "  " << maiorPessimo << endl;
	dif = (maiorOtimo - maiorRuim) >= 0.0 ? (maiorOtimo - maiorRuim) : (maiorRuim - maiorOtimo);
	cout << "A difereça entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim " << dif << endl;
} 
int main()
{
	int menu;
	cout << "Digite o numero da questão";
	cin >> menu;
	switch (menu)
	{
	case 1:
		questaoUm();
		break;
	case 2:
		questaoDois();
		break;
	case 3:
		questaoTres();
		break;
	case 4:
		questaoQuatro();
		break;
	case 5:
		questaoCinco();
		break;
	case 6:
		questaoSeis();
		break;
	case 7:
		questaoSete();
	default:
		break;
	}
	return 0;
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
