#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C�����еĳ�����Ϊ���¼��֣�
//1.���泣��
//2.const���εĳ�����
//3.#define����ı�ʶ������
//4.ö�ٳ���

//1.���泣��
//int main()
//{
//	10;
//	3.14;
//	'w'; //�ַ��������ţ�
//	"abcd"; //�ַ�����˫���ţ�
//	return 0;
//}



//2.const���εĳ�����
//int main()
//{
//	const int a = 10; //��C�����У���const���ε�a�����Ǳ�����������ֱ���޸ģ����г��������ԡ�
//	printf("a=%d\n", a);
//	return 0;
//}


//3.#define����ı�ʶ������

//#define MAX 100
//
//int main()
//{
//	printf("MAX=%d\n", MAX);
//	return 0;
//}


//4.ö�ٳ���

// ����һ��ö������
//enum Weekday {
//    SUNDAY,    // Ĭ��ֵΪ 0
//    MONDAY,    // Ĭ��ֵΪ 1
//    TUESDAY,   // Ĭ��ֵΪ 2
//    WEDNESDAY, // Ĭ��ֵΪ 3
//    THURSDAY,  // Ĭ��ֵΪ 4
//    FRIDAY,    // Ĭ��ֵΪ 5
//    SATURDAY   // Ĭ��ֵΪ 6
//};
//
//int main() {
//    // ����ö�ٱ���
//    enum Weekday today;
//
//    // ��ö�ٱ�����ֵ
//    today = WEDNESDAY;
//
//    // ʹ��ö�ٱ���
//    if (today == WEDNESDAY) {
//        printf("������������\n");
//    }
//
//    return 0; 
//    
//        ����������У����Ƕ�����һ��ö������ Weekday�����а�����һ�����ڵ�ö�ٳ�����
//        ö�ٳ���Ĭ�ϴ�0��ʼ����������Ҳ�����ֶ�ָ�����ǵ�ֵ��
//        �� main �����У�����������һ�� Weekday ���͵�ö�ٱ��� today�������丳ֵΪ WEDNESDAY��
//        Ȼ������ʹ�� if ����� today �Ƿ���� WEDNESDAY������ǣ��������Ӧ����Ϣ��
