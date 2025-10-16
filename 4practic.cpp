#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "input the number" << endl;
    cin >> num;
    for (int i = 1; i < num+1; i++) {
        int answer;
        cout << num << "*" << i << endl;
        cin >> answer;
        if (answer == (num * i)) {
            cout << "correct!" << endl;
            continue;
        }
        else {
            cout << "incorrect!" << endl;
            break;
        }
    }
    
    cout << "all answers was correct!";

}
