// by Raneczech

#include <iostream>
using namespace std;

int print(const char* text);
int println(const char* text);
int carrots;


int main(void){
    while(1){
        cout << "How many carrots do you have? " << endl;
        cin >> carrots;
        println("Here are two more.");
        carrots = carrots + 2;
        print("Now you have ");
        cout << carrots;
        println(" carrots.");
        println("crunch, crunch, crunch. That one was tasty.");
        carrots = carrots - 1;
        print("Now you have ");
        cout << carrots;
        println(" carrots.");
    }
    return 0;
}

int print(const char* text){
    cout << text;
    return 0;
}

int println(const char* text){
    cout << text << endl;
    return 0;
}
