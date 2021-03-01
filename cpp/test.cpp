/* Title: the title of the project goes here.
 * Author: Natsu29
 * Date:xx/xx/xx
 * sign: @ashh
 */
#include <bits/stdc++.h>
#define nl "\n"
#define PB push_back
#define EB emplace_back
#define MP make_pair
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<int, int>> vvi;

int binetsform(int n){

    int nom = pow((1 + sqrt(5)), n)  - pow((1-sqrt(5)), n);
    int denom = pow(2,n)*sqrt(5);
    return nom/denom;
}
void bubblesorting(int *arr, int n){
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[i]);
            }
        }
    }


}

int main(int arg, char ** argv){
	ios::sync_with_stdio(false);
	int n;cin >> n;int arr[n];for(int i = 0; i < n; i++) cin >> arr[i];
	bubblesorting(arr, n);
	for(int i = 0; i < n; i++)
	    cout << arr[i] << nl;
    return 0;
};


