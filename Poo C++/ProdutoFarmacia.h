#pragma once
#include "Produto.h"
class ProdutoFarmacia : public Produto 
{
private:
	bool flReceita;
public:
	ProdutoFarmacia(string nome, string marca,
		string dataFabricacao, string dataValidade, bool flReceita);
	bool validarReceita();

};

