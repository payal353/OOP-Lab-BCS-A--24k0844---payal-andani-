#include<iostream>
using namespace std;
class calculate{
	private:
	int num1,num2;
	public:
	void setnumbers(int n1,int n2);
	int addnum();
};
void calculate::setnumbers(int n1,int n2){
	num1=n1;
	num2=n2;
}
int calculate::addnum(){
	return num1+num2;
}
int main(){
calculate c1;
c1.setnumbers(4,5);
cout<<"sum of 2 num is: "<<c1.addnum();
}