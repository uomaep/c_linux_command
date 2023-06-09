# c언어로 리눅스 명령어 구현하기

### 1. ls(3개)
- 현재 작업 디렉토리의 파일들을 출력
- option: -i, -a (2개)
- a: 숨김 파일도 같이 출력
- i: inode 같이 출력

![스크린샷 2023-06-10 오전 12 03 32](https://github.com/uomaep/c_linux_command/assets/114221785/7e729eb3-4c3f-4278-950f-53197f8bcc64)

### 2. cat(5개)
- 파일의 내용을 출력
- option: -n, -b, -E, -T (4개)
- n: 라인 번호를 붙여 출력
- b: 공백 라인은 번호를 붙이지 않으면서 출력
- E: 라인의 마지막과 공백줄에 $를 출력
- T: 탭 문자를 ^I으로 바꿔서 출력

<img width="458" alt="스크린샷 2023-06-09 오전 12 04 22" src="https://github.com/uomaep/c_linux_command/assets/114221785/762c7bc2-fb77-49a9-8ab8-fe7aba3415e9">
<img width="516" alt="스크린샷 2023-06-09 오전 12 04 46" src="https://github.com/uomaep/c_linux_command/assets/114221785/7040ac5a-f44b-403b-a425-b19af4c9275f">
<img width="509" alt="스크린샷 2023-06-09 오전 12 05 11" src="https://github.com/uomaep/c_linux_command/assets/114221785/3d137c72-0e23-4879-bac7-d156a94c81e6">
<img width="487" alt="스크린샷 2023-06-09 오전 12 05 42" src="https://github.com/uomaep/c_linux_command/assets/114221785/16978879-3df4-4e54-9de2-516996012d41">
<img width="493" alt="스크린샷 2023-06-09 오전 12 06 00" src="https://github.com/uomaep/c_linux_command/assets/114221785/1674aea4-9481-4cde-a5d1-bf991118101d">

### 3. cp
- 파일을 복사

![스크린샷 2023-05-18 오전 10 15 28](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/5c2d9abc-2729-4eaa-aa96-ab4a9681e831)

### 4. file
- 파일의 타입 확인

![스크린샷 2023-05-18 오후 2 54 33](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/71e972f0-cbea-4023-b1a7-3bcd6c184c2a)

### 5. touch
- 파일의 시간 갱신, 빈 파일 생성

![스크린샷 2023-05-18 오후 3 13 34](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/d27dcfcc-8d6f-4c46-a215-347907d9568e)

### 6. ln(2개)
- 하드링크, 심볼릭 링크 파일 생성
- option: -s
- s: 심볼릭 링크 파일 생성

![스크린샷 2023-05-18 오후 3 31 26](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/3f145ad7-08a4-495e-b29a-5fc4ede05469)

### 7. unlink
- 링크 해제

![스크린샷 2023-05-18 오후 3 38 11](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/f0f1332e-d802-4887-8dbe-18f833399837)

### 8. echo
- 인수로 전달되는 문자열을 출력

![스크린샷 2023-05-18 오후 3 57 26](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/12a3d51a-8780-4e5f-af04-9c6e5b82ae51)

### 9. hostname
- 시스템 이름 확인

![스크린샷 2023-05-18 오후 4 16 01](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/b5c6ba05-1db1-4205-88b0-c5899e42826a)

### 10. mv
- 파일 이동 및 이름 변경

![스크린샷 2023-05-18 오후 5 15 42](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/4bd29eb6-db64-4522-a2b2-77bca7e1a05f)

### 11. clear
- 화면 지우기

### 12. rm(2개)
- 파일 삭제
- option: -r
- r: 디렉토리 하위 파일 및 디렉토리가 존재해도 recurssive하게 삭제

![스크린샷 2023-05-19 오전 12 25 35](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/c7492e7c-14b0-4d3f-a578-8d2fad8975bc)

### 13. mkdir(4개)
- 폴더 생성
- option: -p, -v, -m
- p: 상위 경로도 함께 생성
- v: 디렉토리를 생성하고 생성된 디렉토리에 대한 메시지를 출력합니다.
- m: 디렉토리를 생성할 때 권한을 설정합니다. (defualt : 755)

![스크린샷 2023-05-19 오전 12 07 35](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/1944259e-be7c-4e4c-9d49-38ec1bac8710)
![스크린샷 2023-06-09 오후 7 50 36](https://github.com/uomaep/c_linux_command/assets/114221785/6c8a25b9-4561-482a-9b62-8d57d718bada)
![스크린샷 2023-06-09 오후 7 51 37](https://github.com/uomaep/c_linux_command/assets/114221785/35b43e22-5e8f-44db-a937-5b361005a3d8)

### 14. pwd
- 현재 작업 디렉토리 경로 출력

![스크린샷 2023-05-19 오전 1 21 05](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/2af5bfd8-f80f-4a35-974c-42b1a7f8907a)


### 15. nslookup
- DNS query

![스크린샷 2023-05-19 오전 1 06 50](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/aecdb198-be61-40ca-8f9d-9a6225802729)

### 16. env
- 환경 변수 목록 출력

### 17. true
- 성공을 리턴하는 명령어

![스크린샷 2023-05-19 오후 6 06 40](https://github.com/uomaep/c_linux_command/assets/114221785/ecb4ff62-a6bc-4ff0-8184-6d3b03cacb20)

### 18. false
- 실패를 리턴하는 명령어

![스크린샷 2023-05-19 오후 6 07 26](https://github.com/uomaep/c_linux_command/assets/114221785/bc3375b7-5cf6-4c0e-a0a7-c0445ac0418f)

### 19. yes
- 반복 입력 명령어
- 컴퓨터 성능을 확인할 때 사용
- 인자 없으면 y를 반복적으로 출력

![스크린샷 2023-05-19 오후 6 13 32](https://github.com/uomaep/c_linux_command/assets/114221785/1ad878c1-8f2c-4cb0-973d-d33c2bd10e78)

### 20. date
- 현재 날짜, 시간을 출력

![스크린샷 2023-05-19 오후 6 39 05](https://github.com/uomaep/c_linux_command/assets/114221785/2898286f-897a-4273-917a-65ff56c1b871)

### 21. sleep
- 지정 시간동안 호출 프로세스를 일시 중지
- s: 초(sec)단위
- m: 분(min)단위
- h: 시간(hour)단위
- d: 일(day)단위

![스크린샷 2023-05-19 오후 7 03 38](https://github.com/uomaep/c_linux_command/assets/114221785/f287b5f1-84be-4e76-9e97-e6504be9beb7)

