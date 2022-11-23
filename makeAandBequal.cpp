#include <iostream>
using namespace std;
bool  isEqual(int min , int max ){
    while(min<=max){
        if(min==max){
            return true;
        }
        else{
            min*=2;
        }
    }
    return false;
}
int main() {
    int T;
    cin>>T;
    while(T){
        int a,b;
        cin>>a>>b;
        if(a==b){
            std::cout<<"Yes\n";
        }
        else
            if(a<b){
                if(isEqual(a,b)){
                    std::cout<<"Yes\n";
                }
                else{
                    std::cout<<"No\n";
                }
            }
        else{
            if(isEqual(b,a)){
                std::cout<<"Yes\n";
            }
            else{
                std::cout<<"No\n";
            }
        }
        T--;
    }
	return 0;
}
