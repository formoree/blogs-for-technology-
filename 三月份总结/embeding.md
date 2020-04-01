#### heap-use-after-free报错
```AddressSanitizer: heap-use-after-free on address 0x602000000110 at pc 0x0000004066ee bp 0x7ffc7aad9600 sp 0x7ffc7aad95f8```
如果这个链表删除到最后只剩下NULL了，那就说明这个链表已经不存在了，那么此时就没有head结点，因此你在返回整条链表时应该返回虚拟节点指向的下一个！！！