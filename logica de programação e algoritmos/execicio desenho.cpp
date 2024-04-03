#include <iostream>

int main() {

    using namespace std;

    int valor;
    int linha;
    int coluna;
    int meio;
    int e;
    int d;

    cout << "Digite um numero impar (2<n<20): ";
    cin >> valor;

    if(valor % 2 == 0)
    {
        cout << "1 x 0 Argentina!! Tem que ser impar!\n";
    }
    else
    {
        if(valor <= 2 || valor >= 20)
        {
            cout << "2 x 0 Argentina! Perdeu playboy tem que ser entre 2 e 20\n";
        }
        else
        {
            // primeira forma
            for(linha = 0; linha < valor; linha++)
            {
                if((linha == 0) || (linha == (valor-1)))
                {
                    for(coluna = 0; coluna < valor; coluna++)
                    {
                        cout << "#";
                    }
                    cout << "\n";
                }
                else
                {
                    cout << "#";
                    for(coluna = 0; coluna < (valor-2); coluna++)
                    {
                        cout << " ";
                    }
                    cout << "#";
                    cout << "\n";
                }
            }
            cout << "\n";

            // segunda forma
            for(linha = 0; linha < valor; linha++)
            {
                if((linha == 0) || (linha == (valor-1)))
                {
                    cout << " ";
                    for(coluna = 0; coluna < (valor-2); coluna++)
                    {
                        cout << "#";
                    }
                    cout << "\n";
                }
                else
                {
                    cout << "#";
                    for(coluna = 0; coluna < (valor-2); coluna++)
                    {
                        cout << " ";
                    }
                    cout << "#";
                    cout << "\n";
                }
            }
            cout << "\n";

            // terceira forma
            for(linha = 0; linha < valor; linha++)
            {
                for(coluna = 0; coluna <= linha; coluna++)
                {
                    cout << "#";
                }
                cout << "\n";
            }
            cout << "\n";

            // quarta forma
            for(linha = 0; linha < valor; linha++)
            {
                for(coluna = 0; coluna < (valor - linha -1); coluna++)
                {
                    cout << " ";
                }
                for(coluna = 0; coluna <= linha; coluna++)
                {
                    cout << "#";
                }
                cout << "\n";
            }
            cout << "\n";

            // quinta forma
            for(linha = 0; linha < valor; linha++)
            {
                for(coluna = 0; coluna < linha; coluna++)
                {
                    cout << " ";
                }
                for(coluna = 0; coluna < valor - linha; coluna++)
                {
                    cout << "#";
                }
                cout << "\n";
            }
            cout << "\n";

            // sexta forma
            meio = valor / 2;
            for(linha = 0; linha < valor; linha++)
            {
                if(linha == meio)
                {
                    for (coluna = 0; coluna < valor; coluna++)
                    {
                        cout << "#";
                    }
                }
                else
                {
                    for(coluna = 0; coluna < valor; coluna++)
                    {
                        if(coluna == meio)
                        {
                            cout << "#";
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                cout << "\n";
            }
            cout << "\n";

            // setima forma
            e = meio;
            d = meio;
            for(linha = 0; linha < valor; linha++)
            {
                for (coluna = 0; coluna < valor; coluna++)
                {
                    if(coluna == e || coluna == d)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << "\n";
                if(linha<meio)
                {
                    e--;
                    d++;
                }
                else
                {
                    e++;
                    d--;
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
