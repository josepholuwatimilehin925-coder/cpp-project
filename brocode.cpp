# include <iostream>
#include <cmath> 
#include <vector>
using namespace std ;

int main () {
    cout << " we are the \"so called vikings of the egba kingdom\" "
    <<endl ;
    cout << " yoruba \'people are so talented in nature \'" <<endl ;
    cout<< "my \\mother is a very beautiful \\ woman" <<endl  ;
    string best_foods ;
    cout <<" write the name of your best foods" ;
    getline (cin, best_foods) ;
    cout << "the names of your best foods are :"<< best_foods <<"/n\n";
    cout <<max(7,5) <<"\n";
    cout <<min(8, 4) <<"\n" ;
    cout <<sqrt(64) <<endl ;
    cout <<round (2.6) <<endl ;
    cout <<log (2) <<"\n\n";

    bool is_coding_fun = true ;
    bool sleeping_is_bad = false ;

    cout <<boolalpha ;
    cout<< "coding is :" << is_coding_fun <<endl ;
    cout << " sleeping must be :" << sleeping_is_bad<<"\n\n" ;

 
    cout << noboolalpha ;
    cout<< "coding is :" << is_coding_fun <<endl ;
    cout << " sleeping must be :" << sleeping_is_bad<<"\n\n" ;

    int x = 60 ;
    int y =30 ;
    bool which_greater =( x<y);
    cout << which_greater <<" \n" ;

    int voting_age = 25 ;
    int age_limit  =18 ;
    cout << ( voting_age >= age_limit) <<" \n\n" ;

    int my_voting_age =40 ;
    int age_ripe           =18 ;
    if (my_voting_age >= age_ripe) {
        cout<< "you are good to go to vote soldier!" ;
    } else { cout<< " no you are not eligible to vote small boy." 
                    <<" \n\n";} 

    if(50>20) {
        cout<< " fifty is greater than 20! " ;
    }

    int w= 230 ;
    int h =45 ;
    bool is_greater =(w> h ) ;
    if (is_greater) {
        cout<< "w is greter thah h" ;
    }

    int time = 18 ;
    if (time> 20) {
        cout<<"Good evening " ;
    } else { cout<< "Good morning!" ;}

    time =40 ;
    bool morethan = (time>50) ;
    if ( morethan) { cout <<"your timing is wrong" ;} else{
        cout<<" your time is right" << "\n\n";
    }  

    int u =4 ;
    int p =5 ;
    int multiply = 4*5 ;
    if (4*5==80) { cout << "that is very correct" <<"\n\n" ;} 
    else if (multiply ==20) {cout << "correct guy ." ;} 
    else {cout <<" that is very bad" ;}

    int a = 500 ;
    int b =40 ;
    int c =89 ;
    if (a>b && c>b) {
        cout<<" BOTH CONDITIONS ARE TRUE" <<"\n\n" ;}


    int r= 500 ;
        u= 300 ;
    int g=400  ;
    if(r>u ||u>g ) {cout<<" At least one is greater" <<"\n\n" ;}

    a  =300 ;
    b =37  ;
    if (!(b>a)) {cout <<"a is not greater than b "<<"\n\n" ;}

    bool is_logged_in = true ;
    bool is_Admin  = false  ;
    int is_secuirity_office = 3 ;
    if (is_logged_in && (is_Admin || is_secuirity_office <=2))  {
        cout<< "Acess Granted." ;
     } else { cout <<"Acess Denied."  <<"\n\n" ;}

     
// Try changing securityLevel and isAdmin to test different outcomes:
// securityLevel 1 = Access granted
// securityLevel 2 = Access granted
// securityLevel 3 = Access denied
// securityLevel 4 = Access denied
// If isAdmin = true, access is granted.

int Door_code = 12334 ;
if (Door_code ==12334) { 
    cout<< "correct code.\n The Door is now opened.\n" ;} else
    {cout<< "Wrong code.\n The Door remain locked" ;}

    
int my_num = 208 ;
if (my_num> 0) {cout<< " it is a positive number" <<"\n\n" ;} 
else if (my_num <0) { cout <<" it is a negative number" ;}
else {cout << "the number is 0" <<"\n\n";}

int my_age =36 ;
 voting_age =18 ;
if (my_age >= voting_age) {cout <<"old enough to vote \n" ;}
 else{cout << "still young \n" ;}

 int temperature = 30 ;
 if (temperature < 0) {cout << "it freezing" ;}
 else if( temperature <20) {cout<< "it is cool" ;}
 else{ cout <<"it is warm \n" ;}


 int day =4 ;
 switch(day) {
    case 1:
     cout<<"monday";
     break ;

     case 2: 
     cout <<" tuesday" ;
     break ;

     case 3:
     cout<<" Wedsnesday";
     break ;

     case 4:
     cout<<"Thursday" "\n\n" ;
     break ;

     case 5:
     cout<< "Friday" <<"\n\n";
     break ; 
 }


   day =5 ;
switch (day)   {
    case 6 : cout<<" friday";
    break ;

    case 7 : cout<<" saturday" ;
    break ;

    default : cout <<" looking forward to another date" <<"\n\n";
}

 

int choice =2 ;
switch (choice) {
    case 1:
    cout<< "you ordered coffee" ;
    break ;

    case 2 :
    cout <<" you ordered banana and mango \n" ;
    break;

    default:
    cout <<" invalid choice" ;

}

int i = 0 ;
while (i <8) {
    cout << i <<"\n" ;
    i ++ ;
}

int countdown = 9 ;
while (countdown >0) {
    cout<< countdown <<"\n" ;
    countdown -- ;
   
}
 cout << "Happy New Year!!\n";

 
 p = 0 ;
do {
    cout << p <<"\n";
    p++ ;
}
while (p <6);

  g = 10 ;
do {;
    cout<<g <<"\n" ;
    g++ ;
}
while(g<5) ;

int number ;
do {
    cout<<"Enter a positive number";
    cin>> number ;
}
while(number>0) ;

  i = 0 ;
while(i<=10)  {
    cout << i <<"\n";
    i+=2 ;
}

int dice = 1;

while(dice<= 6) {
    if(dice<6) {
        cout<<"No yatchy \n";
         }
    else {cout<<"yatchy !!! \n" ; } 
    dice ++ ;    
}

int sum = 0;
for (int i = 1; i <= 5; i++) {
  sum = sum + i;
}
cout << "Sum is " << sum <<"\n";

// outer loop
for( int r =1 ; r<=5 ; r++) { cout <<"outer :"
    << r <<"\n" ;   //execute 2 times
 //inner loop   
for(int j=1 ; j<=6 ; j++) {cout<< "inner"<< j <<"\n"  ;} 
}     // execute 6 times(2*3)

for (int k=1 ; k<=6 ; k++) {
    for(int l =1; l<=6 ; l++) {
        cout<< k*l <<" " ;
    }
    cout <<"\n" ;
}

int mynumber[5] ={1,2,3,4,5} ;
for (int namy : mynumber) { cout << namy <<"\n" ;}

string word= " JOSEPH" ;
for (char name : word) {
    cout <<name <<"\n" ;
}

for (int k=0 ;k<=10 ;k++) {
    if (k==4) {break ;}
    cout <<k <<"\n" ;
}

for(int k=1 ; k<=10; k++) {
    if(k==4) {continue ;}
    cout << k <<"\n" ;
}

string cars[4] = { "Benz", "medas" ,"Camry","Toyata"} ;
cout <<cars[2]<<"\n\n" ;

 {string cars[4] = { "Benz", "medas" ,"Camry","Toyata"} ;
cars[2] ="Bike" ;
cout <<cars[2] <<"\n\n" ; }

{  string cars[4] = { "Benz", "medas" ,"Camry","Toyata"} ;
for (int i=0 ; i <4 ;i++) { cout <<i<<" = " 
    << cars[i] <<" \n" ;}
}

{  string cars[4] = { "Benz", "medas" ,"Camry","Toyata"} ;
for ( string naming : cars) {cout << naming <<"\n";} 
}


{ int mynumber[5] ={10, 20,35, 45,60};
for (int i=0 ;i<5 ;i++) {cout<<mynumber[i] <<" " ;}
}
cout<<"\n\n" ;

vector<string> bingo ={ "benz", "camry" ,"venzer" ,"gover"};
    bingo.push_back("bus") ;


struct{int mynum ;string mystring ;} mystructure ;
mystructure.mynum=3 ;
mystructure.mystring = "toy gun" ;
cout << mystructure.mynum <<"\n" 
<< mystructure.mystring <<"\n" ;

struct {int num ; string capslor ;} myland_struct ,myboy_2;
myland_struct.num =5 ;
myland_struct.capslor = "TWITTER BOY";

myboy_2.num =4 ;
myboy_2.capslor = "Big Head";

cout<<myland_struct.num <<"\n"
 <<myland_struct.capslor <<"\n\n" ;

 cout<<myboy_2.num <<"\n" <<myboy_2.capslor <<"\n\n" ;


 class myclass { public : int numb ; string mystring ;} ;
 myclass obj1 ;
 myclass obj2 ;

 obj1.numb =23;
 obj1.mystring ="Schollar Boy";

 obj2.numb =9 ;
 obj2.mystring ="male" ;

 cout<< obj1.numb <<"\n"<< obj1.mystring <<"\n" ;
 cout<<  obj2.numb <<"\n"<< obj2.mystring <<"\n\n" ;


 class multimeter { public : string screen_display = "112.v" ;
void measure() { cout << "your display value of screen : ="
<< screen_display ;} 
} ;
multimeter my_Analog ;
my_Analog.measure () ;

































































 return 0
;} 

