
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
  
    
    while (1 != 0) {
        cout << "Введите число от 0 до 100" << endl;
        cin >> num;
        if (num >= 0 and num <= 10) {
            cout << "Число в диапозоне от 0 до 10" << endl;
        }
        else if (num >= 11 and num <= 20) {
            cout << "Число в диапозоне от 11 до 20" << endl;
        }
        else if (num >= 21 and num <= 30) {
            cout << "Число в диапозоне от 21 до 30" << endl;
        }
        else if (num >= 31 and num <= 40) {
            cout << "Число в диапозоне от 31 до 40" << endl;
        }
        else if (num >= 41 and num <= 50) {
            cout << "Число в диапозоне от 41 до 50" << endl;
        }
        else if (num >= 51 and num <= 60) {
            cout << "Число в диапозоне от 51 до 60" << endl;
        }
        else if (num >= 61 and num <= 70) {
            cout << "Число в диапозоне от 61 до 70" << endl;
        }
        else if (num >= 71 and num <= 80) {
            cout << "Число в диапозоне от 71 до 80" << endl;
        }
        else if (num >= 81 and num <= 90) {
            cout << "Число в диапозоне от 81 до 90" << endl;
        }
        else if (num >= 91 and num <= 100) {
            cout << "Число в диапозоне от 91 до 100" << endl;
        }
        else {
            cout << "Ваше число больше 100 или меньше 0.";
        }
    }
}


