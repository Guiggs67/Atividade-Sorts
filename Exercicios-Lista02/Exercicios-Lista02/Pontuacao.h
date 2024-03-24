#ifndef PONTUACAO_H
#define PONTUACAO_H

#include <iostream>
#include <vector>
using std::endl;

class Pontuacao {
public:
    Pontuacao();
    void SelectionSort2(std::vector<double>& arranjo);
    void Imprimir();
    
private:
    std::vector<double> pontuacao{ 155.26, 256.89, 200.25, 450.56};
    int tamanho;

};

#endif
