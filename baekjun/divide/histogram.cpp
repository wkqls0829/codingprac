#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

#define MAX_HEIGHT 1000000000

using namespace std;

int N;
vector<long long> hist;

long long hist_area(int start, int end){
    if(start >= end){
        return 0;
    }
    long long max_area = 0;
    int mid = (start - end)/2;
    int left_ptr = mid-1, right_ptr = mid+1;
    long long left_height = MAX_HEIGHT, right_height = MAX_HEIGHT;

    bool to_left = true;
    if(hist[left_ptr] < hist[right_ptr]){
        to_left = false;
    }
    while(left_ptr >= start && right_ptr <= end){
        if(to_left){
            if(hist[left_ptr] < left_height){
                if(hist[left_ptr] < right_height){
                    to_left = false;
                }
                max_area = max(max_area, right_height * (right_ptr - left_ptr));
                left_height = hist[left_ptr];
            }
        } else{
            if(hist[right_ptr] < right_height){
                if(hist[right_ptr] < left_height){
                    to_left = true;
                }
                max_area = max(max_area, left_height * (right_ptr - left_ptr));
                right_height = hist[right_ptr];
            }

        }
    }
    if(left_ptr == start){

    }

    max_area = max(max_area, hist_area(start, mid - 1));
    max_area = max(max_area, hist_area(mid+1, end));

    return max_area;
}

int main(void)
{
    std::cin >> N;
    while(N){

        hist = vector<long long>(N, 0);
        for (int i = 0; i < N; ++i) {
            std::cin >> hist[i];
        }
        long long area = hist_area(0, N-1);

        std::cin >> N;
    }
    return 0;
}
