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
    cout << ">|";
    cin >> userOption;

    while (userOption != 1 && userOption != 2) {
        cout << "_________________________________" << endl;
        if (cin.fail() || (userOption != 1 && userOption != 2)) {
            // Invalid input, clear the error state and discard the invalid input 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // They need to input a valid number which is only 1 and 2, rather than 3 to ∞ or 0 to -∞, also invalid alphabetical letters
            cout << "Invalid input. Please enter a valid number (1 or 2)." << endl;
            cout << ">|";
        }
        cin >> userOption;
    }
    
    switch(userOption)
    {
    
    case 1:
        cout << "_________________________________" << endl;
        cout << "You are now signing in..." << endl;
        cout << "Username: "; cin >> userEmail;
        cout << "Password: "; cin >> userPassword;
        cout << "_________________________________" << endl;

        if(userEmail != "admin" || userPassword != "password"){
            while(userEmail != "admin" || userPassword != "password"){
                cout << "Invalid password or username, please try again!" << endl;
                cout << "Username: "; cin >> userEmail;
                cout << "Password: "; cin >> userPassword;
                cout << "_________________________________" << endl;
                
            }
        }
        
        break;
    
    case 2:
        cout << "_________________________________" << endl;
        cout << "You are now creating an account" << endl;
        cout << "Username: "; cin >> userRegisterEmail;
        cout << "Password: "; cin >> userRegisterPassword;
        cout << "You have succesfully created an account, would you like to sign in?" << endl;
        cout << "[1]. Yes [2]. No" << endl;
        cout << ">|"; cin >> userSignIn;
        cout << "_________________________________" << endl;
        
        while (userSignIn != 1 && userSignIn != 2) {
        cout << "_________________________________" << endl;
        if (cin.fail() || (userSignIn != 1 && userSignIn != 2)) {
            // Invalid input, clear the error state and discard the invalid input 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // They need to input a valid number which is only 1 and 2, rather than 3 to ∞ or 0 to -∞, also invalid alphabetical letters
            cout << "Invalid input. Please enter a valid number (1 or 2)." << endl;
            cout << ">|";
        }
            cin >> userSignIn;
        }
        
        if (userSignIn == 1){
            cout << "Username: "; cin >> userEmail;
            cout << "Password: "; cin >> userPassword;
            cout << "_________________________________" << endl;
            if(userEmail != userRegisterEmail || userPassword != userRegisterPassword){
                while(userEmail != userRegisterEmail || userPassword != userRegisterPassword){
                    cout << endl;
                    cout << "You have entered the wrong username or password, please try again!" << endl;
                    cout << "Username: "; cin >> userEmail;
                    cout << "Password: "; cin >> userPassword;
                    cout << "_________________________________";
                }
            }
        } else if (userSignIn == 2){
            cout << "Have a great day ahead!";
        } else {
            cout << "Invalid input";
        }
    }
    cout << "Welcome, " << userEmail << " I hope you have a great time!" << endl;
}