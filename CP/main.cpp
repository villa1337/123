#include <iostream>

using namespace std;

int addDigits(int n){
    
    if(n>9){
        int result = 0;
        while(n>0){
            result += n%10;
            n/=10;
        }
        return result;
    }else{
        return n;
    }
}

void oneTwoThree(int n){
    
    
}

int main()
{
    int count1 = 0, count2 =0, count3 =0;
    int t=9999;
    while(t --){
        
        int r = addDigits(t);
        
        while(r>9){
            r = addDigits(r);
        }
        
        int output = -1;
        switch (r) {
            case 1:
                output = 1;
    //            cout << "1" << endl;
                break;
            case 2:
                output = 1;
    //            cout << "1" << endl;
                break;
            case 3:
                output = 2;
    //            cout << "2" << endl;
                break;
            case 4:
                output = 1;
    //            cout << "1" << endl;
                break;
            case 5:
                output = 2;
    //            cout << "2" << endl;
                break;
            case 6:
                output = 2;
    //            cout << "2" << endl;
                break;
            case 7:
                output = 3;
    //            cout << "3" << endl;
                break;
            case 8:
                output = 1;
    //            cout << "1" << endl;
                break;
            case 9:
                output = 2;
    //            cout << "2" << endl;
                break;
            default:
                break;
        }
        switch (output){
            case 1:
                count1++;
                break;
            case 2:
                count2++;
                break;
            case 3:
                count3++;
                break;
        }
    }
    
    cout << "Unos: " << count1 << endl;
    cout << "Dos: " << count2 << endl;
    cout << "Tres: " << count3 << endl;

}
