#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string numStr;
    int num, tamanho;
    bool isPalindromo = true;

    cout << "************************* PALÍNDROMO *************************\n";

    cout << "Digite um número inteiro: ";
    cin >> num;

    numStr = to_string(num);
    tamanho = numStr.size();

    if (tamanho > 9)
    {
        cout << "\n\nDigite no máximo 9 dígitos\n\n";
    }
    else if (num >=0)
    {
        string vetOriginal[tamanho], vetInvertido[tamanho];

        for (int i = 0; i < tamanho; i++)
        {
            vetOriginal[i] = numStr.substr(i, 1);
        }

        for (int j = 0; j < tamanho; j++)
        {
            vetInvertido[j] = vetOriginal[tamanho-j-1];
        }

        for (int x = 0; x < tamanho; x++)
        {
            if (vetInvertido[x] != vetOriginal[x])
            {
                isPalindromo = false;
                break;
            }
        }
        
        if (isPalindromo) {
            cout << "\nÉ Palindromo! \n";
        }
        else {
            cout << "\nNão é Palindromo! \n";
        }
    }
    
    cout << endl;
    return 0; 
}