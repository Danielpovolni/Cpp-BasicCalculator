#include <iostream>
#include <string>
using namespace std;
int main(){
    int numbers, sum;
    string operation;
    cin >> operation;
    if(operation == "+"){
        while(cin >> numbers){
            sum = numbers + sum;
        }}
    if(operation == "-"){
        while(cin >> numbers){
            sum = numbers - sum;
        }}
    if(operation == "*"){
        while(cin >> numbers){
            sum = numbers * sum;
        }}
    if(operation == "/"){
        while(cin >> numbers){
            sum = numbers / sum;
        }}
    cout << sum;
}
