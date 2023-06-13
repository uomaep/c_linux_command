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

### 4. touch
- 파일의 시간 갱신, 빈 파일 생성

![스크린샷 2023-05-18 오후 3 13 34](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/d27dcfcc-8d6f-4c46-a215-347907d9568e)

### 5. ln(2개)
- 하드링크, 심볼릭 링크 파일 생성
- option: -s
- s: 심볼릭 링크 파일 생성

![스크린샷 2023-05-18 오후 3 31 26](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/3f145ad7-08a4-495e-b29a-5fc4ede05469)

### 6. unlink
- 링크 해제

![스크린샷 2023-05-18 오후 3 38 11](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/f0f1332e-d802-4887-8dbe-18f833399837)

### 7. echo
- 인수로 전달되는 문자열을 출력

![스크린샷 2023-05-18 오후 3 57 26](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/12a3d51a-8780-4e5f-af04-9c6e5b82ae51)

### 8. mv
- 파일 이동 및 이름 변경

![스크린샷 2023-05-18 오후 5 15 42](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/4bd29eb6-db64-4522-a2b2-77bca7e1a05f)

### 9. clear
- 화면 지우기

### 12. rm
- 파일 삭제

![스크린샷 2023-06-13 오후 1 30 06](https://github.com/uomaep/c_linux_command/assets/114221785/c8a04634-c254-45b0-853f-99f2676fe9e4)

### 10. mkdir(4개)
- 폴더 생성
- option: -p, -v, -m
- p: 상위 경로도 함께 생성
- v: 디렉토리를 생성하고 생성된 디렉토리에 대한 메시지를 출력합니다.
- m: 디렉토리를 생성할 때 권한을 설정합니다. (defualt : 755)

![스크린샷 2023-05-19 오전 12 07 35](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/1944259e-be7c-4e4c-9d49-38ec1bac8710)
![스크린샷 2023-06-09 오후 7 50 36](https://github.com/uomaep/c_linux_command/assets/114221785/6c8a25b9-4561-482a-9b62-8d57d718bada)
![스크린샷 2023-06-09 오후 7 51 37](https://github.com/uomaep/c_linux_command/assets/114221785/35b43e22-5e8f-44db-a937-5b361005a3d8)

### 11. pwd
- 현재 작업 디렉토리 경로 출력

![스크린샷 2023-05-19 오전 1 21 05](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/2af5bfd8-f80f-4a35-974c-42b1a7f8907a)


### 12. env
- 환경 변수 목록 출력

### 13. true
- 성공을 리턴하는 명령어

![스크린샷 2023-05-19 오후 6 06 40](https://github.com/uomaep/c_linux_command/assets/114221785/ecb4ff62-a6bc-4ff0-8184-6d3b03cacb20)

### 14. false
- 실패를 리턴하는 명령어

![스크린샷 2023-05-19 오후 6 07 26](https://github.com/uomaep/c_linux_command/assets/114221785/bc3375b7-5cf6-4c0e-a0a7-c0445ac0418f)

### 15. yes
- 반복 입력 명령어
- 컴퓨터 성능을 확인할 때 사용
- 인자 없으면 y를 반복적으로 출력

![스크린샷 2023-05-19 오후 6 13 32](https://github.com/uomaep/c_linux_command/assets/114221785/1ad878c1-8f2c-4cb0-973d-d33c2bd10e78)

### 16. date
- 현재 날짜, 시간을 출력

![스크린샷 2023-05-19 오후 6 39 05](https://github.com/uomaep/c_linux_command/assets/114221785/2898286f-897a-4273-917a-65ff56c1b871)

### 17. rev
- 내용 거꾸로 출력

<img width="423" alt="스크린샷 2023-06-12 오후 1 27 57" src="https://github.com/uomaep/c_linux_command/assets/114221785/e1af864b-fd47-45d0-b06c-27b199046a9b">

### 18. hostname
- 호스트 이름을 출력

![스크린샷 2023-06-10 오전 1 01 50](https://github.com/uomaep/c_linux_command/assets/114221785/55da4d68-95bc-49b5-ba21-84718a5969ef)

### 19. sleep
- 인수로 입력한 시간동안 정지

![스크린샷 2023-06-13 오후 1 31 13](https://github.com/uomaep/c_linux_command/assets/114221785/ac0374c4-3344-4eeb-817c-fc4b7d4a149b)
