#include<iostream>
using namespace std;

int main(){
    int Num, evenNum = 0, oddNum = 0;

    cout << "Enter an integer: " ;
    cin >> Num;
    while (Num != 0){
        if (Num % 2 == 0){
            evenNum++;
        } else{
            oddNum++;
        }
        cout << "Enter an integer: " ;
        cin >> Num;
    }

    cout << "#Even numbers = " << evenNum << "\n";
    cout << "#Odd numbers = " << oddNum;

    return 0;
}