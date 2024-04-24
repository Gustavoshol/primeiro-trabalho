
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    
    float valorProduto, valorPago, troco;

    cout << "Digite o valor do produto: ";
    cin >> valorProduto;

    cout << "Digite o valor pago: ";
    cin >> valorPago;

    troco = valorPago - valorProduto;

    cout << "Troco: " << troco << endl;
    
    return 0;
}