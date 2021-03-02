#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int c;
	cin >> c;

	for(int i = 0; i < c; i++){
		int N, M;
		int answer = 0;
		cin >> N >> M;
		int seats[N*M];
		int possible_seats = 0;
		for(int j = 0; j < N; j++){
			for (int k = 0; k < M; k++){
				char tmp;
				cin >> tmp;
				if(tmp == '.'){
					seats[j*M + k] = 1;
					possible_seats += 1;
				}
			}
		}
		vector<int> turn_x(N*M);
		if(seats[0]){
			turn_x[0] = seats[1] + seats[M+1];	
		}
		else{
			turn_x[0] = 7;
		}
		if(seats[M-1]){
			turn_x[M-1] = seats[M-2] + seats[2*M-2];
		}
		else{
			turn_x[M-1] = 7;
		}
		for(int i = 1; i < N; i++){
			
		}
		
	}
	return 0;
}
