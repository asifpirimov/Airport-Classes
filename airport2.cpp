#include <iostream>
using namespace std;

int main(){
    int first_class[5] = {0}, eco_class[5] = {0};
    int free_fc = 5, free_ec = 5;
    for(int i = 1; i <= 10; i++){
        cout<<"Welcome!"<<endl;
        cout<<"There're "<<free_fc<<" first class places."<<endl;
        cout<<"There're "<<free_ec<<" economical class places."<<endl;
        int selection_class;
        cout<<"Please, select your class: ";
        cin>>selection_class;
        switch(selection_class){
            int player;
            case 1:
            cout<<"Please, select place: ";
            cin>>player;
            if(free_fc != 0){
            if(first_class[player + 1] == 1){
                cout<<"Your place isn't empty, please, select another one(Don't select this one again): ";
                cin>>player;
            }
            else{
                first_class[player + 1] = 1;
                free_fc -= 1;
            }
            }
            else{ 
               cout<<"Sorry, this class hasn't any place.";
            }
            break;
            case 2:
            cout<<"Please, select place: ";
            cin>>player;
            if(free_ec != 0){
            if(eco_class[player + 1] == 1){
                cout<<"Your place isn't empty, please, select another one(Don't select this one again): ";
                cin>>player;
            }
            else{
                eco_class[player + 1] = 1;
                free_ec -=1;
            }
            }
            else{
                cout<<"Sorry, this class hasn't any place.";
            }
            break;
            

            
    
        }
    }
}