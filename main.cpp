#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "windows.h"
#include "main.h"
#include "chat.h"

using namespace std;

int main()
{
    system("color 0a");//Vert sur fond noir
    string username("BillJones");//Nom par défaut
    string password("pswd");//Pas de password par défaut
    string passwordRight("seminaire");
    string passwordAdmin("fabfab32");//Le bon password
    bool loggedIn(false);
    int menuSelect(0);
    vector<string> onlineUsers;

    do{
        cout << "=======================================" << endl << "=              LOGIN                  =" << endl << "=======================================" << endl << endl << "Username: ";
        cin >> username;
        cout << endl << "Password: ";
        cin >> password;
        cout << endl << "Logging in ..." << endl;
        system("cls");
        if (password == passwordRight)
        {
            loggedIn = true;
            cout << "Welcome back, " << username << " !" << endl;
        }
        else{cout << "The password you entered is incorrect !" << endl;}

    }while(!loggedIn);

    printMenu(username, menuSelect);

    if (menuSelect == 1)
    {
        chatTheShit();
        onlineUsers.push_back(username);
    }
    else if (menuSelect == 2)
    {

    }
    else if (menuSelect == 3)
    {

    }
    else if (menuSelect == 4)
    {

    }
    else
    {

    }

    system("PAUSE");
    return 0;
}

void printMenu(string username, int& menuSelect)
{
    cout << "=================================";
    for (int i=0; i < username.size(); i++)//On ajuste la taille de la bordure
    {cout << "=";};
    cout << endl << "=         " <<"LOGGED IN AS:"<< username <<"         =" << endl << "=================================";
    for (int i=0; i < username.size(); i++)//On ajuste la taille de la bordure (celle du bas)
    {cout << "=";};
    cout << endl << endl << "1- Chat Rooms" << endl << "2- Settings" << endl << "3- Help" << endl << "4- Quit" << endl << endl << "Select an option..." << endl; //Le menu

    cin >> menuSelect;
}
