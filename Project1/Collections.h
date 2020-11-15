#pragma once
#ifndef Collections_H
#define Collections_H
#include<iostream>

using namespace std;

namespace Collections {
	template<class data_t>

	struct node {
		
		//pointer to the next nide in the list
		node<data_t>* next;

		//Data of the current node
		data_t data;
	};

	//To make a list of diffeterent data types
	template<class data_t>
	
	class List
	{
	public:
		//Pointer to the first node in the list
		node<data_t>* first;

		//Pointer to the last node in the list
		node<data_t>* last;
		
		//to collect the length of the 
		int length=0;
		
	
		//Constructor for List with data Type T
		List<data_t>()
		{
			first = NULL;
			last = NULL;
		}

		//Function to add an item to the list
		void add(data_t data)
		{
			//Check if the list is empty
			if (!first)
			{
				//The list is empty
				first = new node<data_t>;
				first->data = data;
				first->next = NULL;
				last = first;
			}
			else
			{
				//this list isnt empty
				if (last == first)
				{
					//the list has one element
					last = new node<data_t>;
					last->data = data;
					last->next = NULL;
					first->next = last;
				}
				else
				{
					//the list has more than one element
					node<data_t>* insdata = new node<data_t>;
					insdata->data = data;
					insdata->next = NULL;
					last->next = insdata;
					last = insdata;

				}
			}
		}

		data_t get(int index) {

			if (index == 0)
			{
				//return the first element
				return this->first->data;
			}
			else {

				//return the element at index
				node<data_t>* curr = this->first;
				for (int i = 0; i < index; ++i)
				{
					//change the current node to the next until the index is reached
					curr = curr->next;
				}

				//return the curr
				return curr.data;
			}
		}

		data_t operator[](int index)
		{
			return get(index);
		}


	};

	class Stack {

	};
}

#endif
