#include "Estoque.h"
#include "Tarefas.h"
#include "Pontuacao.h"
#include "Eventos.h"

int main() {
    Estoque estoque;
    Tarefas tarefas;
    Pontuacao pontucao;
    Eventos eventos;

    std::cout << "Exercicio 2:" <<endl;
    estoque.Imprimir();
    std::cout << "Exercicio 4:" << endl;
    estoque.pagamentos.Imprimir();
    std::cout << "Exercicio 6:" << endl;
    tarefas.Imprimir();
    std::cout << "Exercicio 8:" << endl;
    pontucao.Imprimir();
    std::cout << "Exercicio 10:" << endl;
    eventos.Imprimir();

    return 0;
}
