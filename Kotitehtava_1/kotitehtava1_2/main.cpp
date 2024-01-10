#include <iostream>
#include <cstdlib>

using namespace std;
void arvauspeli();

int main()
{
    arvauspeli();

    return 0;
}


void arvauspeli(){
    int game_num, user_num;
    srand(time(0));
    game_num = rand() % 21;

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
    }
}
