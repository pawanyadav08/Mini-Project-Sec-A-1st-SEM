#include<iostream>
using namespace std;
int main(){
    int students = 10;
    int day = 7;
    int attendence[students][day];

    cout << "Enter Attendence of 10 students in 7 days(0 or 1 Only): \n";
    for(int i = 0; i < 10 ; i++){
        cout << "Student " << i + 1 << ": ";
        for (int j = 0 ; j < 7; j++) {
            cin >> attendence[i][j];
        }
    }
    return 0;
}