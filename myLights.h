// Main loop managing the chaos
AUTOMATION(2, "Master Flicker Loop")
    WHILE(1)
        IF(CTRL_BTN_15V)
            // Wait anywhere from 4 to 12 seconds between neighborhood events
            DELAYRANDOM(6000, 18000)
            
            // Safety check before launching a sequence
            IF(CTRL_BTN_15V)
                // Randomly branches out to one of the numbered sequences below. 
                // You can list up to all 20 sequence IDs here separated by spaces.
                RANDOM_CHOOSE(101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120) 
            ENDIF
        ELSE
            // Idle safely if the control panel switch is off
            DELAY(1000)
        ENDIF
    DONE
DONE

// --- STREETLIGHT 1: The Fast Arc Blink ---
SEQUENCE(101)
    ANALOG(STREETLIGHT_1, 200)
    DELAY(90)
    ANALOG(STREETLIGHT_1, 4095)
    DELAY(40)
    ANALOG(STREETLIGHT_1, 800)
    DELAY(120)
    ANALOG(STREETLIGHT_1, 4095)
DONE

// --- STREETLIGHT 2: The Brownout Fade ---
SEQUENCE(102)
    FADE(STREETLIGHT_2, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_2, 4095, 500)   // Lazy recovery back up
DONE

// --- STREETLIGHT 3: The Complete Blackout ---
SEQUENCE(103)
    ANALOG(STREETLIGHT_3, 0)         // Total darkness
    DELAY(250)
    ANALOG(STREETLIGHT_3, 4095)
DONE

// --- STREETLIGHT 4: The Fast Arc Blink ---
SEQUENCE(104)
    ANALOG(STREETLIGHT_4, 200)
    DELAY(90)
    ANALOG(STREETLIGHT_4, 4095)
    DELAY(40)
    ANALOG(STREETLIGHT_4, 800)
    DELAY(120)
    ANALOG(STREETLIGHT_4, 4095)
DONE

// --- STREETLIGHT 5: The Brownout Fade ---
SEQUENCE(105)
    FADE(STREETLIGHT_5, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_5, 4095, 500)   // Lazy recovery back up
DONE

// --- STREETLIGHT 6: The Complete Blackout ---
SEQUENCE(106)
    ANALOG(STREETLIGHT_6, 0)         // Total darkness
    DELAY(250)
    ANALOG(STREETLIGHT_6, 4095)
DONE

// --- STREETLIGHT 7: The Fast Arc Blink ---
SEQUENCE(107)
    ANALOG(STREETLIGHT_7, 200)
    DELAY(90)
    ANALOG(STREETLIGHT_7, 4095)
    DELAY(40)
    ANALOG(STREETLIGHT_7, 800)
    DELAY(120)
    ANALOG(STREETLIGHT_7, 4095)
DONE

// --- STREETLIGHT 8: The Brownout Fade ---
SEQUENCE(108)
    FADE(STREETLIGHT_8, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_8, 4095, 500)   // Lazy recovery back up
DONE

// --- STREETLIGHT 9: The Complete Blackout ---
SEQUENCE(109)
    ANALOG(STREETLIGHT_9, 0)         // Total darkness
    DELAY(250)
    ANALOG(STREETLIGHT_9, 4095)
DONE

// --- STREETLIGHT 10: The Fast Arc Blink ---
SEQUENCE(110)
    ANALOG(STREETLIGHT_10, 200)
    DELAY(90)
    ANALOG(STREETLIGHT_10, 4095)
    DELAY(40)
    ANALOG(STREETLIGHT_10, 800)
    DELAY(120)
    ANALOG(STREETLIGHT_10, 4095)
DONE

// --- STREETLIGHT 11: The Brownout Fade ---
SEQUENCE(111)
    FADE(STREETLIGHT_11, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_11, 4095, 500)   // Lazy recovery back up
DONE

// --- STREETLIGHT 12: The Complete Blackout ---
SEQUENCE(112)
    ANALOG(STREETLIGHT_12, 0)         // Total darkness
    DELAY(250)
    ANALOG(STREETLIGHT_12, 4095)
DONE

// --- STREETLIGHT 13: The Fast Arc Blink ---
SEQUENCE(113)
    ANALOG(STREETLIGHT_13, 200)
    DELAY(90)
    ANALOG(STREETLIGHT_13, 4095)
    DELAY(40)
    ANALOG(STREETLIGHT_13, 800)
    DELAY(120)
    ANALOG(STREETLIGHT_13, 4095)
DONE

// --- STREETLIGHT 14: The Brownout Fade ---
SEQUENCE(114)
    FADE(STREETLIGHT_14, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_14, 4095, 500)   // Lazy recovery back up
DONE

// --- STREETLIGHT 15: The Complete Blackout ---
SEQUENCE(115)
    ANALOG(STREETLIGHT_15, 0)         // Total darkness
    DELAY(250)
    ANALOG(STREETLIGHT_15, 4095)
DONE

// --- STREETLIGHT 16: The Fast Arc Blink ---
SEQUENCE(116)
    ANALOG(STREETLIGHT_16, 200)
    DELAY(90)
    ANALOG(STREETLIGHT_16, 4095)
    DELAY(40)
    ANALOG(STREETLIGHT_16, 800)
    DELAY(120)
    ANALOG(STREETLIGHT_16, 4095)
DONE

// --- STREETLIGHT 17: The Brownout Fade ---
SEQUENCE(117)
    FADE(STREETLIGHT_17, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_17, 4095, 500)   // Lazy recovery back up
DONE

// --- STREETLIGHT 18: The Complete Blackout ---
SEQUENCE(118)
    ANALOG(STREETLIGHT_18, 0)         // Total darkness
    DELAY(250)
    ANALOG(STREETLIGHT_18, 4095)
DONE

// --- STREETLIGHT 19: The Fast Arc Blink ---
SEQUENCE(119)
    ANALOG(STREETLIGHT_19, 200)
    DELAY(90)
    ANALOG(STREETLIGHT_19, 4095)
    DELAY(40)
    ANALOG(STREETLIGHT_19, 800)
    DELAY(120)
    ANALOG(STREETLIGHT_19, 4095)
DONE

// --- STREETLIGHT 20: The Brownout Fade ---
SEQUENCE(120)
    FADE(STREETLIGHT_20, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_20, 4095, 500)   // Lazy recovery back up
DONE