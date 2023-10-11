# 郭静璇的学习总结

HI! 欢迎浏览**郭静璇**的学习小报😊

## 【知识学习】
> 含考核、自主学习等
>

### 1. 运算符的表示

- **用逻辑运算符代替`if`、`else if`等条件语句**  ==可使写出来的代码不那么冗长==

  "**&&**"表示同时都要满足

  "**||**"表示二者或多者只满足其中一个即可

  ```c
  [同时满足三角形两边之和大于第三边且两边之差小于第三边才输出1]
  //普通方式：
  if (a+b>c&&abs(a-b)<c){
  	printf("1");
  } else if (a+c>b&&abs(a-c)<b){
  	printf("1");
  } else if (b+c>b&&abs(b-c)<a){
  	printf("1");
  } 
  //用运算符：
  if (a+b>c&&abs(a-b)<c||a+c>b&&abs(a-c)<b||b+c>b&&abs(b-c)<a){
  		printf("1");
  	}
  ```

+ **后缀++优先于前缀++**

  eg ：x+++y 等价于 (x++)+y
  
+ **C语言中没有 ^ 符号，也没有乘方运算符**

### 2. 变量

#### 1. 变量类型

+ **局部变量** {}内定义的变量

+ **全局变量** {}外定义的变量

  **Tips:** ①当全局变量和局部变量名字冲突时，局部变量优先

#### 2. 换变量 

  eg : 让a、b的值互换

+ **法一：**引入一个==新变量== 

  ```c
  t=a; a=b; b=t;
  ```

+ **法二：**用两个变量进行==关系式的运算== (a+b、a*b…)

  ```c
  a=b+a; b=a-b; a=a-b;
  ```

  【总结】换变量时，**不引入常量**会更加通用

### 3. 常量

#### 1. 常量类型 

