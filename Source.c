#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define randomize() srand((unsigned)time(NULL))

#define SIZE 10

void print_array(const int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}

void set_array_random(int* p)
{
	for (int i = 0; i < SIZE; ++i)
	{
		p[i] = rand() % 10;
	}
}

void array_member_swap(int* p, int idx1, int idx2)
{
	int temp = p[idx1];
	p[idx1] = p[idx2];
	p[idx2] = temp;
}

void matrix_print( int(*p)[2], int n1,int n2)
{
	for (int i = 0; i < n1; ++i)
	{
		for (int j = 0; j < n2; ++j)
		{
			printf("%d ", p[i][j]);
		}
		putchar('\n');
	}
}

void set_matrix(int(*p)[2], int n1)
{
	for (int i = 0; i < n1; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			p[i][j] = (i + j) * 2;
		}
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int* f2(int* ptr)
{
	*ptr = (*ptr) * (*ptr);
	return ptr;
}


#define asize(a)    (sizeof(a) / sizeof(*a))

void max_min_array(int* p, int lengh,int* max,int* min)
{
	*max = *min = *p;

	for (int i = 0; i < lengh; ++i)
	{
		if (*(p + i) > *max)
			*max = *(p + i);
		else if (*(p + i) < *min)
			*min = *(p + i);
	}
}


void my_puts(const char*p)
{
	while (*p != '\0')
		putchar(*p++);
	putchar('\n');
}

void my_puts2(const char* p)  // maç i yi ilerletip *(i+p) yi ilerletebilmekk p çünkü sabit ilk elemanýn adresi
{
	for (int i = 0; *(p + i) != '\0'; ++i)
		putchar(*(p+i));
	putchar('\n');
}

void my_gets(char* p)
{
	int ch;

	while ((ch = getchar()) != '\n')
		*p++ = (char)ch;
	*p = '\0';  // ************ en son NULL karakteri de bizim koymamýz gerekiyor
}

char* my_strcpy(char* dest, const char* source)
{
	for (size_t i = 0; source[i] != '\0'; i++)
	{
		dest[i] = source[i];
	}

	dest[strlen(source)] = '\0';

	return dest;
}

void f5()
{
	printf("f5 cag\n");
	//exit(EXIT_FAILURE);
	
}

void f6()
{
	printf("f6 cag\n");	
typedef int word;
}

#include<stdint.h>



typedef struct Student {

	char m_name[20];
	char m_sname[20];
	int m_math_exam[3];
	int m_stdudent;

}Student;

void foo(const Student *s)
{
	//printf("%s %s %d %d\n", s->m_name, s->m_sname, s->m_math_exam[0], s->m_stdudent);
	//strcpy(s->m_name, "ozzy");
}

typedef struct Data {
	int x;
	int y;
}Data;

Data* data_func(Data* s)
{
	s->x = 15;
	s->y = 20;
	return s;
}

typedef struct person {
	char m_person_name[20];
	char m_person_last_name[20];
	int sibling_number;
	
	struct manager {
	int m_car;
	int is_mission_completed;
	};

}person;

#pragma pack(1)
typedef struct try_struct {
	//char c1:5; 
	int i1:3;
	int i2;
	int i3;
	int i4;
}try_struct;


size_t strlen1(const char* p)
{
	size_t cnt = 0;
	for (int i = 0; p[i] != '\0'; ++i)
		++cnt;
	return cnt;
}

size_t strlen2(const char* p)
{
	size_t cnt = 0;
	while (*p++)
		++cnt;
	return cnt;
}

size_t strlen3(const char* p)
{
	char* ptr=p;
	while (*p++)
		;
	return p - ptr-1;
}

char* strcat1(char* dest, char* source)
{
	size_t i,j;

	for (j = 0; dest[j] != '\0'; ++j)    // diðer yöntem while li olan dest i ilerletiyor
		;

	for (i = 0; source[i] != '\0'; ++i)
		dest[j+i] = source[i];
	dest[j + i] = '\0';
	return dest;
}

char* strcat2(char* dest, char* source)
{
	strcat(dest + strlen(dest), source);
	return dest;
}

char* strcat3(char* dest, char* source)
{
	char* p = dest;  // call by referance mantýðýndan düþünüldüðünden p ile dest ayný oluyor eleman bazlý while girince p en son dest in null pointerinin adresini tutmuþ olacak
	while (*++p)
		;
	while (*p++ = *source++)
		;
	return p;
}

char* strcpy1(char* dest, const char* source)
{
	char* p = dest;
	int i = 0;
	while ((dest[i] = source[i]) != '\0')
		++i;
	return dest;
}

char* strchr1(const char* s, int c)
{
	for (int i = 0; s[i] != '\0'; ++i)
		if (s[i] == (char)c)
			return &s[i];
	return NULL;
}

char* strchr2( char* s, int c)
{
	while (*s != '\0' && *s != (char)c)
		++s;
	if (*s == c)
		return s;
		return NULL;
}

char* strchr3(char* s, int c)
{
	for (; *s != '\0'; ++s)
	{
		if (*s == c)
			return s;
	}
	return NULL;
}

int strcmp1(const char* p1, const char* p2)
{
	for (int i = 0; p1[i] != '\0'; ++i)
	{
		if (p1[i] != p2[i])
			return p1[i] > p2[i] ? 1 : -1;
	}
	return 0;
}

char* strpbrk1(const char* p1, const char* p2)
{
	while (*p1 != '\0')
	{
		if (strchr(p2,*p1))
			return (char*)p1;
		++p1;
	}
	return NULL;
}



void* memset1(void* vp, int c, size_t n)
{
	unsigned char* ps = vp; // iþlem yaparken void* türk konusunda sýkýntý çýkartýrdý bize 

	while (n--)
		*ps++ = (unsigned char)c;
	return vp;
}

void *memcpy1(void *dest,const void*src,size_t n)
{
	char* ps = dest;
	const char* sp = src;
	while (n--)
		*ps++ = *sp++;
	return dest;
}


void* memchr1(const void* p, int c, size_t n)
{
	char* ps = p;
	while (n--)
	{
		if (*ps == (char)c)
			return ps;
		++ps;
	}
	return NULL;
}

int memcmp1(const void* p1, const void* p2, size_t n)
{
	const char* vp1 = p1;
	const char* vp2 = p2;
	while (n--)
	{
		if (*vp1 != *vp2)
			return *vp1 > *vp2 ? 1 : -1;
		++vp1, ++vp2;
	}
	return 0;
}
#define get_format(x) #x
char* for_type[] = { [1] = "%c","%hi",[4] = "%d",[8] = "%ll" };
void generic_print_array(const void* vp, size_t size, size_t nbyte)
{
	char* p = (char*)vp;

	for (size_t i = 0; i < size; i++)
	{
		printf("%.2f ", *p);
		p += nbyte;
	}
}

void kay(char *str, int idx)
{
	for (int j = 0; strlen(str) - idx + 1; ++j)
		str[j + idx] = str[j + idx + 1];
}

int is_at_end(const char* p1, const char* p2)
{
	int len = strlen(p1);
	int len2 = strlen(p2);

	for (int i = 0; p2[i] != '\0'; ++i)
	{
		if (p1[len - len2 + i] != p2[i])
			return 0;
	}
	return 5;
}

int main() 
{
	printf("%d", !!is_at_end("necati ergin", "ergin"));
	printf("%d", !!is_at_end("kahramanmaras", "maras"));
	printf("%d", !!is_at_end("kaanaslan", "uslan"));
	printf("%d", !!is_at_end("baskent Ankara", "kara"));
	printf("%d", !!is_at_end("ergin", "necati ergin"));
	
	
	
}