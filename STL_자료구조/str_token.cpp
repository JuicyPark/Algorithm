#include <iostream>
#include <vector>
#include <string>
#include<sstream>
using namespace std;

#pragma region Token
vector<string> Tokenize(string ids)
{
	vector<string> tokenizeList;
	string token;
	stringstream ss(ids);
	while (ss >> token)
	{
		tokenizeList.push_back(token);
	}
	return tokenizeList;
}

void comma()
{
	string str;
	getline(cin, str);
	string token;
	stringstream ss(str);

	while (getline(ss, token, ','))
	{
		cout << token << endl;
	}
}
void Default()
{
	string line;
	string token;

	getline(cin, line);

	stringstream ss(line);
	while (ss >> token)
	{
		cout << token << endl;
	}
}

#pragma endregion

#pragma region IsString
bool IsInteger(char a)
{
	if (a >= '0' && a <= '9')
		return true;
	return false;
}

bool IsCharacter(char a)
{
	if (a >= 'a' && a <= 'z')
		return true;
	return false;
}
#pragma endregion

#pragma region Parse

int ParseToInt(char c)
{
	return c - '0';
}

int ParseToInt(string str)
{
	int answer = stoi(str);
	return answer;
}

string ParseToString(int a)
{
	string answer = to_string(a);
	return answer;
}

#pragma endregion

#pragma region Compare
void CMP()
{
	string a = "abc";
	string b = "acc";


	//b가 a보다 크니까 1반환
	cout << b.compare(a);
}
#pragma endregion

void Reverse(string str)
{
	reverse(str.begin(), str.end());
}

void Contain(string str)
{
	string origin = "ABCDE";
	int findIndex = origin.find(str);
	// 해당 인덱스반환
}

int main()
{

}