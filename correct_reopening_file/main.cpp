#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream fin("abc");
    if (!fin.is_open()) return 1;

    string word;
    while (fin >> word)
        cerr << "Word = " << word << endl;

    fin.close();
    //! You need to clear flags before reopen file
    fin.clear();

    fin.open("abc");
    if (!fin.is_open()) 
    {
        cerr << "error" << endl;
        return 1;
    }

    while (fin >> word)
        cerr << "Word = " << word << endl;

    fin.close();

    return 0;
}
