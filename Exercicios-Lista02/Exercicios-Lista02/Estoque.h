#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <iostream>
#include <vector>
#include "Pagamentos.h"

class Estoque {
public:
    Estoque();
    void selectionSort(std::vector<int>& arranjo);
    void Imprimir();
    Pagamentos pagamentos;

private:
    std::vector<int> qtd_estoque{ 10,9,1,6,3,3,9 };
    int tamanho;
    
};

#endif

