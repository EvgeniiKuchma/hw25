#include <iostream>
#include <string>

void toupper(std::string str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}
bool its_polindrom_to_reverse_iterator(std::string str)
{
	if (str == std::string(str.rbegin(), str.rend()))
		return true;
	return false;
}
int result(std::string str)
{
	int counter = 0;
	char str2[5] = { '!' , '?', '.' , ',' , ' ' };
	for (int i = 0; i < str.length(); i++) 
	{
		for (int j = 0; j < 5; j++)
		{
		if (str[i] == str2[j])
			counter++;
		}
	}
return counter;
}
std::string find_last_index_str2(std::string str, char f_sym)
{
	std::string sym = str.substr(str.rfind(f_sym));
	return sym;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	
	std::string  str;
	std::string res; 
	str = "Hello world!";
	char sym = 'l';
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	std::cout << res;
	
	
	std::string word;
	std::cout << "\n\nPlese enter word :";
	getline(std::cin,word);
	toupper(word);
	std::cout << its_polindrom_to_reverse_iterator(word);
	
	

	std::string  str1;
	str1 = "\n\nHello? world, ñan you  hear me?! No. ";
	std::cout << str1;
	std::cout << '\n' << result(str1);

	
	
	std::string  str2;
	str2 = "Hello world!";
	char sym1 = 'o';
	std::cout <<"\n\n" << find_last_index_str2(str2, sym1);
	return 0;
}