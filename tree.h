#pragma once
#ifndef TREE_H
#define TREE_H

class Tree{
public:
	Tree(char character, vector<char> children);
	~Tree();

	/**
	 * * This function checks if the substring from 
	 * `start` to `end` (or the point where `end` is
	 * reached) matches a spelled digit. It returns 
	 * the matched digit or -1 if no match is found.
	 *
	 * @param start is a pointer inside the string
	 * in which you want to start prefix matching from
	 * @param end is a pointer to the end of your string
	 * @returns -1 if there is no match or end pointer is 
	 * reached if there is or there is a match the 
	 * function will return that digit
	 */
	int prefixMatch(string* start, string* end)
}


#endif