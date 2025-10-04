#include<iostream>
using namespace std;
class message{
	private:
	string Message;
	public:
	//constructor
	message(string mess){
		Message=mess;
	}
	void displayMessage(){
		cout<<"message: "<<Message<<endl;
	}
};
int main(){

message m1("iam learnin c++ in third semester");
m1.displayMessage();
}