#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

//Globals
int family_size;

class Person{
public:
    string name;
    Person* spouce;
    vector<Person*> parents;
    vector<Person*> children;
    
    Person(string name_in) : name(name_in){
        spouce = nullptr;
    }
    
    void print_name() {
        cout << name << endl;
    }
};

//Function Prototypes
void prompt_input();

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




int main(int argc, const char * argv[]) {
    cout << "Welcome to Alex's Interactive Family Tree\n\n";
    char user_selection;
    family_size = 0;
    
    
    while(1){
        prompt_input();
        cin >> user_selection;
        
        
        if (user_selection == 'q') {
            return 0;
        }
        else if (user_selection == 'n'){
            
        }
    }
}




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void prompt_input(){
    cout << "Please input a command:\n";
    if(family_size < 1) cout << "n: Start new tree" << endl;
    if(family_size > 0) {
        cout << "c: Add child" << endl;
        cout << "p: Add parent" << endl;
        cout << "s: Add spouce" << endl;
    }
    cout << "q: quit program" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << ">>";
}
