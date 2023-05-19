# c언어로 리눅스 명령어 구현하기

### 1. ls
- 현재 작업 디렉토리의 파일들을 출력
- option: -l, -i (2개)
- l: inode, mode, file size 같이 출력
- i: inode 같이 출력

![스크린샷 2023-05-17 오후 10 45 31](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/bba2090f-02d3-4571-a287-bbfc8167f4cc)

### 2. cat
- 파일의 내용을 출력
- option: -n
- n: 라인 번호를 붙여 출력

![스크린샷 2023-05-18 오후 2 12 42](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/bda0bb51-2b88-4587-ab1c-368f1e09303d)

### 3. cp
- 파일을 복사

![스크린샷 2023-05-18 오전 10 15 28](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/5c2d9abc-2729-4eaa-aa96-ab4a9681e831)

### 4. file
- 파일의 타입 확인

![스크린샷 2023-05-18 오후 2 54 33](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/71e972f0-cbea-4023-b1a7-3bcd6c184c2a)

### 5. touch
- 파일의 시간 갱신, 빈 파일 생성

![스크린샷 2023-05-18 오후 3 13 34](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/d27dcfcc-8d6f-4c46-a215-347907d9568e)

### 6. ln
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

### 12. rm
- 파일 삭제
- option: -r
- r: 디렉토리 하위 파일 및 디렉토리가 존재해도 recurssive하게 삭제

![스크린샷 2023-05-19 오전 12 25 35](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/c7492e7c-14b0-4d3f-a578-8d2fad8975bc)

### 13. mkdir
- 폴더 생성
- option: -p
- p: 하위 디렉토리까지 생성

![스크린샷 2023-05-19 오전 12 07 35](https://github.com/uomaep/JS_Array_Challenge/assets/114221785/1944259e-be7c-4e4c-9d49-38ec1bac8710)

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