> [参考](https://blog.csdn.net/m0_62912975/article/details/123928629?ops_request_misc=&request_id=&biz_id=102&utm_term=%E5%AD%97%E9%9D%A2%E9%87%8F%E5%B8%B8%E6%95%B0c%E8%AF%AD%E8%A8%80&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-123928629.142^v94^insert_down28v1&spm=1018.2226.3001.4187)

+ **字面量常量**   固定的值 （eg：3.14、22L、33.3F…）
  + 当一个字面量想表达是unsigned时，在后面加**u**或**U**
  + 如果要表示一个long型，则加 **l**或**L**后缀
  + 如果要表示单精度浮点型，加**f**或**F**后缀
+ **const修饰的常变量**
+ **define 定义的标识符常量** 
+ **枚举常量** 

### 4.三大循环语句

+ **`for`循环**

  + 语句括号里的三个语句不需要的可省略，但**分号**不可省略
  + 适用于知道变量范围或者循环次数的情况
  + 语句的功能更强

+ **辨析`do-while` & `while`循环**

  + do-while循环是完成一轮循环之后在判断是否进行下一次循环

  - while循环则是每轮循环开始前先判断是否具有循环的条件

### 5. 数据类型 

> 创建变量，向内存申请空间 (可参考[链接](https://blog.csdn.net/weixin_41969690/article/details/103733864?ops_request_misc=&request_id=&biz_id=102&utm_term=%E9%80%83%E9%80%B8%E5%AD%97%E7%AC%A6%E5%92%8C%E8%BD%AC%E4%B9%89%E5%AD%97%E7%AC%A6&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-3-103733864.142^v94^insert_down28v1&spm=1018.2226.3001.4187))

+ **整数型：** **`char`** 字符数据类型   **`short`** 短整型   **`int`** 整型   **`long`** 长整型   **`longlong`** 更长的整型 

+ **浮点型：** **`float`** 单精度浮点小数   **`double`** 双精度浮点小数  **`long double`** 长双精度型

  |    类型     | 占位符 |
  | :---------: | :----: |
  |   `char`    |  `%c`  |
  |   `short`   | `%hd`  |
  |    `int`    |  `%d`  |
  |   `long`    | `%ld`  |
  | `long long` | `%lld` |

+ **类型大小**  用**`sizeof`**查看变量或者类型大小

  ![数据类型大小](C:\Users\86177\Desktop\笔记\类型大小.png)

### 6.浮点类型

+ **float** 、**double** 、**long double**

  |      类型       | scanf | prinft |    有效数字    |
  | :-------------: | :---: | :----: | :------------: |
  |    **float**    |  %f   | %f,%e  |       7        |
  |   **double**    |  %lf  | %f,%e  |       15       |
  | **long double** |  %Lf  |  %Lf   | 看平台和编译器 |

  **PS：**①**%e**为以科学计数法来表示  ②在**%**和**f**之间加上**.n**可以指定输出小数点后几位，这样的输出是4舍5入的（可参考[链接](https://blog.csdn.net/Guoqing_Lin/article/details/126604469?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169633999416800215052389%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169633999416800215052389&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-2-126604469-null-null.142^v94^insert_down28v1&utm_term=long%20double%E8%BE%93%E5%85%A5&spm=1018.2226.3001.4187)）

+ **超过范围的浮点数**

  + printf输出**inf**表示超过范围的浮点数
  + printf输出**nan**表示不存在的浮点数

### 7.字符类型（char）

> **char 称为字符类型，存储的是字符对应的 ASCII 码值**

#### 1.**字符的表示**

+ 用单引号来表示字符字面量   eg：'a'  '1'
+ printf和scanf里用**%c**来输入输出字符

#### 2.**混合输入**

+ **`scanf("%d %c",&i,&c);`**
  中间**有空格**，读完整数后，会读空格后面的字符
+ **`scanf("%d%c",&i,&c);`**
  中间**无空格**，读完整数后，若有空格会读空格（<u>空格也是字符</u>）

#### 3. **字符计算**

> [ASCII码对照表](https://ascii.911cha.com/)

+ 一个字符加一个数字得到ASCII码表中那个数后面的字符

  ```c
  char c='A';
  c++;
  printf("c=%c",c);//运行结果：c=B
  ```

+ 两个字符的减，得到它们在表中的距离

  ```c
  int i='Z'-'A';
  printf("i=%d",i);//运行结果：i=25（共有26个大写字母）
  ```

+ 大小写转换

  eg：a+'a'-'A'可以把大写字母变成小写字母

  ​         a+'A'-'a'可以把小写字母变成大写字母

### 8.逃逸字符（转义字符）

> 无法打印出来的控制字符或特殊字符，这些字符以反斜线**`\`**开头，后面接着一个字符

|   字符   |                 意义                 |   字符   |   意义   |
| :------: | :----------------------------------: | :------: | :------: |
| **`\b`** | 回退一格（\b后面的字符退到前面一格） | **`\"`** |  双引号  |
| **`\t`** |            到下一个表格位            | **`\'`** |  单引号  |
| **`\n`** |                 换行                 | **`\\`** | 反斜杠符 |
| **`\r`** |                 回车                 | **`\f`** |  翻页符  |

### 9. 数据转换

#### 1. **自动类型转换**

+ 当运算符左右两边操作数的类型不一致时，会自动转换成表达的数的范围更大的类型（整数和浮点在一块，==整数会自动换成浮点==）
  + 整型：`char`→`short`→`int`→`long`→`long long`
  + 浮点型：`int`→`float`→`double`→`long double`
+ 对于**printf**，任何小于**int**的类型会被转换为**int**，**float**会被转换为**double**；但**scanf**不行

#### 2. **强制类型转换**

> 通常是当把一个较大的类型转换成较小的类型

+ **写法：**(转换后的类型)值   eg：(int)10.2   (short)32

  **PS：**此时，要注意安全性（超过范围不能表示） 

+ 强制类型转换的优先级**高于**四则运算

  ```c
  double a=2.0;double b=1.0
  int i=(int)a/b;//先转换a的类型再做除法，此时i=2.0
  int i=(int)(a/b);//先做除法再转换类型，此时i=2
  ```

### 10. 布尔类型(bool)

+ 使用前需要加上头文件`#include <stdbool.h>`
+ 只有两种值(`true`和`false`)

### 11. 逻辑运算

> 逻辑运算是对逻辑量（关系运算或逻辑运算的结果）进行运算，结果只有0或1

#### 1. **运算符** 

​          **`！`**（逻辑非） **`&&`**（逻辑与） **`||`**（逻辑或）

#### 2. 运算符**优先级：**[参考](https://blog.csdn.net/qq_23417755/article/details/120942259?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169634333316800180658473%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169634333316800180658473&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_click~default-4-120942259-null-null.142^v94^insert_down28v1&utm_term=%E8%BF%90%E7%AE%97%E7%AC%A6%E4%BC%98%E5%85%88%E7%BA%A7&spm=1018.2226.3001.4187)

+ ！>&&>||

+ 单目运算符优先级高于双目运算符

  | 优先级 |                运算符                 |         结合性         |
  | :----: | :-----------------------------------: | :--------------------: |
  |   1    |                  ()                   |        从左到右        |
  |   2    |            !  +  -  ++  --            | 从右到左（单目的+和-） |
  |   3    |                *  /  %                |        从左到右        |
  |   4    |                  + -                  |        从左到右        |
  |   5    |     <  <=  >  >=**（关系运算）**      |        从左到右        |
  |   6    |                ==  !=                 |        从左到右        |
  |   7    |                  &&                   |        从左到右        |
  |   8    |                 \|\|                  |        从左到右        |
  |   9    | =  +=  -=  *=  /=  %=**（赋值运算）** |        从右到左        |

#### 3. **短路**

> 逻辑运算为==自左向右==进行,如果左边的结果已经能够决定结果,就不会做右边的结果

+ 对于&&,左边是false,就不做右边

+ 对于||,左边是true时,就不做右边

  **所以，不把赋值、复合赋值写进表达式**

### 12. 条件运算

+ **写法：** **`x = (x> 20) ? x -10 : x+ 10;`** ↔ **`if (x>20){x-10;}else{x+10;} `**

  **`？`** 前表示条件  **`？`** 后表示条件满足时的值  **`:`** 后表示条件啊满足时的值

+ **优先级：**高于赋值运算符,低于其他运算符

+ 条件运算符是==自右向左==结合的

### 13. 逗号运算

+ 主要在 **`for`循环**中使用   eg：**`for (i=0,j=10;i<j;i++,j--)`**

+ **优先级**是所有的运算符中==最低==

### 14. 函数

> 函数式一块代码，接受

#### 1. 写法： `返回类型 函数名(参数表){}`

#### 2. **调用函数**

+ 依照正确的**数量和顺序**传递若干参数

+ 没有参数需要传入时圆括号依旧不能省略

+ 永远只能传值给函数

+ 如果调用时给的值和定义的参数类型不匹配，C语言编译器会把类型直接转换好

  ```c
  #include <stdio.h>
  void cheer(int i)
  {
  	printf("%d",i);
  }
  int main()
  {
  	cheer(2.4);
  	return 0;
  }//运行结果：i=2
  ```

#### 3. **函数类型**

+ **标准函数** 标准函数都是C语言所自带的，可直接使用

  + **main函数**
  + **printf函数（库函数）**

  + **sqrt函数**(浮点型)

    > 是用来求一个数的开根的，等同于开根号。

    头文件：`include <math.h>`

+ **自定义函数** 更加简洁明了

  + **求和函数**

    eg：从1加到10、从20加到35

    ```c
    //代码复制：是程序质量不良的表现
    #include <stdio.h>
    int main()
    {
    	int i=0,sum=0;
    	for (i=0,sum=0;i<=10;i++){
    		sum+=i;
    	}
    	printf("%d\n",sum);
    	for (i=20,sum=0;i<=35;i++){
    		sum+=i;
    	}
    	printf("%d",sum);
    	return 0;
    }
    //定义求和函数：去除重复部分去定义函数
    #include <stdio.h>
    void sum(int begin,int end)//定义函数
    {
    	int i=0,sum=0;
    	for (i=begin;i<=end;i++){
    		sum+=i;
    	}
    	printf("%d\n",sum);//执行后不返回任何值
    }
    int main()
    {
    	sum(1,10);//引用自定义函数
    	sum(20,35);//引用自定义函数
    	return 0;
    }
    ```

#### 4. 从函数中返回

+ **有返回值函数int：**函数执行完毕后，会向调用者返回一个执行结果（返回值）

+ **无返回值函数void：**不向调用者返回返回值，不能使用带值的return

  **PS：**一个函数中可以有多个return语句；返回值可赋给变量，可再传递给函数，可丢弃

#### 5. 函数原型

> 为了告诉编译器这个函数长什么样

+ **函数的声明：**想要将函数写在后面，可以在**`int main`**之前写上**函数头**，以分号结尾，声明和函数定义的函数头必须==完全一致==

#### 6. 本地变量

> 函数每次运行，都会产生一个独立的变量空间，在这个空间中的变量，是函数此次运行独有的

+ **规则：**
  + 本地变量定义再**块（大括号）**内：函数、语句……
  + 在块内定义的变量出块就不存在了
  + 在块外定义的变量在块内仍存在
  + 块内部定义的变量和外部变量重名的话，外面的变量会被覆盖（同名变量内部优先级高）
  + 不能在同一个块里头定义同名变量
  + 本地变量不会被初始化，单参数会
+ **生存期：**变量的开始出现的时间和消失的时间
+ **作用域：**在代码的某一范围内可以访问这个变量 

### 15. 数组&一维数组

> 一组固定大小且相同类型元素的集合，下标从0开始，赋值号左（右）边为左（右）值  [相关资料](https://blog.csdn.net/weixin_64916311/article/details/127702181?ops_request_misc=&request_id=&biz_id=102&utm_term=%E5%88%9D%E8%AF%86%E6%95%B0%E7%BB%84c%E8%AF%AD%E8%A8%80&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-1-127702181.142^v94^insert_down28v1&spm=1018.2226.3001.4187)

#### 1.**创建格式：**`类型 数组名称[元素数量]`

+ 定义一个数组并给定数组大小    int number[10];

+ 定义一个常量并给定数组大小为这个常量    const int a=5; int number[a]

+ 数组大小为常量表达式   int number[5+6];

+ 空数组（数组大小未知） int number[];

  **PS：**在C99标准支持了==变长数组==的概念，数组的大小可以使用变量指定，但是数组不能初始化。

#### 2.**类型：**一维数组、二维数组

#### 3. 一维数组初始化

+ **完全初始化**

  ```c
  1、int a[10]={0};
  2、int a[5]={1,2,3,4,5};
  3、char a[] = { 'a','b','c' };
  4、char a4[] = { 'a','b',66,'c' };
  5、char a5[] = "abcdef";
  ```

+ **不完全初始化**

  ```c
  1、int arry1[6] = { 1,2,3 };
  2、char arry6[10] = "abc";
  ```

+ 初始化的**定位**（在C99中可用）

#### 4. 数组的大小（sizeof）

```c
int a[]={1,2,3,4,5,6,7,8};
sizeof(a)→32 sizeof(a[0])→4
//所以计算数组大小：
    sizeof(a)/sizeof(a[0])
```

**好处：**①可将变量定义在这个范围内，确保程序的安全性      ②当我们修改数组中初始数据时，不需要改动遍历代码

#### 5. 数组的赋值

+ 数组变量本身不能被赋值
+ 要想将一个数组的元素赋值给另一个数组，==必须==采用**遍历**（通常用for循环）

#### 6. 一维数组内存

+ 一维数组在内存中是连续着存放的
+ 随着下标的增长下标所在的地址是由低往高增长的

### 16. 二维数组

> [资料参考](https://blog.csdn.net/weixin_64916311/article/details/127702181?ops_request_misc=&request_id=&biz_id=102&utm_term=%E5%88%9D%E8%AF%86%E6%95%B0%E7%BB%84c%E8%AF%AD%E8%A8%80&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-1-127702181.142^v94^insert_down28v1&spm=1018.2226.3001.4187)

#### 1. 写法（是一个int型变量）

+ `int a[i][j]` a是一个**i**行**j**列的矩阵，从零开始编号

  区分`a[i,j]`：逗号运算符右边的作为结果，因此相当于a[j]

#### 2. 遍历 

> [拓展资料](https://blog.csdn.net/lvcheng0309/article/details/118672629?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169650995016800184193243%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169650995016800184193243&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_click~default-1-118672629-null-null.142^v94^insert_down28v1&utm_term=%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E9%81%8D%E5%8E%86&spm=1018.2226.3001.4187)

```c
for (i=0;i<max;i++){
	for (j=0;j<max;j++){
		printf("%d ",a[i][j]); 
	}
}
```

#### 3. 初始化

+ **完全初始化**

  ```c
  1、int a[2][3] = {1,2,3,4,5,6};
  2、int arry3[3][2] = { {1,2},{3,4},{5,6} };//{}里面的第一个{}代表第一行，第二个{}代表第二行，第三个{}代表第三行
  ```

+ **不完全初始化**

  ```c
  1、int arry2[3][4] = {1,2,3,4,5,6};
  ```

+ 二维数组中的行可以省略，==列不能省略==

  ```c
  int a[][4]={{0,1,2,3},{1,2,3,4}};
  //等价于 int a[][4]{0,1,2,3,1,2,3,4};
  ```

### 17. sizeof 

> 给出某个类型或变量在内存中占据的字节数

+ **`sizeof(数据类型)`**  数据类型的大小(占多少字节)

  eg: sizeof(char) →char占 1个字节

+ **`sizeof(变量)`** 或 **`sizeof 变量`**

  eg: sizeof(type_name)

### 18.指针运算符& 与* 

+ 取地址运算符&
  + 取得变量的地址，它的操作数必须是变量
  + 不能对没有地址的东西取地址
+ 取得对应地址的变量*

### 19. 指针

> **指针**就是地址，口语中说的指针通常指的是**指针变量**，指针类型的变量就是保存地址的变量

#### 1. **指针变量：**指针变量的值是内存的地址

```c
//取地址：
int i;
int* p=&i;int *p=&i;
//* p或者*p都是指针变量，将i的地址放在*p中
```

+ **`*`：**是一个单目运算符，用来访问指针的值所表示的地址上的变量

+ ***p是访问对应地址上的变量**（可以做左值也可以做右值）

#### 2. **数组&指针：**

+ 数组变量是特殊的指针

+ 数组变量本身表达地址，无需用&取地址

  eg：`int a[10]; int *p=a;` <!--此时a[10]表示一个大小为10的数组-->

+ 但数组的单元表达的是变量，需要用&取地址

  eg：`int a[1]; int *p=&a;` <!--此时a[1]表示数组a中位置为1的一个单元-->

+ 数组a的地址等于a[0]的地址    a==&a[0]

+ *p等价于a[0]

+ []运算符可以对数组做，也可以对指针做

  ```c
  int min=1;
  int *p=&min;
  printf("*p=%d",*p);//结果*p=1 p[0]=1
  printf("p[0]=%d",p[0]);//p[0]的p为指针p而不是数组p；若是数组，则p[0]无意义，因为数组最大位置！=0-1=-1
  ```

+ \* 运算符可以对指针做，也可以对数组做

+ 数组变量其实是常量指针，所以不能被赋值，所以a[]=b[]是错的

#### 3. **应用：**

+ 交换两个变量的值（传入指针可以改变原始值）

  ```c
  void swap(int *pa,int *pb)
  {
  	int t=*pa;
  	*pa=*pb;
  	*pb=t;
  }
  ```

+ 一个函数只能返回一个值，但指针能带回多个值

  ```c
  #include <stdio.h>
  void mimax(int a[],int len,int *max,int *min); 
  int main()
  {
  	int a[10]={1,2,3,4,5,6,7,8,9,10};
  	int max,min,len;
  	mimax(a,sizeof(a)/sizeof(a[0]),&max,&min);
  	printf("min=%d max=%d",min,max);
  	return 0;
  }
  void mimax(int a[],int len,int *max,int *min)
  {//传入函数中的数组变成了：指针a[]等价于*a
  	int i=0;
  	*max=*min=a[0];
  	for (i=0;i<len;i++){
  		if (a[i]<*min){
  			*min=a[i];
  		}
  		if (a[i]>*max){
  			*max=a[i];
  		}
  	}
  }
  ```

  + 在函数参数表中的数组实际上是指针，但是可以用数组的运算符[]进行运算    sizeof(a)==sizeof(int*)

+ 函数通过return返回运算状态，指针返回结果

  ```c
  #include <stdio.h>
  int divine(int a,int b,int *result);
  int main(void)
  {
  	int a=5;
  	int b=2;
  	int c;
  	if(divine(a,b,&c))
  	{
  		printf("%d/%d=%d\n",a,b,c);
  	}
  return 0;
  }
  int divine(int a,int b,int *result)
  {
  	int ret=1;
  	if(b==0) ret=0;
  	else 
  	{
  		*result=a/b;
  	}//通过*result返回了结果
  	return ret;//这个函数返回结果是ret的值，在整个程序中，ret的值是用来判断运算状态的
  }
  ```
  
+ 需要传入较大的数据时用作参数

+ 需要用函数来修改不止一个变量

+ 动态申请的内存

#### 4. 指针与const  [详情参考](https://blog.csdn.net/m0_56661338/article/details/124536938)

```c
1、const在*前：指针指向的变量是const
    const int *p1=&i; 或者 int const *p2=&i;
//指针所指向的数据是只读的，p1、p2本身的值可以修改（指向不同的数据），但它们指向的i数据不能被修改
2、const在*后：指针是const
    int * const p3=&i;//指针是只读的，p3本身的值不能被修改,i可以修改
```

+ **const数组**

  eg：const int a[]={1,2,3,4,5,6};

  + 这里的const表明数组的每个单元都是const int
  + 作用：保护数组值（如在函数中无法修改数组的值）

#### 5. 指针运算

+ **加减法：**

  + 指针加n，加的是n个sizeof（char/int/double...类型），表示的是向下移动n位

  + *p等价于a[0]，那么 *(p+n)等价于a[n]

    ps：如果指针不是指向一片连续分配的空间，那么这种运算就没有意义了

+ **指针间的算术运算：**

  + 指针可递增或递减：++、--

  + 两个指针相减：此时得到的结果是（**地址差/sizeof（）**）,注意要以%d输出结果

+ **`*p++` ：**先执行p++然后取地址，但是由于++在调用后才执行，所以其作用是，取出p的地址，再将p移动到下一位（可用来做==遍历==）

  ```c
  //常规遍历：
  #include <stdio.h>
  int main()
  {
  	int a[]={1,2,3,4,5,6};
  	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
  		printf("%d ",a[i]);
  	}
  }
  //用*p++遍历：
  int main()
  {
  	int a[]={1,2,3,4,5,6，-1};
      int *p=&a[0];
  //写法一：
  	for (p=a;*p!=-1;p++){
  		printf("%d ",*p);
  	}
  //写法二：
      for (p=a;*p!=-1;){
  		printf("%d ",*p++);
  	}
  //写法三：
      while (*p!=-1){
  		printf("%d ",*p++);
  	}
  ```

#### 6. 指针比较

+ **<、<= 、==、 >、 >=、 !=** 都可以对指针做
+ 实际上是比较它们在内存中的地址
+ 数组中单元地址是线性递增的

#### 7. 0地址

> 在计算机运行时会给所有进程分配一块**虚拟内存**，其特征是地址从0开始，但是0地址是不能随便碰的！0地址不能被写入，有些甚至不能读取。

+ 返回0值代表返回的指针是无效的
+ 定义指针变量时先让指针指向0，这意味着指针没有被真正初始化
+ C语言定义了一个符号NULL来表示0地址（一些编译器不想让你用0来表示0地址）

#### 8. 指针类型转换（void*)

> - void* 表示指针不确定指向什么东西，但是指向一块内存空间

```c
	int *p=&i; void *q=(void*)p;
//将p强制转换为void型指针：并没有改变i的类型，而是通过q去看i时，不再将i看作int类型而是void类型。
```

### 20. 动态内存分配

#### 1. malloc函数(C99之前需要)

> **malloc(size_t size) ; 返回的类型是void\* （因为类型是无法传递的），需要额外类型转换**

```c
#include <stdlib.h> 
int main()
{
    int number,i;
    scanf("%d",&number);
    int *a; 
	a=(int*)malloc(number*sizeof(int));//等价于：int a[number];
    for (i=0;i<number;i++){
        scanf("%d",&a[i]);//遍历数组
    }
    free(a);//还内存空间
    return 0;
}
```

+ 使用前，要包含头文件 **`#include <stdlib.h>`**
+ 申请的空间大小是以字节为单位    **`数量*sizeof（类型）`**
+ 返回的结果是void*，需要转换为自己需要的类型(人为将数值定义的种类)
  - eg：要申请数量为n，int类型的，返回类型为int*的空间给一个指针变量a

#### 2. free函数

> 申请空间并使用结束后要释放申请的空间将借来的内存空间还给系统，只需要将空间首地址传入free即可

+ **free(NULL)：** 相当于什么都没做。定义指针时，先给指针赋0值，如果没有申请空间或者申请失败，此时就free(NULL)或free(0)

### 21.字符串



### 22. 算法

#### 1. 基姆拉尔森日期公式

```c
w=(d+n+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7
//y、m、d分别代表年月日；n取任意值，当n=0时，w=（0-6）代表从星期日到星期六
```

[参考资料](https://blog.csdn.net/c___c18/article/details/87297691)

### 23. 笔记Markdown（typora）&Github

+ [Markdown 教程](https://www.runoob.com/markdown/md-tutorial.html)

- [Typora使用教程](https://blog.csdn.net/qq_41261251/article/details/102817673?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621437916800188527307%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169621437916800188527307&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-2-102817673-null-null.142^v94^insert_down28v1&utm_term=typora&spm=1018.2226.3001.4187)

- [Git教程](https://www.runoob.com/git/git-tutorial.html)

  + 往仓库中添加文件后需要在git bash上输入

    git add .
    git commit -m "commit note"
    git push origin

### 24. 零碎知识

+ 尽量不在**%d后面**追加空白字符，容易产生bug（吃空白）

+ **布尔变量：**如果满足if里面的条件，则不执行循环语句里的剩余内容，跳出循环，执行下一次循环，反之亦然

  ```c
  //示例
  if(a[x]) 
      continue;
  	a[x]++;
  	cnt++;
  ```

+ 计算机中**单位**：1Byte（字节）=8bit（比特位）、1KB=1024Byte、1MB=0124KB、1GB=1024MB、1TB=1024GB、1PB=1024TB

+ **unsigned：**为了做纯二进制运算，主要为了移位

  ```c
  char c=255；printf("c=%d",c);
  //运行结果：c=-1
  unsigned char c=255; printf("c=%d",c);
  //运行结果：c=255
  ```

+ 一个以0开始的数字字面量是8进制，一个以0x开始的数字字面量是16进制

  ```c
  char c=012; char a=0x12;
  printf("c=%d a=%d",c,a);//运行结果：c=10 a=18
  printf("c=%o a=%x",c,a);//运行结果：c=12 a=12
  //%d表示输入输出十进制、%o表示输入输出八进制、%x表示输入输出16进制
  ```

+ **科学计数法：**

  <img src="C:\Users\86177\Desktop\笔记\科学计数法.png" alt="科学计数法" style="zoom: 50%;" />

+ **%字母**

  + %s是接受**字符串**，%c是接受所有类型的**单个字符**
  + %p可以输出**十六进制格式**的地址；%lu可以输出**无符号十进制整数**地址

+ **const的用法** [参考](http://c.biancheng.net/view/2041.html)

+ **`while (a){循环体}`** 若a的值不为0，则运行while循环里的代码；若a的值为0，则不运行循环里的内容

## 【解题思路】

### 1. 思考要全面

<!--例如，这道题不能只考虑普通闰年、还应当考虑特殊情况--世纪闰年-->

![考核 闰年](C:\Users\86177\Desktop\笔记\考核 闰年.png)

### 2.优化编译时间

+ 进阶考核题目 **【查找】**

![进阶考核 查找](C:\Users\86177\Desktop\笔记\360截图20231002093840090.jpg)   

 ```c
 //方案一：二分法（减少编译时间）
  #include <stdio.h>
  int n,m,i,cnt,a,num[1000000]={0};
  int find()//定义一个函数
  {
  	int right=n,left=1,mid=(right+left)/2;
  	while (left<=right){
  		int mid=(right+left)/2;
  		if (num[mid]>=a){
  			right=mid-1;
  		} else {
  			left=mid+1;
  		}
      }
  	if (num[left]==a){
  	    return left;
  	} 
  	return -1;
  }
  int main()
  {
  	scanf("%d %d",&n,&m);
  	for (i=1;i<=n;i++){
  		scanf("%d",&num[i]);
      }
      for (cnt=0;cnt<m;cnt++){
  		scanf("%d",&a);
  		printf("%d ",find());
  	}
  	return 0;
  }
 ```

  ```c
  //方案二： for循环（编译时间更长） 
  #include <stdio.h>
  int main()
  {
  	int n,m,i,cnt;
  	int number[1000000]={0},a[100000]={0};
  	scanf("%d %d",&n,&m);
  	for (i=0;i<n;i++){
  		scanf("%d",&number[i]);
  	}	
  	for (cnt=0;cnt<m;cnt++){
  		scanf("%d",&a[cnt]);
  	}
  	for (cnt=0;cnt<m;cnt++){
  	    for (i=0;i<n;i++){
  	    	if (a[cnt]==number[i]){
  			printf("%d ",i+1);//编号应该是数组位置加一
  			break;
  		    } else if(a[cnt]!=number[i] && i==n-1){
  			    printf("-1 ");
  		    }
  	    }
  	}
  	return 0;
  }
  ```

+ 查找**素数**

  ```c
  //常规做法：
  int isPrime(int x)
  {
  	int i=0,j=0,z=0;
  	for (j=x+1;;j++){
  		z=0;
  	    for (i=2;i<j;i++){
  		    if (j%i==0){
  			    z++;
  		    }
  		    if (z==0) break;
  	    }
  	}
  	return j;
  }
  //优化1：
  int isPrime(int x)
  {
  	int i=0,j=1;
  	if (x<=1||x%2==0&&x!=2){
  		j=0;
  	}//可以先将偶数筛掉，减少后续做循环的次数
  	for (i=3;i<x;i+=2){
  		if (x%i==0){
  			j=0;
  			break;//跳出循环 
  		}	
  	}
  	return j;
  }
  //优化2：只要循环sqrt(x)轮
  int isPrime(int x)
  {
  	int i=0,j=1;
  	if (x<=1||x%2==0&&x!=2){
  		j=0;
  	}//可以先将偶数筛掉，减少后续做循环的次数
  	for (i=3;i<sqrt(x);i+=2){
  		if (x%i==0){
  			j=0;
  			break;//跳出循环 
  		}	
  	}
  	return j;
  }
  //优化3：用比x小的素数来测试x是否为素数
  #include<stdio.h>
  int isPrime(int x, int knownPrimes[], int numberofKnownPrimes);
  int main()
  {
  	const int NUMBER = 10;//定义数组大小10
  	int prime[NUMBER] = { 2 };//初始化为2，为第一个素数
  	int count = 1;//计数变量为1，已经有一个素数2了
  	int i = 3;//从3开始测试
   
  	while (count<NUMBER)
  	{
  		if (isPrime(i,prime,count))//如果用函数判定i是素数
  		{
  			prime[count++] = i;//将i添加到素数数组中，并且计数变量增1，作为prime的下标
  		}
  	//调试代码 
  		{
  			printf("i=%d \tcnt=%d\t",i,count);
  			int i;//局部变量，仅在这个大括号内生效
  			for(i=0;i<NUMBER;i++)
  			{
  				printf("%d\t",prime[i]);
  			}
  			printf("\n");
  		}
  	//tiaoshi		
  		i++;//数字步进1
  	}
  	
  	for ( i	= 0; i < NUMBER; i++)
  	{
  		printf("%d", prime[i]);
  		if ((i+1)%5)
  		{
  			printf("\t");
  		}
  		else
  		{
  			printf("\n");
  		}
  		return 0;
  	}
  }
  int isPrime(int x, int knownPrimes[], int numberofKnownPrimes)
  {
  	int ret = 1;
  	int i;
  	for ( i = 0; i < numberofKnownPrimes; i++)
  	{
  		if (x%knownPrimes[i]==0)
  		{
  			ret = 0;
  			break;
  		}
  	}
  	return ret;
  }
  //优化4：构造素数表（遍历倍数）
  #include <stdio.h>
  int main()
  {
  	const int maxnumber=25;
  	int isprime[maxnumber] ;
  	int i,x;
  	for (i=0;i<maxnumber;i++){
  		isprime[i]=1;
  	}//让数组全部等于1
  	for (x=2;x<maxnumber;x++){
  		if (isprime[x]){//等价于：如果isprime[x]!=0，则运行下面的代码 
  			for (i=2;i*x<maxnumber;x++){
  				isprime[i*x]=0;
  			}
  		}
  	} 
  	for (i=2;i<maxnumber;i++){
  		if (isprime[i]){
  			printf("%d\t",i);
  		}
  	}//遍历数组
  	printf("\n");
  	return 0;
  }
  ```
  
  （优化2思路[参考](https://blog.csdn.net/icantleaveu/article/details/97536424?ops_request_misc=&request_id=&biz_id=102&utm_term=%E6%89%BE%E7%B4%A0%E6%95%B0%E4%B8%BA%E4%BB%80%E4%B9%88%E5%8F%AA%E8%A6%81%E6%89%BE%E5%88%B0%E4%BB%96%E7%9A%84%E5%B9%B3%E6%96%B9%E6%A0%B9%E5%B0%B1%E5%A5%BD&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-2-97536424.142^v94^insert_down28v1&spm=1018.2226.3001.4187)、优化思路4[参考](https://blog.csdn.net/m0_56661338/article/details/124519287)）
  
+ **用`*p++`代替数组遍历**

  ```c
  //常规遍历：
  #include <stdio.h>
  int main()
  {
  	int a[]={1,2,3,4,5,6};
  	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
  		printf("%d ",a[i]);
  	}
  }
  //用*p++遍历：
  int main()
  {
  	int a[]={1,2,3,4,5,6，-1};
      int *p=&a[0];
  //写法一：
  	for (p=a;*p!=-1;p++){
  		printf("%d ",*p);
  	}
  //写法二：
      for (p=a;*p!=-1;){
  		printf("%d ",*p++);
  	}
  //写法三：
      while (*p!=-1){
  		printf("%d ",*p++);
  	}
  ```

### 3.简化代码

+ **井字棋**

  ```c
  #include <stdio.h>
  int main()
  {
  	const int max=3;
  	int board[max][max];
  	int i,j;
  	int num0fX,num0f0,result=-1; 
  	//读入矩阵 
  	for (i=0;i<max;i++){
  		for (j=0;j<max;j++){
  			scanf("%d",&board[i][j]);
  		}
  	}
  	//检查行
  	for (i=0;i<max&&result==-1;i++){
  		num0f0=num0fX=0;
  		for (j=0;j<max;j++){
  			if (board[i][j]==1){
  				num0fX++;
  			} else{
  				num0f0++;
  			}
  		}
  		if (num0f0==max){
  			result=0;
  		} else if (num0fX==max){
  			result=1;
  		}
  	}
  	//检查列
  	for (j=0;j<max;j++){
  		num0f0=num0fX=0;
  		for (i=0;i<max;i++){
  			if (board[i][j]==1){
  				num0fX++;
  			} else {
  				num0f0++;
  			}
  		}
  		if (num0f0==max){
  			result=0;
  		} else if (num0fX==max){
  			result=1;
  		}
  	} 
  	//检查主对角线
  	num0f0=num0fX=0;
  	for (i=0;i<max;i++) {
  		if (board[i][i]==1){
  			num0f0++;
  		} else {
  			num0fX++;
  		}
  	}
  	if (num0f0==max){
  		result=0;
  	} else if (num0fX==max){
  		result=1;
  	}
  	//检查副对角线 
  	num0f0=num0fX=0;
  	for (i=0;i<max;i++) {
  		if (board[i][max-1-i]==1){
  			num0f0++;
  		} else {
  			num0fX++;
  		}
  	}
  	if (num0f0==max){
  		result=0;
  	} else if (num0fX==max){
  		result=1;
  	}
  	return 0;
  }
  //优化:二重循环 
  #include <stdio.h>
  int main()
  {
  	const int max=3;
  	int board[max][max];
  	int i,j;
  	int num0fX1,num0f01,result,num0fX2,num0f02=-1; //再定义两个变量
  	//读入矩阵 
  	for (i=0;i<max;i++){
  		for (j=0;j<max;j++){
  			scanf("%d",&board[i][j]);
  		}
  	}
  	//检查行列 
  	for (i=0;i<max&&result==-1;i++){
  		num0f01=num0fX1=num0f02=num0fX2=0;
  		for (j=0;j<max;j++){
  			if (board[i][j]==1){
  				num0fX1++;
  			} else{
  				num0f01++;
  			}
  			if (board[j][i]==1){//i、j行列互换使得内外层循环交替
  				num0fX2++;
  			} else{
  				num0f02++;
  			}
  		}
  		if (num0f01==max||num0f02==max){
  			result=0;
  		} else if (num0fX1==max||num0fX2==max){
  			result=1;
  		}
  	}
  	//检查对角线
  	num0f01=num0fX1=0;
  	for (i=0;i<max;i++) {
  		if (board[i][i]==1){
  			num0f01++;
  		} else {
  			num0fX1++;
  		}
  		if (board[i][max-1-i]==1){
  			num0f02++;
  		} else {
  			num0fX2++;
  		}
  	}
  	if (num0f01==max||num0f02==max){
  		result=0;
  	} else if (num0fX1==max||num0fX2==max){
  		result=1;
  	}
  	return 0;
  }
  ```

  

## 【了解比赛】

> 推文介绍、上网搜索、咨询学长学姐
>

### 1. 电子设计大赛（TI杯）

> [经验总结+资料参考](https://blog.csdn.net/zhaohaobingniu/article/details/124086257?utm_source=miniapp_weixin) [备赛资料](https://blog.csdn.net/weixin_41445387/article/details/113774142?utm_source=miniapp_weixin)

- **参赛概况：**7每年月-8月份，三人组队形式，比赛采用两套题目，只可以选择一道题，竞赛所需设备、元器件等均由各参赛学校负责提供，时间为四天三夜
- **题型：**电源类、电控类、模拟信号类、仪器仪表类、综合类
- **基础知识：**完美的焊接工艺、各种仪器的熟练使用、各种常用元器件的识别、产用芯片的使用方法和引脚定义、单片机的使用
- **赛前准备：**赛题相关资料准备、硬件电子材料准备、软件材料准备、论文前期准备
- **收获：**提升自己工程技术能力、团队的配合能力

### 2. 智能车大赛（“恩智浦”杯）

> 是在规定的模型汽车平台上，使用飞思卡尔半导体公司的8位、16位微控制器作为核心控制模块，通过增加道路传感器、电机驱动电路以及编写相应软件，制作一个能够自主识别道路的模型汽车，按照规定路线行进，以完成时间最短者为优胜 [参考](https://zhuanlan.zhihu.com/p/465709296)

+ **参赛概况：**由3名学生（双车组别5名学生）组成

- **环节：**包括理论设计、实际制作、整车调试、现场比赛等环节
- **基础知识：**数电、模电、c语言、单片机
- **收获：**提高自己工程能力、结合实践进行理论学习

### 3. 数学建模大赛

> 数学建模的应用 [介绍&比赛相关资讯](https://blog.csdn.net/Hou_____/article/details/125700245?ops_request_misc=&request_id=&biz_id=102&utm_term=%E4%B8%AD%E5%9B%BD%E5%A4%A7%E5%AD%A6%E7%94%9F%E6%95%B0%E5%AD%A6%E5%BB%BA%E6%A8%A1%E7%AB%9E%E8%B5%9B&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-125700245.142^v94^insert_down28v1&spm=1018.2226.3001.4187)  [介绍](https://zhuanlan.zhihu.com/p/462587098)  [历年真题](https://blog.csdn.net/weixin_44949135/article/details/119779298?ops_request_misc=&request_id=&biz_id=102&utm_term=%E4%B8%AD%E5%9B%BD%E5%A4%A7%E5%AD%A6%E7%94%9F%E6%95%B0%E5%AD%A6%E5%BB%BA%E6%A8%A1%E7%AB%9E%E8%B5%9B&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-2-119779298.142^v94^insert_down28v1&spm=1018.2226.3001.4187)

- **概况：**每年一届，本科组参赛队从A、B题中任选一题
- **环节：**优化计算、数据处理、统计分析、参看文献、论文排版
- **收获：**锻炼逻辑思维能力、对学术研究有较大帮助、训练快速获取信息和资料的能力

### 4. 蓝桥杯

- 

### 5. Robocup

- 

### 6. ACM竞赛

- 



## 【技术方向】

> 上网搜索、咨询
>

### 1. 前端

- **工作范围：**浏览器、APP、应用程序的界面展现和用户交互就是前端（用户看到的页面）
- **工作内容：**界面设计,界面制作，用户交互，网站维护、网站优化等等
- **[学习路线](https://blog.csdn.net/weixin_41701290/article/details/117659355?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621354616800215074308%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169621354616800215074308&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-2-117659355-null-null.142^v94^insert_down28v1&utm_term=%E5%89%8D%E7%AB%AF%E5%AD%A6%E4%B9%A0%E8%B7%AF%E7%BA%BF&spm=1018.2226.3001.4187)：**参考CSDN

### 2. 后端

- **工作内容：**系统的后端逻辑部分，主要负责平台设计、接口设计和功能实现（处理来自客户端的请求，并将处理结果返回给客户端）
- **需掌握技能（参考CSDN）：**![需掌握技能](C:\Users\86177\Desktop\笔记\后端学习技能.jpg)
- **[学习路线](https://blog.csdn.net/qq_27290011/article/details/120924880?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621491016800182113199%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169621491016800182113199&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_click~default-4-120924880-null-null.142^v94^insert_down28v1&utm_term=%E5%90%8E%E7%AB%AF&spm=1018.2226.3001.4187)**

### 3. 嵌入式开发

> 指在嵌入式操作系统下进行开发，包括在系统化设计指导下的硬件、软件以及综合研发

- **工作内容：**应用程序开发、操作系统移植、底层驱动开发
- **基础技能：**C语言、电路基础、单片机、ARM+Linux开发 [参考](https://blog.csdn.net/freestep96/article/details/126556160?ops_request_misc=&request_id=&biz_id=102&utm_term=%E5%B5%8C%E5%85%A5%E5%BC%8F%E7%A1%AC%E4%BB%B6%20%E5%AD%A6%E4%B9%A0%E8%B7%AF%E7%BA%BF&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-126556160.142^v94^insert_down28v1&spm=1018.2226.3001.4449)
- **[学习路线①](https://blog.csdn.net/dong__ge/article/details/125365471?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621602316800184142940%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169621602316800184142940&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-125365471-null-null.142^v94^insert_down28v1&utm_term=%E5%B5%8C%E5%85%A5%E5%BC%8F%E5%BC%80%E5%8F%91%E5%AD%A6%E4%B9%A0&spm=1018.2226.3001.4187)**  **[学习路线②](https://blog.csdn.net/Chuangke_Andy/article/details/127504115?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621580716800227481268%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169621580716800227481268&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_click~default-2-127504115-null-null.142^v94^insert_down28v1&utm_term=%E5%B5%8C%E5%85%A5%E5%BC%8F%E5%BC%80%E5%8F%91%E5%AD%A6%E4%B9%A0%E8%B7%AF%E5%BE%84&spm=1018.2226.3001.4187)**

### 4. 机器学习

> 机器学习是一种通过利用数据，训练出模型，然后使用模型预测的一种方法；
>
> 把人类思考归纳经验的过程转化为计算机通过对数据的处理计算得出模型的过程   **[参考资料](https://www.cnblogs.com/subconscious/p/4107357.html)**

- **涵盖领域：**模式识别、统计学习、数据挖掘、计算机视觉、语音识别、自然语言处理等
- **[相关知识点](https://blog.csdn.net/qq_36816848/article/details/115601672?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621377716800192293877%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=169621377716800192293877&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-115601672-null-null.142^v94^insert_down28v1&utm_term=%E6%9C%BA%E5%99%A8%E5%AD%A6%E4%B9%A0&spm=1018.2226.3001.4187)**

### 5. 机器视觉

> 用机器代替人眼来做测量和判断，更关注图像处理的结果，目的是控制接下来的行为

- **基础技能：**图像处理、软件编程功底、光学知识
- **[学习路线](https://blog.csdn.net/perfectguyipeng/article/details/89349048?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621787616800180641375%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=169621787616800180641375&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-21-89349048-null-null.142^v94^insert_down28v1&utm_term=%E6%9C%BA%E5%99%A8%E8%A7%86%E8%A7%89%E5%AD%A6%E4%B9%A0%E8%B7%AF%E7%BA%BF&spm=1018.2226.3001.4449)**

### 6. 硬件

- **[嵌入式硬件](https://blog.csdn.net/qq_40017226/article/details/129221372?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522169621844416800222822679%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fall.%2522%257D&request_id=169621844416800222822679&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~first_rank_ecpm_v1~rank_v31_ecpm-1-129221372-null-null.142^v94^insert_down28v1&utm_term=%E5%B5%8C%E5%85%A5%E5%BC%8F%E7%A1%AC%E4%BB%B6%20%E5%AD%A6%E4%B9%A0%E8%B7%AF%E7%BA%BF&spm=1018.2226.3001.4449)**
- **硬件设计：** [理论篇](https://blog.csdn.net/k331922164/article/details/45102489?ops_request_misc=&request_id=&biz_id=102&utm_term=%E7%A1%AC%E4%BB%B6%E5%B7%A5%E7%A8%8B%E5%B8%88%20%E5%AD%A6%E4%B9%A0%E8%B7%AF%E7%BA%BF&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-45102489.142^v94^insert_down28v1)  [实践篇](https://blog.csdn.net/k331922164/article/details/46844339)



## 【学习体悟】

### 1. 检索、筛选和收集信息

+ 原先这方面的技能是我掌握的不够的，之前一收到很多信息就会觉得乱，一直不去处理，总是堆到最后再说，但通过开学以来这段时间的考核、自学后，我发现这对掌握一项新技能非常重要，而通过这段时间的整理和一些笔记软件的运用后，感觉自己检索、收集信息的能力提高了不少，能使自己更加迅速地开始学习新事物。

### 2. 理论+实际操作

+ 在这段时间的考核和学习中，我发现如果只是听课不去跟着敲一敲代码的话很容易忘记所学的内容，并且只有自己独立写完一段代码才会发现一些之前忽略的细节，而这些细节会使代码无法运行或者运行却无法完成设想的情况，而且跟着一起敲代码会让自己更加了解每一行代码的含义。

### 3. 讨论&询问

+ 考核期间，我会碰到许多的问题无法自己解决，所以会在CSDN上查找或者询问学长学姐，在提出问题时我对题目的理解会更加深入，得到提示后再去思考会发现自己思维上的漏洞，然后优化程序。
+ 在看懂题目后一起同舍友、同学讨论和分享思路是一种有效的学习方式，从中可以获知解题的不同思路，拓宽自己的思维广度。