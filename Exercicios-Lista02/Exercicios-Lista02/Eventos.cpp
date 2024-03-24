#include "Eventos.h"

Eventos::Eventos(){

    InsertionSort2(Eventos::agenda);
}

void Eventos::InsertionSort2(std::vector<Eventos::Evento>& eventos) {
    int n = eventos.size();
    for (int i = 1; i < n; i++) {
        Eventos::Evento chave = eventos[i];
        int j = i - 1;
        while (j >= 0 && (eventos[j].dia > chave.dia || (eventos[j].dia == chave.dia && eventos[j].hora > chave.hora))) {
            eventos[j + 1] = eventos[j];
            j = j - 1;
        }
        eventos[j + 1] = chave;
    }
}

void Eventos::Imprimir() {
    for (const auto& evento : agenda) {
        std::cout << "Evento: " << evento.nome << ", Dia: " << evento.dia << ", Hora: " << evento.hora << std::endl;
    }
}
