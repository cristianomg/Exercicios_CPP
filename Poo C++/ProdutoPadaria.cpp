#include "ProdutoPadaria.h"
bool ProdutoPadaria::hasGlutem()
{
	return this->flGlutem;
}
ProdutoPadaria::ProdutoPadaria(string nome, string marca,
	string dataFabricacao, string dataValidade, bool flGlutem){
	this->flGlutem = flGlutem;
	this->SetNome(nome);
	this->SetMarca(marca);
	this->SetDataFabricacao(dataFabricacao);
	this->SetDataValidade(dataValidade);
}
