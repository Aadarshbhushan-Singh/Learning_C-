#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int num;
    vector<int> numbers;
    for (int i=0; i<n; i++){
        cin>>num;
        numbers.push_back(num);
    }
    int first_q, second_q_a, second_q_b;
    cin>>first_q;
    cin>>second_q_a>>second_q_b;
    numbers.erase(numbers.begin()+(first_q-1));
    numbers.erase(numbers.begin()+(second_q_a-1), numbers.begin()+(second_q_b-1));
    int size_v;
    size_v=numbers.size();
    cout<<size_v<<endl;
    vector<int>::iterator iter;
    for (iter=numbers.begin(); iter!=numbers.end(); iter++){
        cout<<*iter<<" ";   
    }
    return 0;
}
