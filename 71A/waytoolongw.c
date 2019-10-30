#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    int n;
    string word, newword;
    vector<string> words;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word;
        words.push_back(word);
    }
 
    for (int i=0; i < words.size(); i++){
        if (words[i].size() > 10) {
            newword = words[i][0] + to_string(words[i].size() - 2) + (words[i][(words[i].size() - 1)]);
            words[i] = newword;
        }
    }
    
    for (int i=0; i < words.size(); i++){
        cout << words[i] << endl;
    }
}

