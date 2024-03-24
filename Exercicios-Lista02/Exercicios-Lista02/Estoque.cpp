#include "Estoque.h"

Estoque::Estoque() : pagamentos() {
    tamanho = qtd_estoque.size();
    selectionSort(qtd_estoque);
}

void Estoque::selectionSort(std::vector<int>& arranjo) {
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

void Estoque::Imprimir() {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << qtd_estoque[i] << std::endl;
    }
    std::cout << std::endl;
}

