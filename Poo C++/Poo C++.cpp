// Poo C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Produto.h"
#include "ProdutoFarmacia.h"
#include "ProdutoPadaria.h"
#include <string>
#include<vector>
using namespace std;
int main()
{
    vector<Produto> listaDeProdutos;
    vector<Produto>::iterator it;
    Produto p = ProdutoFarmacia("Band-Aid", "Band-Aid", "21/10/2019", "25/06/2020", false);
    Produto p1 = ProdutoFarmacia("ASpirina", "Aspirina", "21/10/2019", "25/06/2020", true);
    Produto p2 = ProdutoPadaria("Arroz2", "Dalon", "21/10/2019", "25/06/2020", false);
    Produto p3 = ProdutoPadaria("Arroz3", "Dalon", "21/10/2019", "25/06/2020", true);
    listaDeProdutos.push_back(p);
    listaDeProdutos.push_back(p1);
    listaDeProdutos.push_back(p2);
    listaDeProdutos.push_back(p3);
    
    for (int i = 0; i < listaDeProdutos.size(); i++)
    {
        Produto p = listaDeProdutos[i];
        cout << p.GetNome() << " " 
            << p.GetMarca() << " " 
            << p.GetDataFabricacao() 
            << " " << p.GetDataValidade()
            << endl;
    }

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
