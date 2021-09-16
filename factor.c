int 

int main() {
	printf("Please enter a number greater than 2: ");
	printf("/n");
	int scanf("%d", n);
	bool isPrime = true;

	for (i = 2; i <= n/2; ++i) {
		for (j = i; j <= n/2; ++j) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
	}

}