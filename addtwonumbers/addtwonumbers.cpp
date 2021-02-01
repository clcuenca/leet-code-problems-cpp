/// Leet Code
/// Add Two Numbers
/// Author: Carlos L. Cuenca
/// Date: 2/1/2021

#include<iostream>

/// ---------
/// Constants

const int SUCCESS = 0;

/// -----------
/// Definitions

struct ListNode {
	
	int val;
	ListNode* next;
	ListNode() : val(0), next(0) { /* Empty */ }
	ListNode(int x) : val(x), next(0) { /* Empty */ }
	ListNode(int x, ListNode* next) : val(x), next(next) { /* Empty */ }

}

/// --------------------
/// Forward Declarations

ListNode* addTwoNumbers(ListNode*, ListNode*);

/// -------
/// Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	int number1Numbers;
	int number2Numbers;
	int numberBuffer  ;

	/// -------------
	/// Program Start

	std::cin >> number1Numbers;

	ListNode* list1    = 0;
	ListNode* current1 = 0;

	for(uint32_t index = 0; index < number1Numbers; index++) {

		std::cin >> numberBuffer;

		if(!list1) {

			list1 = new ListNode(numberBuffer);
			current1 = list1;

		} else {

			current1->next = new ListNode(numberBuffer);
			current1 = current1->next;

		}

	}

	std::cin >> number2Numbers;

	ListNode* list2    = 0;
	ListNode* current2 = 0;

	for(uint32_t index = 0; index < number2Numbers; index++) {

		std::cin >> numberBuffer;

		if(!list2) {

			list2 = new ListNode(numberBuffer);
			current2 = list2;

		} else {

			current2->next = new ListNode(numberBuffer);
			current2 = current2->next;

		}

	}

	ListNode* sum = addTwoNumbers(list1, list2);

	while(sum) {

		std::cout << sum->val;

	}

	std::cout << endl;
	

	return SUCCESS;

}

/// ------------------------
/// Function Implementations

/**
 * Adds two numbers as linked lists in reverse order
 *
 * @param list1 The first number as a linked list
 * @param list2 The second number as a linked list
 */
ListNode* addTwoNumbers(ListNode* list1, ListNode* list2) {

        ListNode* list    = 0;
        ListNode* current = 0;
        
        int carry = 0;
        
        while(listNode1 || listNode2 || carry) {
            
            int value1 = 0;
            int value2 = 0;
            
            if(listNode1) {
                
                value1    = listNode1->val;
                listNode1 = listNode1->next;
                
            }
            
            if(listNode2) {
                
                value2    = listNode2->val;
                listNode2 = listNode2->next;
            
            }
            
            int sum = value1 + value2 + carry;
            
            carry      = (sum / 10);
            int number = (sum % 10);
            
            if(current) {
                    
                current->next = new ListNode(number);
                current = current->next;
                    
            } else {
                    
                list    = new ListNode(number);
                current = list;
                    
            }
            
        }
        
        return list;

}


