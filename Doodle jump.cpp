#include<iostream>
int main(){
	setlocale(0,"rus");
	int cell;
	std::cin>>cell;
	if(cell > 0) std::cout<<"�������"<<std::endl;
	else if (cell < 0) std::cout<<"����� :(,���������������"<<std::endl;
	else std::cout<<"��������� ������"<<std::endl; 
	return 0;
}
