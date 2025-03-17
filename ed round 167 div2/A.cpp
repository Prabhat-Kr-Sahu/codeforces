# include <iostream>
using namespace std;
void checker(int &x, int &y){
    if (x==0){
        cout<< "NO"<< endl;;
        return;
    }

    else if (x < 0 && y<0 && x/y <=4 ){
        cout<< "NO"<< endl;
        return;
    }
    
    else if(x>0 && y>0 && y/x>=2 ){
        cout<< "NO"<< endl;
        return;
    }
    else if( x>0 && y<0 && abs(y)/x >=2 ){ 
         cout<< "NO"<< endl;
        return;

    }

    else if (x<0 && y>0 && abs(x/y)>=2){
         cout<< "NO"<< endl;
        return;
    }
    else{
        cout<< "YES"<< endl;
        return;
    }
     
}

int main()
{
    int t;
    cin >> t;

    while (t--){
        int x;
        int y;
        cin>> x >> y;
        checker(x,y);

    }   

} 

