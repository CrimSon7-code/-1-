#include <iostream>
using namespace std;

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int mainchoice;
    bool is_exit = false;
    while (!is_exit) {
        clearConsole();
        cout << "Программа геометрические фигуры" << endl;
        cout << "Выберите действие: \n" << "1. Линия\n" << "2. Выход\n" << endl;
        
        cin >> mainchoice;
        switch (mainchoice) {
        case 1:
            clearConsole();
            int lineType;
            cout << "Выбрана: Линия" << endl;
            cout << "1.  Горизонтальная\n";
            cout << "2.  Вертикальная\n\n";
            cout << "Выберите тип: ";
            cin >> lineType;
            int length;
            if (lineType == 1) {
                cout << "Длина линии: ";
                cin >> length;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; ++i) {
                    cout << texture << "  ";
                }
                system("pause");
            }
            else if (lineType == 2) {
                cout << "Длина линии: ";
                cin >> length;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; ++i) {
                    cout << texture << endl;
                }
                system("pause");
            }
            else {
                cout << "Некорректный ввод. Попробуйте снова.\n";
                break;
            }
            break;
        case 2:
            is_exit = true;
            break;
        default:
            cout << "Ошибка, попробуйте еще раз.";
            break;
        }
    }
    return 0;
}

