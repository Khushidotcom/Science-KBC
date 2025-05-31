#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
string player_name;
bool pay_half_skip=true;
bool skip=true;
long cash = 0;
long question_price = 100;
int consecutive = 0;
int right_answer;
int wrong_answer; 
int question_no=1;

void results();
void game_rules();
void ask_random_question();
void check_answer(char answer,char correct_answer);

struct Question {
    string question;
    string option_a;
    string option_b;
    string option_c;
    string option_d;
    char answer;
    bool availability;
    };
    
Question questions[10];
    


int main()
{
     //system("cls");
     questions[0]={"Nail polish remover is something that us girls just can't do without. But what exactly is it in nail polish remover that does the polish removing?","Methanol" , "Ethanol" , "Acetone" ,"Limonene" , 'c' , true };
     questions[1]={"Materials through which light cannot pass are said to be.....?","Transparent","Opaque","Translucent","Obstructor",'b',true };
     questions[2]={"If you wanted to lighten your hair at home, what is the active ingredient in the dye preparation that will lighten your hair?","Hydrogen peroxide","Acetic acid","Sodium Hydroxide","Phenol",'a',true };
     questions[3]={"Mosses and ferns produce fertilized eggs that form ..... These are simplified seeds that have a limited food supply and no seed coat.","Seeds","Pistil","Spores","Cones",'c',true };
     questions[4]={"Much of our body heat escapes through the head. What percent is this?","90%","60%","70%","80%",'d',true };
     questions[5]={"At room temperature, which element conducts electricity better than any other element?","Pb","Au","Ag","Cu",'c',true };
     questions[6]={"Ampere is the unit of.....?","Electric Energy","Electric Charge","Electrical Current","Electrical Motive force",'c',true };
     questions[7]={"Pollen is produced by the which of flowering plants?","Stamen","Anther","Ovary","Pistil",'b',true };
     questions[8]={"Lux is the unit of.....?","Luminios intensity","Focus","Luminios box","Illumiation",'d',true };
     questions[9]={"Which is NOT the name of an atomic model?","Thomson","Newton","Bohr","Electron cloud",'b',true };
     cout<< "********************************************************************************"<<endl;
     cout<< "******************<WELCOME TO THE SCIENCE KBC>**********************************"<<endl;
     cout<< "****************________________________________********************************"<<endl;
     cout<<"Enter your name"<<endl;
     getline(cin,player_name);
     //system("cls"); 
      while(true)
      {
        if(question_no > 10)
        break;
        ask_random_question();
        
      }
     results(); 
    //return();
}
void ask_random_question()
{
 srand(time(0));
 while(true) {
 //system("cls");
 int number=rand()%10;
 if(questions[number].availability){
   questions[number].availability = false;
   cout<< "********************************************************************************"<<endl;
   cout<< "******************<WELCOME TO THE SCIENCE KBC>**********************************"<<endl;
   cout<< "****************________________________________********************************"<<endl;
   cout<<endl;
   cout<<"This question number:"<<question_no<<"is for $"<<question_price<<"\t\t\tbalance is $"<<cash<<endl<<endl;
   cout<<"LIFE LINES"<<endl;
   if(pay_half_skip)
     cout<<"\t A=>Pay half and skip";
   if(skip)
   cout<<"\t B=>Skip";
   cout<<endl<<endl;
   cout<< "********************************************************************************"<<endl;
   cout<< "*****************************Choose your Option**********************************"<<endl;
   cout<<questions[number].question<<endl<<endl;
   cout<<"a)."<<questions[number].option_a<< "\t\tb)."<<questions[number].option_b<<endl<<endl;
   cout<<"c)."<<questions[number].option_c<< "\t\td)."<<questions[number].option_d<<endl<<endl;
   char answer; cin>>answer;
   answer = tolower(answer);
   cout<<endl;
   question_no ++;
   check_answer(answer,questions[number].answer);
   break;
 }
 }
}
void check_answer(char answer,char correct_answer){
   if(answer == correct_answer)
   {
       cout<<"Congratulation......!!!Your answer is correct"<<endl;
       cout<<"You earned $"<<question_price<<endl;
       cout<<"Press any key to continue........"<<endl;
       getch();
       right_answer++;
       consecutive++;
       cash = cash + question_price;
       
   }
   else if((answer=='A')&&(pay_half_skip)){
   cout<<"You choose the life line<PAY HALF AND SKIP>"<<endl;
   cout<<"You loose $"<<(question_price/4)<<endl;
   cout<<"Press any key to continue........"<<endl;
   getch();
   cash = cash - (question_price/4);
   pay_half_skip = false;
   }
   else if((answer=='B')&&(skip)){
   cout<<"You choose a life line <leave question>"<<endl;
   cout<<"You loose $0"<<endl;
   getch();
   skip = false;
   }
   else{
       cout<<"Sorry.....!!Your answer is wrong"<<endl;
       cout<<"You loose $"<< (question_price/2 )<<endl;
       getch();
       wrong_answer++;
       consecutive = 0;
       cash = cash - (question_price/2);   
   }
   question_price = question_price*2;
   if(consecutive==3)
      pay_half_skip=true;
   if(consecutive == 5)
       skip=true;   
   }
   
   void results(){
     double percentage;
     percentage=right_answer*10;
     //system("cls");
     cout<< "********************************************************************************"<<endl;
     cout<< "************************************RESULTS*****************************************"<<endl;
     cout<< "********************************************************************************"<<endl;
     cout<<"Player name: \t\t\t"<<player_name<<endl<<endl;
     cout<<"Right answer: \t\t\t"<<right_answer<<endl<<endl;
     cout<<"Wrong answer: \t\t\t"<<wrong_answer<<endl<<endl;
     cout<<"Average: \t\t\t"<<percentage<<"%"<<endl<<endl;
     if(cash>=0)
      cout<<"Winning Amount:\t\t\t $"<<cash<<endl<<endl;
     else
      cout<<"Loosig Amount:\t\t\t $"<<cash<<endl<<endl;
      cout<< "********************************************************************************"<<endl;
      cout<< "***********************Thanks for playing the game****************************"<<endl;
      cout<< "********************************************************************************"<<endl;
      cout<< "********************************************************************************"<<endl;
      cout<< "****************************Press any key to continue***************************"<<endl;
      getch();
   }
   void game_rules(){
   
   cout<< "********************************************************************************"<<endl;
   cout<< "********************************RULES************************************"<<endl;
   cout<< "********************************************************************************"<<endl;
   cout<<"01. There Are Total Ten Questions In This Game."<<endl<<endl;
   cout<<"02. There Only Two Life Lines Which You Can At Any Stage Of The Game."<<endl<<endl; 
   cout<<"03. Pay Half & Skip Means You Have To Pay 1/4% Of Current Question."<<endl<<endl;
   cout<<" 04. Leave Question Means You Can Leave A Question Without Any Deduction."<<endl<<endl;
   cout<<"05. If You Attempt 3 Consecutive Right Answers Pay Half & Skip Will Rescued."<<endl<<endl;
   cout<<" 06. If You Attempt 5 Consecutive Right Answers Leave Question Will Rescued."<<endl<<endl;
   cout<<"07. After Every Question The Amount Of Question Will Be Double."<<endl<<endl;
   cout<<" 08. If The Answer Is Wrong Half Amount Of Question Deducts From Your Balance."<<endl<<endl;
   cout<<"09. Press H For Pay Half & Skip Help Line And L For Leave Question Help Line."<<endl<<endl;
   cout<<"10. Press A , B , C or D To Answer Any Question."<<endl<<endl;
   cout<< "********************************************************************************"<<endl;
   cout<< "*********************Press any key to continue**********************************"<<endl;
   cout<< "********************************************************************************"<<endl;
   getch();
  }

































