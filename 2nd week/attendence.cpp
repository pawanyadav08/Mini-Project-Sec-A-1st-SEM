//for evaluation

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Number of Students : ";
    cin >> n;
    
    int present = 0, absent = 0;
    cout << "For present enter 1 , for absent enter 0 : ";
    for (int i = 0; i < n; i++) {
        int status;
        cin >> status; 
        
        if (status == 1)
            present++;
        else if (status == 0)
            absent++;
    }
    
    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;
    
    return 0;
}
