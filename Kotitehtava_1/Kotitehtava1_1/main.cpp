#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int user_num, game_num;
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

    return 0;
}
