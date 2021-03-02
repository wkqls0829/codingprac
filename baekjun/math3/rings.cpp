#include <iostream>
#include <vector>

using namespace std;

int gcm(int a, int b)
{
    int ao, bo;
    ao = a;
    bo = b;
    if(b > a){
        int temp = a;
        a = b;
        b = temp;
    }
    int q = a/b, r = a%b;
    while(r){
        a = b;
        b = r;
        q = a/b;
        r = a%b;
    }
    return b;
}

int main(void)
{
    int N;
    std::cin >> N;
    vector<int> rings(N, 0);
    for (int i = 0; i < N; ++i) {
        std::cin >> rings[i];
    }
    for (int i = 1; i < N; ++i) {
        int tgcm = gcm(rings[0], rings[i]);
        cout << rings[0] / tgcm << "/" << rings[i] / tgcm << "\n";        
    }
    return 0;
}
