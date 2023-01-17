#include <iostream>
#include <string>
using namespace std;

void Upper_Case(string& str);
void Delete_Spaces(string& str);

int main()
{
    string sharp = "#";
    string str;
    cout << "Vvedite stroku" << endl;
    getline(cin,str);
    try
    {
        int leng = str.length();
        if ((leng <= 100) && (leng != 0))
        {
            Upper_Case(str);
            cout << str << endl;
            Delete_Spaces(str);
            cout << str << endl;
            str = sharp + str;
            cout << str << endl;
        }
        else
            throw(leng);
    }
    catch (int sizez)
    {
        cout << "ERROR: Yor string has more than 100 or 0 symbols." << endl;
        cout << "Length of your string is " << sizez;
    }
}

