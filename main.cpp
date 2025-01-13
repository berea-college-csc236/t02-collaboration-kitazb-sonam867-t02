/*  T02: Collaboration Teamwork

    Have yov ever heard of rubber duck debugging?
    See https://en.wikipedia.org/wiki/Rubber_duck_debugging 
    Original code and ASCII art by Dr. Jan Pearce, Berea College

    Edits made by:
 Sonam867
  
    Sonam Tsering

    Besher
 
 main

 */
#include <iostream>
using namespace std;

int main() {

    int ducknum;
    int imposters;

    cout << " Have you ever hver heard of rubber duck debugging?" << endl;
    cout  << " If not, see See https://en.wikipedia.org/wiki/Rubber_duck_debugging.\n" << endl;
    cout << " How many rubber ducks do you want to see? ";
    cin >> ducknum;
Sonam867
    


    cout << " How many Imposters do you want to see? ";
    cin >> imposters;


    // Besher - Personal drawing
    for (int i = 0; i < imposters; i++) {
        cout << "      _________  " << endl; 
        cout << "      |_______|  " << endl; 
        cout << "      ||     ||  " << endl; 
        cout << "      ||_____||  " << endl;
        cout << "      |   _   |  " << endl;
        cout << "      |  | |  |  " << endl;
        cout << "      |__| |__|  " << endl;
    }               
    cout << endl << "There is " << imposters << " Imposter(s) among us!" << endl;


main
    for (int i = 0; i < ducknum; i++) { 
        cout << "                __     " << endl; // Besher
        cout << "              <(o )___-" << endl; // student 3(1) may change this line and add additional lines between this line and immediately below
        cout << "               ( .__> /" << endl; // student 3(2) may change this line
        cout << "                `----' " << endl; Sonam
    }
 Sonam867
    

        
    for (int i = 0; i < ducknum; i++) {
        cout << "                _______ " << endl; // TODO: student 2 may change this line and may add additional lines immediately above
        cout << "              |  _ |__||" << endl; // student 3(1) may change this line and add additional lines between this line and immediately below
        cout << "              |  |_|   |"<< endl; // student 3(2) may change this line
        cout << "              |________| `----' " << endl; // TODO student 2 may change this line and may add lines below
        cout << "              This is a camera prototype " << endl;
    }

       
 main
    return 0;
}