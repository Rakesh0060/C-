#include<iostream>
#include<conio.h>
using namespace std;
class student{ 
	int id;
	char name[20];
	public: 

	void getstudent(){
		cout << "Enter studentid, name";
		cin >> id >> name;
	}
};

class marks: public student{
	protected: 
	int m, p, c;
	public:
	void getmarks(){
		cout << "Enter 3 subject marks:";
		cin >> m >> p >> c;
	}
};

class sports{
	protected:
	int spmarks;
	public:
	void getsports(){
		cout << "Enter sports marks:";
		cin >> spmarks;
	}
};

class result : public marks, public sports{
	int tot;
	float avg;
	public :
	void show(){}
        tot=m+p+c;
		avg=tot/3.0;
		cout << "Total=" << tot << endl;
		cout << "Average=" << avg << endl;
		cout << "Average + Sports marks =" << avg+spmarks;
	}
};

void main(){
	result r;
	r.getstudent();
	r.getmarks();
	r.getsports();
	r.show();
	getch();
};
