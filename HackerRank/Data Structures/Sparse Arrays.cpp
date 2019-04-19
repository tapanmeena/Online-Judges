#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the findSuffix function below.
 */
int findSuffix(vector<string> collections, string queryString) {
    int count=0;
    for(int i=0;i<collections.size();i++){
        if(queryString==collections[i]){
            count++;
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> strings(strings_count);

    for (int strings_itr = 0; strings_itr < strings_count; strings_itr++) {
        string strings_item;
        getline(cin, strings_item);

        strings[strings_itr] = strings_item;
    }

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string queryString;
        getline(cin, queryString);

        int res = findSuffix(strings, queryString);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
