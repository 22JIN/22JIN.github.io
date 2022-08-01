---
sort: 1
---

# x64dbg

## command 사용 

bp 걸고 bp list에서 브포에 대한 상세 설정 가능   
특정 조건에 일때만 멈춘다거나 로그를 출력한다거나   
   
   
자동으로 실행하고 싶으면 명령어? 에다가 run쓰면됨   
{@rax} -> rax의값   
{@[rax]} -> rax에 저장된 주소가 가지는 값   

example   
`{mem;50@[rsp+8]}`   
`ejin(VerifyUtf8String): {rdx} {s:r9}  {mem;20@rcx}`   
   
   
## reference
https://help.x64dbg.com/