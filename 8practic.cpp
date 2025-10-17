#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "This is Translator, выберите действие: \n"<<"1. Русские слова\n"<<"2. Английские слова\n"<<"3. Выйти"<<endl;
    int choice;
    cin >> choice;
    
    switch (choice) {
    case 1:
        cout << "Выберите слова из списка: \n"<<"1. Время \n"<< "2. День \n" << "3. Окно \n" << "4. Ночь \n" << "5. Ложка \n" << "6. Груша \n" << "7. Боль \n" << "8. Деньги \n" << "9. Работа \n" << "10. Спортзал \n" << "11. Дом \n" << "12. Облако \n" << "13. Солнце \n" << "14. Автобус \n" << "15. Автомобиль \n";
        int rus;
        cin >> rus;
        switch (rus) {
        case 1:
            cout << "Время - Time";
            break;
        case 2:
            cout << "День - Day";
            break;
        case 3:
            cout << "Окно - Window";
            break;
        case 4:
            cout << "Ночь - Night";
            break;
        case 5:
            cout << "Ложка - Spoon";
            break;
        case 6:
            cout << "Груша - Pear";
            break;
        case 7:
            cout << "Боль - Pain";
            break;
        case 8:
            cout << "Деньги - Money";
            break;
        case 9:
            cout << "Работа - Work";
            break;
        case 10:
            cout << "Спортзал - Gym";
            break;
        case 11:
            cout << "Дом - Home";
            break;
        case 12:
            cout << "Облако - Cloud";
            break;
        case 13:
            cout << "Солнце - Sun";
            break;
        case 14:
            cout << "Автобус - Bus";
            break;
        case 15:
            cout << "Автомобиль - Car";
            break;
        default:
            cout << "your choice is out of list!";
            break;
        }
    case 2:
        cout << "Choose from the list of English words:\n"
            << "1. Time\n"
            << "2. Day\n"
            << "3. Window\n"
            << "4. Night\n"
            << "5. Spoon\n"
            << "6. Pear\n"
            << "7. Pain\n"
            << "8. Money\n"
            << "9. Work\n"
            << "10. Gym\n"
            << "11. Home\n"
            << "12. Cloud\n"
            << "13. Sun\n"
            << "14. Bus\n"
            << "15. Car\n";

        int eng;
        cin >> eng;
        switch (eng) {
        case 1:
            cout << "Time - Время";
            break;
        case 2:
            cout << "Day - День";
            break;
        case 3:
            cout << "Window - Окно";
            break;
        case 4:
            cout << "Night - Ночь";
            break;
        case 5:
            cout << "Spoon - Ложка";
            break;
        case 6:
            cout << "Pear - Груша";
            break;
        case 7:
            cout << "Pain - Боль";
            break;
        case 8:
            cout << "Money - Деньги";
            break;
        case 9:
            cout << "Work - Работа";
            break;
        case 10:
            cout << "Gym - Спортзал";
            break;
        case 11:
            cout << "Home - Дом";
            break;
        case 12:
            cout << "Cloud - Облако";
            break;
        case 13:
            cout << "Sun - Солнце";
            break;
        case 14:
            cout << "Bus - Автобус";
            break;
        case 15:
            cout << "Car - Автомобиль";
            break;
        default:
            cout << "your choice is out of list!";
            break;
        }
        break;

    case 3:
        // Выйти из программы
        return 0;

    default:
        cout << "Некорректный выбор!";
        break;
    }
   
}


