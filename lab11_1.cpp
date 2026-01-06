#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
string grades[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W" };
string random_grade(){
    int grade = rand()%9;
    return grades[grade];
}



int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << random_grade() << " in this 261102.";
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
