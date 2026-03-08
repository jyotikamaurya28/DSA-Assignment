//Problem Statement:– 
//Raj wants to know the maximum marks scored by him in each semester. The mark should be between 0 to 100; if it goes beyond the range display “You have entered invalid mark.” 

#include <iostream>
using namespace std;

int main() {
    int semesters;

    cout << "Enter no of semester: ";
    cin >> semesters;

    for(int i = 1; i <= semesters; i++) {

        int subjects;
        cout << "Enter no of subjects in " << i << " semester: ";
        cin >> subjects;

        int mark, maxMark = -1;

        cout << "Marks obtained in semester " << i << ": ";

        for(int j = 1; j <= subjects; j++) {
            cin >> mark;

            if(mark < 0 || mark > 100) {
                cout << "You have entered invalid mark." << endl;
                return 0;
            }

            if(mark > maxMark) {
                maxMark = mark;
            }
        }

        cout << "Maximum mark in " << i << " semester: " << maxMark << endl;
    }

    return 0;
}