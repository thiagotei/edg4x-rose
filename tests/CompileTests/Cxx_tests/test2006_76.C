#if 0
// Bug from Andy Stone
struct A;

typedef struct A
{
  int field;
} B;

void foo(A *ptr)
{
  ptr->field;
}
#endif


struct A;

struct A {  int field; } B;

#if __cplusplus
void foo(A *ptr) {  ptr->field; }
#else
void foo(struct A *ptr) {  ptr->field; }
#endif

