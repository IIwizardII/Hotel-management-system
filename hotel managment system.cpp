#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
#define pause1 6500000
#define pause2 4500000
#define pause3 6500000
#define pause4 6500000
#define pause5 6500000
void centertext_2(char *s);
void centertext_1(char *s);
void cover();

class hotel{
private:
    char room[50];
    char name[50];
    char address[50];
    char phone[50];
    char checkin[50];
    int x;


public:
    hotel(){x=0;}
    hotel(int x){
    int a=x;
    if(a==1){
       cover();
        }
    }
    void menu();
    void choose_menu(int &d);
    void get_room();
    void customer_record();
    void search_info();
    void edit_record();
    void logout();



//extra functions


//set functions
    void set_name(char *n){
        strcpy(name,n);
    }
    void set_address(char *a){
        strcpy(address,a);
    }
    void set_phone(char *p){
        strcpy(phone,p);
    }
    void set_checkin(char *c){
        strcpy(checkin,c);
    }

//get functions
    char *get_name(){
        return name;
    }
    char *get_address(){
        return address;
    }
    char *get_phone(){
        return phone;
    }
    char *get_checkin(){
        return checkin;
    }


};




void pause_1(int a){
    long i;
    for(a=a;a>0;a--){
        for(i=0;i<pause1;i++);
    }
}



void pause_2(){
    long i;
    int a=4;
    for(a=a;a>0;a--){
        for(i=0;i<pause2;i++);
    }
}


void color_change(){
    system ( "color 02" );
    Sleep ( 2000 );

    system ( "color 03" );
    Sleep ( 2000 );

    system ( "color 04" );
    Sleep ( 2000 );

    system ( "color 05" );
    Sleep ( 2000 );

    system ( "color 06" );
    Sleep ( 2000 );

    system ( "color 07" );
    Sleep ( 2000 );

    system ( "color 08" );
    Sleep ( 2000 );

    system ( "color 09" );
    Sleep ( 2000 );
}




void centertext_1(char *s){
    int len;
    len=strlen(s);
    int i;
    int space=(82-len)/2;
    for(i=0;i<space;i++){
        cout << " ";
    }
    for(i=0;i<len;i++){
        cout << s[i];
        pause_1(4);
    }
    cout << endl;
}



void centertext_2(char *s){
    int len;
    len=strlen(s);
    int i;
    int space=(82-len)/2;
    for(i=0;i<space;i++){
        cout << " ";
    }
    for(i=0;i<len;i++){
        cout << s[i];
        pause_1(1);
    }
    cout << endl;
}




void cover(){
    system ( "color 03" );
    cout << "\n\n\n\n";

    char a1[100]={"***************************"};
    char a2[100]={"* HOTEL MANAGEMENT SYSTEM *"};
    char a3[100]={"***************************"};

    centertext_1(a1);
    centertext_1(a2);
    centertext_1(a3);

    char a4[30]={"     Created by : "};
    char a5[30]={"MD. Masrafi Rahman Rayan"};
    char a6[30]={"     ID : 2016-2-60-128"};
    char a7[30]={" Course : CSE 107"};
    char a8[30]={"Section : 5"};
    char a9[60]={"   Submitted to : Muhammad Ibrahim (Senior Lecturer)"};

    int i;
    int len_a4=strlen(a4);
    int len_a5=strlen(a5);
    int len_a6=strlen(a6);
    int len_a7=strlen(a7);
    int len_a8=strlen(a8);
    int len_a9=strlen(a9);

    cout << "\n\n\n\t\t";

    for(i=0;i<len_a4;i++){
        cout << a4[i];
        pause_2();
    }

    cout << "";

    for(i=0;i<len_a5;i++){
        cout << a5[i];
       pause_2();
    }

    cout << "\n\n\t\t\t";
    for(i=0;i<len_a6;i++){
        cout << a6[i];
        pause_2();
    }

    cout << "\n\n\t\t\t";
    for(i=0;i<len_a7;i++){
        cout << a7[i];
        pause_2();
    }

    cout << "\n\n\t\t\t";
    for(i=0;i<len_a8;i++){
        cout << a8[i];
        pause_2();
    }

    cout << "\n\n\t\t";
    for(i=0;i<len_a9;i++){
        cout << a9[i];
        pause_2();
    }

}


