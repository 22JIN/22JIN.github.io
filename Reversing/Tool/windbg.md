---
sort: 2
---

# windbg

## 자주 쓰는 명령어 

| command                        | role                                  |
| -------                        | --------                              |
| **!process 0 0 [Process name]**   | 원하는 프로세스에 대한 시작주소 조회 |
| **.process /i [프로세스 시작주소]**  | 프로세스에 attach  |
| **.reload   .reload /f [process name]**    | 모듈 로드 |
| **lmvm [process name]**    | 프로세스가 로드한 모듈 조회    -> 이거 제대로 안나오면 모듈 로드 다 시할것 |
| **x /D /f [module]![string Reg]**    | 특정 모듈에서 원하는 함수(symbol) 조회 |
| **db [address]**    | 메모리 주소 덤프 (주소앞에 @붙이면 reference) |
| **r [register]**    | register read |
| **bu**    | 디버기 꺼졌다 다시 물려도 breakpoint 남아있음 |
| **bm**    | Breakpoint를 정규표현식으로 |
| **pc**    | 다음 call까지 실행(step over) |
| **tc**    | 다음 call까지 실행(step into) |
| **!gflag +ksl    sxe ld [module]**    | sxe ld 안될때 |
| **[rip 움직이는 command]-**    | windbg preview의 time travel 기능에서    뒤에서부터 디버깅하고 싶을때   원래 기능을 뒤에서부터 거꾸로 실행하면서 수행 |
