#include <iostream>
using namespace std;
int main() {
    int choice = 0;
    cout <<"Enter your choice: \n1. Happy birthday \n 2. Happy Anniversary"<<endl;
    cin >>choice;
    switch (choice) {
        case 1:
            cout << "Happy birthday, many wishes of the day."<<endl;
            break;
        case 2:
            cout << "Happy Anniversary, many wishes."<<endl;
            break;
        default:
            cout << "Please! Enter The correct choice!" <<endl;
    }
    return 0;
}