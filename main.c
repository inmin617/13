#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student{
	int id; // 학번
	char name[100]; // 이름
	float score; // 학점 
};

int main(int argc, char *argv[]) {
	
	//instance 선 언, 초기화
	struct student s1={2313440, "minji", 4.3}; 
	
	s1.id=2313440;
	s1.name[0]='j';
	s1.score=4.3;
	
	//출력
	printf("ID: %i\n", s1.id);
	printf("name: %s\n", s1.name);
	printf("grade: %f\n", s1.score);
	
	strcpy(s1.name, "inmin");
	printf("name2: %s\n");
		
	return 0;
}