void hotel::menu(){
    system ( "color 04" );
    system("CLS");
    cout << "\n\n\n\n\n\n";
    char a1[100]={"###########################"};
    char a2[100]={"#   WELCOME TO OUR HOTEL  #"};
    char a3[100]={"###########################"};

    centertext_2(a1);
    centertext_2(a2);
    centertext_2(a3);

    char a4[100]={"#*************************#"};
    char a5[100]={"#<<<<<<< MAIN MENU >>>>>>>#"};
    char a6[100]={"#*************************#"};

    centertext_2(a4);
    centertext_2(a5);
    centertext_2(a6);

    cout << "\n\n";
    cout << "\t\t\t   ###########################\n";
    cout << "\t\t\t   ####### 1.Get A Room ######\n";
    cout << "\t\t\t   ###########################\n";
    cout << "\t\t\t   ## 2.All Customer Record ##\n";
    cout << "\t\t\t   ###########################\n";
    cout << "\t\t\t   ###### 3.Search info ######\n";
    cout << "\t\t\t   ###########################\n";
    cout << "\t\t\t   ###### 4.Edit Record ######\n";
    cout << "\t\t\t   ###########################\n";
    cout << "\t\t\t   ######### 5.Logout ########\n";
    cout << "\t\t\t   ###########################\n";

    cout << "\n\n\n\t\t     Enter the number of your option or write\n\n\t\t\t     the option : ";
    int s;
    cin >> s;
choose_menu(s);


}



void hotel::choose_menu(int &d){
    int z;
    z=d;
    //cin >> z;

    if(z==1){
        get_room();
    }

    if(z==2){
        customer_record();
    }

    if(z==3){
       search_info();

    }


    if(z==4){
        edit_record();
    }


    if(z==5){
        logout();
    }

    if(z>5){
        menu();
    }


}



void hotel::get_room(){

    system ( "color 05" );
    system("CLS");

    fstream hotel_file("hotel.txt", ios::in | ios::out | ios::app);


    hotel customer[50];
    int i;
    int count=0;
    char myname[50];
    char myaddress[50];
    char myphone[50];
    char mycheckin_date[50];
    cout << "\n\n\n\n\n\n";

    char a1[100]={"##################"};
    char a2[100]={"#<< Get A Room >>#"};
    char a3[100]={"##################"};

    centertext_2(a1);
    centertext_2(a2);
    centertext_2(a3);

    cout << "\n\n\n\n\t\t\t  how many rooms do you want?  ";
        int r;
    cin >> r;
    if(r>50){

        cout << "\n\n\n\t\t\tSorry rooms are not available";
    }
    else{
    for(i=0;i<r;i++){

        system("CLS");

        cout << "\n\n\n\n";
        cout << "\tGetting Room Number : " << i+1 << "\n\n";
        cout << "\tFill the following fields for getting the room please...\n\n\n";
        cout << "\t\t    #######################################\n";
        //cin >> name;//what's the bug in here?
        cout << "\t\t    # Name : ";
        cin >> myname;
        customer[i].set_name(myname);

        cout << "\t\t    #######################################\n";
        cout << "\t\t    # Address : ";
        cin >> myaddress;
        customer[i].set_address(myaddress);

        cout << "\t\t    #######################################\n";
        cout << "\t\t    # Phone Number : ";
        cin >> myphone;
        customer[i].set_phone(myphone);

        cout << "\t\t    #######################################\n";
        cout << "\t\t    # Check in Date : ";
        cin >> mycheckin_date;
        customer[i].set_checkin(mycheckin_date);

        cout << "\t\t    #######################################\n\n\n";
        //set_object(&customer[i]);
        pause_1(11);
        cout << "\tCongrats..! Your Room has been confirmed\n\n\n\n\n";

        hotel_file << customer[i].get_name() << endl;
        hotel_file << customer[i].get_address() << endl;
        hotel_file << customer[i].get_phone() << endl;
        hotel_file << customer[i].get_checkin() << endl;

}
}
//cout << customer[0].get_name();

hotel_file.close();

    cout << "\n\n\t\t 1. (Return to main menu)            2. (Get Another Room)\n\n";
    cout << "\t\t 3.  (Exit)";
    int c;
    cin >> c;

    if(c==1){
        menu();
    }
    if(c==2){
        get_room();
    }
    else{
        logout();
    }

}


