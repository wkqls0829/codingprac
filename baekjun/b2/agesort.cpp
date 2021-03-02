#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    string names[n];
    vector<vector<int>> ages(n, vector<int>(2,0));
    for (int i = 0; i < n; ++i) {
        cin >> ages[i][0] >> names[i];
        ages[i][1] = i;
        
    }
    sort(ages.begin(), ages.end());
    for (int i = 0; i < n; ++i) {
        cout << ages[i][0] << " " << names[ages[i][1]] << "\n";
    }
    return 0;
}
