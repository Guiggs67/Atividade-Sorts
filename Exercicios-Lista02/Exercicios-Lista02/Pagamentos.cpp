#include "Pagamentos.h"

Pagamentos::Pagamentos() {
    tamanho = Valores.size();
    InsertionSort(Valores);
}

void Pagamentos::InsertionSort(std::vector<double>& arranjo) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menorIndice = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (arranjo[j] < arranjo[menorIndice]) {
                menorIndice = j;
            }
        }
        if (menorIndice != i) {
            int temp = arranjo[i];
            arranjo[i] = arranjo[menorIndice];
            arranjo[menorIndice] = temp;
        }
    }
}

void Pagamentos::Imprimir() {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << Valores[i] << std::endl;
    }
    std::cout << std::endl;
}

