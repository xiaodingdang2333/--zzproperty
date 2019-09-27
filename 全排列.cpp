#include <string>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
void permutation(vector<string>&res,string str,int index,int len)//string str 加&就不按字典序输出，不加就按字典序输出 
{
	if(index==len)res.push_back(str);
	for(int i=index;i<len;i++)
	{
		if(i!=index&&str[i]==str[index])continue;
		swap(str[i],str[index]);
		permutation(res,str,index+1,len);
	}
 } 
int main()
{
	string str="1233";
	vector<string>res;
	permutation(res,str,0,str.length());
	for(int i=0;i<res.size();i++)cout<<res[i]<<endl;
	system("pause");
}
