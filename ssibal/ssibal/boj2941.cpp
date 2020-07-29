
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
	vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int idx;
	string str;
	cin >> str;
	for (int i = 0; i < croatian.size(); i++)
	{
		while (1) {
			idx = str.find(croatian[i]);
			if (idx == string::npos)
				break;
			str.replace(idx, croatian[i].length(), "#");
		}
	}
	cout << str.length();
}
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//int main(void) {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	string s;
//	//vector<string> v = { {"c="},{"c-"},{"dz="} ,{"d-"},{"lj"},{"nj"},{"s="},{"z="} };
//	int cnt = 0;
//
//	cin >> s;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == 'c' && ((s[i + 1] == '-' || s[i + 1] == '='))) {
//			cnt++;
//			i++;
//		}
//		else if (s[i] == 'd') {
//			if (s[i + 1] == '-') { cnt++; i++; }
//			else if (s[i + 1] == 'z' && s[i + 2] == '=') { cnt++; i += 2; }
//			else cnt++;
//		}
//		else if (s[i] == 'n' && s[i + 1] == 'j') {
//			cnt++;
//			i++;
//		}
//		else if (s[i] == 'l' && s[i + 1] == 'j') {
//			cnt++;
//			i++;
//		}
//		else if (s[i] == 's' && s[i + 1] == '=') {
//			cnt++;
//			i++;
//		}
//		else if (s[i] == 'z' && s[i + 1] == '=') {
//			cnt++;
//			i++;
//		}
//		else
//			cnt++;
//	}
//
//	cout << cnt << '\n';
//
//
//	return 0;
//}
//
