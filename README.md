C语言浮点型学习日志
 
项目介绍
 
本人C语言入门练习仓库，专题：float、double浮点数据完整演示。整个工程仅存在唯一main入口，各示例拆分为独立函数，按需注释运行。
 
文件结构
 
- float_use.c：程序唯一入口main函数
- %f_%e_%a.c / %f_%e_%a.h：%f、%e、%A浮点格式化输出演示
- define_float.c / define_float.h：浮点宏定义基础用法
- double.c / double.h：double双精度存储、精度特性演示
- float.c / float.h：float单精度存储结构、偏移量、隐式尾数1讲解
- float_overflow_underflow.c：浮点数上溢、下溢现象测试
- Infinity_Nan.c / inf.h：无穷大、非数值NaN特性演示
- precision.c / precision.h：浮点数精度丢失、有效位数实验
 
使用方法
 
1. 使用Visual Studio打开 float_use.sln
2. 在float_use.c的main函数内，取消对应示例函数注释即可运行
3. 所有模块无独立main，不会多重定义报错
 
学习笔记
 
记录每日浮点型踩坑、IEEE754知识点总结，查看note.md