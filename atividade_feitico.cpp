#include <iostream>
#include <string>
using namespace std;

// =======================
//   ESTRUTURA GLOBAL
// =======================
struct Feitico {
    string nome;
    int dificuldade;
    int dano_base;
    float custo_mana_final;
};

// =======================
//          MAIN
// =======================
int main() {

    // Atribuição direta
    Feitico f;
    f.nome = "Relâmpago em Cadeia";
    f.dificuldade = 4;
    f.dano_base = 75;

    float multiplicador = 1.0;

    // Cálculo condicional do multiplicador
    if (f.dificuldade == 1 || f.dificuldade == 2) {
        multiplicador = 1.0;
    }
    else if (f.dificuldade == 3 || f.dificuldade == 4) {
        multiplicador = 1.5;
    }
    else if (f.dificuldade == 5) {
        multiplicador = 2.0;
    }

    // Cálculo final do custo de mana
    f.custo_mana_final = f.dano_base * multiplicador;

    // Exibição da ficha
    cout << "===== FICHA DO FEITICO =====\n";
    cout << "Nome: " << f.nome << endl;
    cout << "Dificuldade: " << f.dificuldade << endl;
    cout << "Dano Base: " << f.dano_base << endl;
    cout << "Custo de Mana (Final): " << f.custo_mana_final << endl;

    return 0;
}
