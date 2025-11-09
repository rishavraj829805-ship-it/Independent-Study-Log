#include <iostream>

using namespace std;

int main(){

//  If somehow i think that this will create an array with variable elements it is wrong cause what happens is using this method (leaving the number of elements part) causes to create exactly the number of elements that we initialize to it   
//    char test[];  In this case 0
//    test[0] = 'a';
//    test[1] = 'b';

    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is :" << vowels[0] << endl;
    cout << "The last vowel is :" << vowels[4] << endl;

//    Don't do this it is way passed the number of elements that this array can store
//    cin >> vowels[5];

    double temperature[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first temperature is: " << temperature[0] << endl;

    temperature[0] = 100.1;

    cout << "The new first temperature is: " << temperature[0] << "\n" << endl;

//  This stores garbage value in the array and i am expecting junk value to get printed
    int score[5];
    for(int i = 0; i < 5; i++){
        cout << "Score " << (i + 1) << " is " << score[i] << endl;
    }

    cout << endl;

//  This stores 0 as default for each element
    int newScore[5] {};
    for(int i = 0; i < 5; i++){
        cout << "Score " << (i + 1) << " is " << newScore[i] << endl;
    }

//  So the strange hexadecimal number that is the output of the below line is the memory address of the array
// as we know the name of the array represent the adress of the 1st element of the array so that's what it is 
    cout << "\nNotice what the value of the array name i : " << newScore << endl;

    return 0;
}