#include <iostream>
#include <string>

using namespace std;

void find_and_replace(string &main, string replace_word)
{
    int found_index = main.find(replace_word);
    while (found_index != -1)
    {
        main.replace(found_index, replace_word.length(), "#");
        found_index = main.find(replace_word);
    }
}

int main()
{
    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {

        string S, X;
        cin >> S >> X;

        find_and_replace(S, X);

        cout << S << endl;
    }

    return 0;
}