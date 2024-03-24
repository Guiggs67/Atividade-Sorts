#ifndef EVENTOS_H
#define EVENTOS_H

#include <iostream>
#include <vector>
using std::endl;

class Eventos {
public:
    struct Evento {
        std::string nome;
        int dia;
        int hora;
    };
    Eventos();
    void InsertionSort2(std::vector<Eventos::Evento>& arranjo);
    void Imprimir();

private:

    std::vector<Evento> agenda = {
           {"Palestra 1", 5, 10},
           {"Palestra 2", 5, 9},
           {"Palestra 3", 4, 15},
           {"Palestra 4", 4, 10}
    };
};
#endif