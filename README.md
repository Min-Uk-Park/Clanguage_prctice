# Clanguage_prctice

## 1일차 : 
* 변수 선언 ~ 반복문 연습 

## 2일차 : 
* 함수(void형(값 반환X), int형, char형)

## 3일차 : 
* 변수의 유효범위, 배열
* 외부 함수 호출 방법

1.  호출하는 함수 파일 생성 ( (ex) aaa.c )
2. 함수 파일 컴파일 (git bash에서 gcc -c aaa.c -o sum.o -> sum.o파일 생성됨)
3. tasks.json파일 수정(tasks안에 아래 코드 추가

'''
            {
			"label": "build",
			"type": "shell",
			"command": "gcc",
			"args": ["-o", "${fileDirname}/${fileBasenameNoExtension}", "${file}","aaa.o"],
			"group": {
				"kind": "build",
				"isDefault": true
			}
		},

'''
- 현재 작업하고 있는 파일${fileDirname}/${fileBasenameNoExtension}을 aaa.o와 컴파일하겠다는 의미(?)
그러면 ${fileDirname}\\${fileBasenameNoExtension}.exe 컴파일된 파일 생성됨(ex) Cpractice.exe)

            
4. launch.json파일 수정("preLaunchTask": "build" 로 바꾼다. 그러면 tasks 중에서 build부터 수행하여 
컴파일할 파일이 있는지부터 확인 있으면 컴파일 없으면 다음 task로 넘어감)

## 4일차 : 

