#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[100], str2[100];
    cin >> str1;
    cin >> str2;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int c = 0, flag = 0;
    
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            c = 0;
            for (int j = 0; j < len1; j++)
            {
                if (str1[i] == str2[j])
                {
                    c = 1;
                    break;
                }
            }
            if (c == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "False";
        else
            cout << "True";
    }
    else
        cout << "False";
    return 0;
}