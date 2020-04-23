#include "Produto.h"
#include <string>
using namespace std;

Produto::Produto()
{
}
Produto::Produto(string nome, string marca,
    string dataFabricacao, string dataValidade)
{
    this->Nome = nome;
    this->Marca = marca;
    this->DataFabricacao = dataFabricacao;
    this->DataValidade = dataValidade;
}

string Produto::GetNome()
{
    return this->Nome;
}

string Produto::GetMarca()
{
    return this->Marca;
}

string Produto::GetDataFabricacao()
{
    return this->DataFabricacao;
}

string Produto::GetDataValidade()
{
    return this->DataValidade;
}

void Produto::SetNome(string nome)
{
    this->Nome = nome;
}

void Produto::SetMarca(string marca)
{
    this->Marca = marca;
}

void Produto::SetDataFabricacao(string dataFabricacao)
{
    this->DataFabricacao = dataFabricacao;
}
void Produto::SetDataValidade(string dataValidade)
{
    this->DataValidade = dataValidade;
}