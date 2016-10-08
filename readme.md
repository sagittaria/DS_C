慕课-数据结构-浙大陈越，C语言版本的练习场

多一个文件夹 acmcoder在线编程练习
---

在win下装了MinGW之后，用Sublime Text3直接按F5来编译运行

1. tools->build system->new build system，保存为C-gcc.sublime-build

{
   "cmd": ["gcc", "${file}", "-o","${file_path}/${file_base_name}"],
   "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:?(.*)$",
   "working_dir": "${file_path}",
   "selector": "source.c",
   "variants":
    [
        {
            "name": "Run",
            "cmd": ["cmd", "/c", "gcc", "-Wall","${file}", "-o", "${file_path}/${file_base_name}", "&&", "start", "cmd", "/c", "${file_path}/${file_base_name} & echo.&pause"]
        }
    ]
}

2. 接着绑定F5快捷键：Preferences->Key bindings user

[
  {"keys": ["f5"], "command": "build", "args": {"variant": "Run"}}
]