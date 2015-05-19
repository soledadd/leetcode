#include<iostream>
using namespace std;
#include<regex>
#include<string>
class WordDictionary {
 string s="";
public:

    // Adds a word into the data structure.
    void addWord(string word) {
        this->s += word;
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
    	return regex_match(this->s,word);
    }
};
int main()
{
	
}
