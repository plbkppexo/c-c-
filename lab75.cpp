#include <iostream>
using namespace std;

typedef struct Word_
{

    string word;
    int count;

} Word;

int main()
{
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true)
    {
        cin >> input;
        if (input == "exit")
        {
            break;
        }

        if (last_word == 0)
        {
            for (i = 0; i < 20; i++)
            {
                data[i].word = "0";
                data[i].count = 0;
            }
        }
        for (i = 0; i < 20; i++)
        {
            if (data[i].word != input && data[i].word != "0")
            {
                continue;
            }
            else if (data[i].word == input)
            {
                data[i].count++;
                break;
            }
            else if (data[i].word != input && data[i].word == "0")
            {
                data[i].word = input;
                data[i].count++;
                last_word++;
                break;
            }
        }
    }

    cout << "Output:" << endl;

    for (i = 0; i < last_word; i++)
    {
        cout << data[i].word << " = " << data[i].count << endl;
    }

    return 0;
}