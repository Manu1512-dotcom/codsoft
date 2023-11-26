#include<iostream>
#include<cstdlib>
#define max 100                         //the random number will be from 1 to max(100) 
using namespace std;

void info();

void info()
{
    cout<<"\n\nthis is a number guessing game in which only one player can play at once on a device.\nThere will be a random generated number (1-100) and the player has to guess the number within the guesses limit.\nThe guess limit is 10,7 and 3 for Easy,Medium and Hard level respectively."<<endl;
    cout<<"\n\n\t\t\t ALL THE BEST"<<endl;
    cout<<"\npress enter to continue";
    cin.ignore();

}

int main()
{
    cout<<"\n\n\t\t*****************************************************\n\t\t\t\tW E L C O M E\n\t\t*****************************************************";
    info();
    char cont;
    do
    {
        int choice;
        cout<<"choose level:"<<endl;
        cout<<"1->Easy\n2->Medium\n3->Hard"<<endl<<endl;
        cin>>choice;

        int secret_num=(rand()%max)+1;
        int guesses;
        if(choice==1)
        {
            guesses=10;
        }
        else if(choice==2)
        {
            guesses=7;
        }
        else if (choice==3)
        {
            guesses=3;
        }
        int i=guesses;
        while(i--)
        {
            int user_input;
            cout<<"Enter your guess : ";
            cin>>user_input;
            if(user_input==secret_num)
            {
                cout<<"\n\n\t\t\tYOU GUESSED IT RIGHT !!!"<<endl;
                break;
            }
            else if(user_input < secret_num)
            {
                cout<<"\n\n\t\t\tWRONG GUESS\n\t\t     Your guess is LOW"<<endl;
            }
            else if(user_input > secret_num)
            {
                cout<<"\n\n\t\t\tWRONG GUESS\n\t\t     Your guess is HIGH" <<endl;
            }
            guesses--;
            cout<<"Guesses left : "<<guesses<<endl;
            if(guesses==0)
            {
                cout<<"\n\t\t\tGAME OVER"<<endl;
            }
        }
        

        cout<<"\n\nDo you want to play more?(press y or n):";
        cin>>cont;
    } while (cont=='y' || cont=='Y');
    return 0;
}
