#include<iostream>
using namespace std;
class student{
	private:
	string name;
	int rollnum;
	double marks;
	char grade;
	public:
	//constructor
	student(string n,int roll,double m){
		name =n;
		rollnum=roll;
		marks=m;
		calculategrade();
	}
	void calculategrade(){
	if(marks>=90){
		grade='A';
	}else if(marks>=80){
		grade='b';
	}
	else if(marks>=70){
		grade='c';
	}else{
		grade='F';
	}	
	}
	void displaystudentinfo(){
		cout<<"name:"<<name<<endl;
		cout<<"roll number:"<<rollnum<<endl;
		cout<<"marks:"<<marks<<endl;
		cout<<"grade:"<<grade<<endl;
		}
	
};
int main(){
	student s1("payal",240844,85);
	s1.displaystudentinfo();
	student s2("kanu",240811,90);
	s2.displaystudentinfo();
	
}