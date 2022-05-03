// Started at 4:56 5-2-2022

// Section 9
// Nested Loops - Multiplication Table

#include <iostream>

using namespace std;

int main() {
    
    for (int num1 {1}; num1 <= 10; ++num1) {
        for (int num2 {1}; num2 <= 10; ++num2) {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        }
        cout << "----------" << endl;
    }
    
    cout << endl;
    return 0;
}

// Section 9
// Challenge

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
        vector<int> numbers {};
        char selection {};
        
    do {
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        if (selection == 'p' || selection == 'P') {
            if (numbers.size() == 0) 
                cout << "[] - the list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num: numbers)
                    cout << num << " ";
                cout << "]" << endl;;
            }
        } else if (selection == 'a' || selection == 'A') {
            int num_to_add{};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        } else if (selection == 'm' || selection == 'M') {
//            double mean = (numbers / numbers.size());
            cout << "The mean of the numbers is " << mean;
        }
    } while (selection != 'q' && selection != 'Q');
    
    cout << endl;
    return 0;
}

// Ended at 7:25 5-2-2022
