#ifndef TAREFAS_H
#define TAREFAS_H

#include <iostream>
#include <vector>
#include <string>

class Tarefas {
public:
    Tarefas();
    void mergeSort(std::vector<std::string>& tarefas, int left, int right);
    void merge(std::vector<std::string>& tarefas, int left, int middle, int right);
    void Imprimir();

private:
    std::vector<std::string> tarefas{ "3-Cozinhar", "2-Limpar casa", "1-Lavar roupa", "4-Lavar louça" };
    int tamanho;
};

#endif