# SW EXPERT ACADEMY


```
{% raw %}{% include list.liquid all=true %}{% endraw %}

{% include list.liquid all=true %}
```

{% include list.liquid all=true %}


#테스트 시 유의사항

freopen("input.txt", 'r', stdin)
-> 입력을 stdin 대신 "input.txt"에서 받아온다
(즉, stdin으로 입력하던 enter도 그대로 적용됨 파일에 여러줄 작성되어 있는 경우 한번의 read에 한줄 씩)
읽어올때는 cin << x; 와 같은 형식 사용
