#include<iostream>
#include<windows.h>
using namespace std;

class Question
{
    string q1[10];
    char a1[10];
    string op[10][4];
    int score[2];

public:
    void get_questions()
    {
        q1[0]="Which one is the capital of Pakistan?";
        q1[1]="Which planet is known as the red planet?";
        q1[2]="What is the name of largest moon in the solar system?";
        q1[3]="What is the name of the farthest planet?";
        q1[4]="What is the name of the galaxy that contains our solar system?";
        q1[5]="In which year did the Titanic sink?";
        q1[6]="Which is the latest theory presented by NASA?";
        q1[7]="What is the other name of the broken planet?";
        q1[8]="With what material is space made of?";
        q1[9]="Why is space so quiet?";
    }
    void get_options()
    {
        op[0][0]="Islamabad";
        op[0][1]="Karach";
        op[0][2]="Lahore";
        op[0][3]="KPK";
        op[1][0]="Venus";
        op[1][1]="Earth";
        op[1][2]="Mars";
        op[1][3]="Neptune";
        op[2][0]="Earth's Moon";
        op[2][1]="Jupiter Moon";
        op[2][2]="Venus Moon";
        op[2][3]="Mars Moon";
        op[3][0]="Pluto";
        op[3][1]="Venus";
        op[3][2]="Earth";
        op[3][3]="Neptune";
        op[4][0]="Andromeda Galaxy";
        op[4][1]="Whirlpool Galaxy";
        op[4][2]="Milky Way";
        op[4][3]="Triangulum Galaxy";
        op[5][0]="Feburary 3, 1918";
        op[5][1]="Jannuary 1, 1910";
        op[5][2]="May 24, 1939";
        op[5][3]="April 15,1912";
        op[6][0]="Expansion of Universe";
        op[6][1]="Black Hole";
        op[6][2]="Knock Planet";
        op[6][3]="Moving Of Sun";
        op[7][0]="Decaying planet";
        op[7][1]="Black Hole";
        op[7][2]="non existant";
        op[7][3]="planet";
        op[8][0]="black matter";
        op[8][1]="vacuum";
        op[8][2]="space";
        op[8][3]="air";
        op[9][0]="because of vacuum";
        op[9][1]="it is not";
        op[9][2]="because of air";
        op[9][3]="because of radiations";
    }
    void get_answers()
    {
        a1[0]='a';
        a1[1]='c';
        a1[2]='b';
        a1[3]='d';
        a1[4]='c';
        a1[5]='d';
        a1[6]='c';
        a1[7]='b';
        a1[8]='a';
        a1[9]='a';
    }
    void quiz()
    {
        char ch;
        bool play=false;
        score[0]=0;
    score[1]=0;
    char option='a';
        for(int i=0; i<10; i++)
        {
            if(play)
            {
                Sleep(800);
                system("cls");
                cout << "QUESTIONS: " << i+1 << endl << endl;
                cout << "Player 1 turn" << endl;
            cout << q1[i] << endl;
            for(int j=0; j<4; j++)
            {
               cout << static_cast<char>(option + j) << ") " << op[i][j] << endl;
            }
            cout << "Enter as (a,b,c,d): ";
            cin >> ch;
            if(ch==a1[i])
            {
                score[0]++;
            }
            play=!play;
        }
        else
        {
            Sleep(800);
            system("cls");
            cout << "QUESTIONS: " << i+1 << endl;
            cout << "Player 2 turn" << endl;
            cout << q1[i] << endl;
            for(int j=0; j<4; j++)
            {
                cout << static_cast<char>(option + j) << ") " << op[i][j] << endl;
            }
            cout << "Enter as (a,b,c,d): ";
            cin >> ch;
            if(ch==a1[i])
            {
                score[1]++;
            }
            play=!play;
        }
    }
    }
    void check_score()
    {
        cout << "Player 1 score: " << score[0] << endl;
        cout << "Player 2 score: " << score[1] << endl;
    }
};
int main()
{
        Question q1;
            q1.get_questions();
            q1.get_options();
            q1.get_answers();
            q1.quiz();
            q1.check_score();
    return 0;
}
