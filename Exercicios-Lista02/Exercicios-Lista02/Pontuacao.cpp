#include "Pontuacao.h"

Pontuacao::Pontuacao(){
    tamanho = pontuacao.size();
    SelectionSort2(pontuacao);
}

void Pontuacao::SelectionSort2(std::vector<double>& arranjo) {
    for (int i = 0; i < tamanho - 1; i++) {
        int maiorIndice = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (arranjo[j] > arranjo[maiorIndice]) {
                maiorIndice = j;
            }
        }
        if (maiorIndice != i) {
            int temp = arranjo[i];
            arranjo[i] = arranjo[maiorIndice];
            arranjo[maiorIndice] = temp;
        }
    }
}


void Pontuacao::Imprimir() {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << pontuacao[i] << std::endl;
    }
    std::cout << std::endl;
}
