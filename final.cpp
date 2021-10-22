#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;


 //BASE CLASS------------------------------------------------------------------------------------------------------------
    class Phone {
       public:
       
        virtual void phone_dial(int) = 0;
        virtual void SMS(string, int) = 0;
        virtual void check_time() = 0;
        virtual void pixel(int) = 0;
        virtual void sim(bool) = 0;
        virtual void Camera() = 0;
        virtual void DualSim() = 0;
        virtual void ModelName() = 0;
        
    };
    
    //DERIVED CLASSES----------------------------------------------------------------------------------------------------------------
    class Samsung: public Phone{
        
            int pixels;
            bool dualsim;
        public:
        
          void phone_dial(int x){
              cout<<"\n"<<"Calling number : "<<x<<endl;
          }
          
          void SMS(string s, int x){
              cout<<"\n"<<"To : "<<x<<endl;
              cout<<"Message : "<<s<<endl;
          }
          void check_time(){
            time_t tt;
            struct tm * ti;
            time (&tt);
            ti = localtime(&tt);
            cout << "Current Day, Date and Time is = " 
                 << asctime(ti);
          }
          
          void pixel(int p){
              pixels = p;
          }
          
          void sim(bool m){
                dualsim = m;
            }
            
            void Camera(){
                cout<< "The phone has a camera of pixels: "<<pixels<<"p"<<endl;
            }
            
            void DualSim(){
                if(dualsim==true){
                    cout<<"DualSim"<<endl;
                }
                else{
                    cout<<"SingleSim"<<endl;
                }
            }
            
            void MultiWindow(){
                cout<<"Multi Window: Run Two Apps Side-By-Side"<<endl;
            }
            
            void EasyMode(){
                cout<<"Easy Mode: A Simplified Home Screen for Novice Users"<<endl;
            }
            
            void PalmSwipe(){
                cout<<"Palm Swipe Gesture: Capture Screenshots More Easily"<<endl;
            }
            
            void USB(){
                cout<<"USB On The Go: Connect A USB Drive, Keyboard or Mouse"<<endl;
            }
            
            void ModelName(){
                cout<<"\n"<<"Model Name: SAMSUNG GALAXY M31 128GB"<<endl;
            }
            
    };
    
    class Apple: public Phone{
        
                int pixels;
                bool dualsim;
        public:
            void phone_dial(int x){
              cout<<"\n"<<"Calling number : "<<x<<endl;
          }
          
          void SMS(string s, int x){
              cout<<"\n"<<"To : "<<x<<endl;
              cout<<"Message : "<<s<<endl;
          }
          void check_time(){
            time_t tt;
            struct tm * ti;
            time (&tt);
            ti = localtime(&tt);
            cout << "Current Day, Date and Time is = " 
                 << asctime(ti);
          }
          
          void pixel(int p){
              pixels = p;
          }
          
          void sim(bool m){
                dualsim = m;
            }
            void Camera(){
                cout<< "The phone has a camera of pixels: "<<pixels<<"p"<<endl;
            }
            
            void DualSim(){
                if(dualsim==true){
                    cout<<"DualSim"<<endl;
                }
                else{
                    cout<<"SingleSim"<<endl;
                }
            }
            void ModelName(){
                cout<<"\n"<<"Model Name: Apple iPhone 11"<<endl;
            }
            
            void Sensors(){
                cout<<"Sensors: Face ID, accelerometer, gyro, proximity, compass, barometer"<<endl;
            }
            void OS(){
                cout<<"OS: iOS 13, upgradable to iOS 15"<<endl;
            }
            void colors(){
                cout<<"Available Colors: Black, Green, Yellow, Purple, Red, White"<<endl;
            }
            
    };
    
int main()
{
    cout<<"Choose a phone from below: "<<endl;
    cout<<" a: Samsung"<<endl;
    cout<<" b: Apple"<<endl;
    cout<<endl;
    
    char ch;
    cin>>ch;
    
    if( ch == 'a'){
        Phone *ph = new Samsung;//to access interface elements
        ph->pixel(1080);
        ph->sim(true);
        ph->ModelName();
        ph->Camera();
        ph->DualSim();
        
        Samsung sam;//to access derived class elements
        sam.MultiWindow();
        sam.EasyMode();
        sam.PalmSwipe();
        sam.USB();
        
            cout<<"\n"<<"Pick an Action: "<<endl;
            cout<<" a: Dial Phone"<<endl;
            cout<<" b: Send SMS"<<endl;
            cout<<" c: Check Time"<<endl;
            cout<<endl;
            
            char b;
            cin>>b;
            
            if(b == 'a'){
                int num;
                cout<<"Enter phone number: ";
                cin>>num;
                ph->phone_dial(num);
                cout<<endl;
            }
            else if(b == 'b'){
                int num;
                string s, str;
                cout<<"Enter phone number: ";
                cin>>num;
                
                getline(cin, str);
                cout<<"Enter message: ";
                getline(cin, s);
                ph->SMS(s, num);
                cout<<endl;
                
            }else{
                cout<<"Current time is: ";
                ph->check_time();
                cout<<endl;
                
            }
    }
    else if(ch == 'b'){
    
            Phone *ph2 = new Apple;
            ph2->pixel(1080);
            ph2->sim(true);
            ph2->sim(false);
            ph2->ModelName();
            ph2->Camera();
            ph2->DualSim();
            
            Apple app;
            app.Sensors();
            app.OS();
            app.colors();
            
            cout<<"\n"<<"Pick an Action: "<<endl;
            cout<<" a: Dial Phone"<<endl;
            cout<<" b: Send SMS"<<endl;
            cout<<" c: Check Time"<<endl;
            cout<<endl;
            
            char c;
            cin>>c;
            
            if(c == 'a'){
                int num;
                cout<<"Enter phone number: ";
                cin>>num;
                ph2->phone_dial(num);
                cout<<endl;
            }
            else if(c == 'b'){
                int num;
                string s;
                string str;
                cout<<"Enter phone number: ";
                cin>>num;
                
                getline(cin, str);
                cout<<"Enter message: ";
                getline(cin, s);
                ph2 -> SMS(s, num);
                cout<<endl;
                
            }else{
                ph2 -> check_time();
                cout<<endl;
                
            }
            
    }
    return 0;
}

