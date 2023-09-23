#include <iostream>

using namespace std;

int main(void) 
{
    int h;

    cout << "Informe a altura desejada: ";
    cin >> h;

    char ch = 'A';
    int qtdLinhas = 1;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= qtdLinhas; j++)
        {
            cout << ch;
            ch++;
        }

        cout << endl;
        qtdLinhas++;
    }

    cout << endl;
    return 0;
}