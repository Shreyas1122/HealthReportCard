#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class healthcheck{
	protected:
	int bp_check;
	int cholestrol_check;
	int clealiness_check;
	float weight;
	float height;
		int getting_report_fasting;
	int getting_report_aftereat;
	string thyroid_test;
	int eye_check;
	string name;
	float result;
	int age;
	string gender;
	public:
	
	void patientintro(){
			fstream filevar;
	filevar.open("HealthReportcard.txt",ios::out);
	if(filevar.is_open()){
		
		cout<<"\t\t\t\t**This Program is for Regular checkup**"<<endl;
		
		cout<<"what is your name?"<<endl;
		getline(cin,name);
	
		cout<<"\nwhat is your Age?"<<endl;
		cin>>age;
		if(age>=30){
		
	
		
	
		cout<<"\nwhat is your gender"<<endl;
		cin>>gender;
		cout<<"\t\t\t\t**Test begin Here**"<<endl;
		cout<<"what is your Blood pressure Range(systolic/Diatolic)(mm/kg)"<<endl;
		cout<<"1)below-90\n2)90-140\n3)140-190"<<endl;
		cout<<"type here:";
			cin>>bp_check;
			cout<<endl;
			cout<<"LET US CHECK YOUR SKIN TEST"<<endl;
			string rash;
			cout<<"Do You Have Rashes on your skin(yes/no):";
			cin>>rash;
		
			string oil;
			cout<<"Do you have oily skin(yes/no)):";
			cin>>oil;
		
			string spot;
			cout<<"Do you Have spots on the skin(yes/no):";
			cin>>spot;
			cout<<"\n\n\nwhat is your cholestrol Range:"<<endl;
			cout<<"1)below-200"<<endl;
cout<<"2)200-239"<<endl;
cout<<"3)240-above"<<endl;
cout<<"type here:";
cin>>cholestrol_check;
cout<<"\n\nHow many times you bath in the week"<<endl;
cout<<"1)Regular per day\n2)two-three times\n3)less than two times"<<endl;
cout<<"type here:";
cin>>clealiness_check;
cout<<"\n\nlet us calulate your body mass index(bmi)"<<endl;
cout<<"Enter your Weight(kg only):";
cin>>weight;
cout<<"Enter your height(metre only)";
cin>>height;
 result=weight/(height*height);
cout<<"\n\nplease choose your sugar range below before eating(mg/dL)"<<endl;
cout<<"1)80-100"<<endl;
cout<<"2)101-125"<<endl;
cout<<"3)126-above"<<endl;
cout<<"type number mentioned to a particular range :";
cin>>getting_report_fasting;
cout<<endl;
cout<<"please choose your sugar range below after eating(mg/dL)"<<endl;

cout<<"1)170-200"<<endl;
cout<<"2)190-230"<<endl;
		cout<<"3)220-300"<<endl;
cout<<"type number mentioned to a particular range :";
		cin>>getting_report_aftereat;
		cout<<"\n\nDo you Have Thyroid(yes/no):";
		cin>>thyroid_test;
		cout<<"cout this stars below you see\n";
		for(int i=0;i<7;i++){
			for(int j=0;j<i;j++){
				cout<<"*";
			}
			cout<<"\n";
		}
		cout<<"\ntype here:";
		cin>>eye_check;
		cout<<"\t\t\t**YOUR ANSWERS ARE STORED IN REPORTCARD NAME HealthReportcard.txt which is text file**"<<endl;
		

			
		
		filevar<<"Name of person:"<<name<<endl;
				filevar<<"Age of the person:"<<age<<endl;
					filevar<<"Gender:"<<gender<<endl;
					filevar<<"\t\t\tBlood Pressure Test"<<endl;
	
		if(bp_check==1){
			filevar<<"BLOOD PRESSURE RANGE (systolic/Diatolic)(mm/Kg): below-90"<<endl;
			filevar<<"level:LOW"<<endl;
			
			
		}
		else if(bp_check==2){
				filevar<<"BLOOD PRESSURE RANGE (systolic/Diatolic)(mm/Kg): 90-140"<<endl;
			filevar<<"level:ELEVATED"<<endl;
		}
		else if(bp_check==3){
				filevar<<"BLOOD PRESSURE RANGE (systolic/Diatolic)(mm/Kg): 140-190"<<endl;
			filevar<<"level:HIGH"<<endl;
			
		}
	else cout<<"invalid input please enter the valid number associate with options"<<endl;
	filevar<<"\t\t\t skin test"<<endl;
		if(rash=="yes"){
				filevar<<"rashes on the skin:"<<rash<<endl;
			}
			else if(rash=="no"){
				filevar<<"Rashes on the skin:"<<rash<<endl;
			}
				if(oil=="yes"){
				filevar<<"Oily skin:"<<oil<<endl;
			}
			else if(oil=="no"){
				filevar<<"oily skin:"<<oil<<endl;
			}
				if(spot=="yes"){
				filevar<<"spots on skin:"<<spot<<endl;
			}
			else if(spot=="no"){
				filevar<<"spots on the skin:"<<spot<<endl;
			}
			if(oil=="yes"||spot=="yes"||rash=="yes"){
				filevar<<"ADVICE:Need Good Treatment"<<endl;
			}
			else if(oil=="no"||spot=="no"||rash=="no"){
				filevar<<"ADVICE:GOOD CONDITION OF SKIN.NO TREATMENT REQUIRED"<<endl;
			}
			else filevar<<"ADVICE:treatment required"<<endl;
			filevar<<"\t\t\tcholestrol test"<<endl<<endl;
			if(cholestrol_check==1){
	filevar<<"you have normal cholestrol"<<endl;

	
}
else if(cholestrol_check==2){
	filevar<<"you have moderate cholestrol"<<endl<<"precautions for you below\n 1)exercise\n 2)maintain healthy weight\n 3)substitute your oil\n 4)eat fruits,nuts,vegetables\n";

}
else if(cholestrol_check==3){
	filevar<<"you have high cholestrol"<<endl<<"precautions for you below\n 1)doctor advice\n 2)yoga\n 3)quit smoking\n 4)manage stress"<<endl;}

		
		
		
	
	filevar<<"\t\t\tCleanliness Test\n";
if(clealiness_check==1){
	filevar<<"Self-Clealiness:Better"<<endl;}
	else if(clealiness_check==2){filevar<<"Self-Clealiness:NEED TO IMPROVE"<<endl;
		
	}
	else if(clealiness_check==3){
		filevar<<"self-cleanliness:VERY BAD.NEED TO IMPROVE"<<endl;
	} filevar<<"\n\n\t\t\t PHYSICAL FITNESS CHECKUP\n";
		if(result<18.5){
			filevar<<"your are under weight"<<endl;
			filevar<<"precautions for you below\n 1)adding snacks 2)several small means a day 3)eating high nutrients food" ;
		}
		else if(result>18.5&&result<24.9){
			filevar<<"you are normal weighted"<<endl;
			filevar<<"precautions for you below\n 1)keep having good nutrient food 2)daily yoga 3)having luch,dinner at proper time";
		}
		else if(result>25){
			filevar<<"you are over weight"<<endl;
			filevar<<"precautions for you below\n 1)exercise 2)daily running 3)low calories food 4)proper diet";
		}
		filevar<<"\n\n\t\t\tSUGAR Test"<<endl;
		if(getting_report_fasting==2 &&getting_report_aftereat==1||getting_report_fasting==1&&getting_report_aftereat==1){
			filevar<<"\n\nyou have normal sugar level"<<endl;}
				else if(getting_report_fasting==2 &&getting_report_aftereat==2||getting_report_fasting==3&&getting_report_aftereat==1||getting_report_fasting==1&&getting_report_aftereat==2){
			filevar<<"you have moderate suger level"<<endl;
			filevar<<"following  are the precautions for you "<<endl<<"1)lose weight\n 2)Eat health diet\n 3)Do physical exercise\n 4)take regular oppointment";}
			else if(getting_report_fasting==3 &&getting_report_aftereat==3||getting_report_fasting==3&&getting_report_aftereat==2||getting_report_fasting==2&&getting_report_aftereat==3||getting_report_fasting==1&&getting_report_aftereat==3){
			filevar<<"you have high sugar level"<<endl;
			filevar<<"following are the precautions for you\n 1)keep your vaccine uptodate \n 2)pay attention to you feet\n 3)consider daily asprin\n 4)take care of your teeth";
	}  filevar<<"\n\t\t\tThroid Test\n";
		if(thyroid_test=="yes"){
			filevar<<"THROID :"<<thyroid_test<<endl;
		}
		else if(thyroid_test=="no"){
			filevar<<"THROID :"<<thyroid_test<<endl;
		}filevar<<"\n\t\t\tEYE TEST\n";
		if(eye_check==21){
			filevar<<"EYE CONDITION:GOOD"<<endl;
		}
		else filevar<<"EYE CONDITION:NEED TO IMPROVE"<<endl;
		filevar.close();}
		
				else{
				cout<<"your age should be above 30 for checkup"<<endl;
	cout<<"you are too younger"<<endl;}
}
}



	
		
		
		
		
		
		
		
	
	
	
	
	
	
	
};

int main(){
	healthcheck h1;
h1.patientintro();
		
	
	return 0;
	}
	
