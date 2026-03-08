/*
6. Problem Statement 
Mayuri buys “N” no of products from a shop. The shop offers a different percentage of discount on each item. She wants to know the item that has the minimum discount offer, so that she can avoid buying that and save money. 
[Input Format: The first input refers to the no of items; the second input is the item name, price and discount percentage separated by comma (,) ] Assume the minimum discount offer is in the form of Integer. 
Note: There can be more than one product with a minimum discount
*/

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string line, name;
    int price, discount;

    vector<string> items;
    vector<int> discounts;

    for(int i = 0; i < n; i++) {

        getline(cin, line);

        stringstream ss(line);

        getline(ss, name, ',');
        ss >> price;
        ss.ignore();
        ss >> discount;

        int discountAmount = price * discount / 100;

        items.push_back(name);
        discounts.push_back(discountAmount);
    }

    int minDiscount = discounts[0];

    for(int i = 1; i < discounts.size(); i++) {
        if(discounts[i] < minDiscount)
            minDiscount = discounts[i];
    }

    for(int i = 0; i < discounts.size(); i++) {
        if(discounts[i] == minDiscount)
            cout << items[i] << endl;
    }

    return 0;
}