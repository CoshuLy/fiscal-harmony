#include <iostream>
#include <cmath>
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

    while (userOption != 1 && userOption != 2) {
        cout << "_________________________________" << endl;
        if (cin >> userOption) {
            // Valid input, break out of the loop
            break;
        } else {
            // Invalid input, clear the error state and discard the invalid input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid input. Please enter a valid number." << endl;
            cout << "|";
        }
        cin >> userOption;
    }
    
    switch(userOption)
    {
    
    case 1:
        cout << "_________________________________" << endl;
        cout << "You are now signing in..." << endl;
        cout << "Username: ";
        cin >> userEmail;
        cout << "Password: ";
        cin >> userPassword;
        cout << "_________________________________" << endl;

        if(userEmail != "admin" || userPassword != "password"){
            while(userEmail != "admin" || userPassword != "password"){
                cout << "Invalid password or username, please try again!" << endl;
                cout << "Username: ";
                cin >> userEmail;
                cout << "Password: ";
                cin >> userPassword;
                cout << "_________________________________" << endl;
                
            }
        }
        
        break;
    
    
    case 2:
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
        
        if (userSignIn == 1){
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
                cout << "_________________________________";
                break;
                }
            }
        }
    }
    cout << "Welcome, " << userEmail << " I hope you have a great time!" << endl;
}