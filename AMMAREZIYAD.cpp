//Mohd Izz Ammar Bin Mohd Zalani A17DW4306
//Muhammad Ziyad Bin Afarizal A17DW3514

#include <iostream>
using namespace std;

int main ()
{
	char press,yes,firstchoice,secondchoice,thirdchoice,fourthchoice,ctn;
	
	cout<<"WUDDUP NINJA! Taktahu nak makan apa? Tekan C!(CAPS LOCK ON)"<<endl;
	cin>>press;
	
	do{
	if (press=='C'){
	cout<<"So basically, nak mkaan nasi atau mee? (A-Nasi / B-Mee)"<<endl;cin>>firstchoice;
	
	if (firstchoice=='A'){
		cout<<"Bersama ayam, atau ikan? (A-ayam / B-ikan)"<<endl;cin>>secondchoice;
		
		if (secondchoice=='A'){
			cout<<"ada duit tak?(A-ada / B-Takde huhu)"<<endl;cin>>thirdchoice;
			
			if(thirdchoice=='A'){
				cout<<"ha pergi makan nasi ayam. Sila ke Chicken Rice Shop berdekatan anda."<<endl;
			}
			else if (thirdchoice=='B'){
				cout<<"sedihnya,ha pergi makan nasi ayam kat warung pak munawir."<<endl;
			}
		}
		else if (secondchoice=='B'){
		cout<<"Fish and chip ke Ikan berkuah? (A-FishNchip/ B-Berkuah)"<<endl;cin>>thirdchoice;
		
		if(thirdchoice=='A'){
				cout<<"Saya rasa awak nak makan di Manhattan Fish Market."<<endl;
			}
			else if (thirdchoice=='B'){
				cout<<"Ha pergi makan di kedai nasi campur di kedai lokal berdekatan"<<endl;
			}
		
	
	}
		//IZAMACUTE
	}
	else if (firstchoice=='B'){
		cout<<"Mee apa awak suka? (A-mee kuning / B-ramen)"<<endl;cin>>secondchoice;
		
		if (secondchoice=='A'){
			cout<<"suka goreng ke berkuah? (A-goreng / B-kuah)"<<endl;cin>>thirdchoice;
			
			if(thirdchoice=='A'){
				cout<<"saya rasa awak pergi makan kat mamak jela order mee goreng mamak"<<endl;
			}
			else if(thirdchoice=='B'){
				cout<<"saya cadangkan awak makan dekat MeeKariMak area AMPANG"<<endl;
			}
		}
		
		else if (secondchoice=='B'){
			cout<<"ada duit tak? (A-ada / B takda)"<<endl;cin>>thirdchoice;
			
			if (thirdchoice=='A'){
				cout<<"boleh makan ramen dekat ShushiKing"<<endl;
			}
			else if (thirdchoice=='B'){
				cout<<"pergi beli ramen segera kat kedai runcit berdekatan"<<endl;
			}
		}
		
	}
	
    }
    cout<<"SETUJU TAK DENGAN CADANGAN KAMI? [Y-TAK N-SETUJU ](Y/N)"<<endl;
	cin>>ctn;	
}
	while (ctn=='Y');
	
	if (ctn=='N')
	{
		cout<<"tq brahhhh!"<<endl;
	}
	
	return 0;
}
