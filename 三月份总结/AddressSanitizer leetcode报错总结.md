## 简介
Address Sanitizer（ASan）是一个快速的内存错误检测工具。它非常快，只拖慢程序两倍左右（比起Valgrind快多了）。它包括一个编译器instrumentation模块和一个提供malloc()/free()替代项的运行时库。
从gcc 4.8开始，AddressSanitizer成为gcc的一部分。当然，要获得更好的体验，最好使用4.9及以上版本，因为gcc 4.8的AddressSanitizer还不完善，最大的缺点是没有符号信息。

## 错误类型
* (heap) use after free 
* heap buffer overflow 堆缓存访问溢出
* stack buffer overflow 栈缓存访问溢出
* global buffer overflow 全局缓冲访问溢出
* use after return 返回后使用
* use after scope 
* initializations order bugs
* memory leaks 内存泄露

