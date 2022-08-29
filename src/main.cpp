#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto pa = int{ 100 };
	auto pb = int{ 100 };
	while (0 < (n--)) {
		auto a = int{};
		auto b = int{};
		cin >> a >> b;

		if (a < b) {
			pa -= b;
		}
		else if (b < a) {
			pb -= a;
		}
	}

	cout << pa << '\n' << pb;

	return 0;
}