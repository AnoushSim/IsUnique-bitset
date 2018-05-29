#include <iostream>
bool isunique(std::string);
int main()
{
	std::string str="hello";
	std::string s="world";
	if(isunique(str))
		std::cout<<"Your first  string charackters are unique"<<std::endl;
	 else 
		 std::cout<<"Your first string charackters are not unique"<<std::endl;
	if(isunique(s))
                  std::cout<<"Your second  string charackters are unique"<<std::endl;
	 else 
		 std::cout<<"Your second  string charackters are not unique"<<std::endl;

	 return 0;
}
bool isunique(std::string s)
{
	int mask=0;
	for(int i=0;i<s.size();++i)
	   { 
		   int x=s[i]-97;
		   if((1<<x)&mask)
			   return false;
		   else mask |=(1<<x);
	   }
	return true;
}
