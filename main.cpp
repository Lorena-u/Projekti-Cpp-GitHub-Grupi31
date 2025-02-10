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