#include<iostream>
using namespace std;
class student{
	private:
	int rollnum;
	public:
	void setrollnum(int num){
		rollnum=num;
	}
	int getrollnum(){
		return rollnum;
	}
	
};
int main(){
student s1;
s1.setrollnum(240844);
cout<<"rollnumber:"<<s1.getrollnum();
	
}