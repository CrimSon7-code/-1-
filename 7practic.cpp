#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int monthChoice;
    int day;
    string monthName;

    cout << "Календарь:\n";
    cout << "[ 1 ] Январь\n";
    cout << "[ 2 ] Февраль\n";
    cout << "[ 3 ] Март\n";
    cout << "[ 4 ] Апрель\n";
    cout << "[ 5 ] Май\n";
    cout << "[ 6 ] Июнь\n";
    cout << "[ 7 ] Июль\n";
    cout << "[ 8 ] Август\n";
    cout << "[ 9 ] Сентябрь\n";
    cout << "[ 10 ] Октябрь\n";
    cout << "[ 11 ] Ноябрь\n";
    cout << "[ 12 ] Декабрь\n";

    cout << "Выберите месяц: ";
    cin >> monthChoice;

    switch (monthChoice) {
    case 1:
        monthName = "Январь";
        break;
    case 2:
        monthName = "Февраль";
        break;
    case 3:
        monthName = "Март";
        break;
    case 4:
        monthName = "Апрель";
        break;
    case 5:
        monthName = "Май";
        break;
    case 6:
        monthName = "Июнь";
        break;
    case 7:
        monthName = "Июль";
        break;
    case 8:
        monthName = "Август";
        break;
    case 9:
        monthName = "Сентябрь";
        break;
    case 10:
        monthName = "Октябрь";
        break;
    case 11:
        monthName = "Ноябрь";
        break;
    case 12:
        monthName = "Декабрь";
        break;
    default:
        cout << "Неверный выбор месяца.\n";
        return 1; 
    }

    cout << "Выбран месяц "<< monthName << endl;
    cout << "Выберите день месяца: ";
    cin >> day;

    switch (day) {

        switch (monthChoice) {
        case 1:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
            case 31:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 2:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 3:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
            case 31:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 4:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 5:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
            case 31:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 6:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 7:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
            case 31:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 8:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
            case 31:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 9:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 10:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
            case 31:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 11:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;

        case 12:
            switch (day) {
            case 1: case 2: case 3: case 4: case 5:
            case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15:
            case 16: case 17: case 18: case 19: case 20:
            case 21: case 22: case 23: case 24: case 25:
            case 26: case 27: case 28: case 29: case 30:
            case 31:
                cout << "Календарь: " << day << " " << monthName << ".\n";
                break;
            default:
                cout << "Неверный день месяца.\n";
                return 1;
            }
            break;
        default:
            cout << "Неверный месяц.\n";
            return 1;
        }

        return 0;
}
