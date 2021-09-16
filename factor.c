bool checkPrime(int n) {
	bool isPrime = true;
	for (j = 2; j <= n/2; ++j) {
		if (n % j == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main() {
	printf("Please enter a number greater than 2: ");
	printf("/n");
	int scanf("%d", n);

	bool isPrime = true;

	for (i = 2; i <= n/2; ++i) {
		isPrime = checkPrime(i);
		if (isPrime) {
			printf("%d", i);
			printf(" ");
		}
	}

}
