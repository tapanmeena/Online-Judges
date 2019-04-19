#include<bits/stdc++.h>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
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
    int pos = n/2;
    // cout<<"Hellor world"<<endl;
    my_location = make_pair(pos,pos);
    // cout<<"princess location"<<princess_location.first<<" "<<princess_location.second<<endl;
    // cout<<"my location"<<my_location.first<<" "<<my_location.second<<endl;
    while(1){
        if(my_location.first < princess_location.first){
            my_location.first++;
            cout<<"RIGHT"<<endl;
            continue;
        }
        if(my_location.first > princess_location.first){
            my_location.first--;
            cout<<"LEFT"<<endl;
            continue;
        }
        if(my_location.second < princess_location.second){
            my_location.second++;
            cout<<"DOWN"<<endl;
            continue;
        }
        if(my_location.second > princess_location.second){
            my_location.second--;
            cout<<"UP"<<endl;
            continue;
        }
        if(my_location.first == princess_location.first && my_location.second == princess_location.second){
            break;
        }
        
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
