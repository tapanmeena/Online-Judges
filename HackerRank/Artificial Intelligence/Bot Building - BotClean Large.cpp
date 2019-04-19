#include<bits/stdc++.h>
using namespace std;

struct Location{
    int x,y;
};

struct Dirt{
    Location loc;
    double distance;
};


void next_move(int posr, int posc, int dimh, int dimw, vector <string> board) {
    Location b = {posc, posr};
    vector<Dirt> dirts;
    for (int i = 0, j, height = dimh, width = dimw; i < height; i++) {
        for (j = 0; j < width; j++) {
            if ('d' == board[i][j]) {
                dirts.push_back({{j, i}, 0.0});
                dirts.back().distance = sqrt( (j-b.x) * (j-b.x) + (i - b.y) * (i - b.y) );
            }
        }
    }

    Dirt best = *std::min_element(dirts.begin(), dirts.end(), [&](Dirt l, Dirt r){return l.distance < r.distance;});

    if (best.loc.x == b.x && best.loc.y == b.y)
        cout << "CLEAN"<<endl;
    else{
        if (best.loc.y < b.y)
            cout << "UP"<<endl;
        else if (best.loc.y > b.y)
            cout << "DOWN"<<endl;
        else if (best.loc.x < b.x)
            cout << "LEFT"<<endl;
        else
            cout << "RIGHT"<<endl;
    }
}

int main(void) {
    int pos[2];
    int dim[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    cin>>dim[0]>>dim[1];
    for(int i=0;i<dim[0];i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], dim[0], dim[1], board);
    return 0;
}
