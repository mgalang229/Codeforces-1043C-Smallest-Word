#include <bits/stdc++.h>
using namespace std;

/*

given:
bababaabba

process:
0100000000
abbabaabba

0110000000
bbaabaabba

0111000000
aabbbaabba

0111100000
bbbaaaabba

0111101000
aaaabbbbba

0111101010
bbbbbaaaaa

0111101011
aaaaabbbbb <- goal

ans:
0111101011

*/

void test_case(int& tc) {
	string s;
	cin >> s;
	int n = s.size();
	string temp = "", ans = "";
	s += "b";
	for (int i = 0; i < n; i++) {
		temp += s[i];
		if (s[i+1] == 'a') {
			if (temp[0] == 'a') {
				ans += "1";
				reverse(temp.begin(), temp.end());
			} else {
				ans += "0";
			}
		} else {
			if (temp.back() == 'a') {
				ans += "1";
				reverse(temp.begin(), temp.end());
			} else {
				ans += "0";
			}
		}
		// cout << i << " = " << temp << "\n";
	}
	for (char x : ans)
		cout << x << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	// cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
