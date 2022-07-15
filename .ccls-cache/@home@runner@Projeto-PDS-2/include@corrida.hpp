#ifndef CORRIDA_H
#define CORRIDA_H

#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cmath>



  bool confirmar_corrida_c; 
  bool forma_pagamento; // usuario decide entre dinheiro e cartao
  bool pedir_corrida; // pede a corrida
  int calcular_distancia; // calcula a distancia
  int calcular_valor; //tratamento de excecao de colocar mesmo nome de rua
  void status_da_corrida; // fala se a corrida esta em andamento ou nao
  void distancia_restante; // calcula o percentual da corrida
  bool recebimento_c; //condutor confirma que ele recebeu
  bool fim_da_corrida; //finaliza a corrida
  int atribuicao_de_nota; //funciona tanto para condutores quanto para passageiros

#endif