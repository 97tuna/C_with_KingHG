# [HW20] Pay 계산하기

<h4>

1주일간 일한 시간을 입력하여 총수입(gloss pay), 세금(taxes), 실수입(net pay)를 출력하시오.</br></br>
(계산방법)</br></br>
- 기본급여 = 시간당 3,000 원</br>
- 초과근무수당 (40시간 초과분에 대하여 적용) = 시간 * 기본급 * 1.5배 - 세율 : 처음 100,000 원까지 15%, 100,000 만원 초과 금액은 25%</br></br>
(사용함수) 입력함수, 총수입 계산함수, 세금 계산함수, 결과 출력함수

</br></br>
(실행결과)
</br></br></h4>

```
* 1주일간의 근무시간을 입력하시오 : 50 # 총수입 : 165000원
#세 금: 31250원
# 실수입 : 133750원

- test data
근무시간 40 시간 : 총수입 120000, 세금 20000, 실수입 100000 
근무시간 45 시간 : 총수입 142500, 세금 25625, 실수입 116875 
근무시간 60 시간 : 총수입 210000, 세금 42500, 실수입 167500


```