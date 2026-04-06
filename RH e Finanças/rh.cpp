  #include <iostream>
  #include "rh.hpp"
  using namespace std;


  namespace RH {

    int totalFuncionarios = 0;

    void cadastrarFuncionario(){
      totalFuncionarios++;
    }

    void emitirRelatorio() {
      cout << "Total de funcinários cadastrados: " << totalFuncionarios << endl;
    }
  }