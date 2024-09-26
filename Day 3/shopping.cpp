#include <iostream>
using namespace std;

class shopping {
    private:
    int itemcode[4];
    int itemprice[4];
    int count= 0;

    public:
      void getitem(){
    for(int i=0;i<4;i++){
        cout<<"enter "<<i<<" itemcode:";
        cin>>itemcode[i]>>itemprice[i];
        count++;
    }
      }
    int displaySum(){
        int price=0;
        for(int i=0;i<4;i++){
          price+=itemprice[i];  
        }
        return price;
    }
    void itemRemove(int code){
        itemprice[code-1]=0;
        cout<<"item "<<code<<" remove";
        
    }
 
};
int main(){
 shopping item;

 int choice;
 do {
 cout<<"\n1 for addtocart\n2 for display price\n3 for item remove";
 cout<<"\nenter choice:";
 cin>>choice;
     
     switch(choice){

        case 1:
                item.getitem();
                break;
        case 2:
                cout << "Total price is:"<< item.displaySum() << endl;
                break;
        case 3:
                int code;
                cout << "Enter item code to remove:";
                cin >> code;
                item.itemRemove(code);
                break;
        case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";

     }
 }while(choice=!0);

 return 0;
}
