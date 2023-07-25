#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> msg {"Testing", "Alphabetic", "Sharps"};

    for (const string& word: msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
