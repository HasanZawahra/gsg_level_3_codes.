#include <bits/stdc++.h>
using namespace std;

vector<string> v = {"Swimming", "Running", "Football"};

void rec(int n, string s = "", string prev = ""){
    if(n == 0){
        cout << s << '\n';
        return;
    }
    for(int i = 0;i < 3 ;i++){
        if(prev != v[i])
            rec(n-1, s+v[i]+" ", v[i]);
    }
}

int main() {

    int n;
    cin >> n;
    rec(n);
    cout << "COUNt: " << 3 * pow(2, n-1);

    return 0;
}
