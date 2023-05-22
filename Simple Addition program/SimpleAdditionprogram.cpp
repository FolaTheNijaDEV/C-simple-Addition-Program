#include <iostream>
using namespace std;

int main() //This is a simple program that calculates  
// your Schoolfees by calculating your tuition fee and jambregfee
{
    int Schoolfees , Tuitionfee, Jambregfee ;
    cout << "input your Tuitionfee here" << endl;
    cin >> Tuitionfee;
    cout << "Input your Jambregfee too " << endl;
    cin >> Jambregfee;
    int Scholfees = Tuitionfee + Jambregfee;
    cout << "Your Schoolfees is " << Scholfees ;
    system("pause>0");
}

