#include <iostream>
#include <cstdlib>

using namespace std;
int arvauspeli(int maxnum);

int main()
{
    int maxnum, guess_times;

    cout<<"Insert highest range number"<< endl;
    cin>> maxnum;

    guess_times = arvauspeli(maxnum);

    cout<< "guessed times are "<< guess_times<< endl;

    return 0;
}


int arvauspeli(int maxnum){
    int game_num, user_num, guess_times = 0;
    srand(time(0));
    game_num = rand() % maxnum;

    while(game_num != user_num){

        cout<< "Give a number"<< endl;
        cin>> user_num;
        if(user_num > game_num){
            cout<< "The number is higher..Try again"<< endl;
        }
        else if(user_num < game_num){
            cout<< "The number is lower..Try again"<< endl;
        }
        if(user_num == game_num){
            cout<< "Right answer"<< endl;
        }
        guess_times++;
    }
    return guess_times;
}
