#ifndef RH_H  // Pergunta ao compilador se já tem "RH_HPP" definido. Se sim, ele pula para o endif. Se não, ele segue o código normalmente!
#define RH_H // Define o "RH_HPP" (poderia ser qualquer nome). Assim, o compilador, ao usar ifndef, saberá se já foi usado ou não esse arquivo!

namespace RH {
  void cadastrarFuncionario();
  void emitirRelatorio();
}

#endif
