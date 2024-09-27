#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class UnionFind {
private:
    vector<int> parent;
    vector<int> seniority;
    vector<int> maxID;

public:
    UnionFind(int n, vector<int>& hires) {
        parent.resize(n);
        seniority = hires;
        maxID = hires; // Initially, maxID is the same as employee ID

        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    void unionSets(int a, int b) {
        int rootA = find(a);
        int rootB = find(b);

        if (rootA != rootB) {
            // Union by rank could be added here for optimization
            parent[rootB] = rootA;

            // Update maxID based on seniority
            if (seniority[rootB] > seniority[rootA] || 
                (seniority[rootB] == seniority[rootA] && maxID[rootB] > maxID[rootA])) {
                maxID[rootA] = maxID[rootB];
            }
        }
    }

    void promote(int x) {
        seniority[x]++;
        int root = find(x);
        
        // Update the maxID for the root if the promoted employee is more senior
        if (seniority[x] > seniority[maxID[root]] || 
            (seniority[x] == seniority[maxID[root]] && x > maxID[root])) {
            maxID[root] = x;
        }
    }

    int getMostSenior(int x) {
        return maxID[find(x)];
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> hires(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> hires[i];
    }

    UnionFind uf(n, hires);
    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int a, b;
            cin >> a >> b;
            uf.unionSets(a, b);
        } else if (type == 2) {
            int x;
            cin >> x;
            uf.promote(x);
        } else if (type == 3) {
            int y;
            cout << uf.getMostSenior(y) << endl;
        }
    }

    return 0;
}
