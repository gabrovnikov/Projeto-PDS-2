#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cmath>

#include "corrida.hpp"
#include "realizar_o_cadastro.hpp"

class dados_cadastrais{

    public:
    std::string nome_cadastro;
    double nota_cadastro=5; 
    int idade_cadastro;
    std::string telefone_cadastro;

};

class cadastro_condutor:public 
  dados_cadastrais{

    public:
    std::string placa_cadastro; 
    std::string modelo_do_carro;

};

class cadastro_passageiro:public             
    dados_cadastrais{

    public:
    std::string endereco_cadastro; 

};

class corrida:public cadastro_condutor, public cadastro_passageiro{

public:
  /*bool confirmar_corrida_c; 
  bool forma_pagamento; // usuario decide entre dinheiro e cartao
  bool pedir_corrida; // pede a corrida
  int calcular_distancia; // calcula a distancia
  int calcular_valor; //tratamento de excecao de colocar mesmo nome de rua
  void status_da_corrida(); // fala se a corrida esta em andamento ou nao
  void distancia_restante(); // calcula o percentual da corrida
  bool recebimento_c; //condutor confirma que ele recebeu
  bool fim_da_corrida; //finaliza a corrida
  int atribuicao_de_nota; //funciona tanto para condutores quanto para passageiros

//------------------------------------//*/



int calcular_distancia() {
    int a = 0; int MAX = 100;
    std::srand(std::time(nullptr));
    a = rand() % MAX;
    int dist2 = a;
        std::cout << dist2;
        std::cout << std::endl;
         
    if(dist2==0){
        dist2=dist2+2;
}
    if(dist2==1){
        dist2=dist2+1;
    }
    return dist2;
}
//------------------------------------//
double calcular_valor(int distancia){
  double combustivel = 7.40;
  double valor_minimo = 5.50;
  int rendimento = 8; 
  double valor_final = ((distancia*combustivel)/rendimento)+distancia; 
  return valor_final; 
  
}
//------------------------------------//
bool forma_pagamento(){
  char forma_p;
  std::cout << "COMO VOCE DESEJA REALIZAR O PAGAMENTO? SELECIONE DINHEIRO/CARTAO (d/c)" << std::endl; 
  std::cin >> forma_p;

  switch (forma_p){

    case 'd':
    return 1;
    break;


    case 'c':
    return 0;
    break; 
    
  }

  
  }
//------------------------------------//
bool pedir_corrida(double valor_pedir, int distancia_pedir){

char pedir;  
bool decisao_u; 
std::cout << "VALOR:" << valor_pedir << std::endl;
std::cout << "DISTANCIA: " << distancia_pedir << std::endl; 
std::cout << "VOCE QUER ACEITAR A CORRIDA? ( s / n )" << std::endl;
std::cin >> pedir;

  switch (pedir)
    {
      case 's':
      decisao_u = 1;
      std::cout << "CORRIDA ACEITA! AGUARDANDO CONFIRMACAO DO CONDUTOR" << std::endl;
      break;

      case 'n':
      decisao_u= 0;
      std::cout << "CORRIDA RECUSADA!" << std::endl;
      break;
    }

return decisao_u; 
  
}
//------------------------------------//
bool confirmar_corrida_c(double valor_c, int distancia_c){

  std::cout << "O valor da corrida e: " << valor_c << std::endl;
  std::cout << "A distancia da corrida e: " << distancia_c << std::endl;
  char aceitar;
  int match_c;
  std::cout << "Voce aceita a corrida? (s/n)" << std::endl;
  std::cin >> aceitar; 
    switch (aceitar)
      {
        case 's':
        match_c = 1;
        std::cout << "A CORRIDA FOI CONFIRMADA"<< std::endl;
        break;

        case 'n':
        match_c = 0;
        std::cout << "VOCE RECUSOU A CORRIDA!" << std::endl;
        break;
      } 
  return match_c; 
}
//------------------------------------//
void status_da_corrida(int match_st){
  if (match_st == 1){
    std::cout << "A CORRIDA ESTA EM ANDAMENTO" << std::endl;
  }
    else if(match_st == 0){
    std::cout << "CORRIDA CANCELADA PELO CONDUTOR" << std::endl;
}
}
//------------------------------------//
bool distancia_restante(int dist_rest){
  //tempo de sleep

  int loops = dist_rest;
  int fator_porcentagem= 100/loops; 
  int porcentagem_corrida=0;
  int interval_Milisseg;
  for (int i = 0; i<=loops;i++){
    std::cout << "A SUA CORRIDA ESTA EM: " << porcentagem_corrida << '%' << std::endl; 
  porcentagem_corrida= porcentagem_corrida + fator_porcentagem;    
    
      if (fator_porcentagem<=10){
       interval_Milisseg = 800;
        //cout << "100 ms" << endl;
      std::this_thread::sleep_for(std::chrono::milliseconds(interval_Milisseg));
      }
    if (fator_porcentagem>10){
       interval_Milisseg = 1000;
      //cout << "500 ms" << endl;
      std::this_thread::sleep_for(std::chrono::milliseconds(interval_Milisseg));
      }
  
  }

std::cout << "VOCE CHEGOU AO SEU DESTINO. REALIZE O PAGAMENTO"<< std::endl; 
if (porcentagem_corrida == 100){
  return 1;
}   
}
//------------------------------------//
bool recebimento_c (int valor_p){

 bool confirmacao; 
  int interval_Milisseg = 6000;
  std::cout << "O VALOR DA CORRIDA E DE: " << valor_p << " REAIS" << std::endl; 
  std::cout << "AGUARDANDO" << std::endl; 
  //so funciona o sleep for se houver endl
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout << "." << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout << "." << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout << "." << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));
  std::cout << "CONFIRME O RECEBIMENTO DO DINHEIRO (DIGITE 1). CASO NÃO HAJA PAGAMENTO, DIGITE 0" << std::endl; 
  std::cin >> confirmacao; 

  
  
  if (confirmacao == 1){
  
  std::cout << "CORRIDA ENCERRADA" << std::endl;   
  return 1;
  }

  if (confirmacao == 0){

    std::cout << "FOI ENVIADO UM RELATORIO A CENTRAL E O CASO IRA SER ANALISADO. OBRIGADO POR SEU SERVICO" << std::endl;  
    return 1;
  } 
}
//------------------------------------//
int fim_da_corrida(bool dist_fim){

  if (dist_fim==1) {

    std::cout << "CORRIDA FINALIZADA. OBRIGADO POR VIAJAR CONOSCO" << std::endl;

    return 1;
  }      
  else {std::cout << "UMA DAS DUAS E ZERO" << std::endl; 
  }  
}
//------------------------------------//
int atribuicao_de_nota(){

  int valor_nota;
  std::cout << "COMO VOCE AVALIA A CORRIDA? DIGITE NUMEROS INTEIROS DE 1 A 5" << std::endl; 
  std::cin >> valor_nota; 
  
  while(valor_nota <1 || valor_nota > 5 ){
  std::cout << "NOTA INVALIDA. DIGITE NOVAMENTE." << std::endl;
  std::cin >> valor_nota;  
}
  std::cout << "VOCE AVALIOU A CORRIDA COM " << valor_nota << " ESTRELAS";
  return valor_nota; 
  }
  //------------------------------------//
};