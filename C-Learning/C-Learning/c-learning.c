//C���Թ㷺Ӧ���ڵײ㿪��
//C / C++�Ǳ���������
//�༭����ֻ�б༭����
//��.c��Ϊ��׺���ļ��С�Դ�ļ���
//��.h��Ϊ��׺���ļ��С�ͷ�ļ���
//��������Ŀ��ʱ���׺Ӧ��Ϊ��.c��, �����׺�ǡ�.cpp���������ᰴ��C++���﷨���������

# include<stdio.h>	/*�������ͷ�ļ�*/
//stdio.h ��ͷ�ļ���std���� standard ��׼��i���� input ���룬o���� output ���

#define _CRT_SECURE_NO_WARNINGS   //���scanf����ֵ���Ե�����,ֻ��VS���������������

int main()
//int ��������������
//C���Դ�����һ��Ҫ��main������������
//C���Թ涨��main�����Ǻ�������ڣ�����ֻ��һ��
{
	printf("Hello World!");	//ÿ���������Ҫ�� ;
	// printf ��һ���⺯����ר��������ӡ����
	return 0;
}

//Ctrl + F5 �������д���

// ����ע�ͷ���ֻ��ע��һ��

/*

	����ע�ͷ�������ע�Ͷ���

*/

//������еĵ�λ;
//8 Bit = 1 Byte
//1024 Byte = 1 Kb
//1024 Kb = 1 Mb
//1024 Mb = 1 Gb
//1024 Gb = 1 Tb
//1024 Tb = 1 Pb

//������ϵĴ洢�豸�����ٶ��ɸߵ��ͣ��ռ���С�������У���
//�Ĵ���(���ɵ�CPU��)
//���ٻ���(cache)
//�ڴ�
//Ӳ��


//��������
//char���ַ���,ռ1���ֽ�,����char ch1 = '1 '
//short��������,ռ2���ֽ�,����short int a = 2
//int������,����int c = 55
	// int ��32λϵͳ��ռ 4 ���ֽڣ���16λϵͳ��ռ 2 ���ֽ�
//float�������ȸ�����,ռ4���ֽ�,����float a = 3.8f
	// ��3.8f���������f ������ float ���͡�������ӣ�������Ĭ���� double ���͵�
//double��˫���ȸ�����,ռ8���ֽ�,���ȸ���,����double a = 1.22
//long��������
//long long������������

//����
// ������Ϊ��
//�ֲ����� - ��{ }�ڲ�����ı���
	// �ֲ��������������Ǿֲ��������ڵľֲ���Χ
	// �ֲ����������������ǽ����������������ڿ�ʼ�����������������ڽ���
//ȫ�ֱ��� - ��{ }�ⲿ����ı���
	// ȫ�ֱ���������������������
	// ȫ�ֱ��������������������������������

	//��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ�����
	//����ȫ�ֱ����;ֲ����������ֲ�Ҫ��ͬ

//�����ؼ��֣�
//define ���ǹؼ��֣���һ��Ԥ����ָ��
//auto
//break
//case
//char
//const �����ԣ������εı����ǿɶ��ģ������޸�ֵ��Ҳ��������ָ��
//continue
//default
//do
//double
//else
//enum ö��
//extern �����ⲿ����
//float
//for
//goto
//if
//int
//long
//sizeof ���������ֽڣ�Byte
	//printf("%d\n", sizeof(int));       ��� 4
	//C���Թ涨��ֻҪsizeof(long) >= sizeof(int)�Ϳ���
//typedef ��һ�����е�����������
	//���磺 typedef int size; ������һ��int��ͬ����size,��������κ���Ҫint����������ʹ��size	


// C�����е��������������֣��з����������޷���������
	// �з����������Ա�ʾ�������������㡣�����ùؼ��� signed ����(һ�㲻д��Ĭ�Ͼ��� �з���)
	// ���޷�������ֻ�ܱ�ʾ�������㡣�����ùؼ��� unsigned ����

// �ؼ��� void ���������κ����Ĳ����򷵻�ֵ,��������û�в����򷵻�ֵ�������ܶ��������

// �ؼ��� register �ǼĴ�������˼���������εı����ǼĴ�������������(��һ����Ļ�)�������� ���� ����ڼĴ�����
	// һ����˵�����������ڴ���Ĵ���ȡ���ݱ��ڴ�죬ֻ���������κ��ַ��ͣ��Ҳ��ܶ���ȡ��ַ


//return ��������ֵ
//short
//signed �з��ŵ�
//sizeof �����С

//static ��̬�ģ����ھ�̬����
//1.���ξֲ���������
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);������� 10 �� 2
//		//�� static ���� a ����� 2 3 4 5 6 7 8 9 10 11��
//		//��Ϊ static �������ξֲ�����ʱ���ֲ�������������Ҳ�����١�
//		//Ӱ���˱������������ڣ�ʹ�������������ںͳ���һ�����������Ǹı��˱����Ĵ洢λ�á�
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 2.����ȫ�ֱ���ʱ��ȫ�ֱ������ⲿ�������Ի����ڲ��������ԡ�����Դ�ļ�(.c)�Ͳ�����ʹ�����ȫ�ֱ�����
//3.���κ���ʱ���������ⲿ�������Ի����ڲ��������ԡ�����Դ�ļ�(.c)�Ͳ�����ʹ�����ȫ�ֱ�����

//switch
//struct �ṹ��


//union ������(������)
//unsigned �޷��ŵ�
//void ��(һ������ں����ķ������ͣ���������) ����Ҫ����
//volatile
//while

//#define �����ʶ������
//����#define NUM 100
//#define �����(���в���)


//��������������
//1.�����壬�淶
//2.���ֱ�������ĸ�����֡��»�����ɣ������������ַ��Ҳ��������ֿ�ͷ
//3.�����ǹؼ���

//����:

//ת���ַ�:
//		\? ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��(�����Ѿ���ʧ)
//		\' ���ڱ�ʾ�ַ�����`
//		\" ���ڱ�ʾһ���ַ����ڲ���˫����
//		\\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
//		\a �����ַ�������
//		\b �˸��
//		\f ��ֽ��
//		\n ����
//		\r �س�
//		\t ˮƽ�Ʊ���
//		\v ��ֱ�Ʊ���
//		\ddd ddd��ʾ1~3���˽��Ƶ����֡��磺\130 ��ʾ X
//		\xdd dd��ʾ2��ʮ���������֡���: \x30 ��ʾ 0

//		%d - ��ӡ����
//		%c - ��ӡ�ַ�
//		%s - ��ӡ�ַ���
//		%f - ��ӡfloat����
//		%lf - ��ӡdouble����
//		%zu - ��ӡsizeof�ķ���ֵ


//�ַ���
	// C������û���ַ������ͣ����� "sdfadgada" ��˫������������һ���ַ���Ϊ�ַ�������ֵ
	//�ַ����Ľ�����־��һ�� \0 ��ת���ַ����ڼ����ַ����ȵ�ʱ�� \0 �ǽ�����־�������ַ�����