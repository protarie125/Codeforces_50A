#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	auto sq = m * n;
	cout << sq / 2;

	return 0;
}