#include <iostream>
#include <string>
using namespace std;

bool IsKPeriodic(const string &txt, const int &k)
{
    string pat;
    if (txt.size() % k != 0)
    {
        return false;
    }
    else
    {
        pat.resize((int)k);
        for (int i = 0; i < k; i++)
        {
            pat[i] = txt[i];
        }
    }
    int current = 0;
    for (int i = k; i < (int)txt.size(); i+=k)
    {
        for (int j = i; j < i + k; j++)
        {
            if (pat[current++] != txt[j])
            {
                return false;
            }
        }
        current = 0;
    }
    return true;
}

int main(){
    int k = 3;

    string txt = "abcabcabcabc";

    cout<< IsKPeriodic(txt, k);
   

    return 0;
}