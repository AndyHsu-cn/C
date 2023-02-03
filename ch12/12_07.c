// 与12_08.c一同编译
static unsigned long int next = 1;

unsigned int rand0(void)
{
    // 生成伪随机数的新的种子
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}