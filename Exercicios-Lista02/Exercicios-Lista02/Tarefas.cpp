#include "Tarefas.h"


Tarefas::Tarefas() {
    
    tamanho = tarefas.size();
    mergeSort(tarefas, 0, tamanho - 1);
}

void Tarefas::mergeSort(std::vector<std::string>& tarefas, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(tarefas, left, middle);
        mergeSort(tarefas, middle + 1, right);
        merge(tarefas, left, middle, right);
    }
}

void Tarefas::merge(std::vector<std::string>& tarefas, int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    std::vector<std::string> leftTarefa(n1);
    std::vector<std::string> rightTarefa(n2);

    for (i = 0; i < n1; ++i)
        leftTarefa[i] = tarefas[left + i];
    for (j = 0; j < n2; ++j)
        rightTarefa[j] = tarefas[middle + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (leftTarefa[i] <= rightTarefa[j]) {
            tarefas[k] = leftTarefa[i];
            i++;
        }
        else {
            tarefas[k] = rightTarefa[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        tarefas[k] = leftTarefa[i];
        i++;
        k++;
    }

    while (j < n2) {
        tarefas[k] = rightTarefa[j];
        j++;
        k++;
    }
}

void Tarefas::Imprimir() {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << tarefas[i] << std::endl;
    }
    std::cout << std::endl;
}