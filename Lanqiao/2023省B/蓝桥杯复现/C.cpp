#include <bits/stdc++.h>

using namespace std;
//����ȡ�� 
const int MAX_N=1e4+1;
int N,A[MAX_N],B[MAX_N];
bool check_min(int V){
	for(int i=1;i<=N;i++){
		if(A[i]/V>B[i])return false;
	}
	return true;
}
bool check_max(int V){
	for(int i=1;i<=N;i++){
		if(A[i]/V<B[i])return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0); 
	cin >>N;
	for(int i=1;i<=N;++i) cin>>A[i]>>B[i];
	int L =1,R=1000000000,V_min;
	while(L<=R){
		int mid=L+R>>1;
		
		if(check_min(mid)){
			V_min=mid;
			R=mid-1;
		}else L=mid+1;
	} 
	L =1,R=1000000000;int V_max;
	while(L<=R){
		int mid=L+R>>1;
		
		if(check_max(mid)){
			V_max = mid;
			L=mid+1;
		}else R = mid-1;
	}
	cout << V_min << ' ' << V_max;
	return 0;
}

/*С����һ�������¯�����ڽ���ͨ���� O ұ����Ϊһ��������� X�����¯����һ������ת���ʵ�����V
,V��һ��������������ζ������ V����ͨ���� O ǡ�ÿ���ұ����һ��������� X������ͨ���� O ����Ŀ���� 
V ʱ���޷�����ұ����
���ڸ����� N ��ұ����¼��ÿ����¼�а����������� A �� B�����ʾ����Ͷ���� A ����ͨ���� O������ұ������ 
B ��������� X��ÿ����¼���Ƕ����ģ�����ζ����һ��û���������ͨ���� O �����ۼӵ���һ�ε�ұ�����С�
������ N ��ұ����¼�������Ʋ��ת���� V ����Сֵ�����ֵ�ֱ�����Ƕ��٣���Ŀ��֤�������ݲ������޽�������

�����ʽ
��һ��һ������N����ʾұ����¼����Ŀ��
���������� N �У�ÿ���������� 
A,B����������Ŀ������

�����ʽ
��������������ֱ��ʾ 
V ���ܵ���Сֵ�����ֵ���м��ÿո�ֿ���

�����������
���� #1����
3
75 3
53 2
59 2
��� #1����
20 25
˵��/��ʾ

���ű� 2023 ʡ�� B �� C �⡣*/
