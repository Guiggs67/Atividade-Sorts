#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H

#include <iostream>
#include <vector>
using std::endl;

class Pagamentos {
public:
    Pagamentos();
    void InsertionSort(std::vector<double>& arranjo);
    void Imprimir();

private:
    std::vector<double> Valores{ 100.65,900.30,150.89,6000,330.65,300.55,90 };
    int tamanho;
};

#endif


