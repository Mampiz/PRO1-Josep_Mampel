#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<char> teteo;
    string s;
    while (cin >> s)
    {
        unsigned int i = 0;
        bool trobat = false;
        int teteototal=0;
        while (i < s.size() and not trobat)
        {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{')
            {
                teteo.push(s[i]);
                teteototal++;
            }
            if (s[i] == ')')
            {
                teteototal--;
                if (teteo.top() == '(')
                {
                    teteo.pop();
                }
                else
                    trobat = true;
            }
            if (s[i] == ']')
            {
                teteototal--;
                if (teteo.top() == '[')
                {
                    teteo.pop();
                }
                else
                    trobat = true;
            }
            if (s[i] == '}')
            {
                teteototal--;
                if (teteo.top() == '{')
                {
                    teteo.pop();
                }
                else
                    trobat = true;
            }
            i++;
        }
        if (not trobat and teteototal==0)
            cout << s << " es correcta" << endl;
        else
            cout << s << " es incorrecta" << endl;
        trobat=false;
    }
}