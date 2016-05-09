# IMIX转换代码生成器

以下代码生成需要在node.js环境下进行

### imix域名自动生成域名宏定义

```
node macroDefine.js
//参数为imix协议包xml文件的路径
//生成fieldMacroDefine.h 全量集合,imix.xml文件需要在同级目录下
```

### imix消息生成技术结构体

```
node imixToInnerGenerate.js msgName
//msgName是IMIX协议包中定义的消息名字
//生成文件为msgName_convert.c

```

### 技术结构体转换为业务结构体

### 公共引用部分

```
imixToInnerFnctns.c文件为通用的函数模块，不通过node.js文件生成

```
