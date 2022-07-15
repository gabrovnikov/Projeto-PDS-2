#include <iostream> 
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <string>
#include <cmath>

#include "historico.hpp"
  using namespace std;

class historico{
    
    void historico_do_usuario (int num_viagens_queveiodousuario_print, int nota_hist, int num_viag){
        
    int num_ruas=30;   int sorteio_lugar, sorteio_nota;    
    cout << "HISTORICO DE " << num_viagens_queveiodousuario_print << " VIAGENS" << endl;
    cout << endl; 
    string vec_strings [30] = {"Rua Jorge Amado","Rua Maracanã","Avenida Mineirão","Avenida Morumbi","Rua João Paulo II",
    "Rua Pietro Derans","Rua Paulo Pinho","Avenida Presidente Dutra","Avenida Getúlio Vargas","Rua Claudio Bandeira",
    "Rua Skrillex","Rua Benedito","Rua Palmeira","Rua Lima","Rua Veneza","Rua Flamengo","Rua Sete","Rua Casimiro",
    "Rua Caixias","Rua Santos","Rua Macieira","Rua Estrela","Rua Rosa","Rua Cominho","Rua Cruzeiro","Rua Tulipa",
    "Rua Carroça","Rua Morena","Rua Castelo","Rua Amora","Rua Marcha"
    };    
    
    /*int var_sorteio=0; 

    int MIN = 0; int MAX = 30;
    std::srand(std::time(nullptr));
    var_sorteio = rand() % MAX;*/
    
    //cout << vec_strings[var_sorteio] << endl;

     
    for (int i=0; i<num_viagens_queveiodousuario_print;i++){
        
    int MIN2 = 0; int MAX2 = 30; //sorteio do lugar
    //std::srand(std::time(nullptr));
    sorteio_lugar = rand() % MAX2;  
    
    int MIN3 = 1; int MAX3 = 5;//sorteio da nota
    //std::srand(std::time(nullptr));
    sorteio_nota = rand() % MAX3;
   
   // cout << sorteio_nota << "SORTEIO NOTA" << endl;   
   // cout << sorteio_lugar << "SORTEIO LUGAR" << endl;
    if (sorteio_nota==0){
        sorteio_nota = 1;
    }
    cout << "Viagem " << i+1 << ":" << endl;
     
  
    cout << vec_strings[sorteio_lugar] << endl;
    
    cout << "Nota: " <<sorteio_nota << endl; 
    
        
    cout << endl ;  
        
        
    }
        
    }    
    
    
    
    int sortear_num_viagens_hist(){

   int MIN = 5; int MAX = 25;
    std::srand(std::time(nullptr));
    int a = rand() % MAX;
    int viag2 = a;
    int b = 0; 
    while (b==0){
         
    if(viag2>MIN){
       std::cout << viag2;
      b=1; 
    }
      
    if(viag2<MIN){
        viag2=rand() % MAX;
      b=0;
    }
   
}

   return viag2;
}
    /*void print_do_historico(int num_viagens_queveiodousuario_print){
     
    int sorteio_lugar, sorteio_nota;    
    for (int i=0; i<num_viagens_queveiodousuario_print;i++){
        
    int MIN2 = 0; int MAX2 = 30; //sorteio do lugar
    std::srand(std::time(nullptr));
    sorteio_lugar = rand() % MAX2;  
    
    int MIN3 = 1; int MAX3 = 5;//sorteio da nota
    std::srand(std::time(nullptr));
    sorteio_nota = rand() % MAX3;
    if (sorteio_nota==0){
        sorteio_nota = 1;
    }
    cout << "Viagem " << i << ":" << endl;
    cout << vec_strings[i] << endl; 
    if (sorteio_lugar%2 == 0){
        cout << "Rua Macieira" << endl;
    }
    
    cout << "Nota: " <<sorteio_nota << endl; 
    
        
      
        
        
    }       
        
        
         
        
        
    } 
        
    */    
    
    
 int main(){
     
     
     int num_viagens_queveiodousuario=22; 
     historico_do_usuario(num_viagens_queveiodousuario);
     //print_do_historico(num_viagens_queveiodousuario);
     
     return 0;
 } 
  
  
    
//};