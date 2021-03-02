#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    
	int N;
	cin >> N;
	vector<int> nlist;
	int num;
	for(int i = 0; i < N; i++){
		cin >> num;
		nlist.push_back(num);
	}
	bool isprime[2001];
	fill_n(isprime, 2001, true);
	isprime[0] = isprime[1] = false;
	for(int i = 2; i < 44; i++) {
		for(int n = i*2; n < 2001; n += i){
			isprime[n] = false;
		}
	}

    // go for matching problem of graph theory 
    for(vector<int>::iterator it = nlist.begin();it != nlist.end();it++){

    }
    return 0;
}
