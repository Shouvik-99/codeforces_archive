//May the force be with me
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb push_back
#define vll vector<long long int>
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((long long int)(x).size())
#define mll map<long long int, long long int>
#define pll pair<long long int, long long int>
using namespace std;


void solve(){
	ll n;
	cin >> n;
	char a[n][n];
	for(ll i = 0; i < n; i++) for(ll j = 0; j < n; j++)cin >> a[i][j];
	ll z = 0, o = 0, z2 = 0, o2 = 0;
	if(a[0][1] == '0')z++;
	if(a[1][0] == '0')z++;
	if(a[0][1] == '1')o++;
	if(a[1][0] == '1')o++;
	if(a[n-1][n-2] == '0')z2++;
	if(a[n-2][n-1] == '0')z2++;
	if(a[n-1][n-2] == '1')o2++;
	if(a[n-2][n-1] == '1')o2++;
	if(z==2){
		if(z2 == 2){
			cout << 2 << endl;
			cout << "1 2" << endl << "2 1";
		}
		else if(o2 == 2) cout << 0;
		else {
			cout << 1 << endl;
			if(a[n-1][n-2] == '0')cout<<n<<" "<<n-1;
			else cout<<n-1<<" "<<n;
		}
	}
	else if(o==2){
		if(o2 == 2){
			cout << 2 << endl;
			cout << "1 2" << endl << "2 1";
		}
		else if(z2 == 2) cout << 0;
		else {
			cout << 1 << endl;
			if(a[n-1][n-2] == '1')cout<<n<<" "<<n-1;
			else cout<<n-1<<" "<<n;
		}
	}
	else{
		if(z2 == 2){
			cout << 1 << endl;
			if(a[0][1] == '0')cout << "1 2";
			else cout << "2 1";
		}
		else if(o2 == 2) {
			cout << 1 << endl;
			if(a[0][1] == '1')cout << "1 2";
			else cout << "2 1";
		}
		else {
			if(a[0][1] == '1'){
				cout << 2 << endl;
				cout << "1 2" << endl;
				if(a[n-1][n-2] == '0')cout<<n<<" "<<n-1;
				else cout<<n-1<<" "<<n;
			}
			else{
				cout << 2 << endl;
				cout << "2 1" << endl;
				if(a[n-1][n-2] == '0')cout<<n<<" "<<n-1;
				else cout<<n-1<<" "<<n;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t = 1;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	cin.get();
	return 0;
}
//g++ -Wshadow -Wall -O2 -Wno-unused-result -Wno-psabi