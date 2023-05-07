#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

unordered_map<string, int> numbers{
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9},
    {"ten", 10},
    {"eleven", 11},
    {"twelve", 12},
    {"thirteen", 13},
    {"fourteen", 14},
    {"fifteen", 15},
    {"sixteen", 16},
    {"seventeen", 17},
    {"eighteen", 18},
    {"nineteen", 19}
};

unordered_map<string, int> tnumbers{
    {"twenty", 20},
    {"thirty", 30},
    {"forty", 40},
    {"fifty", 50},
    {"sixty", 60},
    {"seventy", 70},
    {"eighty", 80},
    {"ninety", 90}
};

unordered_map<string, int> onumbers{
    {"hundred", 100},
    {"thousand", 1000},
    {"million", 1000000},
    {"billion", 1000000000}
};

unordered_map<string, string> str{
    {"maths", "M-"},
    {"science", "S-"},
    {"english", "E-"},
    {"hindi", "H-"},
    {"computer", "C-"}
};

void wordToNumber(string input) {
    long long sum = 0;
    int temp = -1, previous = -1;
    vector<string> splitted;
    size_t pos = 0;
    string delimiter = " ";
    while ((pos = input.find(delimiter)) != string::npos) {
        string token = input.substr(0, pos);
        splitted.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    splitted.push_back(input);

    string s = "";
    int count = 0;
    for (int i = 0; i < splitted.size(); i++) {
        if (numbers.count(splitted[i])) {
            temp = numbers[splitted[i]];
            count++;
            if (count == 1) {
                cout << s << " " << temp << " ";
            }
            s = "";
        } else if (tnumbers.count(splitted[i])) {
            temp = tnumbers[splitted[i]];
            if (numbers.count(splitted[i+1])) {
                temp += numbers[splitted[i+1]];
            }
            cout << s << " " << temp << " ";
            s = "";
        } else if (onumbers.count(splitted[i])) {
            temp = onumbers[splitted[i]];
            cout << temp << endl;
        } else {
            if (str.count(splitted[i])) {
                s += str[splitted[i]];
            } else {
                s += splitted[i] + " ";
            }
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    wordToNumber(input);
    return 0;
}

/*
Prince age is eighteen and marks in maths sixty four and marks in science seventy five
Prince age is  18 and marks in M- 64 and marks in S- 75 
*/