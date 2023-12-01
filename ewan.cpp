#include <iostream>
using namespace std;
int main(){

double monthly_income;
double annual;
double final;
double tax;
double excess;
double taxed_income; 
double addon;
cout<<"Enter your salary: ";
cin>>monthly_income;

annual = monthly_income * 12;
if (annual<=250000){
	
	final = annual / 12;
	cout<<"Your salary with tax deducted is: "<<final<<endl;
}
else if (annual<=400000){
	tax = 0.15;
	excess = annual - 250000;
	 final = (excess * tax)/12;
	taxed_income= monthly_income - final;
	cout<<"Your salary with tax deducted is: "<<taxed_income<<endl;
}
else if (annual<=800000){
	tax = 0.2;
	excess = annual - 400000;
	 final = (excess *tax)+ 22500;
	 taxed_income = final / 12;
	 addon = monthly_income - taxed_income;

	cout<<"Your salary with tax deducted is: "<<addon<<endl;
}

else if (annual<=2000000){
	tax = 0.25;
	excess = annual - 800000;
 final = (excess *tax)+ 102500;
	 taxed_income = final / 12;
	addon = monthly_income - taxed_income;

	cout<<"Your salary with tax deducted is: "<<addon<<endl;
}

else if (annual<=800000){
	tax = 0.3;
	excess = annual - 2000000;
 final = (excess *tax)+ 402500;
	 taxed_income = final / 12;
	addon = monthly_income - taxed_income;

	cout<<"Your salary with tax deducted is: "<<addon<<endl;
}
else{
	tax = 0.35;
	excess = annual - 8000000;
 final = (excess *tax)+ 2202500;
	 taxed_income = final / 12;
	 addon = monthly_income - taxed_income;

	cout<<"Your salary with tax deducted is: "<<addon<<endl;
}
int sss;
int member;
double msc;
double mpf;
double ec;
double contri_rate = 0.14;
double tmc;
double final_sss;
cout<<"Do you want to compute your sss contribution?(YES[1]/NO[2]:) ";
cin>>sss;

if (sss == 1){
	cout<<"What kind of member are you? (Household[1], Employee[2]) ";
	cin>>member;
	
	if(member == 1){
        if(monthly_income<=5000){
            cout<<"This was paid by your employer.";
        }
        else if (monthly_income <=5249.99){
            msc = 5000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
        else if (monthly_income <=5749.99){
            msc = 5500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=6249.99){
            msc = 6000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=6749.99){
            msc = 6500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=7249.99){
            msc = 7000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=7749.99){
            msc = 7500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=8249.99){
            msc = 8000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=8749.99){
            msc = 8500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=9249.99){
            msc = 9000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=9749.99){
            msc = 9500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=10249.99){
            msc = 10000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=10749.99){
            msc = 10500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=11249.99){
            msc = 11000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=11749.99){
            msc = 11500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=12249.99){
            msc = 12000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=12749.99){
            msc = 12500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }

         else if (monthly_income <=13249.99){
            msc = 13000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=13749.99){
            msc = 13500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=14249.99){
            msc = 14000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=14749.99){
            msc = 14500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=15249.99){
            msc = 15000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=15749.99){
            msc = 15500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=16249.99){
            msc = 16000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=16749.99){
            msc = 16500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=17249.99){
            msc = 17000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=17749.99){
            msc = 17500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=18249.99){
            msc = 18000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=18749.99){
            msc = 18500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=19249.99){
            msc = 19000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=19749.99){
            msc = 19500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=20249.99){
            msc = 20000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=20749.99){
            msc = 20000;
            ec = 30;
            mpf = 500;
            tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=21249.99){
            msc = 20000;
            ec = 30;
            mpf = 1000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=21749.99){
            msc = 20000;
            ec = 30;
            mpf = 1500;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=22249.99){
            msc = 20000;
            ec = 30;
            mpf = 2000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=22749.99){
            msc = 20000;
            ec = 30;
            mpf = 2500;
         tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=23249.99){
            msc = 20000;
            ec = 30;
            mpf = 3000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=23749.99){
            msc = 20000;
            ec = 30;
            mpf = 3500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=24249.99){
            msc = 20000;
            ec = 30;
            mpf = 4000;
       tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=24749.99){
            msc = 20000;
            ec = 30;
            mpf= 4500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=25249.99){
            msc = 20000;
            ec = 30;
            mpf = 5000;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=25749.99){
            msc = 20000;
            ec = 30;
            mpf = 5500;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=26249.99){
            msc = 20000;
            ec = 30;
            mpf = 6000;
        tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=26749.99){
            msc = 20000;
            ec = 30;
            mpf = 6500;
        tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=27249.99){
            msc = 20000;
            ec = 30;
            mpf = 7000;
         tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=27749.99){
            msc = 20000;
            ec = 30;
            mpf = 7500;
         tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=28249.99){
            msc = 20000;
            ec = 30;
            mpf = 8000;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
 else if (monthly_income <=28749.99){
            msc = 20000;
            ec = 30;
            mpf = 8500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=29249.99){
            msc = 20000;
            ec = 30;
            mpf = 9000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=29749.99){
            msc = 20000;
            ec = 30;
            mpf = 9500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else{
            msc = 20000;
            ec = 30;
            mpf = 10000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
    }
    else if (member == 2){
         if (monthly_income <=4250){
            msc = 4000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=4749){
            msc = 4500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
else if (monthly_income <=5249.99){
            msc = 5000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
        else if (monthly_income <=5749.99){
            msc = 5500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=6249.99){
            msc = 6000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=6749.99){
            msc = 6500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=7249.99){
            msc = 7000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=7749.99){
            msc = 7500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=8249.99){
            msc = 8000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=8749.99){
            msc = 8500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=9249.99){
            msc = 9000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=9749.99){
            msc = 9500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=10249.99){
            msc = 10000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=10749.99){
            msc = 10500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=11249.99){
            msc = 11000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=11749.99){
            msc = 11500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=12249.99){
            msc = 12000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=12749.99){
            msc = 12500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }

         else if (monthly_income <=13249.99){
            msc = 13000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=13749.99){
            msc = 13500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=14249.99){
            msc = 14000;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=14749.99){
            msc = 14500;
            ec = 10;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=15249.99){
            msc = 15000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=15749.99){
            msc = 15500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=16249.99){
            msc = 16000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=16749.99){
            msc = 16500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=17249.99){
            msc = 17000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=17749.99){
            msc = 17500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=18249.99){
            msc = 18000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=18749.99){
            msc = 18500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=19249.99){
            msc = 19000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=19749.99){
            msc = 19500;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=20249.99){
            msc = 20000;
            ec = 30;
            tmc = (msc * contri_rate)+ ec;
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=20749.99){
            msc = 20000;
            ec = 30;
            mpf = 500;
            tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=21249.99){
            msc = 20000;
            ec = 30;
            mpf = 1000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=21749.99){
            msc = 20000;
            ec = 30;
            mpf = 1500;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=22249.99){
            msc = 20000;
            ec = 30;
            mpf = 2000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=22749.99){
            msc = 20000;
            ec = 30;
            mpf = 2500;
         tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=23249.99){
            msc = 20000;
            ec = 30;
            mpf = 3000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=23749.99){
            msc = 20000;
            ec = 30;
            mpf = 3500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=24249.99){
            msc = 20000;
            ec = 30;
            mpf = 4000;
       tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=24749.99){
            msc = 20000;
            ec = 30;
            mpf= 4500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=25249.99){
            msc = 20000;
            ec = 30;
            mpf = 5000;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=25749.99){
            msc = 20000;
            ec = 30;
            mpf = 5500;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=26249.99){
            msc = 20000;
            ec = 30;
            mpf = 6000;
        tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=26749.99){
            msc = 20000;
            ec = 30;
            mpf = 6500;
        tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=27249.99){
            msc = 20000;
            ec = 30;
            mpf = 7000;
         tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=27749.99){
            msc = 20000;
            ec = 30;
            mpf = 7500;
         tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=28249.99){
            msc = 20000;
            ec = 30;
            mpf = 8000;
           tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
 else if (monthly_income <=28749.99){
            msc = 20000;
            ec = 30;
            mpf = 8500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=29249.99){
            msc = 20000;
            ec = 30;
            mpf = 9000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else if (monthly_income <=29749.99){
            msc = 20000;
            ec = 30;
            mpf = 9500;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }
         else{
            msc = 20000;
            ec = 30;
            mpf = 10000;
          tmc = (msc * contri_rate)+ec +(mpf * contri_rate);
            final_sss = monthly_income - tmc;
            cout<<"Your total monthly contribution is "<<tmc<<endl;
            cout<<"Your remaining balance is : "<<final_sss<<endl;
        }

    }
	else{
        cout<<"Invalid input"<<endl;
    }
}
else{
    cout<<"Exiting..."<<endl;
}



double gsis;
double member_gsis;
double percent_gsis;
double final_gsis;
double total_gsis;
cout<<"Do you want to compute your GSIS contribution?(YES[1]/NO[2]:) "<<endl;
cin>>gsis;

if (gsis == 1){
cout<<"What Kind of member are you? (Employee[1], Employer[2])";
cin>>member_gsis;

if (member_gsis == 1){
    percent_gsis = 0.09;
    total_gsis == monthly_income * percent_gsis;
    final_gsis == monthly_income - monthly_income;
    cout<<"Your contribution is "<<total_gsis<<" pesos."<<endl;
    cout<<"Your remaining balance is : "<<final_gsis<<endl;
}
else if(member_gsis == 2){
     percent_gsis = 0.12;
    total_gsis == monthly_income * percent_gsis;
    final_gsis == monthly_income - monthly_income;
    cout<<"Your contribution is "<<total_gsis<<" pesos."<<endl;
    cout<<"Your remaining balance is : "<<final_gsis<<endl;
}
else{
    cout<<"Exiting...";
}




}
else{
    cout<<"Exiting...";
}

double ph;
double ph_total;
double ph_final;
cout<<"Do you want to contribute to Philhealth?: (Yes[1], No[2])";
cin>>ph;

if(ph == 1){
    ph_total = monthly_income * 0.04;
    ph_final = monthly_income - ph_total;
      cout<<"Your contribution is "<<ph_total<<" pesos."<<endl;
    cout<<"Your remaining balance is : "<<ph_final<<" pesos"<<endl;
}
else{
    cout<<"Exiting...";
}}


