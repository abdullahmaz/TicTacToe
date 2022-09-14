#include <iostream>
using namespace std;

char grid[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int check(){
    
    for(int i=0; i<=2; i++){
        for(int j=0; j<=0; j++){
            if(grid[i][j]=='x' && grid[i+1][j]=='x' && grid[i+2][j]=='x'){
            cout<<"Player 1 wins !!\n";
            return 1;        
            }
            if(grid[i][j]=='o' && grid[i+1][j]=='o' && grid[i+2][j]=='o'){
            cout<<"Player 2 wins !!\n";
            return 1;
            }
            if(grid[i][j]=='x' && grid[i][j+1]=='x' && grid[i][j+2]=='x'){
            cout<<"Player 1 wins !!\n";
            return 1;        
            }
            if(grid[i][j]=='o' && grid[i][j+1]=='o' && grid[i][j+2]=='o'){
            cout<<"Player 2 wins !!\n";
            return 1;
            }
        }
    }
    if(grid[0][0]=='x' && grid[1][1]=='x' && grid[2][2]=='x' || grid[0][2]=='x' && grid[1][1]=='x' && grid[2][0]=='x'){
        cout<<"Player 1 wins !!\n";
        return 1;
    }
    if(grid[0][0]=='o' && grid[1][1]=='o' && grid[2][2]=='o' || grid[0][2]=='o' && grid[1][1]=='o' && grid[2][0]=='o'){
        cout<<"Player 2 wins !!\n";
        return 1;
    }
}
void my_grid(){
    
    system("clear");
    for(int i=0; i<=2; i++){
            for(int j=0; j<=2; j++){
                cout<<grid[i][j]<<"  ";
                }
        cout<<"\n"; 
    }
}
int main(){

    int player;
    char turn,symbol;
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
        for(int i=0; i<=2; i++){
            for(int j=0; j<=2; j++){
                if(grid[i][j] == turn)
                grid[i][j] = symbol;
            } 
        }
        my_grid();
        if(check()==1)
        break;
        if(a==8)
        cout<<"It's a tie !!\n";
    }
    return 0;
}