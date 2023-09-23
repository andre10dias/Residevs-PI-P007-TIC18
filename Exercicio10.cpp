#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
    string numStr;
    int num, tamanho, soma = 0;

    cout << "************************* Número Armstrong *************************\n";

    cout << "Digite um número inteiro: ";
    cin >> num;

    numStr = to_string(num);
    tamanho = numStr.size();

    for (int i = 0; i < tamanho; i++)
    {
        int digito = atoi(numStr.substr(i, 1).c_str());
        soma += pow(digito, tamanho);

        cout << digito << "^" << tamanho;
        if (i < tamanho-1)
        {
            cout << " + ";
        }
    }
        
    cout << " = " << soma;

    if (soma == num) 
    {
        cout << " é um número Armstrong.\n";
    }
    else 
    {
        cout << " não é um número Armstrong.\n";
    }
    
    cout << endl;
    return 0; 
}