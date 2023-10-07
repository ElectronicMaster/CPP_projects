#include<iostream>

using namespace std;

int playQuiz();

int main(){
    system("cls");
    system("color 0A");

    char choice;

    cout << "|--------------------------------------------------------------|" << endl;
    cout << "|                     Welcome to Quiz Game                     |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;
    cout << "|               Please Follow The Instructions                 |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;
    cout << "| Step 1 : Quiz contains total of 10 questions                 |" << endl;
    cout << "| Step 2 : You will be given 1 marks for each right answers    |" << endl;
    cout << "| Step 3 : Their will be no negative marking                   |" << endl;
    cout << "| Step 4 : Please press s to start the quiz                    |" << endl;
    cout << "| Step 5 : Please Select Option (A),(B),(C) or (D)             |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;
    cout << "|                        ALL THE BEST                          |" << endl;
    cout << "|--------------------------------------------------------------|" << endl;
    
    int score = playQuiz();

    system("cls");
    if(score >= 6){
        cout << "You have PASSED the Quiz!!!" << endl;
    }else{
        cout << "You have FAILED the Quiz!!!" << endl;
    }
    cout << "Your Score : " << score << endl; 
    cout << "THANK YOU FOR TAKING!!!"  << endl;
    cout << "\nDo you want to take the QUIZ AGAIN ? [Y/N] : ";
    cin >> choice;

    if(choice == 'Y' || choice == 'y'){
        main();
    }else{
        system("cls");
        cout << "THANK YOU FOR TAKING!!!"  << endl;
        exit(1);
    }
    
    return 0;
}

int playQuiz(){
    char c;
    char option;
    int marks=0;
    cout << "Press s to start : ";
    cin >> c;
    cout << endl;
    if(c == 's' || c == 'S'){
        cout << "\tQ1 : What is the capital of INDIA ?" << endl;
        cout << "Options: \n\t(A)Delhi\t(B)Mumbai\n\t(C)Kolkata\t(D)Chennai" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        system("cls");
        if(option == 'a' || option == 'A'){
            marks++;
        }else{
            marks += 0;
        }
        cout << "\tQ2 : Who is the PM of INDIA ?" << endl;
        cout << "Options: \n\t(A)Adityanath\t(B)Narendra Modi\n\t(C)Kejriwal\t(D)Nitin" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'b' || option == 'B'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ3 : What is the national bird of INDIA ?" << endl;
        cout << "Options: \n\t(A)Crow\t\t(B)Parrot\n\t(C)Pigeon\t(D)Peakock" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'd' || option == 'D'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ4 : What is the national animal of INDIA ?" << endl;
        cout << "Options: \n\t(A)Lion\t\t(B)Zebra\n\t(C)Tiger\t(D)Leopard" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'c' || option == 'C'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ5 : What is the national flower of INDIA ?" << endl;
        cout << "Options: \n\t(A)Lily\t\t(B)Lotus\n\t(C)Rose\t\t(D)Sunflower" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'b' || option == 'B'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ6 : Who is the chief minister of UP ?" << endl;
        cout << "Options: \n\t(A)Adityanath\t(B)Kejriwal\n\t(C)Nitin\t(D)Raghunath" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'a' || option == 'A'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ7 : What is the capital of Tamil Nadu ?" << endl;
        cout << "Options: \n\t(A)Bangalore\t(B)Hydrabad\n\t(C)Chennai\t(D)Lukhnow" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'c' || option == 'C'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ8 : What is the capital of Jharkhand ?" << endl;
        cout << "Options: \n\t(A)Ranchi\t(B)Ramgarh\n\t(C)Plamu\t(D)Dhanbad" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'a' || option == 'A'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ9 : Who is the leader of CONGRESS ?" << endl;
        cout << "Options: \n\t(A)Sonia\t(B)Rahul\n\t(C)Roshan\t(D)Rohit" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'b' || option == 'B'){
            marks++;
        }else{
            marks += 0;
        }
        system("cls");
        cout << "\tQ10 : Which one of the following state comes in north region ?" << endl;
        cout << "Options: \n\t(A)Tamil Nadu\t(B)Andhra Pradesh\n\t(C)Dheli\t(D)Jammu and Kashmir" << endl;
        cout << "\nEnter option : ";
        cin >> option;
        if(option == 'd' || option == 'D'){
            marks++;
        }else{
            marks += 0;
        }
    }else{
        cout << "Thank You!!!" << endl;
        exit(1);
    }

    return marks;
}