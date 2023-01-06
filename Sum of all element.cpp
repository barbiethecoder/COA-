//sum of all digits in a number
#include <bits/stdc++.h>
using namespace std;
vector<int> decToBinary(int n)
{
    // array to store binary number
    vector<int> ans;
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        ans.push_back(binaryNum[j]);
    }
    return ans;

}
 
int main(){
    int a;
    cin >> a;
    vector<int> numb;
    numb=decToBinary(a);
    int s=0;
    for(int i=0; i<numb.size(); i++){
        s+=numb[i];
    }
    cout << s << endl;
    return 0;
}
