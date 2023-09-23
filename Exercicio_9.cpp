#include <iostream>

using namespace std;

int main(void) 
{
    int f1 = 0, f2 = 1, f3, num;

    cout << "\n************************* Sequência de Fibonacci *************************\n";

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << f1 << "\t" << f2 << "\t";
    for (int i = 3; i <= num; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        cout << f3 << "\t";
    }
    
    cout << endl;
    return 0; 
}