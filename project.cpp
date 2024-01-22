#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int quantity;
	int choice;
	int qrooms=0 , qpasta=0 ,qburger=0, qbiryani=0, qchickenroll=0 , qmuttonqorma=0;//quantity
	int srooms=0 , spasta=0 , sburger=0 , sbiryani=0, schickenroll=0, smuttonqorma=0;  // sold  items
	int total_rooms=0 , total_pasta=0 , total_burger=0, total_biryani=0 , total_chickenroll=0 , total_muttonqorma=0; //total price of each tem
	
	cout<<" \n \t quantity of rooms we have ";
	cout<<" \n  rooms avaliable"<<endl;
	cin>>qrooms;
cout<<"\n  quantity of pasta"<<endl;
cin>>  qpasta;
cout<<" \n quantity of burger"<<endl;
cin>> qburger ;
cout<<" \n quantity of biryani"<<endl;
cin>>  qbiryani;
cout<<" \n quantity of chicken roll"<<endl;
cin>>  qchickenroll;
cout<<" \n quantity of mutton qorma"<<endl;
cin>>  qmuttonqorma;

m:

cout<<" \n\t\t\t PLEASE SELECT FROM THE MENU OPTIONS"<<endl;
cout<<" \n\n1) ROOMS"<<endl;
cout<<" \n2) PASTA"<<endl;
cout<<"\n3)  BURGER"<<endl;
cout<<" \n4) BIRYANI"<<endl;
cout<<" \n5) CHICKEN ROLL"<<endl;
cout<<" \n7) MUTTON QORMA"<<endl;
cout<<" \n8) INFORMATION REGARDING SALES AND COLLECTION"<<endl;
cout<<" \n9) EXIT";
cout<<" \n\n PLEASE ENTER YOUR CHOICE! "<<endl;
cin>> choice;

switch(choice){
	case 1: 
	cout<<" enter numbers of rooms you want"<<endl;
	
cin>>quantity;

if(qrooms -srooms>= quantity){
	srooms=srooms+ quantity;
	total_rooms=(total_rooms+quantity*1200);
	cout<<quantity<<" rooms have been alloted to you"<<endl;
}
else{
	cout<<" only"<<qrooms -srooms<<" rooms are remaining in hotel" ;
	break;
}

		case 2: 
	cout<<" enter pasta quantity: "<<endl;
	
cin>>quantity;

if(  qpasta-spasta >= quantity){
	spasta=spasta+ quantity;
	total_pasta=(total_pasta + quantity*120);
	cout<<quantity<<" pasta is the order "<<endl;
}
else{
	cout<<" only"<<qpasta-spasta<<" pasta are remaining in hotel" ;
	break;

		case 3: 
	cout<<" enter burger quantity: "<<endl;
	
cin>>quantity;

if(  qburger-sburger >= quantity){
	sburger=sburger+ quantity;
	total_burger=(total_burger + quantity*170);
	cout<<quantity<<" burger  is the order "<<endl;
}
else{
	cout<<" only"<<qburger-sburger  <<" burgers are remaining in hotel" ;
	break;
	
}
	case 4: 
	cout<<" enter biryani quantity: "<<endl;
	
cin>>quantity;

if(  qbiryani-sbiryani >= quantity){
	sbiryani=sbiryani + quantity;
	total_biryani=(total_biryani + quantity*190);
	cout<<quantity<<" biryani is the order "<<endl;
}
else{
	cout<<" only"<<  qbiryani-sbiryani <<" biryani are remaining in hotel" ;
	break;
	
}

	case 5: 
	cout<<" enter chicken roll quantity: "<<endl;
	
cin>>quantity;

if(  qchickenroll-schickenroll>= quantity){
	schickenroll=schickenroll + quantity;
	total_chickenroll=(total_chickenroll+ quantity*300);
	cout<<quantity<<" chicken roll is the order "<<endl;
}
else{
	cout<<" only"<<  qchickenroll-schickenroll  <<" chicken rolls are remaining in hotel" ;
	break;
	
}

case 6: 
	cout<<" enter mutton qorma quantity: "<<endl;
	
cin>>quantity;

if(  qmuttonqorma-smuttonqorma>= quantity){
	smuttonqorma=smuttonqorma+ quantity;
	total_muttonqorma=(total_muttonqorma+ quantity*400);
	cout<<quantity<<" mutton qorma is the order "<<endl;
}
else{
	cout<<" only"<<   qmuttonqorma-smuttonqorma  <<" mitton qorma  are remaining in hotel" ;
	break;
	
}
 
 case 7: 
 cout<< " details and collections"<<endl;
 cout<<" numbers of rooms we had :"<< qrooms;
 cout<<" numbers of rooms we gave for rent:"<<srooms;
 cout<<" remaining rooms :"<< qrooms-srooms;
 cout<<" total rooms collecction for the day:"<< total_rooms;
 
 
 cout<< " details and collections"<<endl;
 cout<<" numbers of pasta we had :"<< qpasta;
 cout<<" numbers of pasta we gave for sold:"<<spasta;
 cout<<" remaining pasta:"<< qpasta-spasta;
 cout<<" total pasta collection for the day:"<< total_pasta;
 
 
 cout<< " details and collections"<<endl;
 cout<<" numbers of biryani  we had :"<< qbiryani;
 cout<<" numbers of biryani we had:"<<sbiryani;
 cout<<" remaining biryani :"<< qbiryani-sbiryani;
 cout<<" total biryani collecction for the day:"<< total_biryani;
 
 
 cout<< " details and collections"<<endl;
 cout<<" numbers of burger  we had :"<< qburger;
 cout<<" numbers of burger we had:"<<sburger;
 cout<<" remaining burger :"<< qburger-sburger;
 cout<<" total burger collecction for the day:"<< total_burger;
 
 
 cout<< " details and collections"<<endl;
 cout<<" numbers of chicken roll we had :"<< qchickenroll;
 cout<<" numbers of chicken roll we had:"<<schickenroll;
 cout<<" remaining chicken roll:"<< qchickenroll-schickenroll;
 cout<<" total chickrn roll collection for the day:"<< total_chickenroll;
 
 
 cout<< " details and collections"<<endl;
 cout<<" numbers of mutton qorma we had :"<< qmuttonqorma;
 cout<<" numbers of mutton qorma  we had:"<<smuttonqorma;
 cout<<" remaining mutton qorma:"<< qmuttonqorma-smuttonqorma;
 cout<<" total mutton qorma collection for the day:"<< total_muttonqorma;
 
 
 case 8: 
 exit(0);
 
 default:
 	cout<<" PLEASE SELECT THE NUMBER MENTIONED ABOVE"<<endl;
 
}
goto m;
}
getch();
return 0;
}
