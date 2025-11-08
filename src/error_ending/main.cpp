//by Raneczech

#include <iostream>
bool error_checking_enabled = true;
bool error_detected = false;
int err_count = 0;

int main(void){
    using namespace std;

    //here is your code
    //use error_detected = true and err_count++ to capture an error
    
    if(error_checking_enabled){
        if(error_detected){
            cerr << err_count <<  "Errors detected!" << endl;
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
