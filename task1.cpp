#include <iostream>
using namespace std;

int main()
{
    long int operand1,operand2;
    char operater;
    int cont;

    cout<<"\n\n\t\t\t\t\tSIMPLE CALCULATOR\n\n";

    do
    {
        cout<<"\n\nEnter the first operand :";
        cin>>operand1;
        cout<<"Enter the operater :";
        cin>>operater;
        cout<<"Enter the second operand :";
        cin>>operand2;
        switch(operater)
        {
            case '+' : cout<<"Result : "<<(operand1+operand2)<<endl;
                        break;

            case '-' : cout<<"Result : "<<(operand1-operand2)<<endl;
                        break;

            case '*' : cout<<"Result : "<<(operand1*operand2)<<endl;
                        break;

            case '/' : cout<<"Result : "<< (float) operand1/operand2<<endl;
                        break;

            default:cout<<"invalid operater"<<endl;
            break;
        }
        cout<<"press 1 to continue and 0 to exit :";
        cin>>cont;
    } while (cont == 1);
    
    return 0;

}