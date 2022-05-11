class Solution {
public:
   bool isValid(string s) {
	int even, odd = even + 1;
	int pass = 0;
	if (s.empty())
		return false;
	while (even<s.length()){
		if ((s[even] == '(' && s[odd] == ')' )|| (s[even] == '[' && s[odd] == ']' )|| (s[even] == '{' && s[odd] == '}'))
			pass++;
		else
			pass-=9000;

		even += 2;
		odd = even + 1;
	}
	if (pass < 0)
		return false;
	else
		return true;
	
}
};