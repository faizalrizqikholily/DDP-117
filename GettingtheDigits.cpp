#include <bits/stdc++.h>

using namespace std;

string numbers[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

int main(){
    ;int T;
    cin >> T;

    for (int t = 1; t <= T; t++){
        string S;
        cin >> S;

        // Count the occurrences of each letter in S
        int letterCount[26] = {0};
        for (char c : S)
            letterCount[c - 'A']++;

        // Find the digits in the phone number
        string phoneNumber = "";

        while (letterCount['Z' - 'A'] > 0){
            phoneNumber += "0";
            for (char c : numbers[0])
                letterCount[c - 'A']--;
        }

        while (letterCount['W' - 'A'] > 0){
            phoneNumber += "2";
            for (char c : numbers[2])
                letterCount[c - 'A']--;
        }

        while (letterCount['U' - 'A'] > 0){
            phoneNumber += "4";
            for (char c : numbers[4])
                letterCount[c - 'A']--;
        }

        while (letterCount['X' - 'A'] > 0){
            phoneNumber += "6";
            for (char c : numbers[6])
                letterCount[c - 'A']--;
        }

        while (letterCount['G' - 'A'] > 0){
            phoneNumber += "8";
            for (char c : numbers[8])
                letterCount[c - 'A']--;
        }

        while (letterCount['O' - 'A'] > 0){
            phoneNumber += "1";
            for (char c : numbers[1])
                letterCount[c - 'A']--;
        }

        while (letterCount['T' - 'A'] > 0){
            phoneNumber += "3";
            for (char c : numbers[3])
                letterCount[c - 'A']--;
        }

        while (letterCount['F' - 'A'] > 0){
            phoneNumber += "5";
            for (char c : numbers[5])
                letterCount[c - 'A']--;
        }

        while (letterCount['V' - 'A'] > 0){
            phoneNumber += "7";
            for (char c : numbers[7])
                letterCount[c - 'A']--;
        }
        
        while (letterCount['I' - 'A'] > 0){
            phoneNumber += "9";
            for (char c : numbers[9])
                letterCount[c - 'A']--;
        }

        // Sort the digits in the phone number
        sort(phoneNumber.begin(), phoneNumber.end());

        cout << "Case #" << t << ": " << phoneNumber << endl;
    }

    return 0;
}
