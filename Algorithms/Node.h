#include "pch.h"

#ifndef _NODE_H
#define _NODE_H

class Node {

	private:
		int id;

	public:
		Node(const int& id);

		void setID(const int& id);
		const int& getID() const;

};

#endif
