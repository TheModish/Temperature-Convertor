#include <iostream>
#include <iomanip>
using namespace std;
int client_choice;
double temp;
string answer;
int client_choic(){

    cin>>client_choice;
    while(client_choice!=1 && client_choice!=2 && client_choice!=3 &&client_choice!=4 &&client_choice!=5 &&client_choice!=6){
        cout<<"Sorry you chose a wrong convertor number, try again: ";
        cin>>client_choice;
    }
return client_choice;

}

void choice(){
    cout<<"Hello ,Welcome To Radu's  temperature converter"<<endl;
    cout<<"===============================================================================\n";
    cout<<"What kind of converter do you want to use:"<<endl;
    cout<<"1.Kelvin to Fahrenheit\n";
    cout<<"2.Kelvin to Celsius\n";
    cout<<"3.Fahrenheit to Celsius\n";
    cout<<"4.Fahrenheit to Kelvin\n";
    cout<<"5.Celsius to Kelvin\n";
    cout<<"6.Celsius to Fahrenheit\n";
    cout<<"===========================\n";
    cout<<"Enter your convertor: ";

}


double Convertor(const int choice,double temu){


    if(choice==1){
temu=1.8*(temu-273.15)+32;
    }
    if(choice==2)
     {
temu=temu-273.15;
    }
    if(choice==3){
        temu=(temu-32)/1.8;
    }
    if(choice==4){
        temu=(temu-32)*0.55555555555;
        temu+=273.15;
    }
    if(choice==5){
        temu+=273.15;
    }
    if(choice==6){
        temu=(temu*1.8)+32;
    }


    return temu;
}
void convertoraction(){
    cout<<"Insert the temperature:";
    cin>>temp;
cout<<fixed;
    cout<<setprecision(2);
    cout<<"========================"<<endl;
    cout<<"Your new temperature is:"<<Convertor(client_choice,temp);

}


int main() {
  choice();

client_choic();
cout<<endl;
cout<<"Are you sure you want to choose:"<<client_choice<<"?: ";
cin>>answer;
while(answer!="Yes" && answer!="YES" && answer!="Y" && answer!="yes" && answer!="y" && answer!="No" && answer!="NO" && answer!="N" && answer!="n" && answer!="no"){
    cout<<"Your answer is wrong try again: ";
    cin>>answer;
}
if(answer=="Yes" || answer=="YES" || answer=="Y" || answer=="yes" || answer=="y"){
convertoraction();}
else{
    cout<<"choose again a convertor: ";
    client_choic();
    convertoraction();
}


    return 0;
}
