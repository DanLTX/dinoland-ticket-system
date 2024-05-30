#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void userOutput(string,string,string,string,double,int,int,int,double,double,double,double,int,int,int,double,int,int,double,int,int,int,double,double,double,double,char,char,char,char,char);
double calcTotal(double&,double&,double&,double&,double,double,double,double,double,double,float,char);
double calcGrand(double,double);

int main()
{
	//Declare and assign value to the variable
	string name,selectionAns,numPhone,date;
	int qLocker,qBoya=0,qinsurance,age,insuranceC=0,insuranceA=0,insuranceS=0,counterSB=0,counterDB=0,counterSL=0,counterML=0,counterLL=0,quantityA=0,quantityC=0,quantityS=0,amountA=0,amountB=0,amountC=0,amountAll=0,counterStart=0;
	double priceC,feeC,priceA,feeA,priceS,feeS,pLocker,totalLocker=0,priceAddOn,priceinsuranceC,priceinsuranceA,priceinsuranceS,totalinsurance=0,priceBoya,totalBoya=0,totalAddOn=0,totalticket=0,totalfee=0,totaltax=0,totalAll=0,income=0,average;
	char selection,ans,addonANS,locker,boya,insurance,sLocker,tBoya,start;
	const float tax = 0.06;
	double totalmax = -999999;
	double totalmin = 999999;
	string packageAns[3]={"1-DAY THEME PARK","1-DAY DOUBLE PARK","1-DAY TRIPLE PARK"};
	
	cout<<"[STAFF ONLY] PRESS ANYTHING TO START THE PROGRAM (PRESS 'N' TO STOP THE PROGRAM): ";
	cin>>start;
	
	while(start != 'N'&&start != 'n')
	{
		//system("cls");
		//Welcome user to the program
		cout<<"************************************************************************************************************************"<<endl;
		cout<<"\t\t\t\t\tWELCOME TO DINOLAND THEME AND WATER PARK"<<endl;
		cout<<"************************************************************************************************************************"<<endl;
	
		//User input
		cout<<"\n\nEnter your name         : ";
		getline(cin,name);
		getline(cin,name);
		cout<<"Enter your number phone : ";
		cin>>numPhone;
		cout<<"Date of the visit(dd/mm): ";
		cin>>date;
		cout<<"\n**********************************************************************************"<<endl;
		cout<<" ________________________________________________________________________________"<<endl;
		cout<<"|                  |                     |         |              |     Price    |"<<endl;
		cout<<"|     Package      |   Ticket Category   |   Age   |   Category   |     (MYR)    |"<<endl;
		cout<<"|__________________|_____________________|_________|______________|______________|"<<endl;
		cout<<"|                  |                     |   3-11  |    Child     |     49.00    |"<<endl;
		cout<<"|                  |                     |_________|______________|______________|"<<endl;
		cout<<"| "<<packageAns[0]<<" |  -Theme Park        |   12-59 |    Adult     |     79.00    |"<<endl;
		cout<<"|        (A)       |                     |_________|______________|______________|"<<endl;
		cout<<"|                  |                     |   60+   |    Senior    |     50.00    |"<<endl;
		cout<<"|__________________|_____________________|_________|______________|______________|"<<endl;
		cout<<"|                  |                     |   3-11  |    Child     |     89.00    |"<<endl;
		cout<<"|                  |                     |_________|______________|______________|"<<endl;
		cout<<"| "<<packageAns[1]<<"|  -Theme Park        |   12-59 |    Adult     |     105.00   |"<<endl;
		cout<<"|        (B)       |  -Sea Life Aquarium |_________|______________|______________|"<<endl;
		cout<<"|                  |                     |   60+   |    Senior    |     90.00    |"<<endl;
		cout<<"|__________________|_____________________|_________|______________|______________|"<<endl;
		cout<<"|                  |                     |   3-11  |    Child     |     120.00   |"<<endl;
		cout<<"|                  |                     |_________|______________|______________|"<<endl;
		cout<<"| "<<packageAns[2]<<"|  -Theme Park        |   12-59 |    Adult     |     140.00   |"<<endl;
		cout<<"|        (C)       |  -Sea Life Aquarium |_________|______________|______________|"<<endl;
		cout<<"|                  |  -Water Park        |   60+   |    Senior    |     121.00   |"<<endl;
		cout<<"|__________________|_____________________|_________|______________|______________|"<<endl;
		cout<<"Tax service 6% will be charge to each ticket"<<endl;
		cout<<"\n[A = 1-Day Theme Park] \n[B = 1-Day Double Park] \n[C = 1-Day Triple Park] " <<endl;
		cout<<"\nEnter your package selection : ";
		cin>>selection;
		
		//Selection for theme park
		if(selection == 'A'||selection == 'a')
		{
			selectionAns = "1-DAY THEME PARK";
			cout<<"\nDo you want to buy child's ticket? (3 - 11 years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
				
			//Selection for child' ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceC = 49;
    	   		cout<<"Please enter your quantity of person : ";
    	    	cin>>quantityC;
    	    
    	    	feeC = quantityC * priceC;
			}
			else
			{
				priceC = 0;
				feeC = 0;
				quantityC=0;
			}
			
			cout<<"\nDo you want to buy adult's ticket? (12 - 59 years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
			
			//Selection for adult ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceA = 79;
       			cout<<"Please enter your quantity of person : ";
        		cin>>quantityA;
        
        		feeA = quantityA * priceA;
			}
			else
			{
				priceA = 0;
				feeA = 0;
				quantityA=0;
			}
		
			cout<<"\nDo you want to buy senior's ticket? (60+ years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
		
			//Selection for senior ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceS = 50;
       			cout<<"Please enter your quantity of person : ";
        		cin>>quantityS;
        
        		feeS = quantityS * priceS;
			}
			else
			{
				priceS = 0;
				feeS = 0;
				quantityS=0;
			}
		
		
		}
	
		//Selection for double park
		else if(selection == 'B'||selection == 'b')
		{
			selectionAns = "1-DAY DOUBLE PARK";
			cout<<"\nDo you want to buy child's ticket? (3 - 11 years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
			
			//Selection for child' ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceC = 89;
       			cout<<"Please enter your quantity of person : ";
        		cin>>quantityC;
        	
        		feeC = quantityC * priceC;
			}
			else
			{
				priceC = 0;
				feeC = 0;
				quantityC=0;
			}
		
			cout<<"\nDo you want to buy adult's ticket? (12 - 59 years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
			
			//Selection for adult ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceA = 105;
       			cout<<"Please enter your quantity of person : ";
        		cin>>quantityA;
        	
        		feeA = quantityA * priceA;
			}
			else
			{
				priceA = 0;
				feeA = 0;
				quantityA=0;
			}	
		
			cout<<"\nDo you want to buy senior's ticket? (60+ years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
		
			//Selection for senior ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceS = 90;
       			cout<<"Please enter your quantity of person : ";
        		cin>>quantityS;
        
        		feeS = quantityS * priceS;
			}
			else
			{
				priceS = 0;
				feeS = 0;
				quantityS=0;
			}
		
		
		}
	
		//Selection for triple park
		else if(selection == 'C'||selection == 'c')
		{
			selectionAns = "1-DAY TRIPLE PARK";
			cout<<"\nDo you want to buy child's ticket? (3 - 11 years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
			
			//Selection for child' ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceC = 120;
       			cout<<"Please enter your quantity of person : ";
        		cin>>quantityC;
        
        		feeC = quantityC * priceC;
			}
			else
			{
				priceC = 0;
				feeC = 0;
				quantityC=0;
			}
		
			cout<<"\nDo you want to buy adult's ticket? (12 - 59 years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
		
			//Selection for adult ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceA = 140;
       			cout<<"Please enter your quantity of person : ";
        		cin>>quantityA;
        
        		feeA = quantityA * priceA;
			}
			else
			{
				priceA = 0;
				feeA = 0;
				quantityA=0;
			}
		
			cout<<"\nDo you want to buy senior's ticket? (60+ years) \n[Y - YES] [N - NO] : ";
			cin>>ans;
		
			//Selection for senior ticket
			if(ans == 'Y'||ans == 'y' )
			{
				priceS = 121;
  	     		cout<<"Please enter your quantity of person : ";
  		      	cin>>quantityS;
        
       		 	feeS = quantityS * priceS;
			}
			else
			{
				priceS = 0;
				feeS = 0;
				quantityS=0;
			}
		
		
		}
		//Selection for error package input
		else
		{
		cout<<"\nINVALID PACKAGE SELECTION INPUT";
		return 0;
		}
	
		cout<<"\n**********************************************************************************"<<endl;
		cout<<"\n**********************************************************************************"<<endl;
		cout<<"\nDo you want to add-on anything? \n[Y - YES] [N - NO] : ";
		cin>>addonANS;
	
		//Selection for add-on
		if(addonANS == 'Y'||addonANS == 'y')
		{
			cout<<"\nADD ON FOR ALL PACKAGE"<<endl;
			cout<<" ________________________________________________________________________________"<<endl;
			cout<<"|        Facilities       |            Size            |        Price (MYR)      |"<<endl;
			cout<<"|_________________________|____________________________|_________________________|"<<endl;
			cout<<"|                         |           Small(S)         |           12.00         |"<<endl;
			cout<<"|                         |____________________________|_________________________|"<<endl;
			cout<<"|         Locker          |           Medium(M)        |           25.00         |"<<endl;
			cout<<"|                         |____________________________|_________________________|"<<endl;
			cout<<"|                         |           Large(L)         |           30.00         |"<<endl;
			cout<<"|_________________________|____________________________|_________________________|"<<endl;
		
			cout<<"\nDo you want to add-on locker? \n[Y - YES] [N - NO] : ";
        	cin>>locker;
        
        	//selection for locker
        	if(locker == 'Y'||locker == 'y')
        	{
            	cout<<"\nHow much locker do you want to add-on : ";
        		cin>>qLocker;
            	cout<<endl;
            	
            	counterSL=0;
				counterML=0;
				counterLL=0;
				totalLocker =0;
            	//looping for locker size
            	for(int i=1;i<=qLocker;i++)
            	{
            		cout<<i<<". Enter the size of this locker (S-Small)(M-Medium)(L-Large): ";
            		cin>>sLocker;
            	
            		//selection for locker size
            		if(sLocker=='S'||sLocker == 's')
            		{
            			pLocker = 12;
            			counterSL++;
					}
				
					else if(sLocker=='M'||sLocker == 'm')
            		{
            			pLocker = 25;
            			counterML++;
					}
				
					else if(sLocker=='L'||sLocker == 'l')
            		{
            			pLocker = 30;
            			counterLL++;
					}
				
					else
					{
						pLocker = 0;
					}
				
					totalLocker =totalLocker + pLocker;
				}
        	}
        	else{
        		totalLocker =0;
			}
        
        	//selection for boya if waterpark included in the package
        	if(selection =='C'||selection =='c')
        	{
        		cout<<"\nBOYA RENTAL"<<endl;
				cout<<" ________________________________________________________________________________"<<endl;
				cout<<"|         Theme           |          Boya Type         |        Price (MYR)      |"<<endl;
				cout<<"|_________________________|____________________________|_________________________|"<<endl;
				cout<<"|                         |          Single(S)         |           12.00         |"<<endl;
				cout<<"|       Waterpark         |____________________________|_________________________|"<<endl;
				cout<<"|                         |          Double(D)         |           17.00         |"<<endl;
				cout<<"|_________________________|____________________________|_________________________|"<<endl;
			
				cout<<"\nDo you want to add-on boya? \n[Y - YES] [N - NO] : ";
            	cin>>boya;
            
            	//selection for boya
            	if(boya == 'Y'||boya == 'y')
            	{
            		cout<<"\nHow much boya do you want to add-on : ";
              		cin>>qBoya;
              		cout<<endl;
            		
            		counterSB=0;
					counterDB=0;
					totalBoya =0;
            		//looping for boya type
              		for(int i=1;i<=qBoya;i++)
					{
						cout<<i<<". Enter types of boya (S-Single)(D-Double): ";
						cin>>tBoya;
					
						//selection for boya type
						if(tBoya == 'S'||tBoya == 's')
						{
							priceBoya = 12;
							counterSB++;
						}
					
						else if(tBoya == 'D'||tBoya == 'd')
						{
							priceBoya = 17;
							counterDB++;
						}
					
						else
						{
							priceBoya = 0;
						}
					
						totalBoya += priceBoya;
					}
              	
				
				}
				else{
					totalBoya = 0;
					boya = 'z';
					counterSB =0;
					counterDB =0;
				}
			}
			cout<<"\nINSURANCE POLICY"<<endl;
			cout<<" ________________________________________________________________________________"<<endl;
			cout<<"|        Category         |             Age            |        Price (MYR)      |"<<endl;
			cout<<"|_________________________|____________________________|_________________________|"<<endl;
			cout<<"|          Child          |            3-11            |           10.00         |"<<endl;
			cout<<"|_________________________|____________________________|_________________________|"<<endl;
			cout<<"|          Adult          |            12-59           |           20.00         |"<<endl;
			cout<<"|_________________________|____________________________|_________________________|"<<endl;
			cout<<"|          Senior         |             60+            |           15.00         |"<<endl;
			cout<<"|_________________________|____________________________|_________________________|"<<endl;
			
			cout<<"\nDo you want to add-on insurance? \n[Y - YES] [N - NO] : ";
        	cin>>insurance;
			
			//selection for insurance
			if(insurance == 'Y'||insurance == 'y')
			{
				cout<<"\nEnter the number of people to be insured: ";
				cin>>qinsurance;
				cout<<endl;
				
				if(qinsurance>=(quantityC+quantityA+quantityS))
				{
					cout<<"Invalid Insurance Input"<<endl;
					continue;
				}
			
				if(quantityC>0)
				{
					cout<<"Amount of children to be insured: ";
					cin>>insuranceC;
					priceinsuranceC = 10;
					
					if(insuranceC>quantityC)
					{
						cout<<"Invalid Insurance Input"<<endl;
						continue;	
					}	
				}
				
				if(quantityA>0)
				{
					cout<<"Amount of adult to be insured: ";
					cin>>insuranceA;
					priceinsuranceA = 20;
					
					if(insuranceA>quantityA)
					{
						cout<<"Invalid Insurance Input"<<endl;
						continue;	
					}	
				}
				
				if(quantityS>0)
				{
					cout<<"Amount of senior to be insured: ";
					cin>>insuranceS;
					priceinsuranceS = 15;	
					
					if(insuranceS>quantityS)
					{
						cout<<"Invalid Insurance Input"<<endl;
						continue;	
					}	
				}
				
				else
				{
					insuranceC = 0;
					insuranceA = 0;
					insuranceS = 0;
					priceinsuranceC = 0;
					priceinsuranceA = 0;
					priceinsuranceS = 0;
				}
				
				totalinsurance = (insuranceC * priceinsuranceC) + (insuranceA * priceinsuranceA) + (insuranceS * priceinsuranceS);
				
			}
			else
			{
				totalinsurance = 0;
			}
		}
		else{
			totalLocker =0;
			totalBoya =0;
			totalinsurance=0;
		}
	
		//process to calculate fee
		calcTotal(totalAddOn,totalticket,totalfee,totaltax,totalinsurance,totalLocker,totalBoya,feeC,feeA,feeS,tax,selection);
	
		totalAll = calcGrand(totalfee,totaltax);
		
		if(totalAll>totalmax)
		{
			totalmax = totalAll;
		}
		
		if(totalAll<totalmin)
		{
			totalmin = totalAll;
		}
		
		switch(selection)
		{
			case 'A':
			case 'a':
				amountA =amountA + quantityC + quantityA + quantityS;
				break;
				
			case 'B':
			case 'b':
				amountB =amountB + quantityC + quantityA + quantityS;
				break;
				
			case 'C':
			case 'c':
				amountC =amountC + quantityC + quantityA + quantityS;
				break;
		}
		
		counterStart++;
		income = income + totalAll;
		average = income / counterStart;
		
		//system("cls");
		
		
		//user output
		userOutput(name,numPhone,selectionAns,date,totalticket,quantityC,quantityA,quantityS,priceC,priceA,priceS,totalLocker,counterSL,counterML,counterLL,totalBoya,counterSB,counterDB,
					totalinsurance,insuranceC,insuranceA,insuranceS,totalAddOn,totaltax,totalfee,totalAll,addonANS,locker,boya,insurance,selection);
		
		cout<<endl<<endl;
		cout<<"[STAFF ONLY] PRESS ANYTHING TO START THE PROGRAM AGAIN (PRESS 'N' TO STOP THE PROGRAM): ";
		cin>>start;
		
		if(start == 'N'||start == 'n')
		{
		amountAll = amountA + amountB + amountC;
	
		cout<<"\n**********************************************************************";
		cout<<"\nThe highest amount paid\t\t\t: RM"<<totalmax;
		cout<<"\nThe lowest amount paid\t\t\t: RM"<<totalmin;
		cout<<"\nAverage price of each transactions\t: RM"<<fixed<<setprecision(2)<<average;
		cout<<"\nPackage A\t\t\t\t: "<<amountA<<" ticket sold";
		cout<<"\nPackage B\t\t\t\t: "<<amountB<<" ticket sold";
		cout<<"\nPackage C\t\t\t\t: "<<amountC<<" ticket sold";
		cout<<"\nTotal ticket sold\t\t\t: "<<amountAll;
		cout<<"\nTotal income\t\t\t\t: RM"<<fixed<<setprecision(2)<<income;
		}
	}
	
	
	
	return 0;
}

