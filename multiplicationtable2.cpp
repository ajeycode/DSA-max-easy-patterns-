
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number :- ";
    cin >> n;

    for (int i = n; i <= 10 * n; i = i + n) {
        cout << i << endl;
    }

    return 0;
}
//  #include <iostream>
// using namespace std;
// int main(){
//     int n;
// cout<<"Enter the number :-";
// cin>>n;
// for (int i=n; 1<=10*n; i=i+n){
//     cout<<i<<endl;
// }
//  return 0;
// }
//     int n;
//     cout<<"Enter the table :-";
//     cin>>n;
//     for (int i=1; i<=10; i+=1){
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }




//     return 0;
// }
 