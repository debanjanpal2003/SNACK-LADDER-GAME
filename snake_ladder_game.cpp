#include<bits/stdc++.h>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include<windows.h>
using namespace std ;

int conditioncheck(int value,int temp){
    if((value+temp)>100){
        return value;
    }
    if((value+temp)==100){
        return 100;
    }
    int sum=value+temp;
    //lader
    if(sum==7){
        cout<<"LADDER"<<endl;
        return 12;
    }
    if(sum==25){
        cout<<"LADDER"<<endl;
        return 30;
    }
    if(sum==22){
        cout<<"LADDER"<<endl;
        return 42;
    }
    if(sum==51){
        cout<<"LADDER"<<endl;
        return 67;
    }
    if(sum==74){
        cout<<"LADDER"<<endl;
        return 91;
    }
    if(sum==87){
        cout<<"LADDER"<<endl;
        return 98;
    }

    //snake
    if(sum==14){
        cout<<"SNAKE"<<endl;
        return 5;
    }
    if(sum==27){
        cout<<"SNAKE"<<endl;
        return 15;
    }
    if(sum==61){
        cout<<"SNAKE"<<endl;
        return 10;
    }
    if(sum==47){
        cout<<"SNAKE"<<endl;
        return 33;
    }
    if(sum==94){
        cout<<"SNAKE"<<endl;
        return 38;
    }
    if(sum==55){
        cout<<"SNAKE"<<endl;
        return 23;
    }
    return value+temp;

}

int main(){
    int user1=0,user2=0,u1temp=0,u2temp=0;
    int final=100;
    char u1,u2;
    do
    {
        cout<<"user 1: "<<endl;
        //cin>>u1;
        u1temp=rand()%7;
        while(u1temp==0){
           u1temp=rand()%7; 
        }
        cout<<u1temp<<endl;
        if(user1==0 && u1temp==6){
            user1=6;
            cout<<"now user1 value: "<<user1<<endl;
        }
        else{
            //user1=user1+u1temp;
            if(user1!=0){
                user1=conditioncheck(user1,u1temp);
                cout<<"now user1 value: "<<user1<<endl;
            }
            else{
                cout<<"Not Run User1"<<endl;
            }
        }

        Sleep(4500);

        cout<<"user 2: "<<endl;
        //cin>>u2;
        u2temp=rand()%7;
        while(u2temp==0){
           u2temp=rand()%7; 
        }
        cout<<u2temp<<endl;
        if(user2==0 && u2temp==6){
            user2=6;
            cout<<"now user2 value: "<<user2<<endl;
        }
        else{
            //user2=user2+u2temp;
            if(user2!=0){
                user2=conditioncheck(user2,u2temp);
                cout<<"now user2 value: "<<user2<<endl;
            }
            else{
                cout<<"Not Run User2"<<endl;
            }
        }
        Sleep(4500); 


    } while (user1!=100 && user2!=100);

    if(user1==100){
        cout<<endl<<endl<<"USER 1 ! WIN !!!!!"<<endl;
    }
    else{
        cout<<"USER 2 ! WIN !!!!!"<<endl;
    }
    
}