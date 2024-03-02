#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <= 30; i += 3) {
        cout << i << endl;
    }
    int num = 31;
    while (num % 2 == 0) {
        num++;
    }

    cout << "El primer numero impar despues de 30 es: " << num << endl;

    return 0;
}
