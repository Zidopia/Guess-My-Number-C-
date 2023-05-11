#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<string>
#include<conio.h>
using namespace std;
int binSearchFun(int A[], int target, int len);
void player_1(int [],int,string,int,int,string,int);
void player_2(int [],int,string,int,int);


int main(){
	system("color B4");
	int i,target;
	int Max_Trial;
	int count1=1,count2=1;
	int found;
	int MAX=100;
	int A[MAX];
	string Player1Name;
    string Player2Name;
    string Number_picker;
	for(i=1;i<=MAX;i++){
	   A[i]=i;
	}
	cout << endl << "                   |----------------------------------------|";
	cout << endl << "                         GUESS MY NUMBER - 2 PLAYER";
	cout << endl << "                   |----------------------------------------|";
	cout << endl << "                   |------------- |||||||||||| ------------|";
	
	cout<<"\n\n\t\tWelcome!";Sleep(500);cout<<" We have";Sleep(500);cout<<" this description";Sleep(500);cout<<" to the game highlite";Sleep(500);cout<<" about the game";Sleep(500);
cout<<" that you are";Sleep(500);cout<<" about to play.";Sleep(500);cout<<"\n It is simply gussing";Sleep(500);cout<<" a certain hidden number";Sleep(500);
	cout<<" based on any starting point";Sleep(500);cout<<" by the user.";Sleep(500);cout<<" This a freindly";Sleep(500);
	cout<<" and easy platform!";Sleep(500);cout<<" has gives";Sleep(500);cout<<" a chance for 2 players";Sleep(500);
	cout<<" \n [player1,player2]";Sleep(500);cout<<" to guess the number";Sleep(500);cout<<" that is holded by";Sleep(500);
	cout<<" another person.";Sleep(500);cout<<"It will count your";Sleep(500);cout<<" name and the number";Sleep(500);
	cout<<" that is about";Sleep(500);cout<<" to be guessed";Sleep(500);
	cout<<" by the time part.";Sleep(500);cout<<" \n Then the players officialy";Sleep(500);cout<<" start the guessing.";Sleep(500);
	cout<<"\n=====================================================================================================================";Sleep(500);
	cout<<"\n=====================================================================================================================";Sleep(500);
	cout<<"\n\tWhile guessing";Sleep(500);cout<<" you are allowed";Sleep(500);cout<<" to guess within";
	Sleep(500);cout<<" a fixed number of trial.";Sleep(500);cout<<" If you dont get";Sleep(500);cout<<" the exact number your";Sleep(500);
    cout<<" attempts would not seen";Sleep(500);cout<<" to the other player,";Sleep(500);cout<<"\n it will clear after";Sleep(500);
	cout<<" you finished your guessing.";Sleep(500);cout<<"\n This Simple game";Sleep(500);cout<<" will simplifiy your";
	Sleep(500);cout<<" playing time by";Sleep(500);cout<<" guessing and specifying";
	Sleep(500);cout<<" the scope to segment";Sleep(500);cout<<" the number based on";Sleep(500);
	cout<<" the starting point";Sleep(500);cout<<" that you have enterd.";Sleep(500);cout<<"\n\n\t\t\t\t\t\t <<<<<   HAVE A GREAT TIME !!! >>>>>";Sleep(200);
	   cout<<" \n\n\t\tPLEASE ENTER ANY KEY TO CONTINUE"<<endl;
    getch();
    system("cls");
    Sleep(500);
  	cout << "\n\n\n\n\n\n\n\t\t\t\t\tLoading |||||||                                                  | 12% ....";
	Sleep(500);
	system("cls");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
	Sleep(700);
	system("cls");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
	Sleep(900);
	system("cls");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
	Sleep(2000);
	system("cls");

	cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"          Player 1 enter you name, you will be guessing the number: ";
	cin >> Player1Name;
	system("CLS");
	cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"          Player 2 enter you name, you will be guessing the number: ";
	cin >> Player2Name;
	system("CLS");
	cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"          Number Picker enter you name, you will be choosing the number: ";
	cin >> Number_picker;
	system("CLS");
	cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                         So "<<Player1Name<<" and "<<Player2Name<<", let's play!";
	Sleep(4500);
	system("CLS");
	cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                         "<<Number_picker<<", pick a number for "<<Player1Name<<" And "<<Player2Name<<" to guess: ";
	cin >> target;
	found=binSearchFun(A,target,MAX);
		    if(found==0){
          cout<<endl<<target<<" isn't available in the list"; 
          exit(0);
    }
		else{
		cout<<"Succsses!!! Target is found in location "<<found-1;	}
        	Sleep(4000);
			system("cls");
cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                         "<<Number_picker<<", how many chance of trial you give them ?  ";
	cin >> Max_Trial;	
	system("cls");
	
			while(Max_Trial!=-1){
			
        	player_1(A,target,Player1Name,count1,Max_Trial,Player2Name,count2);
        		system("cls");
         	player_2(A,target,Player2Name,count2,Max_Trial);
        		system("cls");
        		count1++;
        		count2++;
        		Max_Trial--;
   }
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
void player_1(int A[],int target,string Player1Name,int count1,int Max_Trial,string Player2Name,int count2){
	int gusses,num;
	

		cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                         Ok "<<Player1Name<<" time for your guess:\n ";
	
	cout<<"you have a free chance to put your Starting point\n"
	<<"\n\nThe System Returns('Yes'if it is lower than target number else'No')\nplease input your number "; 
	cin>>num;
	
	if(A[num]<A[target]){
		cout<<"YES\n\n";
	}
	else{
		cout<<"NO\n\n";
	}
	cout<<Player1Name<<" please input ur guess"<<endl;
	cin>>gusses;
	if(A[gusses]==A[target]){
		cout<<"conguratulation "<<Player1Name<<" win the game It only took " << count1<< " turns!" << endl;
		Sleep(4000);
		exit(0);
	}
else if (A[gusses]>A[target]){
		cout<<"too high"<<endl;
		Sleep(1700);
		}
		else {
			cout<<"too low"<<endl;
			Sleep(1700);
			
		}
 		if(Max_Trial==1 && gusses!=target){
			cout<<" \t\t\tGame over!!! you already finish all your chance"<<endl;
			cout<<"Now "<<Player2Name<<" has only one chance. if he/she get exact number,you lose "<<endl;
			Sleep(9000);
			system("cls");
				player_2(A,target,Player2Name,count2,Max_Trial);
			
			return;
		}

}
void player_2(int A[],int target,string Player2Name,int count2,int Max_Trial){
	int gusses;

	int num;
		if(Max_Trial<=0){
			cout<<" /t/tGame over!!! you already finish all your chance"<<endl;
			system("cls");
			exit(0);
		}
		cout << endl <<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                         Ok "<<Player2Name<<" time for your guess:\n ";
       
	
	cout<<"you have a free chance to put your Starting point"
	<<"\n\nThe System Returns ['Yes'if it is lower than target number else'No']\nplease input your number\n" ;
	cin>>num;
	if(A[num]<A[target]){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
	cout<<Player2Name<<" please input ur guess\n";
	cin>>gusses;
	
	if(A[gusses]==A[target]){
		cout<<"conguratulation "<<Player2Name<<" win the game! It only took " << count2 << " turns!" << endl;
				Sleep(2700);
	            	exit(0);
	}
else if (A[gusses]>A[target]){
		cout<<"too high"<<endl;
		Sleep(1700);
		}else{
			cout<<"too low"<<endl;
			Sleep(1700);
		}
			if(Max_Trial==1 && gusses!=target){
			cout<<" \t\t\tGame over!!! you already finish all your chance"<<endl;
			Sleep(2500);
			system("cls");
	exit(0);
}
}
int binSearchFun(int A[], int target, int len)
{
    int first, last, middle;
    first = 1;
    last = len-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(A[middle]<target)
            first = middle+1;
        else if(A[middle]==target)
            return (middle+1);
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    return 0;
}


