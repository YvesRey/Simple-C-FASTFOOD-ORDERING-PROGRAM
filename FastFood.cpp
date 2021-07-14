#include <iostream>
 
using namespace std;
 

int main()
{
	int ans, price[100], choice=1, counter=1, total[100], subtotal=0, qty[100], cash, change, sentinel=0;
	string menu[100]; 
	char name[100];
	a:
	system("COLOR C");
	sentinel++;
	cout<<"\n                  ******    *******  **     **********    ***    "<<endl;
	cout<<"                  *******   *******  **     **********   ** **   "<<endl;
	cout<<"                  **    **  **       **         **      **   **  "<<endl;
	cout<<"                  **    **  *******  **         **     **     ** "<<endl;
	cout<<"                  **    **  *******  **         **     ********* "<<endl;
	cout<<"                  **    **  **       **         **     ********* "<<endl;
	cout<<"                  *******   *******  ******     **     **     ** "<<endl;
	cout<<"                  ******    *******  ******     **     **     ** "<<endl;
	cout<<"**********************************************************************************"<<endl;
	cout<<" XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	cout<<"  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	cout<<"\n Cashiers Name : ";
	gets(name);
	
	system("cls");
	cout<<"\n                  ******    *******  **     **********    ***    "<<endl;
	cout<<"                  *******   *******  **     **********   ** **   "<<endl;
	cout<<"                  **    **  **       **         **      **   **  "<<endl;
	cout<<"                  **    **  *******  **         **     **     ** "<<endl;
	cout<<"                  **    **  *******  **         **     ********* "<<endl;
	cout<<"                  **    **  **       **         **     ********* "<<endl;
	cout<<"                  *******   *******  ******     **     **     ** "<<endl;
	cout<<"                  ******    *******  ******     **     **     ** "<<endl;
	cout<<" XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
	cout<<"  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	cout<<"\n Name of Cashier(s) : ";
	puts(name);
	cout<<" Do youw want to procede? [1]Yes [0]No : ";
	cin>>choice;
	while (choice==1)
	
	{
		
		system("cls");
		cout<<"\n                  ******    *******  **     **********    ***    "<<endl;
		cout<<"                  *******   *******  **     **********   ** **   "<<endl;
		cout<<"                  **    **  **       **         **      **   **  "<<endl;
		cout<<"                  **    **  *******  **         **     **     ** "<<endl;
		cout<<"                  **    **  *******  **         **     ********* "<<endl;
		cout<<"                  **    **  **       **         **     ********* "<<endl;
		cout<<"                  *******   *******  ******     **     **     ** "<<endl;
		cout<<"                  ******    *******  ******     **     **     ** "<<endl;
		cout<<" XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
		cout<<"  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
    	cout<<"\n *********************************************************************************"<<endl;
		cout<<" *                             FAST FOOD ORDERING SYSTEM                         *"<<endl;
		cout<<" *********************************************************************************"<<endl;
		cout<<" Cashier : "<<name<<"            Transaction #"<<sentinel<<endl;
		cout<<"                             _____\n";
   		cout<<"                            /     \\   ____   ____    __ __\n";
   		cout<<"                           /  \\ /  \\_/ __ \\ /     \\ |  |  |\n";
   		cout<<"                          /    Y    \\  ___/|   |   \\|  |  |\n";
   		cout<<"                          \\____|____/\\____>____|____|_____|\n\n";
   		cout<<"                           [1] Super Burger        Php 204.00"<<endl;
   		cout<<"                           [2] Spaghetti           Php 75.00"<<endl;
   		cout<<"                           [3] French Fries        Php 39.00"<<endl;
   		cout<<"                           [4]Spicy Chicken Wings  Php 149.00"<<endl;
   		cout<<"                           [5]Soft Drinks          Php 25.00"<<endl;
   		cout<<"\n                         Select Order : ";
   		cin>>ans;
	
	switch (ans)
	{
    	case 1:
    	menu[counter] = "Super Burger";
    	price[counter] = 204;
    	break;
    	
    	case 2:
    	menu[counter] = "Spaghetti";
    	price[counter] = 75;
    	break;
  
    	case 3:
    	menu[counter] = "French Fries";
    	price[counter] = 39;
    	break; 	
    	case 4:
    	menu[counter] = "Spicy Chicken Wings";
    	price[counter] = 149;
    	break;
    	case 5:
    	menu[counter]= "Softdrinks";
    	price[counter] = 25;
    	
    	default:
    		cout<<"Invalid menu!"<<endl;
   	
	}
	
    cout<<"                        Quantity : ";
    cin>>qty[counter];
	
	total[counter] = price[counter] * qty[counter];
	subtotal = subtotal + total[counter];
	
	counter++;
    cout<<"                        Press [1] to ]Buy again [2] to proced to checkout : ";
	cin>>choice;
  
}
system("cls");
cout<<"\n                  ******    *******  **     **********    ***    "<<endl;
cout<<"                  *******   *******  **     **********   ** **   "<<endl;
cout<<"                  **    **  **       **         **      **   **  "<<endl;
cout<<"                  **    **  *******  **         **     **     ** "<<endl;
cout<<"                  **    **  *******  **         **     ********* "<<endl;
cout<<"                  **    **  **       **         **     ********* "<<endl;
cout<<"                  *******   *******  ******     **     **     ** "<<endl;
cout<<"                  ******    *******  ******     **     **     ** "<<endl;
cout<<" XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
cout<<"  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
cout<<"\n *********************************************************************************"<<endl;
cout<<" *                             FAST FOOD ORDERING SYSTEM                         *"<<endl;
cout<<" *********************************************************************************"<<endl;
cout<<" Cashier : "<<name<<"            Transaction #"<<sentinel<<endl;
cout<<" ---------------------------------------------------------------------------------"<<endl;
cout<<" MENU\t\t\t\tPRICE\t\tQUANTITY\tTOTAL"<<endl;
    	
    	for(int a=1;a<counter;a++)
    	{
        cout<<" "<<menu[a]<<"\t\t\t"<<price[a]<<"\t\t"<<qty[a]<<"\t\t"<<total[a]<<endl;
    	}
 
cout<<" ---------------------------------------------------------------------------------"<<endl;
cout<<" Total : "<<subtotal<<endl;
cashed:
cout<<" Enter Recieve Cash : ";
cin>>cash;
change = cash - subtotal;
if(cash>subtotal){
	cout<<" Your change is : "<<change<<endl;
	cout<<" New transaction? [1]Yes [2]No ";
	cin>>choice;
	if(choice==1){
		menu[counter]="";
		price[counter] =0;
		total[counter] = 0 ;
		qty[counter]=0;
		subtotal=0;
		counter=1;
		goto a;
		
	}
	else{
		system("PAUSE");
		cout<<"End of program!"<<endl;
	}
	
}
else{
	cout<<"Not enough money! Re-enter cash to check out..."<<endl;
	goto cashed;
}
	return 0;
}

