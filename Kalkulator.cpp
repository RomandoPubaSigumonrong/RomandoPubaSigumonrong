#include <iostream>
using namespace std;

int main(){
	int angka1, angka2, hasil, pangkat;
	char opr;
	
	cout<<"Masukan angka pertama : ";
	cin>>angka1;
	cout<<endl;
	cout<<"Pilih tipe perhitungan : ";
	cin>>opr;
	cout<<endl;
	cout<<"Silahkan masukan angka 2 : ";
	cin>>angka2;
	
	if(opr == '+'){
		cout<<angka1+angka2;
	}else if(opr == '-'){
		cout<<angka1-angka2;
	}else if(opr == '*'){
		cout<<angka1*angka2;
	}else if(opr == '/'){
		cout<<angka1/angka2;
	}else{
		cout<<endl;
		cout<<endl;
		cout<<"tipe perhitungan tidak valid";
	}
	
	
	
}
