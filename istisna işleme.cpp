#include<iostream>
using namespace std;

double bolme(int a,int b){
	try{  // dene bir demek b nin 1 den küçüklüðünü denicez aþaðýda 
		if(b<1){
			throw 0; //b den küçükse -1 at direkt demek
		}
		return a/b;	//b>=1 ise iþlemi yapacaktýr
	}
	catch(int asd){   //asd i yazdýrdýk throwdan atýlaný tuttu catch ya hani zaten 
		cout<<asd<<"Bir sayý sýfýra bölünemez";
	}
	}
	





int main(){
	
	cout<<bolme(5,0);
	cout<<bolme(5,1);
	
	
	return 0;
}
