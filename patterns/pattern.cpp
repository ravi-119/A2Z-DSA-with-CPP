#include <bits/stdc++.h>
using namespace std;

void print1 (int n){
    for(int i = 0; i<n; i++ ){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print2 (int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3 (int n){
    for(int i = 1; i<n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print4 (int n){
    for(int i = 1; i<n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 0; j<n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i = 0; i<=n; i++){

        // space
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }

        // star
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }

        // space
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }  
}

void print8(int n){
    for(int i = 0; i<n; i++){

        // Space
        for(int j = 0; j<i; j++){
            cout<<" ";
        }

        // Star 
        for(int j = 0; j<2*n - (2*i+1); j++){
            cout<<"*";
        }

        // Space
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void erect_pyramid(int n){
    for(int i = 0; i<n; i++){
        // Spaces
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        // Star
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        // Spaces
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void inverted_pyramid(int n){
    for(int i = 0; i<n; i++){
        // Spaces
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        // Star
        for(int j = 0; j<2*n- (2*i +1); j++){
            cout<<"*";
        }
        // Spaces
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print10(int n){
    for(int i = 1; i<=2*n-1; i++){
        int star = i;

        if(i>n) star = 2*n-i;

        for(int j = 1; j<=star; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void print11(int n){
    int start = 1;
    for(int i = 0; i<n; i++ ){
        if(i%2 == 0) start =1;
        else start = 0;

        for(int j = 0; j<=i; j++){
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
}

void print12(int n){
    int spaces = 2*(n-1);
    for(int i = 1; i<=n; i++){
        //Numbers
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        // Spaces
        for(int j = 1; j<=spaces; j++){
            cout<<" ";
        }
        //Reverse Number
        for(int j = i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        spaces-=2;
    }
}

void print13(int n){
    int num = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;      
    }
}


void print14(int n){
    for(int i = 0; i<=n-1; i++){
        for(char ch = 'A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){
    for(int i = 0; i<=n; i++){
        for(char ch = 'A'; ch<='A'+(n-i-1); ch++ ){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){
    for(int i = 0; i<=n; i++){
        char ch = 'A'+i;
        for(int j = 0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print17(int n){
    for(int i = 0; i<n; i++){

        // Space
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }

        // Alphabet
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1; j<= 2*i+1; j++){
            cout<<ch;
            if(j<= breakpoint) ch++;
            else ch--;
        }

        // Space
        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print18(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'E'-i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print19(int n){
    // FirstHalf
    int inis = 0;
    for(int i = 0; i<n; i++){
        // Stars
        for(int j = 1; j<=n-i; j++){
            cout<<"*";
        }
        // Spaces
        for(int j = 0; j<inis; j++){
            cout<<" ";
        }
        // Stars
        for(int j = 1; j<=n-i; j++){
            cout<<"*";
        }
        inis += 2;
        cout<<endl;
    }

    // // Second Half
    int iniS = 2*n-2;
    for(int i = 1; i<=n; i++){
        // Stars
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        // Spaces
        for(int j = 0; j<iniS; j++){
            cout<<" ";
        }
        // Stars
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        iniS -= 2;
        cout<<endl;
    }
}

void print20(int n){
    int spaces = 2*n-2;
    for(int i = 1; i<=2*n - 1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        // stars
        for(int j = 1; j<=stars; j++ ){
            cout<<"*";
        }
        // spaces
        for(int j = 1; j<=spaces; j++){
            cout<<" ";
        }
        // stars
        for(int j = 1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -= 2;
        else spaces += 2;
    }
}


void print21(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void print22(int n){
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2) - j;
            int bottom = (2*n-2)- i;
            cout<<(n - min(min(top, bottom), min(left, right)));
        }
        cout<<endl;
    }
}


int main() {
    int n;
    cin>>n;
    print22(n);
}


// int main() {
//     int t;
//     cin>>t;
//     for(int i =0; i<t; i++){
//         int n;
//         cin>>n;
//         print7(n);
//         print8(n);
//     }

// }