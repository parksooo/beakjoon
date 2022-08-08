#include <iostream>
#include <algorithm>//min
using namespace std;

int N, M;

long long get2Cnt(int num) {
	long long cnt = 0;
	for (long long i = 2; i <= num; i *= 2)
		cnt += num / i;
	return cnt;
}

long long get5Cnt(int num) {
	long long cnt = 0;
	for (long long i = 5; i <= num; i *= 5)
		cnt += num / i;
	return cnt;
}

void solution() {
	cin >> N >> M;
	long long cnt2_up = get2Cnt(N);
	long long cnt5_up = get5Cnt(N);
	long long cnt2_down1 = get2Cnt(M);
	long long cnt5_down1 = get5Cnt(M);
	long long cnt2_down2 = get2Cnt(N-M);
	long long cnt5_down2 = get5Cnt(N - M);
	cout << min(cnt2_up - cnt2_down1 - cnt2_down2, cnt5_up - cnt5_down1 - cnt5_down2) << '\n';
}

int main() {
	solution();
	return 0;
}