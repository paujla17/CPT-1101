#include <iostream> 

using namespace std; 

bool is_leap (int year){
    if(year % 4 == 0){
        if(year % 100 == 0)
            if(year % 400 == 0)
                return true; 

            }else{
                return false; 
            }
        else{ 
            return true;
        }
    else{
        return false; 
    }
    

int main(){
        cout << is_leap(1991);
        // cout << is_leap(2004); //
        // cout << is_leap(2000); //

const int WEEKS = 5
const int DAYS_PER_WEEK = 7
int arr[WEEKS][DAYS_PER_WEEK];
int day_of_month = 1; 
for(int i = 0 ; i < WEEKS; i++)
    for(int j = 0 ; j < DAYS_PER_WEEK; j++){
        arr[i][j] = day_of_month++;
    }
    }
    return 0; 

}