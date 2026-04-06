#include <iostream>
using namespace std;

struct Item {
    string nome;
    int quant;
    double vu;
};


struct Pedido {
    Item itens[10];
    int totalPedidos = 0;
    
    
    void valorTotal() {
        double vt = 0;
        
        for (int i = 0; i < totalPedidos; i++)
            vt += itens[i].quant * itens[i].vu;
        
        cout << "O valor total do pedido é: R$" << vt << endl;
    }
};



struct impressora {
  void imprimir(Item item) {
    cout << "- " << item.nome << " | Qtd: " << item.quant << " | Valor Un: R$" << item.vu << endl;
  };

  void imprimir(Pedido pedido) {
    cout << "\n--- ITENS DO PEDIDO ---\n";
    for (int i = 0; i < pedido.totalPedidos; i++) {
        imprimir(pedido.itens[i]); // Reaproveita o método de imprimir Item
    }
    pedido.valorTotal();
    cout << "-----------------------\n";
    }




};





int main() {
    Pedido meupedido;
    int acao = 0;
    
    
    while (true) {
        
        cout << "1 - Adicionar item\n" 
        << "2 - Valor total do pedido\n" 
        << "3 - Imprimir valor\n"
        << "0 - Finalizar\n";
        cin >> acao;
        
        if (acao == 0) {
            break;
        }
        
        
        Item p;
        
        switch (acao) {
            case 1:
                if (meupedido.totalPedidos < 10) {
                
                    cout << "Digite o nome do item:\n";
                    cin >> p.nome;
                    cout << "Digite a quantidade do item:\n";
                    cin >> p.quant;
                    cout << "Digite o val. unitário do item:\n";
                    cin >> p.vu;
                    meupedido.itens[meupedido.totalPedidos] = p;
                    meupedido.totalPedidos++;
                    system ("cls");
                    break;
                } else {
                    cout << "Limite de pedidos atingido\n";
                    break;
                }
            case 2:
                meupedido.valorTotal();
                break;
            case 3:
                break;
        }
    }

    return 0;
}


