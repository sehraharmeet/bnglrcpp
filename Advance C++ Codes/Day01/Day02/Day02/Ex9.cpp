#include <iostream>
#include<vector>
#include <algorithm>

#include <string>
using namespace std;

int main()
{
    auto checkLength = [](auto... usernames)
        {
            vector<string> notOK;

            //((cout<<usernames<<"-"), ...);

            ((string(usernames).size() > 10 ||
                string(usernames).find(' ') != string::npos
                ? notOK.push_back(usernames)
                : void()), ...);
            return notOK;
        };
    //file handling
    auto result = checkLength("Harmeet", "RaviPratapSharma", "Reema Puri", "Yogesh");
    for (auto n : result)
        cout << n;
}