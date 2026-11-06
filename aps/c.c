#include <stdio.h>

typedef long long int ll;

ll arr[10000000];

int main() {
	int t;
	scanf("%d", &t);

	arr[0] = 0;
	arr[1] = 0;
	for (ll i = 2; i < 10000000; i++) arr[i] = i;

	for (ll i = 2; i * i < 10000000; i++) {
		if (arr[i] != i) continue;	// kdyz uz je pro tohle cislo vypocitany f
		// jedu od i*i - kdybych jel 2*i, uz je ale checknuta 2 atd
		for (ll j = i * i; j < 10000000; j += i) {
			if (arr[j] == j) arr[j] = i;
		}
	}

	for (ll i = 2; i < 10000000; i++) {
		arr[i] = arr[i - 1] + arr[i];
	}

	for (int i = 0; i < t; i++) {
		ll n;
		scanf("%lld", &n);
		printf("%lld\n", arr[n]);
	}

	return 0;
}
