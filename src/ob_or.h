/* -----------------------------------------------------------------------------

  BrainBay  -  Version 1.9, GPL 2003-2014

  MODULE:  OB_OR.CPP
  Authors: Jeremy Wilkerson, Chris Veigl


  This Object performs the OR-operation on it's two Input-Values and presents the
  result at the output-port. FALSE it represented by the constant INVALID_VALUE, TRUE
  is represented by the constand TRUE_VALUE (def: 512.0f )

 This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; See the
  GNU General Public License for more details.

  
-------------------------------------------------------------------------------------*/

#include "brainBay.h"

class OROBJ : public BASE_CL
{
	protected:
		float input1, input2;
		
	public:
		int binary;

	OROBJ(int num);
	
	void make_dialog(void);

	void load(HANDLE hFile);

	void save(HANDLE hFile);
	
	void incoming_data(int port, float value);
	
	void work(void);
	
	~OROBJ();
};
