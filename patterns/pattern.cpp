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

// void print11(int n){
//     int start = 1;
//     for(int i = 0; i<n; i++ ){
//         if(i%2 == 0) start =1;
//         else start = 0;

//         for(int j = 0; j<=i; j++){
//             cout<<start;
//             start = 1 - start;
//         }
//         cout<<endl;
//     }
// }



int main() {
    int n;
    cin>>n;
    print11(n);
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