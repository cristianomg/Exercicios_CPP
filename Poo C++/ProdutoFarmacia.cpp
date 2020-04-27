#include "ProdutoFarmacia.h"

bool ProdutoFarmacia::validarReceita()
{
	return this->flReceita;
}
ProdutoFarmacia::ProdutoFarmacia(string nome, string marca,
	string dataFabricacao, string dataValidade, bool flReceita)
{
	this->flReceita = flReceita;
	this->SetNome(nome);
	this->SetMarca(marca);
	this->SetDataFabricacao(dataFabricacao);
	this->SetDataValidade(dataValidade);
}

