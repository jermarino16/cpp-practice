#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string unformatted_full_name {"StephenHawking"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    string first_name {unformatted_full_name, 0, 7};
    string last_name {unformatted_full_name, 7, 7};
    // cout << last_name << endl;
    string formatted_full_name = first_name + " " + last_name;
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << formatted_full_name << endl;

    return 0;
}