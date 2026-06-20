// Main loop managing the chaos
SEQUENCE(2)
    IF(CTRL_BTN_15V)
        // Wait anywhere from 4 to 12 seconds between neighborhood events
        DELAYRANDOM(6000, 18000)
        
        // Safety check before launching a sequence
        IF(CTRL_BTN_15V)
            // Randomly branches out to one of the numbered sequences below. 
            // You can list up to all 20 sequence IDs here separated by spaces.
            IFRANDOM(40)
                RANDOM_CALL(101, 102, 103, 104, 105, 106, 107, 108) 
            ENDIF
            IFRANDOM(40)
                RANDOM_CALL(109, 110, 111, 112, 113, 114, 115, 116)
            ENDIF
            IFRANDOM(20)
                RANDOM_CALL(117, 118, 119, 120)
            ENDIF
        ENDIF
    ELSE
        // Idle safely if the control panel switch is off
        DELAY(1000)
    ENDIF
    FOLLOW(2)  // Loop back to the top of this sequence

// --- STREETLIGHT 1: The Fast Arc Blink ---
SEQUENCE(101)
    FADE(STREETLIGHT_1, 200, 1)
    DELAY(90)
    FADE(STREETLIGHT_1, 4095, 1)
    DELAY(40)
    FADE(STREETLIGHT_1, 800, 1)
    DELAY(120)
    FADE(STREETLIGHT_1, 4095, 1)
    RETURN

// --- STREETLIGHT 2: The Brownout Fade ---
SEQUENCE(102)
    FADE(STREETLIGHT_2, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_2, 4095, 500)   // Lazy recovery back up
    RETURN

// --- STREETLIGHT 3: The Complete Blackout ---
SEQUENCE(103)
    FADE(STREETLIGHT_3, 0, 1)         // Total darkness
    DELAY(250)
    FADE(STREETLIGHT_3, 4095, 1)
    RETURN

// --- STREETLIGHT 4: The Fast Arc Blink ---
SEQUENCE(104)
    FADE(STREETLIGHT_4, 200, 1)
    DELAY(90)
    FADE(STREETLIGHT_4, 4095, 1)
    DELAY(40)
    FADE(STREETLIGHT_4, 800, 1)
    DELAY(120)
    FADE(STREETLIGHT_4, 4095, 1)
    RETURN

// --- STREETLIGHT 5: The Brownout Fade ---
SEQUENCE(105)
    FADE(STREETLIGHT_5, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_5, 4095, 500)   // Lazy recovery back up
    RETURN

// --- STREETLIGHT 6: The Complete Blackout ---
SEQUENCE(106)
    FADE(STREETLIGHT_6, 0, 1)         // Total darkness
    DELAY(250)
    FADE(STREETLIGHT_6, 4095, 1)
    RETURN

// --- STREETLIGHT 7: The Fast Arc Blink ---
SEQUENCE(107)
    FADE(STREETLIGHT_7, 200, 1)
    DELAY(90)
    FADE(STREETLIGHT_7, 4095, 1)
    DELAY(40)
    FADE(STREETLIGHT_7, 800, 1)
    DELAY(120)
    FADE(STREETLIGHT_7, 4095, 1)
    RETURN

// --- STREETLIGHT 8: The Brownout Fade ---
SEQUENCE(108)
    FADE(STREETLIGHT_8, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_8, 4095, 500)   // Lazy recovery back up
    RETURN

// --- STREETLIGHT 9: The Complete Blackout ---
SEQUENCE(109)
    FADE(STREETLIGHT_9, 0, 1)         // Total darkness
    DELAY(250)
    FADE(STREETLIGHT_9, 4095, 1)
    RETURN

// --- STREETLIGHT 10: The Fast Arc Blink ---
SEQUENCE(110)
    FADE(STREETLIGHT_10, 200, 1)
    DELAY(90)
    FADE(STREETLIGHT_10, 4095, 1)
    DELAY(40)
    FADE(STREETLIGHT_10, 800, 1)
    DELAY(120)
    FADE(STREETLIGHT_10, 4095, 1)
    RETURN

// --- STREETLIGHT 11: The Brownout Fade ---
SEQUENCE(111)
    FADE(STREETLIGHT_11, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_11, 4095, 500)   // Lazy recovery back up
    RETURN

// --- STREETLIGHT 12: The Complete Blackout ---
SEQUENCE(112)
    FADE(STREETLIGHT_12, 0, 1)         // Total darkness
    DELAY(250)
    FADE(STREETLIGHT_12, 4095, 1)
    RETURN

// --- STREETLIGHT 13: The Fast Arc Blink ---
SEQUENCE(113)
    FADE(STREETLIGHT_13, 200, 1)
    DELAY(90)
    FADE(STREETLIGHT_13, 4095, 1)
    DELAY(40)
    FADE(STREETLIGHT_13, 800, 1)
    DELAY(120)
    FADE(STREETLIGHT_13, 4095, 1)
    RETURN

// --- STREETLIGHT 14: The Brownout Fade ---
SEQUENCE(114)
    FADE(STREETLIGHT_14, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_14, 4095, 500)   // Lazy recovery back up
    RETURN

// --- STREETLIGHT 15: The Complete Blackout ---
SEQUENCE(115)
    FADE(STREETLIGHT_15, 0, 1)         // Total darkness
    DELAY(250)
    FADE(STREETLIGHT_15, 4095, 1)
    RETURN

// --- STREETLIGHT 16: The Fast Arc Blink ---
SEQUENCE(116)
    FADE(STREETLIGHT_16, 200, 1)
    DELAY(90)
    FADE(STREETLIGHT_16, 4095, 1)
    DELAY(40)
    FADE(STREETLIGHT_16, 800, 1)
    DELAY(120)
    FADE(STREETLIGHT_16, 4095, 1)
    RETURN

// --- STREETLIGHT 17: The Brownout Fade ---
SEQUENCE(117)
    FADE(STREETLIGHT_17, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_17, 4095, 500)   // Lazy recovery back up
    RETURN

// --- STREETLIGHT 18: The Complete Blackout ---
SEQUENCE(118)
    FADE(STREETLIGHT_18, 0, 1)         // Total darkness
    DELAY(250)
    FADE(STREETLIGHT_18, 4095, 1)
    RETURN

// --- STREETLIGHT 19: The Fast Arc Blink ---
SEQUENCE(119)
    FADE(STREETLIGHT_19, 200, 1)
    DELAY(90)
    FADE(STREETLIGHT_19, 4095, 1)
    DELAY(40)
    FADE(STREETLIGHT_19, 800, 1)
    DELAY(120)
    FADE(STREETLIGHT_19, 4095, 1)
    RETURN

// --- STREETLIGHT 20: The Brownout Fade ---
SEQUENCE(120)
    FADE(STREETLIGHT_20, 1000, 300)   // Fast fade down
    DELAY(400)
    FADE(STREETLIGHT_20, 4095, 500)   // Lazy recovery back up
    RETURN