#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string name ;
    int price;
    int noOfPages;
    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isBookPresent(string book){
        if(name == book) return true;
        else return false;
    }
};
int main(){
    Book harryPotter;
    harryPotter.name = 'h';
    harryPotter.price = 1000;
    harryPotter.noOfPages = 500;

    cout<<harryPotter.countBooks(100)<<endl;
    cout<<harryPotter.isBookPresent("h");
}