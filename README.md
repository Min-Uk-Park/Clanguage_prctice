# Clanguage_prctice

## 1일차 : 
* 변수 선언 ~ 반복문 연습 

## 2일차 : 
* 함수(void형(값 반환X), int형, char형)

## 3일차 : 
* 변수의 유효범위
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
     현재 작업하고 있는 파일${fileDirname}/${fileBasenameNoExtension}을 aaa.o와 컴파일하겠다는 의미(?)
     그러면 ${fileDirname}\\${fileBasenameNoExtension}.exe 컴파일된 파일 생성됨(ex) Cpractice.exe)

            
4. launch.json파일 수정("preLaunchTask": "build" 로 바꾼다. 그러면 tasks 중에서 build부터 수행하여 
컴파일할 파일이 있는지부터 확인 있으면 컴파일 없으면 다음 task로 넘어감)

## 4일차 : 
* 배열(숫자 배열, 문자 배열)
* 함수와 배열
* 알고리즘

## 5일차 : 
* 알고리즘 - 정렬
* 포인터 -> 포인터 = (자료형 *)malloc('몇 개' 입력할지 갯수 * sizeof(자료형)) 
이때 포인터는 자료형 크기에 해당하는 N개의 배열 주소를 가지게 됨.
할당 모두 하고 시스템 종료(코딩 모두 작성 후)전 if(포인터)free(포인터)를 하여 헤제해야함

## 6일차 :
* 구조체 -> struct 구조체명(상위개체) {
					자료형 맴버명;
					자료형 맴버명;
					...

}구조체 변수;


## 7일차 :
* 공용체

## 8일차 :

안녕하세요 연습하겠습니다.

