#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isprime(int x){//�ж��Ƿ�����
	if(x<=1) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	printf("%d ",x);
	return true;//������
}

int main(){
	int n,a;
	cin >>n;
	for(int i =0;i<n;i++){
		cin >> a;
		isprime(a);
	}
	return 0;
}
