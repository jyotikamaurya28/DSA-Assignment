/*5.Problem Statement 
A function is there which tells how many dealerships there are and the total number of cars in each dealership. 
Your job is to calculate how many tyres would be there in each dealership
*/

#include <iostream>
using namespace std;

int calculateTyres(int cars, int bikes) {
    return (cars * 4) + (bikes * 2);
}

int main() {
    int dealerships;
    cin >> dealerships;

    for(int i = 1; i <= dealerships; i++) {
        int cars, bikes;
        cin >> cars >> bikes;

        int tyres = calculateTyres(cars, bikes);
        cout << tyres << endl;
    }

    return 0;
}