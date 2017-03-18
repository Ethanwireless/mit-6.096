# include <iostream>
# include <string>
using namespace std;

const string vowels = "aeiou";

string pigLatinify(const string s){
	if (s.size() == 0) return s;
	if (s.find("qu") == 0) return s.substr(2, s.size()-2) + "-quay";
	else if (vowels.find(s[0]) != string::npos) return s + "way";
	else return s.substr(1, s.size()-1) + "-" + s[0] + "ay";
}

int main() {
	cout << "Input string: \n";
	string str;
	cin >> str;
	cout << pigLatinify(str) << endl;
	return 0;
}