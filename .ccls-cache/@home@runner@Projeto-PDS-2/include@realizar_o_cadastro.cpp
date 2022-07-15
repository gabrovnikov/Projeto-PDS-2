#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cmath>

#include "realizar_o_cadastro.hpp"

  class dados_cadastrais{

    public:
    std::string nome_cadastro;
    double nota_cadastro=5; 
    int idade_cadastro;
    std::string telefone_cadastro;

}; 

class cadastro_condutor:public               dados_cadastrais{

    public:
    std::string placa_cadastro; 
    std::string modelo_do_carro;

};

class cadastro_passageiro:public             dados_cadastrais{

    public:
    std::string endereco_cadastro; 

};

void realizar_o_cadastro(){

   
   bool passageiro_ou_condutor; 
   std::cout << "NOVO NO APLICATIVO? FACA SEU CADASTRO" << std::endl;
   std::cout << "VOCE E PASSAGEIRO OU CONDUTOR? SE FOR PASSAGEIRO DIGITE 0. SE FOR CONDUTOR DIGITE 1" << std::endl;
   std::cin >> passageiro_ou_condutor;
   
   
  if(passageiro_ou_condutor==0){
      
    cadastro_passageiro Passageiro_1;
    std::cout << "POR FAVOR DIGITE SEU NOME" << std::endl;  
    std::cin >> Passageiro_1.nome_cadastro;
    std::cout << "POR FAVOR DIGITE SUA IDADE" << std::endl;
    std::cin >> Passageiro_1.idade_cadastro;
    std::cout << "POR FAVOR DIGITE SEU TELEFONE (DDD)(9XXXX-XXXX)" << std::endl;
    std::cin >> Passageiro_1.telefone_cadastro; 
    std::cout << "POR FAVOR DIGITE SEU ENDERECO" << std::endl; 
    std::cin >> Passageiro_1.endereco_cadastro;
    std::cout << "|-----------------------------------------------------------------------|" << std::endl;
    std::cout << "CADASTRO CONCLUIDO!" << std::endl; 
    
    std::cout << "SUA NOTA INICIAL E DE: " << Passageiro_1.nota_cadastro << " PONTOS" << std::endl;
    std::cout << "NOME: " << Passageiro_1.nome_cadastro << std::endl;
    std::cout << "IDADE: " << Passageiro_1.idade_cadastro << std::endl;
    std::cout << "TELEFONE: " << Passageiro_1.telefone_cadastro << std::endl;
    std::cout << "ENDERECO: Rua " << Passageiro_1.endereco_cadastro << std::endl;
     
  }
      
    else if(passageiro_ou_condutor==1){
      
      cadastro_condutor Condutor_1; 
      std::cout << "POR FAVOR DIGITE SEU NOME" << std::endl;  
    std::cin >> Condutor_1.nome_cadastro;
    std::cout << "POR FAVOR DIGITE SUA IDADE" << std::endl;
    std::cin >> Condutor_1.idade_cadastro;
    std::cout << "POR FAVOR DIGITE SEU TELEFONE (DDD)(9XXXX-XXXX)" << std::endl;
    std::cin >> Condutor_1.telefone_cadastro;  
    std::cout << "POR FAVOR, DIGITE A PLACA DO SEU CARRO" << std::endl;
    std::cin >> Condutor_1.placa_cadastro; 
    std::cout << "POR FAVOR, DIGITE O MODELO DO SEU CARRO" << std::endl; 
    std::cin >> Condutor_1.modelo_do_carro; 
    std::cout << "|-----------------------------------------------------------------------|" << std::endl;     
     std::cout << "CADASTRO CONCLUIDO!" << std::endl; 
     std::cout << "SUA NOTA INICIAL E DE: " << Condutor_1.nota_cadastro << " PONTOS" << std::endl;
    std::cout << "NOME: " << Condutor_1.nome_cadastro << std::endl;
    std::cout << "IDADE: " << Condutor_1.idade_cadastro << std::endl;
    std::cout << "TELEFONE: " << Condutor_1.telefone_cadastro << std::endl; 
    std::cout << "PLACA: " << Condutor_1.placa_cadastro << std::endl;
    std::cout << "MODELO: " << Condutor_1.modelo_do_carro << std::endl;  
    }   
};

void cadastro_passageiro_previo(){

cadastro_passageiro Passageiro_previo;
  Passageiro_previo.nome_cadastro = "João";
  Passageiro_previo.idade_cadastro = 27;
  //Passageiro_previo.nota_cadastro = 4.75;
  Passageiro_previo.endereco_cadastro = "Maciera";
  Passageiro_previo.telefone_cadastro = "031991287756";
}

void cadastro_condutor_previo(){

cadastro_condutor Condutor_previo;
  Condutor_previo.nome_cadastro = "Pedro";
  Condutor_previo.idade_cadastro = 43;
  //Condutor_previo.nota_cadastro = 4.92;
  Condutor_previo.placa_cadastro = "OYX9986";
  Condutor_previo.telefone_cadastro = "033992231209";
  Condutor_previo.modelo_do_carro = "Siena";
}