#include "EXRAIL2.h"

STEALTH_GLOBAL(
void displayMyRoster() {
    int16_t line = 8; // LCD lines are 0-indexed (0 to 3 on a 1604)
    
    for (int16_t r = 0; ; r++) {
        int16_t cabid = GETHIGHFLASHW(RMFT2::rosterIdList, r * 2);
        
        if (cabid == INT16_MAX) {
            break; // End of flash roster array
        }
        
        if (cabid > 0) {
            StringFormatter::lcd(line, F("(%04d) %S"), cabid, RMFT2::getRosterName(cabid));
            line++;
        }
    }
}
)

AUTOSTART
  HAL(UserAddin,displayMyRoster,60000)
  SET_TRACK(A,MAIN)
  SET_TRACK(B,PROG)
  CALL(1)
DONE

HAL(Bitmap, 2000, 100)

#include "myAliases.h"
#include "myTrains.h"
#include "myTurnouts.h"
#include "myControlPanel.h"
#include "myLights.h"

DONE

SEQUENCE(1)
  PRINT("Startup sequence")
  CLOSE(TRN1)
  CLOSE(TRN2)
  CLOSE(TRN3)
  CLOSE(TRN4)
  CLOSE(TRN5)
  CLOSE(TRN6)
  CLOSE(TRN7)
  CLOSE(TRN8)
  CLOSE(TRN9)
  CLOSE(TRN10)
  CLOSE(TRN11)
  CLOSE(TRN12)
  CLOSE(TRN13)
  CLOSE(TRN14)
  SET_POWER(A, ON)
  SET_POWER(B, OFF)
RETURN

ONBUTTON(53)
  SET_POWER(A, OFF)
  SET_POWER(B, OFF)
DONE