#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */

int pageCount(int n, int p) {
    int c1 = 0, c2 = 0;
    //c1 is used to count the pages from front and c2 from back
    
    //This loop checks how far the req. page is from the starting page
    for (int i = 1; i<p; i+=2){
        c1 += 1;
    };
    
    //j is used to check where the last page will be left or right side
    //if it will be on left side then it will be even and odd for right
    int j;
    
    if (p%2 == 0)
        j = n-1;
    else
        j = n;
    
    //checking the req page position from the back
    for ( ; j>p; j-=2) {
        c2+=1;
    }
    
    //chekcing if page is closer from last or first page
    if (c1>c2)
        return c2;
    else
        return c1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
