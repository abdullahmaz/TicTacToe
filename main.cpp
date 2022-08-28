#include <iostream>
using namespace std;

char grid[9]={'1','2','3','4','5','6','7','8','9'};
int check(){
    if(grid[0]=='x' && grid[1]=='x' && grid[2]=='x' || grid[3]=='x' && grid[4]=='x' && grid[5]=='x' || grid[6]=='x' && grid[7]=='x' && grid[8]=='x' || 
       grid[0]=='x' && grid[3]=='x' && grid[6]=='x' || grid[1]=='x' && grid[4]=='x' && grid[7]=='x' ||grid[2]=='x' && grid[5]=='x' && grid[8]=='x' ||
       grid[0]=='x' && grid[4]=='x' && grid[8]=='x' || grid [2]=='x' && grid[4]=='x' && grid[6]=='x'){
        cout<<"Player 1 wins !!\n";
        return 1;
    }

    if(grid[0]=='o' && grid[1]=='o' && grid[2]=='o' || grid[3]=='o' && grid[4]=='o' && grid[5]=='o' || grid[6]=='o' && grid[7]=='o' && grid[8]=='o' || 
       grid[0]=='o' && grid[3]=='o' && grid[6]=='o' || grid[1]=='o' && grid[4]=='o' && grid[7]=='o' ||grid[2]=='o' && grid[5]=='o' && grid[8]=='o' ||
       grid[0]=='o' && grid[4]=='o' && grid[8]=='o' || grid[2]=='o' && grid[4]=='o' && grid[6]=='o'){
        cout<<"Player 2 wins !!\n";    
        return 1;
    }
}
void my_grid(){
    
    int x=0;
    system("clear");
    for(int i=0; i<=2; i++){
            for(int j=0; j<=2; j++){
                cout<<grid[x]<<"  ";
                x++;
            }
        cout<<"\n"; 
    }
}

int main(){

    int turn,player;
    char symbol;
    my_grid();

    for(int a=0; a<=8; a++){
        if(a%2 == 0){
            player = 1;
            symbol='x';
        } else {
            player = 2;
            symbol ='o';
        }
        cout<<"Player "<<player<<"'s Turn: ";
        cin>>turn;
        grid[turn-1]=symbol;
        my_grid();
        if(check()==1)
        break;
        if(a==8)
        cout<<"It's a tie !!\n";
    }
    
    return 0;
}