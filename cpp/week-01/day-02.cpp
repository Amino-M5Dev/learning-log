#include <iostream>

using namespace std;

// ============================
// 6) FUNCTIONS (declarações)
// ============================

void saudacao() {
    cout << "Hello from a function!\n";
}

int soma(int a, int b) {
    return a + b;
}

int main() {

    cout << "===== C++ CONTROL STRUCTURES =====\n\n";

    // ============================
    // 1) IF / ELSE
    // ============================

    cout << "--- If / Else ---\n";

    int numero = 10;

    if (numero > 0) {
        cout << "Numero positivo\n";
    } 
    else if (numero < 0) {
        cout << "Numero negativo\n";
    } 
    else {
        cout << "Numero eh zero\n";
    }

    cout << endl;

    // ============================
    // 2) SWITCH
    // ============================

    cout << "--- Switch ---\n";

    int opcao = 2;

    switch(opcao) {
        case 1:
            cout << "Opcao 1 selecionada\n";
            break;

        case 2:
            cout << "Opcao 2 selecionada\n";
            break;

        case 3:
            cout << "Opcao 3 selecionada\n";
            break;

        default:
            cout << "Opcao invalida\n";
    }

    cout << endl;

    // ============================
    // 3) WHILE LOOP
    // ============================

    cout << "--- While Loop ---\n";

    int contador = 0;

    while (contador < 5) {
        cout << "Contador: " << contador << endl;
        contador++;
    }

    cout << endl;

    // ============================
    // 4) FOR LOOP
    // ============================

    cout << "--- For Loop ---\n";

    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << endl;
    }

    cout << endl;

    // ============================
    // 5) NESTED LOOPS
    // ============================

    cout << "--- Nested Loops ---\n";

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    cout << endl;

    // ============================
    // 6) FUNCTIONS
    // ============================

    cout << "--- Functions ---\n";

    saudacao();

    int resultado = soma(5, 3);
    cout << "Soma: " << resultado << endl;

    cout << endl;

    return 0;
}