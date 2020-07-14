#include <iostream>
using namespace std;

int main() {
    const int maxEl = 10;
    int elementos;
    cin >> elementos;
    int vector[maxEl];

    for(int i = 0 ; i < elementos ; i++) {
        cin >> vector[i];
    }

    for(int i = 0 ; i < elementos ; i++) {
        cout << vector[i] << " ";
    }

    return 0;
}
