#include <iostream>
using namespace std;

int main()
{
    int size_of_map = 20;
    
    for (int i = 0; i < size_of_map; i++) {
        for (int j = 0; j < size_of_map; j++) {
            if (i >= 9 && j >= 9) {
                    
                cout << "\x1b[93m# \x1b[0m";
                }
            else if (i >= 9 && j < 9) {
                   
                cout << "\x1b[92m# \x1b[0m";
                }
            else if (i < 9 && j >= 9) {
                    
                cout << "\x1b[91m# \x1b[0m";
                }
            else {
                   
                cout << "\x1b[95m# \x1b[0m";
                }
            }
            cout << endl;
        
    
            
        
        cout << endl;
    }
}

