#include<iostream>
using namespace std;

class Student{
	
	int rollNo;
	int marks;
	
	public:
		
		Student(int rn,int m){
			rollNo = rn;
			marks = m;
			
		}
	
	bool operator>(Student s){
		
			return marks>s.marks;
		}
			
		
};

int main(){
	
	
	Student s1(101,85);
	Student s2(102,90);
	
	if (s1>s2){
		cout<<"Student 1 has obtained higher marks."<<endl;
		
	}
	else{
		cout<<"Student 2 has obtained higher marks."<<endl;
	}
	
	
	return 0;
}