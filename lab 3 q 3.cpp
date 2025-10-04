#include<iostream>
class calculate{
	private:
	int num1,num2;
	public:
	void setnumbers(int n1,int n2){
		num1=n1;
		num2=n2;
	}
	int addnum(){
		return num1+num2;
	}
};
int main(){
calculate c1;
c1.setnumbers(4,5);
std::cout<<"sum of 2 num is: "<<c1.addnum()<<std::endl;
}
