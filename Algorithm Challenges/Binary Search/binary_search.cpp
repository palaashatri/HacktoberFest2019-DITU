#include <bits/stdc++.h>

using namespace std;

int binary_search(int *list, int target, int start, int end){
	if(end >= start){

		int mid = (start+end)/2;
		if(list[mid] == target)
			return mid;
		
		else if(list[mid] < target)
			return binary_search(list, target, mid+1, end);

		else 
			return binary_search(list, target, start, mid-1);
	}

	else
		return -1;
}
int main(){
	int list[100], total, target;

	cout << "Enter total elements in list: ";
	cin >> total;

	cout << "Enter the numbers: " << endl;

	for(int i = 0; i < total; i++)
		cin >> list[i];
	
	cout << "Enter the element that is to be searched: ";
	cin >> target;

	sort(list, list+target);

	int ind = binary_search(list, target, 0, total);
	
	if(ind == -1)
		cout << "Element not found" << endl;
	else
		cout << "Element is found" << endl;


	


	return 0;
}

