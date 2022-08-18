/* 
 * another example to cause a segment fault 
 */

int main(void)
{
  char *s = "hello world";
  *s = 'H'; // try to access a read-only code

  return 0;
}
