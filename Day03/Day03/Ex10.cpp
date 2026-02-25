#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void displayPlayers(vector<string>& players)
{
    vector<string>::iterator it;

    cout << "\nPlayer List:\n";

    for (it = players.begin(); it != players.end(); it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    vector<string> players;

    players.push_back("Virat");
    players.push_back("Rohit");
    players.push_back("Rahul");
    players.push_back("Bumrah");
    players.push_back("Shami");

    sort(players.begin(), players.end());

    displayPlayers(players);

    return 0;
}
