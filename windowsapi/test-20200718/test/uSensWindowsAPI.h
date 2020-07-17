#include <windows.h>
#include <iostream>


/*    1、get Screen resolution    */
void getScreen(POINT &Screen);

/*    2、set mouse location       */
void setMouseMove(int x, int y);

/*    3、mouse click  eventID
1、eventID = 0:  click
2、eventID = 1:  double click
*/
void MouseClick(int eventID);

