#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,20,30,40,50};
    int choice;

    cout<<"1.Display 2.Sum 3.Search\n";
    cin>>choice;

    switch(choice){
        case 1:
            for(int i=0;i<5;i++)
                cout<<arr[i]<<" ";
            break;

        case 2:{
            int sum=0;
            for(int i=0;i<5;i++) sum+=arr[i];
            cout<<"Sum="<<sum;
            break;
        }

        case 3:{
            int key=30,found=0;
            for(int i=0;i<5;i++){
                if(arr[i]==key){
                    cout<<"Found";
                    found=1;
                }
            }
            if(!found) cout<<"Not Found";
            break;
        }
    }
}