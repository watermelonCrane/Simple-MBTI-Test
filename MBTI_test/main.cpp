#include "Header.h"



int main() {
	int I_E = 0;
	int S_N = 0;
	int T_F = 0;
	int J_P = 0;
	char mbti[5] = { 0, };

	printf("MBTI�˻縦 �����մϴ�.\n������ �� 16�����̸� ����˻�ð��� ���� �� �𸨴ϴ�.\n�˻縦 �����մϴ�.\n\n");


	//I_E
	printf("����1. ���� ó�� ���� ������� �ڽ��� �Ұ��ϴ� ���� �η��� �ʴ�.\n");
	print_menu();
	point_up_basic(&I_E);
	
	printf("����2. ���� ��Ʈ������ Ǫ�� ����� ������� ������ ���̴�.\n");
	print_menu();
	point_up_basic(&I_E);

	printf("����3. ��ȭ�� �����ϱ⺸�� ���屸 ġ�°� �����Ѵ�.\n");
	print_menu();
	point_up_reverse(&I_E);

	printf("����4. ���ڸ����� ��� �� ���� ������ �����ϴ°� ����.\n");
	print_menu();
	point_up_reverse(&I_E);

	//S_N
	printf("����5. ������ �ϰų� ������ �� �� ��ȹ�� ���� �����.\n");
	print_menu();
	point_up_basic(&S_N);

	printf("����6. ���� �����̴� ���̵� ������ �޸� �ϰ� �Ѵ�.\n");
	print_menu();
	point_up_basic(&S_N);

	printf("����7. ���� ���������� ������ �ϴ� ���̴�.\n");
	print_menu();
	point_up_basic(&S_N);

	printf("����8. ���� �������� �����̴�.\n");
	print_menu();
	point_up_basic(&S_N);

	//T_F
	printf("����9. ������ ����� ����� �� ������ ã�⺸�� ������ ���ִ� ���̴�.\n");
	print_menu();
	point_up_basic(&T_F);

	printf("����10. � ���������� ������ ����� ���� �����ؾ� �Ѵ�.\n");
	print_menu();
	point_up_basic(&T_F);

	printf("����11. �ٸ� ������� ���� ��� �����ϴ��� ����ġ�� �����Ѵ�.\n");
	print_menu();
	point_up_double(&T_F);

	printf("����12. ��ȭ�� ��󸶰� �������̳� ������ǰ���� �� ���� ������ �ش�.\n");
	print_menu();
	point_up_reverse(&T_F);

	//J_P
	printf("����13. �� ������ �Ǿ����� ������ ���� ������ �� ����.\n");
	print_menu();
	point_up_positive(&J_P);

	printf("����14. ������ ������ �ִ��� �̷���ٰ� �Ѳ����� �ϴ� ���̴�.\n");
	print_menu();
	point_up_basic(&J_P);

	printf("����15. ȣ����� ���� �����̴� �������̴�.\n");
	print_menu();
	point_up_basic(&J_P);

	printf("����16. ���������� ȸ������� �� ���� ���� ��� �ִٰ� �����Ѵ�.\n");
	print_menu();
	point_up_basic(&J_P);



	printf("\n\n");

	printf("�˻���: ");

	chek_mbti(I_E, 'I', 'E', 0, mbti);
	chek_mbti(S_N, 'S', 'N', 1, mbti);
	chek_mbti(T_F, 'T', 'F', 2, mbti);
	chek_mbti(J_P, 'J', 'P', 3, mbti);

	printf("%s\n", mbti);

	if (strcmp(mbti, "ISTJ") == 0) {
		printf("����� �������� �Դϴ�. ��ǿ� ���Ͽ� ��Ȯ�ϰ� ü�������� ����ϸ� �����ϰ� å�Ӱ��� �ֽ��ϴ�.\n");
		printf("�ι�: ǻ������\n");
	}
	else if (strcmp(mbti, "ISFJ") == 0) {
		printf("����� �����ϰ� �����ϸ� ģ���մϴ�. ���� ������������ ����Դϴ�.\n");
		printf("�ι� : �¿�(����)\n");
	}
	else if (strcmp(mbti, "INFJ") == 0) {
		printf("����� �γ����� ���� ������� �����մϴ�. ��ġ�� ������ ������ �ֽ��ϴ�.\n");
		printf("�ι� : J.K. �Ѹ�(�ظ����� �۰�)\n");
	}
	else if (strcmp(mbti, "INTJ") == 0) {
		printf("����� �����̰� ȿ������ �߽��ϴ� ��ö�� ����Դϴ�.\n");
		printf("�ι� : ������(��Ʃ��)\n");
	}
	else if (strcmp(mbti, "ISTP") == 0) {
		printf("�����ϰ� �����ϰ� �����ְ� �ִ� ������ ��Ÿ�� �Դϴ�.\n");
		printf("�ι� : �ڸ��(������)\n");
	}
	else if (strcmp(mbti, "ISFP") == 0) {
		printf("�����ϰ� ���ϰ� ���濡 ���� ������� �����ϴ�. ���� ����鿡�� ���� �۾����� �����Դϴ�\n");
		printf("�ι� : ����(����, BTS)\n");
	}
	else if (strcmp(mbti, "INFP") == 0) {
		printf("����� �������̰� �Ϻ��� �߱��ϸ� �����ǾƸ� �߱��ϴ� �����Դϴ�.\n");
		printf("�ι� : ���ͽ��Ǿ�(�۰�)\n");
	}
	else if (strcmp(mbti, "INTP") == 0) {
		printf("����� �����ϰ� �����ϸ� ����� ���� ����� �Դϴ�. ��ȸ���� �����ϴٴ� ���� ���� ����ϴ�.\n");
		printf("�ι� : ���ν�Ÿ��(������)\n");
	}
	else if (strcmp(mbti, "ESTP") == 0) {
		printf("����� Ȱ���ϴ� ���� �����ϴ� ������� �Դϴ�.\n");
		printf("�ι� : �� F �ɳ׵�(�̱��� �� �����)\n");
	}
	else if (strcmp(mbti, "ESFP") == 0) {
		printf("����� �����ο� ��ȥ�� �����ִ� ������ ��Ÿ���Դϴ�.\n");
		printf("�ι� : ��(����)\n");
	}
	else if (strcmp(mbti, "ENFP") == 0) {
		printf("����� ��ġ�� ������ �������� �׻� ���ο� ���ɼ��� ã�ƺ��� Ž�谡�Դϴ�.\n");
		printf("�ι� : �뵵����(��Ʃ��, �����)");
	}
	else if (strcmp(mbti, "ENTP") == 0) {
		printf("����� ������ ���� ����� ������ ���� �����մϴ�.\n");
		printf("�ι� : ������(��Ʈ����)\n");
	}
	else if (strcmp(mbti, "ESTJ") == 0) {
		printf("������ ��ü���̰� ������̸� ������ �̲������ ������ �Դϴ�.\n");
		printf("�ι� : ��濵(��ġ��)\n");
	}
	else if (strcmp(mbti, "ESFJ") == 0) {
		printf("�������� ���� �ٸ� ������� ������ �ִ� ���� �����ϸ� ������ �����ϰ� ����ְ� �����մϴ�.\n");
		printf("�ι� : �賲��(����)\n");
	}
	else if (strcmp(mbti, "ENFJ") == 0) {
		printf("����� �����ϰ� �������̸� �米���� ǳ���ϰ� ��Ÿ���Դϴ�.\n");
		printf("�ι� : �ż���(������)\n");
	}
	else if (strcmp(mbti, "ENTJ") == 0) {
		printf("����� �������̸� �����ϰ� �����°� ��ַ��� �ֽ��ϴ�. Ȱ�����̰� ������� ��ȹ�� �����մϴ�.\n");
		printf("�ι� : ��� ����(�丮��, �����)\n");
	}


	return 0;
}

