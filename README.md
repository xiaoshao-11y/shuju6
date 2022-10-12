# shuju6
数据结构实验6
问题 A: 小鱼的数字游戏
题目描述
小鱼最近被要求参加一个数字游戏，要求它把看到的一串数字（长度不一定，以0结束，最多不超过100个，数字不超过2^32-1），记住了然后反着念出来(表示结束的数字0就不要念出来了)。这对小鱼的那点记忆力来说实在是太难了，你也不想想小鱼的整个脑袋才多大，其中一部分还是好吃的肉！所以请你帮小鱼编程解决这个问题。
输入
一行内输入一串整数，以0结束，以空格间隔。
输出
一行内倒着输出这一串整数，以空格间隔。

样例输入
3 65 23 5 34 1 30 0
样例输出
30 1 34 5 23 65 3


问题 B: 最深有几层括号
题目描述
输入一个由字符'('和‘)’构成的字符串，请编程判断该字符串中的括号是否匹配并计算匹配时括号最深有多少层。
输入
一个由‘（‘，’）’构成的字符串(长度不超过200)。
输出
若括号不匹配输出-1，否则输出括号的最大层数。
样例输入
(((()(()))))
样例输出
5

问题 C: 打括号
题目描述
众所周知，大括号、中括号、小括号都是成对出现的。但是，总有些“小迷糊”把括号匹配弄错！所以想请你帮忙写一个程序，判断一个字符串中是否有不合法的括号？
这里的字符串，只包含：“大括号，中括号，小括号”，也就是由“{}[]()”中的字符组成。

输入
输入一个字符串，不超过200个字符。
输出
输出一个字符串：
若合法，输出：“true”（不包含双引号）
否则，输出：“false”（亦不包含双引号）
样例输入
{[()]}
样例输出
true
提交
状态

问题 C: 打括号
题目描述
众所周知，大括号、中括号、小括号都是成对出现的。但是，总有些“小迷糊”把括号匹配弄错！所以想请你帮忙写一个程序，判断一个字符串中是否有不合法的括号？
这里的字符串，只包含：“大括号，中括号，小括号”，也就是由“{}[]()”中的字符组成。

输入
输入一个字符串，不超过200个字符。
输出
输出一个字符串：
若合法，输出：“true”（不包含双引号）
否则，输出：“false”（亦不包含双引号）
样例输入
{[()]}
样例输出
true


问题 D: 汉诺塔
题目描述
  任务：汉诺塔问题，有X、Y和Z的塔座三个，在塔座X上有n个直径各不相同，从小到大依次编号为1～n的盘子。要求将X塔座上的n个盘子移到塔座Z上。
  移动规则：
         每次只能移动一个盘子；
         盘片可以插在X、Y和Z中任一塔座上；
         任何时候都不能将一个较大的盘子放在较小的盘子上方。


提示：
设函数Hanoi(n，x，y，z)实现将n个盘子从x通过y移动到z上。该问题可以分解为：
         第一步：先将n-1个盘子从x通过z移动到y上。Hanoi(n-1，x，z，y)；
         第二步：将第n个圆盘从x移到z；move(n，x，z)；
         第三步：将n-1个盘子从y通过x移动到z上，Hanoi(n-1，y，x，z)；
         

输入
盘子个数n
输出
n个盘子的移动过程
样例输入
3
样例输出
move No.1 plant from X to Z
move No.2 plant from X to Y
move No.1 plant from Z to Y
move No.3 plant from X to Z
move No.1 plant from Y to X
move No.2 plant from Y to Z
move No.1 plant from X to Z
