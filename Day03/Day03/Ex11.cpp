#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Player Data Model
struct Player
{
    string name;
    int score;
};
bool isGoodPlayer(Player p)
{
    return p.score > 50;
}
void displayPlayers(vector<Player>& players)
{
    cout << "\nSelected Players:\n";

    vector<Player>::iterator it;

    for (it = players.begin(); it != players.end(); it++)
    {
        cout << it->name << " -> " << it->score << endl;
    }
}
int main()
{
    vector<Player> players;

    players.push_back({ "Virat", 80 });
    players.push_back({ "Rohit", 60 });
    players.push_back({ "Rahul", 40 });
    players.push_back({ "Bumrah", 30 });
    players.push_back({ "Shami", 90 });

    /*int goodCount =
       count_if(players.begin(),
           players.end(),
           isGoodPlayer);

   cout << "Number of Selected Players = "
       << goodCount << endl;

       displayPlayers(players);
       */
    vector<Player> selected_player;
    copy_if(players.begin(),
        players.end(),
        back_inserter(selected_player),
        isGoodPlayer);
    sort(selected_player.begin(),
        selected_player.end());
    displayPlayers(selected_player);

    return 0;
}