void userOutput(string name,string numPhone,string selectionAns,string date,double totalticket,int quantityC,
				int quantityA,int quantityS,double priceC,double priceA,
				double priceS,double totalLocker,int counterSL,int counterML,int counterLL,
				double totalBoya,int counterSB,int counterDB,double totalinsurance,int insuranceC,
				int insuranceA,int insuranceS,double totalAddOn,double totaltax,double totalfee,
				double totalAll,char addonANS,char locker,char boya,char insurance,char selection)
{
	
	cout<<endl<<endl;
	cout<<"==============================================================="<<endl;
    cout<<"|          WELCOME TO DINOLAND THEME AND WATER PARK!          |"<<endl;
    cout<<"==============================================================="<<endl;
    cout<<"|Name                         : "<<name<<endl;
    cout<<"|Number phone                 : "<<numPhone<<endl;
    cout<<"|Selection                    : "<<selectionAns<<endl;
    cout<<"|Date                         : "<<date<<endl;
    cout<<"|-------------------------------------------------------------|"<<endl;
    cout<<"|-------------------------------------------------------------|"<<endl;
    cout<<"|                                                             |"<<endl;
    cout<<"|<Ticket>                                                     |"<<endl;
    cout<<"|                                                             |"<<endl;
    cout<<"|"<<selectionAns<<"            : RM"<<fixed<<setprecision(2)<<totalticket<<endl;
    cout<<"|  "<<quantityC<<" Child  @RM"<<fixed<<setprecision(2)<<priceC<<endl;
    cout<<"|  "<<quantityA<<" Adult  @RM"<<priceA<<fixed<<setprecision(2)<<endl;
    cout<<"|  "<<quantityS<<" Senior @RM"<<priceS<<fixed<<setprecision(2)<<endl;
    cout<<"|-------------------------------------------------------------|"<<endl;
    cout<<"|-------------------------------------------------------------|"<<endl;
    cout<<"|                                                             |"<<endl;
    
    if(addonANS == 'Y'||addonANS == 'y')
    {
	
    	cout<<"|<Add - on>                                                   |" <<endl;
    	cout<<"|                                                             |"<<endl;
    	
    	if(locker == 'Y'||locker == 'y')
    	{
    	cout<<"|Locker                       : RM"<<totalLocker<<endl;
   		cout<<"|  "<<counterSL<<" Small  @RM12.00"<<endl;
    	cout<<"|  "<<counterML<<" Medium @RM25.00"<<endl;
    	cout<<"|  "<<counterLL<<" Large  @RM30.00"<<endl;
    	}
    	
    	if(selection == 'C'||selection =='c')
    	{
	    	if(boya == 'Y'||boya == 'y')
	    	{
	    	cout<<"|Boya                         : RM"<<totalBoya<<endl;
	    	cout<<"|  "<<counterSB<<" Single @RM12.00"<<endl;
	    	cout<<"|  "<<counterDB<<" Double @RM17.00"<<endl;
	    	}
	    }
    	
    	if(insurance == 'Y'||insurance == 'y')
    	{
    	cout<<"|Insurance                    : RM"<<totalinsurance<<endl;
    	cout<<"|  "<<insuranceC<<" Child  @RM10.00"<<endl;
    	cout<<"|  "<<insuranceA<<" Adult  @RM20.00"<<endl;
    	cout<<"|  "<<insuranceS<<" Senior @RM15.00"<<endl;
    	}
    	
    	cout<<"|-------------------------------------------------------------|"<<endl;
    	cout<<"|-------------------------------------------------------------|"<<endl;
	}
    
    cout<<"|                                                             |"<<endl;
    cout<<fixed <<setprecision(2) <<showpoint;
    cout<<"|Total Fee Ticket             : RM"<<totalticket<<endl;
    
    if(addonANS == 'Y'||addonANS == 'y')
    {
    cout<<"|Total Fee Add-On             : RM"<<totalAddOn<<endl;
	}
	
	cout<<"|Total Fee                    : RM"<<totalfee<<endl;
    cout<<"|Tax(6%)                      : RM"<<totaltax<<endl;
    cout<<"|Grand Total                  : RM"<<totalAll<<endl;
    cout<<"|                                                             |"<<endl;
    cout<<"|_____________________________________________________________|"<<endl;
	
	
	
}

double calcTotal(double& totalAddOn,double& totalticket,double& totalfee,double& totaltax,double totalinsurance,double totalLocker,double totalBoya,double feeC,double feeA,double feeS,float tax,char selection)
{
	if(selection=='A'||selection=='a'||selection=='B'||selection=='b')
	{
		totalAddOn = totalinsurance + totalLocker;
	}
	else if(selection=='C'||selection=='c')
	{
		totalAddOn = totalinsurance + totalLocker + totalBoya;
	}
	totalticket = feeC + feeA + feeS;
	totalfee = totalAddOn + totalticket;
	totaltax = totalfee * tax;
	
	return totalAddOn,totalticket,totalfee,totaltax;
}

double calcGrand(double totalfee,double totaltax)
{
	double totalAll;
	
	totalAll = totalfee + totaltax;
	
	return totalAll;
}


