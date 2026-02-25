// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int>pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(8);
    pq.push(9);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    while(!pq.empty()){
        int n=pq.top();
        cout<<n<<endl;
        pq.pop();
    }
    return 0;
}
