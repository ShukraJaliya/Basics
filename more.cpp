



























#include <iostream>
#include <string>
#include <cstring>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;



//a void function. no retunr value
void print(string name); //function declaration

//passed by reference 
int agein20(int & age);


int main(){
    //creating variable
    //string strvrb= "myname";
    string username =? ;
    string morenames = ? ;
    int age=? ;
    bool check = true;

    cout << " Please enter Your first name" << endl;
   // cin >> username;
    print(username);

    cin.ignore();// clears the cin buffer for getlijne
    cout<< " Please enter full name, two or more names" << endl;
    getline(cin, morenames); //ignores the whitespace and gets all the words 
    print(morenames);

    cout << " Please enter your age" << endl;
    
    //cin>> age;
    cout<< " You will be " << agein20(?) << " in twenty yrs" << endl;

    if(age >50 ){
        cout << "you are more than a century old" << endl;
    }
    else if (age ==50){
        cout<< "you aare have a century old" <<endl;
    }
    else {
        cout<< "you are still young" << endl;
    }
    return 0;


}

void print(string name){  //function header 
    cout<< " Good afternnon " << ? << " how are you doing today?"<< endl;
}

int agein20(int & age){
    int newage = ? +20;

    return newage;
}

