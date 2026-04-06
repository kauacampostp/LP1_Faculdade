#include <iostream>
#include "financas.hpp"

namespace Financas {

  double totalVendas = 0.0;

  void cadastrarVenda(double valor) {
    totalVendas += valor;
  }

  void emitirRelatorio() {
    std::cout << "O valor total de vendas é: " << totalVendas << std::endl;
  }

}
