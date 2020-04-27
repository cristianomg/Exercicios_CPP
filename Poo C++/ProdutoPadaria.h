#pragma once
#include "Produto.h"
class ProdutoPadaria : public Produto
{
private:
	bool flGlutem;
public:
	ProdutoPadaria(string nome, string marca,
		string dataFabricacao, string dataValidade, bool flGlutem);
	bool hasGlutem();
};

