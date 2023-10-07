#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>

using namespace std;

string fname,lname,phone_num;

void addContact();
void searchContact();
void help();
void self_exit();
void deleteContact();
bool check_digit(string);
bool check_number(string);

int main(){
    short int choice;

    system("cls");
    system("color 0A");

    cout << "\n\n\n\t\t\tContact Management.";
    cout << "\n\n\t1. Add Contact\n\t2. Search Contact\n\t3. Help\n\t4. Exit\n\t > ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            addContact();
            break;
        case 2:
            searchContact();
            break;
        case 3:
            help();
            break;
        case 4:
            self_exit();
            break;
        default:
            cout << "\n\n\tInvalid Input!!!";
            cout << "\n\tPress Any Key To Continue . . .";
            getch();
            main();
    }

    return 0;
}

void self_exit(){
    system("cls");
    cout << "\n\n\n\t\tThank You For Using!";
    exit(1);
}

void help(){
    cout << "This displays help";
    cout << "\n\tPress Any Key To Continue . . .";
    getch();
    main();
}

void addContact(){
    ofstream phone("number.txt",ios::app); // ofstream => output file, app => append
    system("cls");
    cout << "\n\n\tEnter First Name : ";
    cin >> fname;
    cout << "\n\tEnter Last Name : ";
    cin >> lname;
    cout << "\n\tEnter 10-Digit Phone Number : ";
    cin >> phone_num;

    if(check_digit(phone_num) == true){
        if(check_number(phone_num) == true){
            if(phone.is_open()){
                phone << fname << " " << lname << " " << phone_num << endl;
                cout << "\n\tContact Saved Succesfully";
                cout << "\n\tPress Any Key To Continue . . .";
                getch();
                main();
            }else{
                cout << "\n\tError Opening File";
                cout << "\n\tPress Any Key To Continue . . .";
                getch();
                main();
            }
        }else{
            cout << "\n\tPhone number must contain Number's[0-9]!!!" << endl;
            cout << "\n\tPress Any Key To Continue . . .";
            getch();
            main();
        }
    }else{
        cout << "\n\tA Phone Number Must Contain 10 Digits.";
        cout << "\n\tPress Any Key To Continue . . .";
        getch();
        main();
    }
    phone.close();
}

void searchContact(){
    bool found = false;
    ifstream myfile("number.txt");
    string keyword;
    cout << "\n\tEnter Name To Search : ";
    cin >> keyword;
    while(myfile >> fname >> lname >> phone_num){
        if(keyword == fname || keyword == lname){
            system("cls");
            cout << "\n\n\n\t\tContact details. . .";
            cout << "\n\n\tFirst Name : " << fname;
            cout << "\n\tLast Name : " << lname;
            cout << "\n\tPhone Number : " << phone_num;
            cout << "\n\tPress Any Key To Continue . . .";
            getch();
            main();
            found = true;
            break;
       }
    }
    if(found == false){
            cout << "\n\n\tNo Such Contact" << endl;
            cout << "\tPress Any Key To Continue . . .";
            getch();
            main();
    }
}

bool check_digit(string x){
    if(x.length() == 10){
        return true;
    }else{
        return false;
    }
}

bool check_number(string x){
    bool check = true;

    for(int i=0; i<x.length();i++){
        if(!(int(x[i]) >= 48 && int(x[i]) <= 57)){
            check = false;
            break;
        }
    }

    if(check == true){
        return true;
    }else{
        return false;
    }
}