! PR 14831
       CHARACTER*4 BLANK
       CHARACTER*10 ACCESS
       OPEN(UNIT=9,ACCESS='SEQUENTIAL')
       INQUIRE(UNIT=9,ACCESS=ACCESS,BLANK=BLANK)
       IF(BLANK.NE.'NULL') STOP 1
       IF(ACCESS.NE.'SEQUENTIAL') STOP 2
       CLOSE(UNIT=9,STATUS='DELETE')
       END