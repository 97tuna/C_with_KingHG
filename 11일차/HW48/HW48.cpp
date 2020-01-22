//
//  HW48.cpp
//  HW48
//
//  Created by 이동헌 on 2020/01/14.
//  Copyright © 2020 이동헌. All rights reserved.
//
#include <stdio.h>

int main() {
	int arr[] = {2,8,15,1,8,10,5,19,19,3,5,6,6,2,8,2,12,16,3,8,17,
	12,5,3,14,13,3,2,17,19,16,8,7,12,19,10,13,8,20,
	16,15,4,12,3,14,14,5,2,12,14,9,8,5,3,18,18,20,4};
	int count[20] = {};
	for(int i = 0; i < (sizeof(arr) / sizeof(int)); i++) {
		count[arr[i] - 1]++;
	}
	for(int i = 0; i < 20; i++) {
		printf("%d - %d개\n", i+1, count[i]);
	}
}