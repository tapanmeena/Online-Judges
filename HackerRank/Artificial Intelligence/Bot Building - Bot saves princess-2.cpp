#include<bits/stdc++.h>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    //your logic here
    pair<int,int> princess_location;
    bool found = false;
    for(int i=0; i<grid.size();i++){
        for(int j=0; j<grid[i].length(); j++){
            if(grid[i][j] == 'p'){
                princess_location = make_pair(j,i);
                found = true;
                break;
            }
        }
        if(found)
            break;
    }
    pair<int,int> my_location;
    // cout<<"Hellor world"<<endl;
    my_location = make_pair(c,r);
    // cout<<"princess location"<<princess_location.first<<" "<<princess_location.second<<endl;
    // cout<<"my location"<<my_location.first<<" "<<my_location.second<<endl;
    // while(1){
        if(my_location.first < princess_location.first){
            my_location.first++;
            cout<<"RIGHT"<<endl;
            return;
            // continue;
        }
        if(my_location.first > princess_location.first){
            my_location.first--;
            cout<<"LEFT"<<endl;
            return;
            // continue;
        }
        if(my_location.second < princess_location.second){
            my_location.second++;
            cout<<"DOWN"<<endl;
            return;
            // continue;
        }
        if(my_location.second > princess_location.second){
            my_location.second--;
            cout<<"UP"<<endl;
            return;
            // continue;
        }
        // if(my_location.first == princess_location.first && my_location.second == princess_location.second){
        //     break;
        // }
        
    // }

}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
