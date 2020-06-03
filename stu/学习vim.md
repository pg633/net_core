
# 1 lldb 
gdb + app 

b 断点 
r 跑
n 下一个
l 列出代码
step 进入函数 
finish 


# 1 ctags 
* ctags -R * 
    使用ctags 初始化 内容
# 1 vim 
    如CTRL-F 向前一页 CTRL-B 向后一页 

    上面不是重要的 
    CTRL-D 向下半页 CTRL-U 向上半页我觉得更实用 这样看文章时就不会跳转出错
    另外还有
    CTRL-E 向下一行
    CTRL-Y 向上一行

w 跳到下一个单词的开始
e 跳到单词的结束
b 向后跳

    [+ctrl+i 跳转到函数、变量和#define
    [+ctrl+d 跳转到#define处
    ctrl+i 向前跳到前几次光标位置
    ctrl+o 向后跳到后几次光标位置

函数体跳转： 
[[
]]
[]
][
{}


如何选中括号中的内容 进行：
将光标移至括号内，按shift+v进入行选模式，然后

i｛ － 选小括号中内容，不包括小括号
a｛ － 选小括号中内容，包括小括号
ib － 选中括号中内容，不包括括号
ab － 选中括号中内容，包括括号
i｛ － 选大括号中内容，不包括大括号
a｛ － 选大括号中内容，包括大括号

:h text-objects

vi{ 选中{}中间的内容,不包括{}
va{ 选中{}中间内容，包括{}
vi( 选中()中间内容
vi< 选中<>中间内容
vi[ 选中[]中间内容
vit 选中中间的内容
vi" 选中""中间内容
vi' 选中"中间的内容
vis 选中一个句子
vib 选中一个block
viw选中一个单词
vip 选中一个段落


* vi -t tagname   
    跳转到标签tagname定义的地方，跳转位置
    :ta tagname    跳转到标签tagname定义的地方
    :tags    查看到达当前位置所经过的标签路径


    ctrl+]    跳转至光标所在对象定义之处
    ctrl+t    返回跳转前位置
    ctrl+g  或者 :f    查看当前文件名和所在行号




