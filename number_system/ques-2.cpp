//Pythagorean Triplets: 
//Problem: Generate all Pythagorean triplets with values smaller than a given limit. 

#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter limit: ";
    cin >> limit;

    for(int c = 1; c <= limit; c++) {
        for(int a = 1; a < c; a++) {
            for(int b = a; b < c; b++) {
                if(a*a + b*b == c*c) {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }

    return 0;
}