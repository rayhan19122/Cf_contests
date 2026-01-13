#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    optimize();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> decks(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                decks[i].push_back(x);
            }
            sort(decks[i].begin(), decks[i].end()); // Sort each deck for simulation
        }
        
        // Create a vector of pairs (smallest card, cow index)
        vector<pair<int, int>> smallest_cards;
        for (int i = 0; i < n; i++) {
            smallest_cards.emplace_back(decks[i][0], i);
        }
        
        // Sort by the smallest card
        sort(smallest_cards.begin(), smallest_cards.end());
        
        // Build the permutation
        vector<int> p;
        for (auto &[card, index] : smallest_cards) {
            p.push_back(index + 1); // +1 for 1-based indexing
        }
        
        // Simulate the game
        int current_top = -1; // The top card on the center pile
        bool possible = true;
        
        for (int round = 0; round < m; round++) {
            for (int i = 0; i < n; i++) {
                int cow = p[i] - 1; // Convert back to 0-based index
                auto it = upper_bound(decks[cow].begin(), decks[cow].end(), current_top);
                if (it == decks[cow].end()) {
                    possible = false;
                    break;
                }
                current_top = *it; // Place the card on the pile
                decks[cow].erase(it); // Remove the card from the cow's deck
            }
            if (!possible) break;
        }
        
        if (possible) {
            for (int x : p) {
                cout << x << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