void chek_mbti(int test, char a, char b, int index, char* mbti) {
	if (test < 0) {
		mbti[index] = a;
	}
	else {
		mbti[index] = b;
	}
}

//-3 -1 1 3
void point_up_basic(int* point) {
	int tmp;
	bool valid = true;
	fseek(stdin, 0, SEEK_END);
	
	for (;valid;) {
		scanf("%d", &tmp);
		switch (tmp) {
		case 1:
			*point -= 3;
			valid = false;
			break;
		case 2:
			*point -= 1;
			valid = false;
			break;
		case 3:
			*point += 1;
			valid = false;
			break;
		case 4:
			*point += 3;
			valid = false;
			break;
		default:
			printf("�ùٸ� ��ȣ�� �ٽ� �Է��� �ֽʽÿ�.\n");
			break;
		}
	}
}

//3 1 -1 -3
void point_up_reverse(int* point) {
	int tmp;
	bool valid = true;
	fseek(stdin, 0, SEEK_END);

	for (; valid;) {
		scanf("%d", &tmp);
		switch (tmp) {
		case 1:
			*point += 3;
			valid = false;
			break;
		case 2:
			*point += 1;
			valid = false;
			break;
		case 3:
			*point -= 1;
			valid = false;
			break;
		case 4:
			*point -= 3;
			valid = false;
			break;
		default:
			printf("�ùٸ� ��ȣ�� �ٽ� �Է��� �ֽʽÿ�.\n");
			break;
		}
	}
}

//-3 -3 1 3
void point_up_double(int* point) {
	int tmp;
	bool valid = true;
	fseek(stdin, 0, SEEK_END);

	for (; valid;) {
		scanf("%d", &tmp);
		switch (tmp) {
		case 1:
			*point -= 3;
			valid = false;
			break;
		case 2:
			*point -= 3;
			valid = false;
			break;
		case 3:
			*point += 1;
			valid = false;
			break;
		case 4:
			*point += 3;
			valid = false;
			break;
		default:
			printf("�ùٸ� ��ȣ�� �ٽ� �Է��� �ֽʽÿ�.\n");
			break;
		}
	}
}

//3 1 1 3
void point_up_positive(int* point) {
	int tmp;
	bool valid = true;
	fseek(stdin, 0, SEEK_END);

	for (; valid;) {
		scanf("%d", &tmp);
		switch (tmp) {
		case 1:
			*point += 3;
			valid = false;
			break;
		case 2:
			*point += 1;
			valid = false;
			break;
		case 3:
			*point += 1;
			valid = false;
			break;
		case 4:
			*point += 3;
			valid = false;
			break;
		default:
			printf("�ùٸ� ��ȣ�� �ٽ� �Է��� �ֽʽÿ�.\n");
			break;
		}
	}
}

void print_menu() {
	printf("���� ����: 1	���� ����: 2	���� ����: 3	���� ����: 4\n");
}