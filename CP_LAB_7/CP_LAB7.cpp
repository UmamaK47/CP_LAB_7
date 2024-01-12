/*//TASK 1
#include<iostream>
using namespace std;
int swap(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << "Value of a after exchange is = " << a;
	cout << "\nValue of b after exchange is = " << b;
	return 0;
}
int main()
{
	int a, b;
	cout << "Enter the value of a = ";
	cin >> a;
	cout << "\nEnter the value of b = ";
	cin >> b;
	swap(a, b);
	cout << endl;
	system("pause");
	return 0;
}

//TASK 2
#include<iostream>
using namespace std;
void area(int a) {
	cout << "area of square=" << a * a;
	cout << endl;
}
void area(float a, float b) {
	cout << "area of rectange is=" << a * b;
	cout << endl;
}
void area(float a) {
	cout << "area of circle is=" << 3.14 * a * a;
	cout << endl;
}
int main()
{
	int choice;
	cout << "press 1 for area of square\npress 2 for area of rectangle\npress 3 for area of circle\nenter your choice=";
	cin >> choice;
	if (choice == 1) {
		int a;
		cout << "enter one side of the square=";
		cin >> a;
		area(a);
	}
	else if (choice == 2) {
		float len, wid;

		cout << "enter the both sides of the rectangle=";
		cin >> len >> wid;
		cout << endl;
		area(len, wid);

	}
	else if (choice == 3) {
		float radius;
		cout << "enter radius of the circle=";
		cin >> radius;
		cout << endl;
		area(radius);
	}
	else {
		cout << "invalid choice";
	}
		return 0;
}

//TASK 3
#include<iostream>
using namespace std;
int sum(int num1, int num2);
float sum(float n1, float n2);
int main()
{
	int a, b;
	float c, d;
	cout << "Enter the First integer value: ";
	cin >> a;
	cout << "\n Enter the Second integer value: ";
	cin >> b;
	sum(a, b);
	cout << "\n********";
	cout << "\nEnter the First float value: ";
	cin >> c;
	cout << "\n Enter the Second float value: ";
	cin >> d;
	sum(c, d);

	cout << endl;
	system("pause");
	return 0;
}
int sum(int num1, int num2)
{
	cout << "\nSum of " << num1 << " & " << num2 << " is = "<< num1 + num2;
	return 0;
}
float sum(float n1, float n2)
{
	cout << "\nSum of " << n1 << " & " << n2 << " is = "<<n1 + n2;
	return 0;
}

//EXTRA TASK
#include <iostream>
#include<string>
using namespace std;
void sendMessage(string& message);
void sendMessage(string& message, string& messageType);
void recieveMessage(string& message);
void recieveMessage(string& message, string& messageType);
void call(string& caller, string& reciever);
void call(string& caller, string& reciever, string& callType);
void ring();
int main() {
	string message1="Hello, how are you?";
	string message2="Hi, I'm fine.";
	string caller="Umama", reciever="Tayyaba";
	sendMessage(message1);
	recieveMessage(message2);
	string message3="Sending an image";
	string message4="Received an image";
	string message_type="Image";
	sendMessage(message3, message_type);
	recieveMessage(message4, message_type);
	string call_type="Video";
	call(caller, reciever);
	call(caller, reciever, call_type);

	return 0;
}
void sendMessage(string& message){
	cout<<"\nSender's Message: "<<message;
}
void sendMessage(string& message, string& messageType){
	cout<<"\nSender's Message: "<<message<<", Sent a: "<<messageType;
}
void recieveMessage(string& message){
	cout<<"\nReciever's Message: "<<message;
}
void recieveMessage(string& message, string& messageType){
	cout<<"\nReciever's Message: "<<message<<", Recieved a: "<<messageType;
}
void call(string& caller, string& reciever){
 cout<<"\nCalling "<<reciever<<" from "<<caller;
 ring();
}
void call(string& caller, string& reciever, string& callType){
	cout<<"\nIncoming "<<callType<<" call from "<<caller<<" to "<<reciever;
	ring();
}
void ring(){
	cout<<"\nRinging....";
	string response;
	while(true){
		cout<<"\nWaiting for reciever to pick up...Press P to pickup";
		cin>>response;
		if(response=="P" || response=="p"){
			cout<<"Call picked up!";
			break;
		}
	}
}
*/