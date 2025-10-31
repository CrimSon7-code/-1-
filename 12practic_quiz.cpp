#include <windows.h>
#include <cstdlib>
#include <iostream>
using namespace std;

string player_name = "player";
int settings_choice;
int queNum;
int color_sys;

void game() {
    system("cls");
    int hp = 3;
    int score = 0;
    string answer;

    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;

    // Вопрос 1
    cout << "[1] Which programming language is a system language?\n [a] python   [b] C# \n [c] Ruby  [d] C++" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "b" && answer != "B") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;

    // Вопрос 2
    cout << "[ 2 ] Question: What is a variable in C++?\n [a] Memory space for storing data  [b] A function for outputting information \n [c] Data type  [d] A comparison operation" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "a" && answer != "A") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;

    // Вопрос 3
    cout << "[ 3 ] Question: Which operator is used for assignment in C++?\n [a] ==  [b] -> \n [c] =  [d] -" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "c" && answer != "C") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 4
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 4 ] Question: What is a loop in programming?\n [a] A repeated sequence of commands  [b] A conditional expression \n [c] A function  [d] A variable" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "a" && answer != "A") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 5
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 5 ] Question: How to declare an integer variable in C++?\n [a] int x;  [b] float x; \n [c] string x;  [d] bool x;" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "a" && answer != "A") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 6
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 6 ] Question: What does the #include directive mean in C++?\n [a] Including a standard library  [b] Declaring a function \n [c] Declaring a variable  [d] Creating a class" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "a" && answer != "A") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 7
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 7 ] Question: What is the entry point function in a C++ program?\n [a] main()  [b] start() \n [c] init()  [d] run()" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "a" && answer != "A") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 8
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 8 ] Question: What is an array in C++?\n [a] A collection of functions  [b] A set of variables of the same type \n [c] A data structure  [d] A pointer" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "b" && answer != "B") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Проверка победы
    if (queNum == 8) {
        cout << "You've won the game! Click to continue" << endl;
        cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 9
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 9 ] Question: Which operator is used to output information to the screen?\n [a] read  [b] print \n [c] cout  [d] display" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "c" && answer != "C") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 10
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 10 ] Question: What does the 'public' keyword mean in a class?\n [a] Access restriction  [b] Declaring a function \n [c] Declaring a variable  [d] Access modifier" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "d" && answer != "D") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }
    
    // Вопрос 11
    if (queNum == 12) {
        cout << "You've won the game! Click to continue" << endl;
        cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 11 (продолжение)
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 11 ] Question: How to declare a function in C++?\n [a] function myFunc() {}  [b] void myFunc() {} \n [c] def myFunc() {}  [d] func myFunc() {}" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "b" && answer != "B") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    if (hp <= 0) {
        cout << "You've lost all HP, game over!" << endl;
        cout << "Your score: " << score << endl;
        cout << "click to back to menu" << endl;
        system("pause");
        system("cls");
        return;
    }

    // Вопрос 12
    cout << "Player: " << player_name << " | HP: " << hp << " | Points: " << score << endl;
    cout << "[ 12 ] Question: What is a pointer in C++?\n [a] A variable that stores the address of another object  [b] A variable with a fixed value \n [c] A data structure  [d] A data type" << endl;
    cout << "Enter the answer:  ";
    cin >> answer;
    if (answer != "a" && answer != "A") {
        cout << "Incorrect answer! Click to the next question" << endl;
        hp -= 1;
        system("pause");
        system("cls");
    }
    else {
        cout << "Correct answer!Click to the next question" << endl;
        score += 1;
        system("pause");
        system("cls");
    }

    cout << "You've completed the quiz! Final score: " << score << endl;
    system("pause");
}

void victorine_choice() {
    bool is_exit = false;

    while (!is_exit) {
        system("cls");
        cout << "Hello " << player_name << "!\n";
        cout << "1. Start game\n2. Settings\n3. Rules\n4. Exit\n";
        int main_choice;
        cin >> main_choice;
        switch (main_choice) {
        case 1: // game
            system("cls");
            game();
            break;
        case 2: // settings
            system("cls");
            cout << " 1. Edit player name\n 2. Change the number of question\n 3. Edit colors\n";
            cin >> settings_choice;
            switch (settings_choice) {
            case 1:
                system("cls");
                cout << player_name << endl << "enter the new name: ";
                cin >> player_name;
                break;
            case 2:
                system("cls");
                cout << "Choose the number of question: 8, 10, 12: ";
                cin >> queNum;
                switch (queNum) {
                case 8: queNum = 8; break;
                case 10: queNum = 10; break;
                case 12: queNum = 12; break;
                default:
                    cout << "This number cannot be chosen!";
                    system("pause");
                }
                break;
            case 3:
                system("cls");
                cout << "1. Red\n2. Green\n3. Blue\n4. Purple";
                cin >> color_sys;
                switch (color_sys) {
                case 1: system("color 04"); break;
                case 2: system("color 02"); break;
                case 3: system("color 01"); break;
                case 4: system("color 05"); break;
                default:
                    cout << "This color is out of list :(\n";
                }
                system("pause");
                break;
            default:
                cout << "incorrect input!";
                system("pause");
                break;
            }
            break;
        case 3: // rules
            system("cls");
            cout << "-Player gets points for the correct answer\n-Player goes further for the correct answer\n-Player loses HP for the incorrect answer\n";
            system("pause");
            break;
        case 4: // exit
            system("cls");
            cout << "goodbye, user!";
            is_exit = true;
            system("pause");
            break;
        default:
            system("cls");
            cout << "incorrect input!";
            system("pause");
            break;
        }
    }
}

int main() {
    victorine_choice();
}
