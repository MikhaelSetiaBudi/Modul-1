#include <iostream>
using namespace std;
// main program
int main()
{
    char op;
    float num1, num2;
    cout<<"Masukan Operator: ";
    cin>>op;
    cout<<"\nMasukan Bilangan ke-1: ";
    cin>>num1;
    cout<<"\nMasukan Bilangan ke-2: ";
    cin>>num2;

    switch (op)
    {
    case '+':
        cout<< num1 + num2;
        break;
    case '-':
        cout<< num1 - num2;
        break ;
    case '*':
        cout<< num1 * num2;
        break;
    case '/':
        cout<< num1 / num2;
        break;
    default:
        cout<< "Eror! operator is not correct";
    }
    return 0;
}