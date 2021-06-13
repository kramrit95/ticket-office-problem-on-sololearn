#include <iostream>
using namespace std;

int main() {
    int a[5];
    

    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }
    float min=a[0];
    
for(int i=0;i<5;i++)
    {
    
        if(a[i]<min)
        
            min=a[i];
            
        
        
    }
    
    float p=(min*50)/100;
    cout<<50-p;
    
    
    
    
    return 0;
}
