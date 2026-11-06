#include <stdio.h>

typedef long long int ll;

int main () {
	ll b, p, m, r;

	while (scanf("%lld %lld %lld", &b, &p, &m) != EOF) {
		b %= m;
		r = 1;
		ll temp = b;
		ll i;
		for (i = 1; i <= p; i<<=1) {
			if ((i & p)) r = (r*temp) % m;
			temp *= temp;
			temp %= m;
		}
		printf("%lld\n", r);
	}

	return 0;
}
