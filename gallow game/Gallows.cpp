#include "Gallows.h"
Gallows :: Gallows()
{
    ifstream myFile("gallows1.txt");
    while (!myFile.eof())
    {
        word = " ";
        getline(myFile, word);
        if (word.length() == 7) words7.push_back(word);
        else if (word.length() == 6) words6.push_back(word);
        else if (word.length() == 5) words5.push_back(word);
        else if (word.length() == 4) words4.push_back(word);
        else if (word.length() == 3) words3.push_back(word);
    }
}
void Gallows :: game(string word)
{
    mask.clear();
    player_letter.clear();
    counter_try = 0;
    clock_t start, end;
    start = clock();
    system("cls");
    for (int i = 0; i < word.length(); i++)
    {
        mask.push_back('*');
    }
    while (counter_try < 8)
    {
        cout << "ÂÀØÅ ÑËÎÂÎ:" << endl;
        cout << mask << endl;
        cout << "ÂÂÅÄÈÒÅ ÁÓÊÂÓ" << endl;
        cout << "ÏÎÏÛÒÎÊ: " << 8 - counter_try << endl;
        cin >> letter;
        player_letter.push_back(letter);
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] == letter) mask[i] = word[i];
        }
        counter_try++;
        system("cls");
        if (mask == word)
        {
            end = clock();
            cout << "ÂÛ ÂÛÉÃÐÀËÈ!" << endl;
            cout << "Ñëîâî: " << word << endl;
            cout << "Ïîïûòîê: " << counter_try << endl;
            cout << "Âàøå âðåìÿ: " << ((double)end - start) / ((double)CLOCKS_PER_SEC) << " ñåêóíä" << endl;
            cout << "Áóêâû èãðîêà: " << endl;
            for (char a : player_letter)
            {
                cout << a << " ";
            }
            cout << endl;
            system("pause");
            break;
        }
        if (counter_try == 8 && mask != word)
        {
            end = clock();
            cout << "ÂÀÑ ÏÎÂÅÑÈËÈ!" << endl;
            cout << "Ñëîâî: " << word << endl;
            cout << "Ïîïûòîê: " << counter_try << endl;
            cout << "Âàøå âðåìÿ: " << ((double)end - start) / ((double)CLOCKS_PER_SEC) << " ñåêóíä" << endl;
            cout << "Áóêâû èãðîêà: " << endl;
            for (char a : player_letter)
            {
                cout << a << " ";
            }
            cout << endl;
            system("pause");
        }
    }
}
string Gallows::Rand_word_choice(vector<string> words)
{
    srand(time(NULL));
    return word = words[rand() % words.size()];
}
void Gallows::GAME()
{
    cout << "******ÈÃÐÀ ÂÈÑÅËÈÖÀ******" << endl;
    while (retry)
    {
        cout << "Ââåäèòå êîëè÷åñòâî áóêâ îò 3 äî 7 ";
        cin >> number_of_letters;
        switch (number_of_letters)
        {
        case 7:
            game(Rand_word_choice(words7));
            break;
        case 6:
            game(Rand_word_choice(words6));
            break;
        case 5:
            game(Rand_word_choice(words5));
            break;
        case 4:
            game(Rand_word_choice(words4));
            break;
        case 3:
            game(Rand_word_choice(words3));
            break;
        }
        system("cls");
        cout << "Äëÿ ïðîäîëæåíèÿ íàæìèòå 1, äëÿ âûõîäà 0" << endl;
        cin >> retry;
    }
}