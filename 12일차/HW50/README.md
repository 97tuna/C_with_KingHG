# [HW50] 문자검색 프로그램(단일 검색)


<h4>

문자열 하나 문자 하나를 입력 받아 문자열중에서 문자가 포함되어 있는가를 검사하여 문자의 위치를 출력하는 프로그램을 작성하시오.</br>
단, 문자열 내에 찾는 문자가 여러 개인 경우 첫 번째 위치만 리턴 함 (단일검색만 지원)</br>
검색 작업을 반복하며 입력 문자열로 “end” 입력 시 종료하기</br></br>
(제한조건) 문자열의 길이 L은 (1≤L≤99)의 범위로 제한 함</br></br>
(사용함수)</br></br>
1. 입력 함수 : 문자열, 문자 입력 함수</br>
2. strcheck(char *, char)함수 : 문자열과 문자를 전달인자로 받아 문자열 내의 문자위치를 검사하는 함수. 존재하지 않을 경우 –1을 리턴, 존재할 경우 문자의 index 리턴


</br></br>
(실행결과)
</br></br></h4>

```cpp
# 문자열을 입력하시오 : family
# 문자를 입력하시오 : m
“family”문자열 안에 ‘m’문자는 2번 위치에 존재합니다.
# 문자열을 입력하시오 : goguma
# 문자를 입력하시오 : k
“goguma”문자열 안에 ‘k’문자는 존재하지 않습니다.
# 문자열을 입력하시오 : end 👈 “end” 입력 시 종료

```