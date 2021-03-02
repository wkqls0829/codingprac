#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool can_pair(vector<int> nlist, bool* isprime){
	if(nlist.empty()){
		return true;
	}
	bool toreturn = false;
	vector<int>::iterator it = nlist.begin();
        int first = *it;
	it++;
	while(it!=nlist.end()){
		if(isprime[first + *it]){
			vector<int> nextvec = vector<int>(nlist.begin() + 1, it);
			nextvec.insert(nextvec.end(), it+1, nlist.end());
			toreturn = toreturn || can_pair(nextvec, isprime);
		}	
		it++;
	}
	return toreturn;
}

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
	vector<int>::iterator it = nlist.begin();
        int first = *it;
	it++;
    vector<int> toprint;
	while(it!=nlist.end()){
		if(isprime[first + *it]){
			vector<int> nextvec = vector<int>(nlist.begin() + 1, it);
			nextvec.insert(nextvec.end(), it+1, nlist.end());
			if(can_pair(nextvec, isprime)){
				toprint.push_back(*it);
			}
		}	
		it++;
	}
	if(toprint.empty()){
		cout << -1;
	} else{
        sort(toprint.begin(), toprint.end());
        for(vector<int>::iterator ait = toprint.begin(); ait != toprint.end(); ait++) {
            cout << *ait << " ";
        }  
    }
	return 0;
}
