#include <stdio.h>

typedef long long int ll;

int main () {
	ll n;
	while (scanf("%lld", &n) != EOF) {
		printf("%lld\n", (3*(n+1)*(n+1)>>1)-9);
	}
	return 0;
}
