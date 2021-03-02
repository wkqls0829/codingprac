#include <iostream>
#include <vector>

long long sum(std::vector<int> &a);

long long sum(std::vector<int> &a){
    long long toreturn = 0;
    for (std::vector<int>::iterator it = a.begin(); it < a.end(); ++it) {
        toreturn+= *it;
    }
    return toreturn;
}
