#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    int N;
    stack<int> pilha;
    cin >> N;

    while (N--)
    {
        string x;
        cin >> x;

        if (x == "PUSH")
        {
            int valor;
            cin >> valor;
            if (pilha.empty())
                pilha.push(valor);
            else
                pilha.push(min(valor, pilha.top()));
        }
        else if (x == "POP")
        {
            if (pilha.size() == 0)
                cout << "EMPTY\n";
            else
                pilha.pop();
        }
        else
        {
            if (pilha.size() == 0)
                cout << "EMPTY\n";
            else
                cout << pilha.top() << "\n";
        }
    }
    return 0;
}