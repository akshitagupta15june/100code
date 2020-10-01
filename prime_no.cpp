#include <iostream>
using namespace std;

int main() {
    int num, num2, i, f;
    cout << "Enter Starting Number";
    cin >> num;
    cout << "Enter Last Number";
    cin >> num2;

    while(num <= num2) {
        f = 0;
        for(int i = 2;i <= num/2; i++) {
            if(num % i == 0) {
                f = 1;
                break;
            }
        }
        if(f == 0) {
            cout << num << endl;
        }
        num = num + 1;
    }
	return 0;
}
