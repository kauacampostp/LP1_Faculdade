#include <iostream>
using namespace std;

struct aluno {
    int id;
    string nome;
    int idade;
    double notas[3];
    double media;

    // Função para calcular a média do próprio aluno
    void calcularMedia() {
        double soma = 0; // Precisa ser inicializada fora do loop
        for (int i = 0; i < 3; i++) { // i < 3 garante que vai rodar 3 vezes (0, 1 e 2)
            soma += notas[i];
        }
        media = soma / 3.0; // Salva na variável media da struct
        cout << "Sua media e: " << media << endl;
    }
};

int main() {
    aluno alunos[10];     // Array para guardar até 10 alunos
    int totalAlunos = 0;  // Contador para saber quantos foram cadastrados
    int acao;

    while (true) {
        cout << "\n1 - Cadastrar Aluno\n2 - Buscar Aluno\n3 - Ver Alunos Cadastrados\n4 - Media Geral da Turma\n0 - Sair\nEscolha: ";
        cin >> acao;

        if (acao == 0) {
            break;
        }

        switch (acao) {
          case 1: {
            // Cadastrar Aluno
            if (totalAlunos >= 10) {
                cout << "Limite de alunos atingido!\n";
                break;
            }

            aluno p; // Cria um aluno temporário
            
            cout << "Id do aluno: ";
            cin >> p.id;
            cout << "Nome do aluno (sem espacos): "; 
            cin >> p.nome;
            cout << "Idade do aluno: ";
            cin >> p.idade;
            
            cout << "Digite as 3 notas do aluno:\n";
            for (int i = 0; i < 3; i++) {
                cout << "Nota " << i+1 << ": ";
                cin >> p.notas[i]; 
            }

            p.calcularMedia(); // Calcula a média antes de salvar

            // Salva o aluno no vetor principal e aumenta o contador
            alunos[totalAlunos] = p;
            totalAlunos++;
            break;
          }
          case 2 {
            
          }
    return 0;
}