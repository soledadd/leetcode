class WordDictionary {
private string s="";
public:

    // Adds a word into the data structure.
    void addWord(string word) {
        this->s += word;
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
    	return std::regex_match(this->s,word);
    }
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");
