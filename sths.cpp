#include<iostream>
using namespace std;
int main(){
	setlocale(0,"rus");
	int cell;
	int i = 0;
	int Stop = 1;
	
	while(Stop != 0){
	std::cin>>cell;
	if(cell > 0) std::cout<<"�������"<<std::endl;
	else if (cell < 0) std::cout<<"�����"<<std::endl;
	else std::cout<<"��������� ������"<<std::endl; 
		if(i>10){
		Stop--;
		std::cout<<"You won"<<std::endl;
	}
	i++;
	}

	return 0;
}
