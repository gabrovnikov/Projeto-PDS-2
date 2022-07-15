#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cmath>

#ifndef CADASTRO_H
#define CADASTRO_H
class dados_cadastrais{

    public:
    std::string nome_cadastro;
    double nota_cadastro=5; 
    int idade_cadastro;
    std::string telefone_cadastro;

}; 
void realizar_o_cadastro();
void cadastro_passageiro_previo();

#endif