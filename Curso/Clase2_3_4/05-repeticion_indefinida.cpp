#include <iostream>
using namespace std;

int main() {

    int a = 5;
    for(;;) {
        cout << a << " ";
        if(a-- == 0) {
            break;
        }
    }

    cout << "\n\n";

    while(1) {
        cout << a << " ";
        if(a++ == 5) {
            break;
        }
    }
    return 0;
}
