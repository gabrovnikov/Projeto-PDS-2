#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cmath>

#include "usuario_pre_cadastrado.hpp"
#include "realizar_o_cadastro.hpp"
#include "corrida.hpp"

void realizar_o_cadastro();

void cadastro_passageiro_previo(){

cadastro_passageiro Passageiro_previo;
  Passageiro_previo.nome_cadastro = "João";
  Passageiro_previo.idade_cadastro = 27;
  Passageiro_previo.nota_cadastro = 4.75;
  Passageiro_previo.endereco_cadastro = "Maciera";
  Passageiro_previo.telefone_cadastro = "031991287756";

}