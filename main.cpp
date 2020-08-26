#include <iostream>

using namespace std;

int main()
{
    string savedusername = "admin";
    string savedpass = "password";
    string username;
    string pass;
    cout << "Login\nUsername:";
    cin >> username;

    if(username == savedusername){
        cout << "Password:";
        cin >> pass;
        if(pass == savedpass){
            cout << "\nYou Are Logged In\n";
            system("pause");
        }
        else{
            cout << "\nIncorrect Password\n\n";
            main();
            return 0;
        }
    }
    else if(username == "exit"){
        cout << "\nExiting....";
        return 0;
    }
    else{
        cout << "\nUser Does Not Exist\n\n";
        main();
        return 0;
    }
}