void hotel::customer_record(){

    system("CLS");
    system ( "color 02" );
    ifstream hotel_record;
    hotel_record.open("hotel.txt");

    char name[50];
    char address[50];
    char phone[50];
    char checkin[50];

    cout << "\n\n\n\n\n\n";
    char a1[100]={"###########################"};
    char a2[100]={"#<< All Customer Record >>#"};
    char a3[100]={"###########################"};
    centertext_2(a1);
    centertext_2(a2);
    centertext_2(a3);
    cout  << "\n\n\n";
    cout << "#######################################################################################\n";
    cout << "   Name\t\t  " << "   Address\t\t  " << " Phone number\t\t  " << " Checkin date\n";
    cout << "#######################################################################################\n";
    cout << "***************************************************************************************\n";
    int i=1;
    while(hotel_record >> name >> address >> phone >> checkin){
    cout << i << ". " << name;
    cout << "\t\t" << address;
    cout << "\t\t" << phone;
    cout << "\t\t" << checkin << "\n";
    cout << "***************************************************************************************\n";
    i++;
    }
    hotel_record.close();

    cout << "\n\n\t\t 1. (Return to main menu)            2. (Exit Program)\n\n";

    int c;
    cin >> c;

    if(c==1){
    menu();
    }

    else{
    logout();
    }

}

void hotel::search_info(){
    system("CLS");
    system("color 0A");
    ifstream ryan;
    ryan.open("hotel.txt");

    cout << "\n\n\n\n\n\n";
    char a1[100]={"###########################"};
    char a2[100]={"#<< Search Information >>##"};
    char a3[100]={"###########################"};
    centertext_2(a1);
    centertext_2(a2);
    centertext_2(a3);
    cout  << "\n\n\n";

    char name[50];
    char address[50];
    char phone[50];
    char checkin[50];

    char name_customer[50];
    cout << "\n\n\n\t\t\tEnter the name of the customer : ";
    cin >> name_customer;
    int i,j=0;
    while(ryan >> name >> address >> phone >> checkin){

    if(strcmp(name_customer,name)==0){
        cout << "\n\n\n\t\t\t#########################################\n";
        cout << "\t\t\t# Name : " << name;
        cout << "\n\t\t\t#########################################\n";
        cout << "\t\t\t# Address : " << address;
        cout << "\n\t\t\t#########################################\n";
        cout << "\t\t\t# Phone : " << phone;
        cout << "\n\t\t\t#########################################\n";
        cout << "\t\t\t# Checkin_date : " << checkin;
        cout << "\n\t\t\t#########################################\n";
        j=1;
        break;

    }
    }
    if(j==0){
        cout << "\n\n\n\t\t  Sorry no information found for the entered name\n";
    }
    ryan.close();
    cout << "\n\n\n\n\t\t 1. (Return to main menu)            2. (Another Search)\n\n";
    cout << "\t\t 3. (Exit)  ";
    int c;
    cin >> c;

    if(c==1){
    menu();
    }
    if(c==2){
        search_info();
    }
    else{
    logout();
    }


}



