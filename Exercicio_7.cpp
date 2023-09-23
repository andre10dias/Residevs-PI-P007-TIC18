#include <iostream>

using namespace std;

int main(void)
{
    int h, qtdLinhas = 1;

    cout << "Informe a altura desejada: ";
    cin >> h;

    cout << "\n\nFigura A: " << endl << endl;

    for (int i = 1; i <= h ; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }

    cout << "\n\nFigura B: " << endl << endl;

    for (int i = 1; i <= h ; i++)
    {
        for (int j = 1; j <= qtdLinhas; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
        qtdLinhas++;
    }

    cout << "\n\nFigura C: " << endl << endl;

    for (int i = 1; i <= h ; i++)
    {
        for (int j = 1; j <= h; j++)
        {
            if (i == 1 || i == h)
            {
                cout << "*" << " ";
            }
            else
            {
                if (j == 1 || j == h)
                {
                    cout << "*" << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }

    cout << endl;
    return 0;
}