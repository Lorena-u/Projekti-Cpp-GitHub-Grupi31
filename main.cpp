#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//Deklarimi i funksioneve
void printGreeting();
int generateRandomNumber(int lower, int upper);
void startGame();
bool isGuessCorrect(int guess,int secretNumber);

int main() {
    //Krijo nje numer te rastesishem per loje
    int secretNumber=generateRandomNumber(1,100);

    // Kjo pjese i tregon programit te shfaq  mesazhin
    printGreeting();
    // Kjo pjese i tregon programit te filloj lojen
    startGame();
    return 0;
}
void printGreeting() {
    cout << "Miresevini ne lojen 'Gjeje numrin'!" << endl;
cout << "Kompjuteri ka menduar nje numer ndermjet 1 dhe 100." << endl;
cout << "Perpiqu te gjesh kete numer brenda 10 mundesive!" << endl;
cout << "Per cdo mundesi, kompjuteri do te te thote nese numri yt eshte me i madh." << endl;
}
int generateRandomNumber (int lower, int upper) { 
    // Përdorim srand() dhe time(0) për të krijuar numra të ndryshëm cdo herë
    srand(time(0));

// Krijo një numër të rastësishëm ndërmjet "lower" dhe "upper" 
return rand() % (upper - lower + 1) + lower;
} 
void startGame(int secretNumber){
    int guess;
    int attempts = 0;
//Lejo perdoruesin te beje deri ne 10 perpjekje per te gjetur numrin
while (attempts < 10) {
cout <<"Futni nje numer (perpjekja" << attempts + 1 <<" nga 10): ";
cin >> guess;

if (isGuessCorrect(guess, secretNumber)) {
cout <<"Bravo! Keni gjetur numrin!"<<endl;
return; //Mbaron lojen nese eshte gjetur numri
} else if (guess < secretNumber) {
cout << "Numri qe kerkoni eshte me i madh se ky!" <<endl;
} else {
cout << "Numri qe kerkoni eshte me i vogel se ky!"<< endl;
}
attempts++;
}

