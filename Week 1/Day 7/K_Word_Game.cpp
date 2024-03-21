// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int tc;
//     cin>>tc;
//     while(tc--)
//     {
//         int n;
//         cin>>n;

//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

    const int N = 3;
    ios_base::sync_with_stdio(false);
    long t; cin >> t;
    while(t--){
        long n; cin >> n;

        // Separate vectors for each player's words
        vector<vector<string>> words(N);

        // Reading input words
        for (long p = 0; p < N; p++) {
            words[p].resize(n);
            for (long q = 0; q < n; q++) {
                cin >> words[p][q];
            }
        }

        // Sets for unique words of each player
        vector<set<string>> uniqueWords(N);

        // Populating unique words sets
        for (long p = 0; p < N; p++) {
            for (const string& word : words[p]) {
                uniqueWords[p].insert(word);
            }
        }

        // Calculating scores
        vector<long> score(N, 0);
        for (long p = 0; p < N; p++) {
            for (const string& word : uniqueWords[p]) {
                long cnt = 0;
                for (long q = 0; q < N; q++) {
                    if (q != p && uniqueWords[q].count(word) > 0) {
                        cnt++;
                    }
                }
                if (cnt == 0) {
                    score[p] += 3;
                } else if (cnt == 1) {
                    score[p] += 1;
                }
            }
        }

        // Output scores
        for (long p = 0; p < N; p++) {
            cout << score[p] << " ";
        }
        cout << endl;
    }

    return 0;
}
