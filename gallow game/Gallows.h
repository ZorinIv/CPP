#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;
class Gallows
{
private:
    string word;
    string mask;
    vector<string> words7;
    vector<string> words6;
    vector<string> words5;
    vector<string> words4;
    vector<string> words3;
    vector<char> player_letter;
    int counter_try;
    char letter;
    bool retry = 1;
    int number_of_letters;
public:
    Gallows();
    void game(string word);
    string Rand_word_choice(vector<string> words);
    void GAME();
};