void hotel::edit_record(){
    system("CLS");
    system("color 0E");

    ifstream record;

    record.open("hotel.txt");

    hotel edit[50];
    hotel *p;
    p=edit;

    char name[50];
    char address[50];
    char phone[50];
    char checkin[50];


    cout << "\n\n\n\n\n\n";
    char a1[100]={"##############################"};
    char a2[100]={"##<< Edit Customer Record >>##"};
    char a3[100]={"##############################"};
    centertext_2(a1);
    centertext_2(a2);
    centertext_2(a3);
    cout << "\n\n\n";

    cout << "#######################################################################################\n";
    cout << "   Name\t\t  " << "   Address\t\t  " << " Phone number\t\t  " << " Checkin date\n";
    cout << "#######################################################################################\n";
    cout << "***************************************************************************************\n";
    int k=1;
    int i=0;
    int j;
    while(record >> name >> address >> phone >> checkin){
    cout << k << ". " << name;
    //edit[i].set_name(name);
    p->set_name(name);
    cout << "\t\t" << address;
    //edit[i].set_address(address);
    p->set_address(address);
    cout << "\t\t" << phone;
    //edit[i].set_phone(phone);
    p->set_phone(phone);
    cout << "\t\t" << checkin << "\n";
    //edit[i].set_checkin(checkin);
    p->set_checkin(checkin);
    cout << "***************************************************************************************\n";
    p++;
    k++;
    i++;
    j=k;

    }
    record.close();

    cout << "\n\n\n\tEnter the name of the customer for deleting his information : ";
    char num[30];
    cin >> num;
    int index;
    int mistake;
    for(i=0;i<j-2;i++){
            mistake=1;
        if(strcmp(num,edit[i].get_name())==0){
        index=i;
        mistake=0;
        break;
    }

    }
    if(mistake==1){
        cout << "\n\n\n\t\t\t\t<<< Wrong input >>>\n";
        cout << "\n\n\n\n\t\t 1. (Return to main menu)            2. (Edit again)\n\n";
        cout << "\t\t 3. (Exit)  ";

        int c;
        cin >> c;

        if(c==1){
            menu();
        }
        if(c==2){
            edit_record();
        }
        else{
            logout();
        }

    }
    int ob_size=j-2;
    //edit[pos]=edit[ob_size];
    //cout << edit[pos].get_name();
     //--index;
    for(i=index;i<=ob_size;i++){
        edit[i]=edit[i+1];
    }

    ofstream set_record;
    set_record.open("hotel.txt");
    int u=j-1;
    system("CLS");
    cout << "\n\n\n\t\t\t########################################";
    cout << "\n\t\t\t##  Here is the updated information : ##";
    cout << "\n\t\t\t########################################";
    for(i=0;i<(ob_size+mistake);i++){
        //if(i==index){
         //   continue;
       // }
    // else
    //{
    cout << "\n\n\n\t\t\tName : " << edit[i].get_name() << endl;
    cout << "\n\t\t\tAddress : " << edit[i].get_address() << endl;
    cout << "\n\t\t\tPhone Number : " << edit[i].get_phone() << endl;
    cout << "\n\t\t\tCheckin date : " << edit[i].get_checkin() << endl;
    cout << "\n\n";
   // }

    set_record << edit[i].get_name() << endl;
    set_record << edit[i].get_address() << endl;
    set_record << edit[i].get_phone() << endl;
    set_record << edit[i].get_checkin() << endl;
}
//*/
    set_record.close();
    cout << "\n\n\n\n\t\t 1. (Return to main menu)            2. (Edit again)\n\n";
    cout << "\t\t 3. (Exit)  ";
    int c;
    cin >> c;
    if(c==1){
    menu();
    }
    if(c==2){
        edit_record();
    }
    else{
    logout();
    }
}



void hotel::logout(){
    system ( "color 06" );
    system("CLS");
    cout << "\n\n\tThis is the end of the program. Thank you for using our service.";
    cout << "\n\n\t\tPress any key to close the command prompt.";
}


int main(){
    hotel ob1;
    hotel ob2(1);
    hotel *p;
    p=&ob1;
    //cover();
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tPress any key to continue...!";
    char c;
    scanf("%c",&c);
    system("CLS");
    if(isalnum(c) || c==' ' || c=='\n'){
        p->menu();
    }
    //ob.get_room();
cout << "\n\n\n\n\n\n\n\n\n\n\n";

return 0;

}
