#include <iostream>

using namespace std;

void TestaValidaNumero(int num){
    if (num <= 0) {
        throw 1;
    } else if (num > 100 && num<1000) {
        throw 2;
    }
        else if (num >=1000) {
        throw 3;
    }
    else{
        throw 4;
    }
}

int main() {
    int num;
    cout << "Digite o valor: ";
    cin >> num ;

    try {
        TestaValidaNumero(num);
    }
    catch(int erro) {
        if (erro == 1) {
            cout << "ValorAbaixoException" << endl;
        }
        else if (erro == 2) {
            cout << "ValorAcimaException" << endl;
        }
         else if (erro == 3) {
            cout << "ValorMuitoAcimaException" << endl;
        }
         else if (erro == 4) {
            cout << "Numero valido" << endl;
        }
    }

    return 0;
}
