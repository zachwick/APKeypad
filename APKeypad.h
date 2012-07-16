/*
  TouchShield Slide as a keypad
     Copyright 2012 Zach Wick
     Dual licensed under the MIT License and the GPLv3 License
        http://www.opensource.org/licenses/mit-license.php
	http://www.opensource.org/licenses/GPL-3.0

     Button Layout
        Numerical    
	---------------------
	| 1 | 2 | 3 | 4 | 5 |
	---------------------
	| 6 | 7 | 8 | 9 | 0 |
	---------------------
	| S | * | # | C | E |
	---------------------

	Alphabetical
	--------------------
	| q | w | e | r | t|
	--------------------


     Class Heirarchy
        APKeypad
	APNumKeypad
	APAlpKeypad 
	APSymKeypad
	
*/

#ifndef APKeypad_h
#define APKeypad_h

#include <Arduino.h>

class APKeypad {
	public:
 		APKeypad();
  		void send_msg(char* msg);
		void read_msg(char* msg);
};

class APNumpad : public APKeypad {
	public:
 		APNumpad();
  		void draw_buttons();
		char* det_touch();
};

#endif

