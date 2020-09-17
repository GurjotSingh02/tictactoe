#include <stdio.h>
void position1(char arr[3][3]);
void position2(char arr[3][3]);
void print(char arr[3][3]);
int count1(char arr[3][3]);
int count2(char arr[3][3]);
int count3(char arr[3][3]);
int count4(char arr[3][3]);
void main(){
	char arr[3][3];
	char a;
	char b;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			arr[i][j]='@';
			printf("  %c  ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		position1(arr);
		print(arr);
		if(count1(arr)==0)
                        break;
		count1(arr);
		if(count2(arr)==0)
                        break;
		count2(arr);
		if(count3(arr)==0)
                        break;
		count3(arr);
		if(count4(arr)==0)
                        break;
		count4(arr);
		if(i<4){
			position2(arr);
			print(arr);
			if(count1(arr)==0)
                        break;
			count1(arr);
			if(count2(arr)==0)
				break;
			count2(arr);
			if(count3(arr)==0)
        	                break;
			count3(arr);
			if(count4(arr)==0)
  	         	        break;
			count4(arr);
		}
	}
	int t=0;
	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        if(arr[i][j]=='@')
				t++;
                }
        }
	if(t==0)
	printf("Match Tied\n");
}
void position1(char arr[3][3]){
	int i,j;
	printf("Player1 please enter the index where you want to fill O : \n");
	scanf("%d %d",&i,&j);
	arr[i][j]='O';
	return ;
}
void position2(char arr[3][3]){
        int i,j;
        printf("Player2 please enter the index where you want to fill X : \n");
        scanf("%d %d",&i,&j);
        arr[i][j]='X';
        return ;
}
void print(char arr[3][3]){
	int i,j;
	for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("  %c  ",arr[i][j]);
                }
                printf("\n");
        }
	return ;
}
int count1(char arr[3][3]){
	int count;
	int count1;
	int j,i;
	int sum=5;
	for(i=0;i<3;i++){
		count=0;
		count1=0;
        	for(j=0;j<3;j++){
                	if(arr[i][j]=='O')
                	        count++;
			else if(arr[i][j]=='X')
				count1++;
        	}
		if(count==3)
                	printf("Player1 is winner\n");
		else if(count1==3)
			printf("Player2 is winner\n");
		if(count==3 || count1==3)
			sum=0;
	}
		return sum;
}
int count2(char arr[3][3]){
	int i,j;
	int count3;
	int count4;
	int sum=5;
	for(j=0;j<3;j++){
		count3=0;
		count4=0;
		for(i=0;i<3;i++){
			if(arr[i][j]=='O')
				count3++;
			else if(arr[i][j]=='X')
				count4++;
		}
		if(count3==3)
                        printf("Player1 is winner\n");
                else if(count4==3)
                        printf("Player2 is winner\n");
		if(count3==3 || count4==3)
                        sum=0;
	}
		return sum;
}
int count3(char arr[3][3]){
	int i=0,j;
	int count5=0;
	int count6=0;
	int sum=5;
	for(j=0;j<3;j++){
		if(arr[i][j]=='O')
			count5++;
		else if(arr[i][j]=='X')
			count6++;
		i++;
	}
	if(count5==3)
		printf("Player1 is winner\n");
	else if(count6==3)
		printf("Player2 is winner\n");
	if(count5==3 || count6==3)
                sum=0;
	return sum;
}
int count4(char arr[3][3]){
	int i,j=2;
	int count7=0;
	int count8=0;
	int sum=5;
	for(i=0;i<3;i++){
		if(arr[i][j]=='O')
			count7++;
		else if(arr[i][j]=='X')
			count8++;
		j--;
	}
	if(count7==3)
                printf("Player1 is winner\n");
        else if(count8==3)
                printf("Player2 is winner\n");
	if(count7==3 || count8==3)
                sum=0;
        return sum;
}
