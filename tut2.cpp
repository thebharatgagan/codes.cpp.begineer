/* ***** if-else **** */
#include<iostream>
using namespace std;

int main(){
    // Using if- else: 
    int age;

    cout << "Enter the age: ";
    cin >> age;

    if(age == 18){
        cout << "please took your ID, come to party"<< endl;
    }

    else if(age < 18){
        cout << "you are not eligible come to party" << endl;

    }
    else{
        cout << "you are eligible for party" << endl;
    }
    return 0;
}

// Using the Switch Cases:
#include<iostream>
using namespace std;
int main(){

    int age;
    cout << "Enter the Age: ";
    cin >> age;


    switch (age)
    {
    case 18:
        /* code */
        cout << "you are eligible";
        break;
    
    default:
//         break;
//     }
// }


// using the loops:
/* *************** for loops *********** */
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 50; i++){
        cout << i << endl;
    }
    return 0;
}

/* ************ WHILE LOOPS ************** */
#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter the value of Num: ";
    cin >> num;


    int i = 1;
    while (i <= 10){
    cout << num * i << endl;
    i++;
    }
    
    return 0;
}

/* ********* Break and Continue Statements *********** */
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 10; i++){
        if(i == 2){
            break;
        }
        if(i == 5){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}