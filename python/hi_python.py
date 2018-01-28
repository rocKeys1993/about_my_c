# 会发现，python hi_python.py 并没有生成机器码文件
# 如果要将.py 文件编译成 .pyc 文件，需要用 python -m compileall *.py 命令
# 可是，即使是.pyc 依然不能由OS直接执行。还是需要用python的脚本解释执行。


if __name__ == '__main__':
    print("hi , python")
