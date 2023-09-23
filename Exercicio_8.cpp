#include <iostream>
#include <string>

using namespace std;

void coutx(string texto);

int main(void) 
{
    int num;
    int soma = 0;

    cout << "Digite um número inteiro: ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma += i;
        }
    }

    cout << endl;

    if (soma == num)
    {
        cout << num << " é um número perfeito." << endl;
    }
    else 
    {
        cout << num << " não é número perfeito." << endl;
    }
    
    cout << endl;
    return 0; 
}