#include <stdio.h>
#include <string.h>
#include <math.h>
void displayPathtoPrincess(int n, char grid[101][101]){
    //logic here
    int peachX;
    int peachY;
    
    int marioX = n/2;
    int marioY = n/2;
    
    if(grid[0][0] == 'p') {
        peachX = 0;
        peachY = 0; 
    }else if (grid[0][n-1] == 'p'){ 
        peachX = n-1;
        peachY = 0;       
    }else if (grid[n-1][0] == 'p'){
        peachX = 0;
        peachY = n-1;
    }else if (grid[n-1][n-1] == 'p'){
        peachX = n-1;
        peachY = n-1;     
    }
    
    while(!(marioX == peachX && marioY == peachY)){
        if(marioX > peachX){
            printf("LEFT\n");
            marioX -= 1;
        }else if(marioX < peachX){
            printf("RIGHT\n");
            marioX += 1;
        }
        if(marioY > peachY){
            printf("UP\n");
            marioY -= 1;
        } else if(marioY < peachY){
            printf("DOWN\n");
            marioY += 1;
        }
    }
}
int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
