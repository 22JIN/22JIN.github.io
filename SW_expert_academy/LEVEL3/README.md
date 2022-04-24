# LEVEL 3

{% include list.liquid all=true %}


## 테스트 시 유의사항

```c++
freopen("input.txt", 'r', stdin)
```

입력을 stdin 대신 "input.txt"에서 받아옴  
stdin으로 입력하던 enter도 그대로 적용됨 (파일에 여러줄 작성되어 있는 경우 한번의 read에 한줄씩)  
읽어올때는 `cin << x;` 와 같은 형식으로 사용 가능  
