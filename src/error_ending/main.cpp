#include <iostream>
bool error_checking_enabled = false;
bool error_detected = false;

int main(void){
    using namespace std;
    if(error_checking_enabled){
        if(error_detected){
            cerr << "Error detected!" << endl;
            return -1;
        } else {
            cout << "No errors detected." << endl;
            return 0;
        }
    }else{
        cout << "Error checking is disabled." << endl;
        return 0;
    }
}
