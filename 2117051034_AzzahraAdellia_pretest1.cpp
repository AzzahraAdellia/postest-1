#include <iostream>
using namespace std;
int main(){
    
	string variabel_nama1 ;
	string variabel_nama2;
	
	
	//input
	cout<<"nama orang pertama = ";
	getline(cin,variabel_nama1);
	cout<<"nama orang kedua   = ";
	getline(cin,variabel_nama2);
	
		
	//output
	cout<<"###=PERCAKAPAN SINGKAT###"<<endl;
	
		
	cout<<variabel_nama1<< " : Hai salam kenal, namaku "<<variabel_nama1<<". Nama kamu siapa?" <<endl;
	cout<<variabel_nama2<< " : Hallo salam kenal juga, namaku "<<variabel_nama2<<"."<<endl;
	cin.get();
	
	return 0;
}
