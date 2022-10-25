#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
using namespace std;
int Su[1000001] = { 0, };
//1929backjun 
int main() {
	fast;
	int M, N;
	cin >> M >> N;
	Su[0] = Su[1] = 1;
	for (int i = 2; i*i <= N; i++) {
		if (Su[i] == 1) continue;
		for (int j = i*i; j <= N; j += i) {
			Su[j] = 1;
		}
	}
	for (int i = M; i <= N; i++) if (Su[i] == 0) cout << i << endl;
}
