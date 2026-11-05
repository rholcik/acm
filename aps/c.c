#include <stdio.h>

typedef long long int ll;

int main() {
	int t;
	ll n;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%lld", &n);
		char arr[10000000];
		ll k = 2;
		for(;;k++) {
			if (arr[k]) continue;
			if (n % k == 0) break;
			for (ll j=k; j<n;j+=j) arr[j] = 1;
		}
		printf("%lld\n", k);
	}
	return 0;
}
