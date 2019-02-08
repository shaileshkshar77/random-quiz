#include <iostream>
#include <cstdlib>

using namespace std;
int score=0,i=0;

void rules()
{
    cout<<"1. Initial Test round contains 3 Questions in which u have to answer any 2 correctly to Progress."<<endl;
    cout<<"2. For the next round each correct answer adds Rs 1,00,000."<<endl;
    cout<<"3. The game stops when u get Rs 10,00,000."<<endl;
    cout<<"3. Type the option name as answer."<<endl;
}
void add()
{
    score+=100000;
}
int question()
{
    int aa=0,r[20];
    char a;
    i=rand()%10;
    r[i]=(rand()%25)+1;
    switch(r[i])
    {
        case 1:cout<<"In India, the train Lifeline Express is a… "<<endl<<"A) Hospital B) Bank C) Primary School"<<endl;
               cin>>a;
               if(a=='A')
               {
                add();
                aa=1;
               }
               break;
         case 2:cout<<" Which Asian mountain is also known as the Savage Mountain due to the extreme difficulty of ascent? "<<endl<<"A) Kanchenjunga B) K2 C) Lhotse"<<endl;
               cin>>a;
               if(a=='B')
               {
                add();
                aa=1;
               }
               break;
         case 3:cout<<"Apart from Venus, which planet rotates from east to west? "<<endl<<"A) Jupiter B) Mars C) Uranus"<<endl;

               cin>>a;
               if(a=='C')
                {
                add();
                aa=1;
               }
               break;
         case 4:cout<<" Which is the largest internal organ in the human body? "<<endl<<"A) Liver B) Heart C) Lungl"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
         case 5:cout<<"After whom is the chemical element with atomic number 102 named? "<<endl<<"A) Albert Einstein B) Alfred Bernhard Nobel C) Isaac Newton"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 6:cout<<"In India, who heads the Department of Space? "<<endl<<"A) The president B) The prime minister C) The defence minister"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
                  break;
         case 7:cout<<"Tomato, sweet corn, oxtail, bird’s nest, chimney and French onion are all …"<<endl<<"A) Types of soup B) Breeds of cats C) Sporting events"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
         case 8:cout<<" Which of these elements is not named after a scientist? "<<endl<<"A) Einsteinium B) Ruthenium C) Curium"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 9:cout<<" What do you call a system of serving when a meal, consisting of several dishes is set out and guests serve themselves?"<<endl<<"A) Buffet B) A la carte C) Menu"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
         case 10:cout<<"Collectively, how many moons do the planets Mercury and Venus have?"<<endl<<"A) One B) None C) Fifty-five"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 11:cout<<" Which of these herbs, used extensively in Indian cuisine, is referred to as dhania in Hindi?"<<endl<<"A) Coriander B) Fenugreek C) Asafoetida"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
         case 12:cout<<"Sir Winston Churchill visited which country during its years under British rule and called it ‘the pearl of Africa’?"<<endl<<"A) Somalia B) Uganda C) South Africa"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 13:cout<<" Which is the only giant planet whose equator is nearly at right angles to its orbit? "<<endl<<"A) Mars B) Jupiter C) Uranus"<<endl;

               cin>>a;
               if(a=='C')
                {
                add();
                aa=1;
               }
               break;
         case 14:cout<<"Fill in the blank: the wheel and axle, the lever, the ramp, the screw and the pulley are all_______ machines. "<<endl<<"A) Simple B) Turbine C) Mechanical"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
         case 15:cout<<" What is described in the Oxford English Dictionary as ‘an Indian sweet made from a mixture of flour, sugar, and shortening, which is shaped into a ball’?"<<endl<<"A) Rasgulla B) Laddu C) Balushahi"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 16:cout<<"Which are the only big cats to have a tuft or a bunch of hair at the end of their tail?"<<endl<<"A) Lions B) Tigers C) Jaguars"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
         case 17:cout<<" In 2008, who became the first Indian actor to receive the prestigious Malaysian title, ‘Datuk’?"<<endl<<"A) Aamir Khan B) Ajay Devgn C) Shah Rukh Khan"<<endl;

               cin>>a;
               if(a=='C')
                {
                add();
                aa=1;
               }
               break;
         case 18:cout<<"Among the following which natural number has no predecessor?"<<endl<<"A) 1000 B) 100 C) 1"<<endl;

               cin>>a;
               if(a=='C')
                {
                add();
                aa=1;
               }
               break;
         case 19:cout<<"An integer that is divisible by 2 is called:"<<endl<<"A) ODD Number B) EVEN number C) Primary Number"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 20:cout<<" In Roman numerals M represents 1000, what does M represent?"<<endl<<"A) 10,000 B) 50,000 C) 10,00,000"<<endl;

               cin>>a;
               if(a=='C')
                {
                add();
                aa=1;
               }
               break;
         case 21:cout<<"This number’s irrationality property was first discovered by Pythagoras. What is its value?"<<endl<<"A) 2 B) 3 C) 7"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
         case 22:cout<<"The value of e = 2.71828… is also known as:"<<endl<<"A) Archimedes Number B) Fermat Number C) Euler’s Number"<<endl;

               cin>>a;
               if(a=='C')
                {
                add();
                aa=1;
               }
               break;
         case 23:cout<<"What group of numbers does the letter ‘i’ represent?"<<endl<<"A) Perfect B) Imaginary C) Real"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 24:cout<<"Which of these are sum of 2 squares"<<endl<<"A) 136 B) 169 C) 93"<<endl;

               cin>>a;
               if(a=='B')
                {
                add();
                aa=1;
               }
               break;
         case 25:cout<<"What produces a reflex action among these"<<endl<<"A) Touching a hot iron B) laughing C) crying"<<endl;

               cin>>a;
               if(a=='A')
                {
                add();
                aa=1;
               }
               break;
    }


    i++;
    if(aa==1)
    {
        cout<<"CORRECT!!"<<endl;

    }
    else
        cout<<"Wrong!!"<<endl;

        return aa;

}
int main()
{
    a: cout<<"______________________________________________________________________________________________________________"<<endl;
    cout<<"\n\n\t\t\t\t\t WELCOME TO THE GAME \n\n";
     cout<<"______________________________________________________________________________________________________________\n"<<endl;
    cout<<"______________________________________________________________________________________________________________"<<endl;
    cout<<"\t>\tPress R for Rules"<<endl;
    cout<<"\t>\tPress S to start"<<endl;
    cout<<"\t>\tPress Q to Quit"<<endl;
     cout<<"______________________________________________________________________________________________________________"<<endl;
     char c;
     cin>>c;
     if(c=='Q' || c=='q')
        return 0;
     else if (c=='R' || c=='r')
     {
        rules();
        goto a;
     }

     cout<<"ROUND 1:"<<endl;
     int q=0;
     for(int i=0;i<=2;i++)
     {
         q+=question();
     }
     if(q<2)
     {
         cout<<"YOU ARE ELIMINATED AND EARN 0";
         return 0;
     }
     q=0;
     for(int i=0;i<10;i++)
     {
         q=question();
         if(q==0)
         {
             cout<<"YOU LOOSE "<<endl;
             cout<<"CASH EARNED :  "<<score<<endl;
             return 0;
         }
     }

    cout<<"YOU WIN!!!!!!!!!!!!!!!!"<<endl;
    cout<<"Cash Earned:   "<<score;


    return 0;
}
