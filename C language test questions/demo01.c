#include "stdio.h"
#include "math.h"
#include "string.h"
// 1.	数字组合: 有 1、2、3、4，四个数字，能组成多少个互不相同且无重复数字的三位数?

// 2.	求3行 3 列矩阵 a[3][3]={1,2,3,4,5,6,7,8,9}非对角线上的元素之和。

// 3.	学生成绩分布:读入N个学生的百分制成绩，统计五分制成绩的分布。百分制成绩五分制成绩的转换规则: 大于等于 90 分为 A: 小于 0 且大于等于 80 为 B:小于 80 且大于等于 70 为 C;小于70 且大于等于 60 为D;小于 60 为 E。输入在第一行中给出一个正整数 N(=1000)，即学生的人数:第二行中给出N个学生的百分制成绩，其间以空格分隔。在一行中输出 A、B、C、D、E 对应的五分制成绩的人数分布，数字间以空格分隔，行末不得有多余空格。

// 4.	输入 10 个整数存入数组 a，再输入一个整数 x，在数组中查找，找到则输出在 10 个数中的序号，找不到则输出no found”。

// 5.	程序功能: 从键盘上输入 2 名学生 4 门课成绩，求每个学生的平均成绩，并统计不及格门数

// 6.	编写函数: int strchc(char *str,char c)，实现统计 str 字符串中指定字符串中出现的次数

// 7.	求出数组 a 中最小数，将最小数和 a[o]中的数对调后输出最后数组中的顺序。

// 8.	学校入学考试科目为数学和两门专业课，对于每个考生信息有学号，姓名: 现 10 名考生，输入各科考试成绩，并计算总分。

// 9.	输入正整数m和n,如果mtn 是素数,输出“yes”,否则,输出“no”。要求定义并调用 函数 myfun(x)来判断 x 是否为素数。

// 10.	有一对兔子，从出生后第 3 个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生对兔子，假如兔子都不死，问每个月的兔子总数为多少?(递归实现)ducatior

// 11.	将一个正整数分解质因数。例如: 输入 90,打印出 90=2*3*3*5。

// 12.	编写函数，功能是: 删除字符串 s 中的所有数字字符。

// 13.	输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

// 14.	某公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下.每位数字都加上 5，然后用和除以 10 的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。编程输入原密码，输出加密后的密码。3、有 10 个学生，每个学生的数据包括学号，姓名，三门课程的成绩及平均分;首先输入这 10 个学生的数据，然后再计算每个学生 3 门课程的平均分，并输出第 7 号学生的所有信息。

// 15.	已知a,b,c 都是 1位整数，求当三位整数 abc，cba 的和为 1333 时 a,b.c 的值

// 16.	编写程序，将从键盘输入的 10 个整数按升序排列输出。

// 17.	编写程序将用户输入的字符串中所有的字符 a 用*代替，并输出。

// 18.	要求: double f(double x)根据x 计算并返回分段函数值，min 函数输入x,输出调用 f(x)函数计算结果(保留两位小数)。double exp(double x)返回ex,  double log10(double x)用于以10位底数x的对数值。两个函数来源于 math.h。

// 19.	计算下面公式的值。T = 1/1! +1/2! +1/3! + ......1/m!,当m=5 时的结果(按四舍五入保留3 位小数)。(注: 所有变量用 float 数据类型定义!) 结果是: 1.717

// 20.	记录来描述一个学生的成绩情况，内容包括: 姓名、学号、数学成绩和 c 语言成绩要求对一个小组的 10 个学生的成绩进行统计处理:
//      (1)	计算学生的平均分，并按平均分高低排出名次，打印出信息:
//      (2)	打印出平均分 90 分以上和不及格者的信息。

// 21.	为了鼓励居民节约用水，自来水公司按用水量阶梯式计价的办法，居民应交消费 (元)与月用水量 x(吨)相关:当x不超过 15 吨时，y=4x/3;超过后，y-2.5x-17。请编写程序实现水费的计算。

// 22.	打印出 3 到 1100 之间的全部素数(判断素数由函数实现)。

// 23.	假定输入的字符串中只包括字母和#号，请编写程序，功能是: 将字符串中的前导#全部移动到字符串的尾部。例如: 输入的是”###abcd#b####”,移动后的字符串中的内容为“abcd#b#######”

// 24.	编写程序，根据以下公式求口的近似值，要求累加到某项小于 le-6 时为止。
 
// 25.	请输入整数 n，求1!+2!+3!+4!+5!+6!+7!+·.·+n!的和。 (用静态变量实现)

// 26.	编写一个函数实现n的k 次方，使用递归实现

// 27.	统计整型变量 m 中各数字出现的次数，并存放到数组 a 中，其中 a[O]存放 0 出现的次数，a[1]存放1出现的次数，.......a[9]存放 9 出现的次数。例:若m 为 14579233，则输出结果应为: 0，1，1，2，1，1，0，1，0，1。

// 28.	求数字:求所有的四位数中，原数的 9 倍与其逆序相等的数。

// 29.	根据所给出的年、月、日，计算出该日是这一年的第几天，并作为函数值返回。其中需要定义函数 isleap 用来判断某一年是否是闺年。例如: 若输入: 2008 51，则输出 2008 年 5月 1日是该年的第 122 天。
