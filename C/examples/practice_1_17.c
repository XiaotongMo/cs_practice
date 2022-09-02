// 编写程序输出字符数大于80的字符串
// Created by jasmine mo on 2022/9/3.
// 原书中的getline与<stdio.h>中的getline重复，故修改为getlines。

#include <stdio.h>
#define MAXLINE 1000
#define NCHAR 80

// 预定义
int getlines(char line[], int maxline);
void copy(char to[], char from[]);

// main()会报错，改写为int main()则不会
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while((len=getlines(line, MAXLINE))>0){
        if(len>NCHAR) {
            printf("%s", line);
        }
    }
    return 0;
}
// 函数读取并返回一行字符串
int getlines(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i]=c;
    if(c == '\n'){
        s[i]=c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// 函数只执行某个动作，没有返回值
void copy(char to[], char from[])
{
    int i;

    i=0;
    while((to[i]=from[i]) != '\0')
        ++i;
}
