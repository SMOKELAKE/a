#include<stdio.h>

int main() {
	
//	float price , pay = 0.0;
//
//	printf("�����INFJ��ͷ�ļ۸񵵴��ǣ�" );
//	scanf("%f", &price);
//
//	printf("��Ϊ���INFJ��ͷ���˶��٣�");
//	scanf("%f", &pay);
//
//	float E = pay - price;
//	printf("Ӧ���㣺%f",E);


	int STart = 0;
	int FLowtime=0;
	printf("Write Your time:\n");
	scanf("%d %d", &STart, &FLowtime);

	int All = STart / 100 * 60 + STart % 100+ FLowtime;
	int Hour = All / 60;
	int Time = All % 60;
	printf("Input ENDing Time:");
	printf("%d", Hour*100+Time);

	return 0;
}
