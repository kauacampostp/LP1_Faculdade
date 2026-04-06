#include <iostream>
#include "rh.hpp"
#include "financas.hpp"
using namespace std;

int main() {

  int acao = -1;

  while(acao != 0) {

    cout << "Olá! Seja bem-vindo ao sistema da empresa" << endl;
    cout << "O que voce deseja fazer?\n" << "1 - Cadastrar funcionário\n" << "2 - Adicionar venda\n" << "3 - Emitir relatório\n" << "0 - Finalizar processo\n";
    cin >> acao;

    switch (acao){
      case 1:
        RH::cadastrarFuncionario();
        break;
      
      case 2: { // Declarar variável em C++ no "case" precisa de {}
        double valorVenda;

        cout << "Qual o valor da venda?\n";
        cin >> valorVenda;
        Financas::cadastrarVenda(valorVenda);
        break;
      
      }
      case 3: {
        int opcaoRelatorio = 0;     

        cout << "1 - Relatório do RH\n" << "2 - Relatório das finanças\n";
        cin >> opcaoRelatorio;

        switch (opcaoRelatorio){
        case 1:
          RH::emitirRelatorio();
          break;
        
        case 2:
          Financas::emitirRelatorio();
          break;

        default:
          break;
        }
      }

        break;

      default:
         break;

    }

  }





  return 0;
}