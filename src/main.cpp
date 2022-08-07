#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	auto k = int{};
	cin >> n >> k;

	auto v = vi(n);
	for (auto i = 0; i < n; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[n - k];

	return 0;
}