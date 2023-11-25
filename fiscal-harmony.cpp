
//arial 12
//1.5 spacing
//statement of the problem
//15mins presentation

//Inclusions of the Program
//Computation of overall salary for certain months
//Computation for Emergency Fund

#include <iostream>
using namespace std;

int main(){
    int userOption, userSignIn;
    string userRegisterEmail, userRegisterPassword, userEmail, userPassword;

    cout << "=============================================================" << endl;
    cout << "\t\t\t\tWelcome to Fiscal Harmony" << endl;
    cout << "=============================================================" << endl;
    cout << "Planning your future for a financial free life." << endl;
    cout << "[1]. Sign In [2]. Sign Up" << endl;
    cout << "|";
    cin >> userOption;
    
    if(userOption == 1){
        cout << "_________________________________" << endl;
        cout << "Username: ";
        cin >> userEmail;
        cout << "Password: ";
        cin >> userPassword;
        cout << "_________________________________" << endl;
    }
    
    if(userOption == 2){
        cout << "_________________________________" << endl;
        cout << "You are now creating an account" << endl;
        cout << "Username: ";
        cin >> userRegisterEmail;
        cout << "Password: ";
        cin >> userRegisterPassword;
        cout << "You have succesfully created an account, would you like to sign in?" << endl;
        cout << "[1]. Yes [2]. No" << endl;
        cout << "|";
        cin >> userSignIn;
        cout << "_________________________________" << endl;
    }
    
    if(userSignIn == 1){
        cout << "Username: ";
        cin >> userEmail;
        cout << "Password: ";
        cin >> userPassword;
        cout << "_________________________________" << endl;
        if(userEmail != userRegisterEmail || userPassword != userRegisterPassword){
            while(userEmail != userRegisterEmail || userPassword != userRegisterPassword){
                cout << "You have entered the wrong username or password, please try again!" << endl;
                cout << "Username: ";
                cin >> userEmail;
                cout << "Password: ";
                cin >> userPassword;
                cout << "_________________________________" << endl;
            }
        }
    cout << "Welcome, " << userEmail << " I hope you have a great time!";
    }