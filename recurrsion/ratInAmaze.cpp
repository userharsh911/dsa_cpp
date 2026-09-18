#include <iostream>
#include <vector>
using namespace std;

void ratInAMaze(vector<vector<int>>& v, vector<vector<vector<int>>> &coordinates, vector<vector<int>>& set, int i = 0, int j = 0)
{
    if (i == v.size() || j == v.size() || i < 0 || j < 0 || v[i][j] == 0)
        return;
    set.push_back({i, j});
    if (i == j && i == v.size() - 1){
        coordinates.push_back(set);
        set.pop_back();
        return;
    }

    vector<vector<int>> directions{
        {i - 1, j}, // top
        {i, j + 1}, // right
        {i + 1, j}, // bottom 
        {i, j - 1}, // left
    };

    for(auto dir : directions){
        for(auto set : set){
            if(dir[0] == set[0] && dir[1] == set[1]) goto skip;
        }
        ratInAMaze(v, coordinates, set, dir[0], dir[1]);
        skip:;
    }

    set.pop_back();
}

int main()
{
    vector<vector<int>> v{{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    vector<vector<vector<int>>> coordinates;
    vector<vector<int>> set;
    ratInAMaze(v, coordinates, set);
    
    int n = v.size() - 1;
    for (auto v2 : coordinates){
        vector<int> past;
        for (vector<int> v : v2){
            // for (int d : v) cout << d << " "; // prints coordinates 
            if(past.size()){
                if(past[0] < v[0]) cout<<"D";
                else if(past[1] < v[1]) cout<<"R";
                else if(past[0] > v[0]) cout<<"T";
                else if(past[1] > v[1]) cout<<"L";
                
                if(v[0] < n || v[1] < n)cout<<" -> ";
            }
            past = v;
        }
        cout<<endl;
    }
    return 0;
}