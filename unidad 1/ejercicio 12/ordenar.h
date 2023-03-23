#include<algorithm>
#include<functional>

void ordenar (std::vector<int> &v){
    sort(v.begin(), v.end(), std::greater<int>());
}