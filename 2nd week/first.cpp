#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int highest;
    int lowest;

    cout << "Enter 5 numbers : ";
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    highest = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] > highest){
            highest = arr[i];
        }
    }
    
    cout << "The highest number is: " << highest << endl;

    lowest = arr[0];
    for(int i = 1; i < 5; i++){
        if(arr[i] < lowest) {
            lowest = arr[i];
        }
    }

    cout << "The lowest number is: " << lowest << endl;


return 0;
}