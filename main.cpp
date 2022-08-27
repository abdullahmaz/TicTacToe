#include <iostream>
using namespace std;

int check(char* w){
    if(w[0]=='x' && w[1]=='x' && w[2]=='x' || w[3]=='x' && w[4]=='x' && w[5]=='x' || w[6]=='x' && w[7]=='x' && w[8]=='x' || 
       w[0]=='x' && w[3]=='x' && w[6]=='x' || w[1]=='x' && w[4]=='x' && w[7]=='x' ||w[2]=='x' && w[5]=='x' && w[8]=='x' ||
       w[0]=='x' && w[4]=='x' && w[8]=='x' ||w [2]=='x' && w[4]=='x' && w[6]=='x'){
        cout<<"Player 1 wins \n";
        return 1;
       }
       else return 0;

    if(w[0]=='o' && w[1]=='o' && w[2]=='o' || w[3]=='o' && w[4]=='o' && w[5]=='o' || w[6]=='o' && w[7]=='o' && w[8]=='o' || 
       w[0]=='o' && w[3]=='o' && w[6]=='o' ||w[1]=='o' && w[4]=='o' && w[7]=='o' ||w[2]=='o' && w[5]=='o' && w[8]=='o' ||
       w[0]=='o' && w[4]=='o' && w[8]=='o' ||w[2]=='o' && w[4]=='o' && w[6]=='o'){
        cout<<"Player 2 wins \n";    
        return 1;
       }
       else return 0;
    
}
void my_grid(char* v){
    
    int x=0;
    system("clear");
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
                cout<<v[x]<<"  ";
                x++;
        }
        cout<<"\n"; 
    }
}

int main(){

    int box;
    int player = 2;
    char value[9]={'1','2','3','4','5','6','7','8','9'};
    my_grid(value);

    for(int a=0; a<=8; a++){
        if(player == 1){
            player = 2;
            cout<<"Player 1's Turn: ";
            cin>>box;
            value[box-1]='x';
            my_grid(value);
            if(check(value))
            break;
        
        }
        else if(player == 2){
            cout<<"Player 2's Turn: ";
            cin>>box;
            value[box-1]='o';
            my_grid(value);
            if(check(value))
            break;
            player = 1;
        }
        if(a==8)
        cout<<"It's a tie\n";
    }
    
    return 0;
}