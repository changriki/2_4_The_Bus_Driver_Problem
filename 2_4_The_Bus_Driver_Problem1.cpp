#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, d, r;
	int morning[15000], evening[15000];
	while(scanf("%d %d %d", &n, &d, &r) && (n || d || r)) {
		for (int i = 0; i < n; i++) scanf("%d", &morning[i]);
		for (int j = 0; j < n; j++) scanf("%d", &evening[j]);
		sort(morning, morning + n);
		sort(evening, evening + n);
		int sum = 0;
		for (int k = 0; k < n; k++)
			if (morning[k] + evening[n-k-1] > d)
			    sum += ((morning[k] + evening[n-k-1] - d) * r);
		cout << sum << endl;
    }
}