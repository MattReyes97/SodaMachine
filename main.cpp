//Matthew Reyes
// assignment 4
//10/18

#include<iostream>
#include<iomanip>
using namespace std;



int main()
{
    double money = 0.0;
    int choice;
    double result;
   
    cout<<fixed<<showpoint;
    cout<<"****************************"<<endl;
    cout<<"| 1. Cola         75 cents |"<<endl;
    cout<<"| 2. rootbeer     75 cents |"<<endl;
    cout<<"| 3. lemon-lime   75 cents |"<<endl;
    cout<<"| 4. grape        80 cents |"<<endl;
    cout<<"| 5. cream soda   80 cents |"<<endl;
    cout<<"****************************"<<endl;
    
   
    cout<< "please select a drink choice: ";
    cin>>choice;
    
    if(choice==1)
    {
        cout<<"you chose cola, please insert money: ";
        cin>>money;
    }
    else if(choice==2){
        cout<< "you chose root beer, please insert money: ";
        cin>> money;
    }
    else if(choice==3){
        cout<< "you chose lemon lime, please insert money: ";
        cin>>money;
    }
    else if(choice==4){
        cout<< "you chose grape soda, please insert money: ";
        cin>>money;
    }
    else if (choice==5){
        cout<< "you chose cream soda, please insert money: ";
        cin>>money;
    }
    else if(choice>1 && choice>5){
        cout<<"please enter a valid drink choice";
    }
    
    
    
    if(choice==1 && money !=0.75){
       result=money-0.75;
        cout<<"your change is "<<setprecision(2)<<result<<endl;;
    }
    else if(choice==1&&money ==0.75){
        cout<< "thank you for purchase"<<endl;
    }
  
    if(choice==2 && money !=0.75){
        result=money-0.75;
        cout<<"your change is "<<setprecision(2)<<result<<endl;
    }
    else if(choice==2&&money ==0.75){
        cout<< "thank you for purchase"<<endl;
    }
    
    
    if(choice==3 && money !=0.75){
        result=money-0.75;
        cout<<"your change is "<<setprecision(2)<<result<<endl;;
    }
    else if(choice==3&&money ==0.75){
        cout<< "thank you for purchase"<<endl;
    }
    
    if(choice==4 && money !=0.80){
        result=money-0.80;
        cout<<"your change is "<<setprecision(2)<<result<<endl;
    }
    else if(choice==4&&money ==0.80){
        cout<< "thank you for purchase"<<endl;
    }
    
    
    if(choice==5 && money !=0.80){
        result=money-0.80;
        cout<<"your change is "<<setprecision(2)<<result<<endl;
    }
    else if(choice==5&&money ==0.80){
        cout<< "thank you for purchase"<<endl;
    }
    
    
    
    
    
    
    return 0;
}

