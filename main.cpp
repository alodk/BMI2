#include <iostream>
#include <string>
int main() {
	char a = 't';
	int x = 19;
	for (int n = 0; n < x; n++) {
		std::cout << n << " er et tal, " << a <<'\n';
	}
	std::cin >> a;
	return 0;
}
