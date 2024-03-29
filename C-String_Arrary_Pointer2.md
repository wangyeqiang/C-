## 字符数组和字符指针
1. 数组和指针的的本质
  - 数组的本质
    - 数组是多个同类元素的集合，在内存中分布在地址相连的单元中，所以可以通过其下标访问不同单元的元素。
  - 指针的本质
    - 指针也是一种变量，不过它的内存单元中保存的是一个标识其他位置的地址，由于地址默认是整数，那么在32为平台下，指针默认为32位；在64位平台下，指针默认位64位，输出sizeof(pointer)=8
  
2. 指针的指向
  - 指向的直接意思就是指针变量所保存的其他地址单元中所存放的数据类型；
  - int *p // p变量内存中锁保存的地址存放的变量类型为整型；
  - float *p // p变量内存中锁保存的地址存放的变量类型为浮点型；
  **不论那种类型指针变量本身就是整型，因为它保存的是地址**
 
3. 字符数组
  - 从字面意思可以看到就是数组，数组中的元素就是字符，
  - char str[10];  // 定义了一个10个元素的数组，元素类型为字符；
  - 在C语言中定义一个变量可以初始化 char str[12] = {"hello world"};
    编译器遇到这句话时会从第一个字符把 hello world\0 逐个填入到数组中。
  - 由于C语言没有真正的字符串，可以通过字符数组来表示字符串，因为他的元素地址是连续的，这就足够了。
  - C语言中规定数组代表数组所在内存位置的首地址，也是str[0]的地址，即str=&str[0]
  
4. printf("%s",str);用首地址就可以输出字符串
  - char * s; s="China";<br>
    s = "China"真整的意思就是地址，s="China"=0x3000;<br>
    从人的角度看把"China"看成字符串，但是编译器把它看成地址；即字符串的本质表现是代表它的第一个字符的地址<br>
    那么%s，它的原理也是通过字符串首地址输出字符串，printf("%s",s),传给它的其实是s所保存的字符串的地址；
  - 下面为代码
  
  
    #include <stdio.h>
      {
         char *s;
         s = "hello";
         printf("%p\n",s);
         return 0;
      }

  - 同样字符数组也是 printf("%s",&arrary);
  - 所以C语言操作字符串是通过它在内存中存储单元的首地址进行的，这是字符串的终极本质；
  
  
  续：
6. 二级指针
char **s
char **为二级指针，s保存一级指针char *的地址<br>
    `
    char *a[] = {"China","English","America","German"};
    char **s = a;
    `
  - 为什么能把a赋给s，因为数组名代表数组元素内存单元的首地址，即a=&a[0]=0012FF38<br>
    而0X12FF38即a[0]中保存的又是00422FB8这个地址，00422FB8为'China'字符串串的首地址，即*s=00422FB8='China'<br>
    这样我们就可以通过s操作a的数据<br>
    以下输出都是一样<br>
    `
    printf("%s",*s);
    printf("%s",a[0]);
    printf("%s",*a);
    `
  - 在使用二级指针的时候还有个地方爱出错
  `
  int main(){
       har **s;
       s = (char **)malloc(sizeof(char**));   //这个地方是必须要添加的，因为如果不分配给s一个确切的地址，我们无法操作*s，因为s中保存了一个无效随机不可用的地址，不知道他在哪里。就没法操作*s
       *s = "hello world";                    //和前面的单指针的区别是，但指针直接就定义了*s也就是s的地址直接就指向了，而这里只定义了*s的地址并没有定义s的地址。指向哪他是不确定的。
       printf("%s\",*s);
   }
  `
  
   
  - 关于二级指针的用法说白了就是二级指针保存的是一级指针的地址，他的类型是指针变量，而一级指针保存的是指向数据所在的内存单元的地址，虽然都是地址但是类型不一样。
   
   
  
   
  