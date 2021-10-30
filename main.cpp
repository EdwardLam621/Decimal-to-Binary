#include <iostream>
#include <vector>

using namespace std;

vector<int> decimalToBinaryConvert(int);
int printVector(vector<int>);
int printExample();
int printDecToBin(int);

int main() {
    vector<int> a = decimalToBinaryConvert(1);
    printExample();
    while(true){
        cout << "please enter a decimal to convert: ";
        int x;
        cin >> x;
        if(x < 0) {
            cout<< "done!" << endl;
            break;
        }
        printDecToBin(x);
    }

    return 0;
}

// Function:    decimalToBinaryConvert
// Purpose:     Convert Decimal number (int) to Binary
// Returns:     a vector stores the decimal number in binary
vector<int> decimalToBinaryConvert(int x){
    vector<int> binaryNum;              //store binary numbers
    if(x == 0){
        binaryNum.push_back(0);
        binaryNum.resize(0);        //eliminate extra 0
    }else{
        int n = x;
        int i = 0;                      //to count elements
        while(n > 0){
            binaryNum.push_back(n%2);   //push elements in vector
            n = n/2;
            i++;
        }
        binaryNum.resize(i-1);      //resize vector
    }
    return binaryNum;
}

// Function:    printVector
// Purpose:     print elements in vector
// Returns:     0
int printVector(vector<int> n){
    for(auto i = n.end(); i > n.begin() - 1; i--){
        cout << *i;
    }
    return 0;
}

// Function:    printExample
// Purpose:     Example method to print decimal numbers in binary format
// Returns:     0
int printExample(){
    int i= 1, j = 20;
    cout<< "=== printing example from " << i << " to " << j << " ===" << endl;
    for(i; i < j; i++) {
        printDecToBin((i));
    }
    cout << "=== example display over ===" << endl;
    return 0;
}

// Function:    printDecToBin
// Purpose:     helper method to conversion in easy-to-read format
// Returns:     0
int printDecToBin(int i){
    cout << i << " in binary is: " ;
    printVector(decimalToBinaryConvert(i));
    cout << endl;
    return 0;
}

