#include "Header.h"



int main() {
	int I_E = 0;
	int S_N = 0;
	int T_F = 0;
	int J_P = 0;
	char mbti[5] = { 0, };

	printf("MBTI검사를 시작합니다.\n문항은 총 16문항이며 예상검사시간은 저도 잘 모릅니다.\n검사를 시작합니다.\n\n");


	//I_E
	printf("문항1. 나는 처음 보는 사람에게 자신을 소개하는 것이 두렵지 않다.\n");
	print_menu();
	point_up_basic(&I_E);
	
	printf("문항2. 내가 스트레스를 푸는 방법은 사람들을 만나는 것이다.\n");
	print_menu();
	point_up_basic(&I_E);

	printf("문항3. 대화를 시작하기보다 맞장구 치는걸 좋아한다.\n");
	print_menu();
	point_up_reverse(&I_E);

	printf("문항4. 술자리에서 노는 것 보다 집에서 게임하는게 좋다.\n");
	print_menu();
	point_up_reverse(&I_E);

	//S_N
	printf("문항5. 업무를 하거나 과제를 할 때 계획을 먼저 세운다.\n");
	print_menu();
	point_up_basic(&S_N);

	printf("문항6. 가끔 번뜩이는 아이디어가 생각나 메모를 하곤 한다.\n");
	print_menu();
	point_up_basic(&S_N);

	printf("문항7. 가끔 비현실적인 망상을 하는 편이다.\n");
	print_menu();
	point_up_basic(&S_N);

	printf("문항8. 나는 내성적인 성격이다.\n");
	print_menu();
	point_up_basic(&S_N);

	//T_F
	printf("문항9. 상대방의 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편이다.\n");
	print_menu();
	point_up_basic(&T_F);

	printf("문항10. 어떤 이유에서건 상대방의 기분을 먼저 생각해야 한다.\n");
	print_menu();
	point_up_basic(&T_F);

	printf("문항11. 다른 사람들이 나를 어떻게 생각하는지 지나치게 생각한다.\n");
	print_menu();
	point_up_double(&T_F);

	printf("문항12. 영화나 드라마가 뮤지컬이나 예술작품보다 더 많은 영감을 준다.\n");
	print_menu();
	point_up_reverse(&T_F);

	//J_P
	printf("문항13. 방 정리가 되어있지 않으면 일을 시작할 수 없다.\n");
	print_menu();
	point_up_positive(&J_P);

	printf("문항14. 과제나 업무는 최대한 미루었다가 한꺼번에 하는 편이다.\n");
	print_menu();
	point_up_basic(&J_P);

	printf("문항15. 호기심은 나를 움직이는 원동력이다.\n");
	print_menu();
	point_up_basic(&J_P);

	printf("문항16. 프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다.\n");
	print_menu();
	point_up_basic(&J_P);



	printf("\n\n");

	printf("검사결과: ");

	chek_mbti(I_E, 'I', 'E', 0, mbti);
	chek_mbti(S_N, 'S', 'N', 1, mbti);
	chek_mbti(T_F, 'T', 'F', 2, mbti);
	chek_mbti(J_P, 'J', 'P', 3, mbti);

	printf("%s\n", mbti);

	if (strcmp(mbti, "ISTJ") == 0) {
		printf("당신은 논리주의자 입니다. 사실에 대하여 정확하고 체계적으로 기억하며 신중하고 책임감이 있습니다.\n");
		printf("인물: 퓨디파이\n");
	}
	else if (strcmp(mbti, "ISFJ") == 0) {
		printf("당신은 조용하고 차분하며 친근합니다. 가장 믿음직스러운 사람입니다.\n");
		printf("인물 : 태연(가수)\n");
	}
	else if (strcmp(mbti, "INFJ") == 0) {
		printf("당신은 인내심이 많고 사람들을 좋아합니다. 눈치가 빠르고 영감이 있습니다.\n");
		printf("인물 : J.K. 롤링(해리포터 작가)\n");
	}
	else if (strcmp(mbti, "INTJ") == 0) {
		printf("당신은 논리적이고 효율성을 중시하는 냉철한 사람입니다.\n");
		printf("인물 : 진용진(유튜버)\n");
	}
	else if (strcmp(mbti, "ISTP") == 0) {
		printf("조용하고 과묵하고 손재주가 있는 공학자 스타일 입니다.\n");
		printf("인물 : 박명수(연예인)\n");
	}
	else if (strcmp(mbti, "ISFP") == 0) {
		printf("다정하고 착하고 상대방에 대한 배려심이 많습니다. 주위 사람들에게 많이 휩쓸리는 성격입니다\n");
		printf("인물 : 정국(가수, BTS)\n");
	}
	else if (strcmp(mbti, "INFP") == 0) {
		printf("당신은 정열적이고 완벽을 추구하며 유토피아를 추구하는 성격입니다.\n");
		printf("인물 : 셰익스피어(작가)\n");
	}
	else if (strcmp(mbti, "INTP") == 0) {
		printf("당신은 조용하고 과묵하며 상상을 즐기는 사색가 입니다. 사회성이 부족하다는 말을 많이 듣습니다.\n");
		printf("인물 : 아인슈타인(과학자)\n");
	}
	else if (strcmp(mbti, "ESTP") == 0) {
		printf("당신은 활동하는 것을 좋아하는 사업가형 입니다.\n");
		printf("인물 : 존 F 케네디(미국의 전 대통령)\n");
	}
	else if (strcmp(mbti, "ESFP") == 0) {
		printf("당신은 자유로운 영혼을 갖고있는 연예인 스타일입니다.\n");
		printf("인물 : 비(가수)\n");
	}
	else if (strcmp(mbti, "ENFP") == 0) {
		printf("당신은 넘치는 상상력을 바탕으로 항상 새로운 가능성을 찾아보는 탐험가입니다.\n");
		printf("인물 : 대도서관(유튜버, 방송인)");
	}
	else if (strcmp(mbti, "ENTP") == 0) {
		printf("당신은 논쟁을 즐기며 사람을 만나는 것을 좋아합니다.\n");
		printf("인물 : 서새봄(스트리머)\n");
	}
	else if (strcmp(mbti, "ESTJ") == 0) {
		printf("현실적 구체적이고 사실적이며 조직을 이끌어나가는 리더형 입니다.\n");
		printf("인물 : 허경영(정치인)\n");
	}
	else if (strcmp(mbti, "ESFJ") == 0) {
		printf("동정심이 많고 다른 사람에게 관심을 주는 것을 좋아하며 협력을 조항하고 동료애가 끈끈합니다.\n");
		printf("인물 : 김남주(가수)\n");
	}
	else if (strcmp(mbti, "ENFJ") == 0) {
		printf("당신은 따뜻하고 적극적이며 사교성이 풍부하고 이타적입니다.\n");
		printf("인물 : 신세경(연예인)\n");
	}
	else if (strcmp(mbti, "ENTJ") == 0) {
		printf("당신은 열정적이며 솔직하고 지도력과 통솔력이 있습니다. 활동적이고 장기적인 계획을 좋아합니다.\n");
		printf("인물 : 고든 램지(요리인, 방송인)\n");
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
			printf("올바른 번호를 다시 입력해 주십시오.\n");
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
			printf("올바른 번호를 다시 입력해 주십시오.\n");
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
			printf("올바른 번호를 다시 입력해 주십시오.\n");
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
			printf("올바른 번호를 다시 입력해 주십시오.\n");
			break;
		}
	}
}

void print_menu() {
	printf("강한 부정: 1	약한 부정: 2	약한 긍정: 3	강한 긍정: 4\n");
}