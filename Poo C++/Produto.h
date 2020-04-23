#pragma once
#include <string>
using namespace std;
class Produto
{
private:
    string Nome;
    string Marca;
    string DataFabricacao;
    string DataValidade;

public:
    Produto();
    Produto(string nome, string marca,
        string dataFabricacao, string dataValidade);
    string GetNome();
    string GetMarca();
    string GetDataFabricacao();
    string GetDataValidade();

    void SetNome(string nome);
    void SetMarca(string marca);
    void SetDataFabricacao(string dataFabricacao);
    void SetDataValidade(string dataValidade);
};

