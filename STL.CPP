#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>

using namespace std;

int main()
{
	//Vector
	vector<int> v;
	v.push_back(5);
	v.push_back(10);
	v.push_back(15);
	v.push_back(20);
	cout << "Elements in vector are: ";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
	
	//List
	list<int> l;
	l.push_back(13);
	l.push_back(30);
	l.push_back(22);
	l.push_back(44);
	cout << "Elements in list are: ";
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
		cout << *it << " ";
	cout << endl;

	//Queue
	queue<int> q;
	q.push(3);
	q.push(7);
	q.push(9);
	q.push(11);
	cout << "Elements in queue are: ";
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

	//Stack
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout << "Elements in stack are: ";
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

	//Map
	map<int, string> m;
	m[1] = "one";
	m[2] = "two";
	m[3] = "three";
	m[4] = "four";
	cout << "Elements in map are: ";
	for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it)
		cout << it->first << ":" << it->second << " ";
	cout << endl;

	return 0;
}
