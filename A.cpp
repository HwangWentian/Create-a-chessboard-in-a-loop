#include<bits/stdc++.h> 
using namespace std;
/*
©°©Ð©´
©À©à©È
©¸©Ø©¼
*/
int main(){
	string board[10][10];
	for(int r=0; r<10; r++){
		for(int c=0; c<10; c++){
			if(r==0){
				if(c==0)board[r][c]="©°";
				else{
					if(c==9)board[r][c]="©´";
					else board[r][c]="©Ð";
				}
			}
			else{
				if(r==9){
					if(c==0)board[r][c]="©¸";
					else{
						if(c==9)board[r][c]="©¼";
						else board[r][c]="©Ø";
					}
				}
				else{
					if(c==0)board[r][c]="©À";
					else{
						if(c==9)board[r][c]="©È";
						else board[r][c]="©à";
					}
				}
			}
		}
	}
}
