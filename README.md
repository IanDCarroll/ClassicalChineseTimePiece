# ClassicalChineseTimePiece
Arduino LED clock for Classical Chinese Temporal Reckoning

Currently It is a stopwatch that keeps the rhythm of time in Classical Chinese units by alternately blinking LEDs.

__Red represents the Miao:__ 
144ms in a Miao, and 100 Miao in a Fen, so 0.144 seconds (They're a pretty quick tempo)  
__Yellow represents the Fen:__ 
100 Miao in a Fen and 60 Fen in a Ke, so 14.4 seconds (Modern Chinese use the same word for "Minute", 60 seconds)  
__Green represents the Ke:__
60 Fen in a Ke and 100 Ke in a Day, so 14.4 minutes. (Modern Chinese use the same word for "Quarter Hour", 15 Minutes)

![classical_chinese_timepiece](https://cloud.githubusercontent.com/assets/14797009/21515441/9e7845b0-cc84-11e6-85f3-2bdea55e3bf5.png)

Units worth considering in the future:
 - Shi: 500 Fen in a Shi, and 12 Shi in a Day, so 120 minutes. (These only coincide with Ke at 6 and 12 o'clock, am & pm.)
 - XiaoKe: 10 Fen in a XiaoKe, and 6 XiaoKe in a Ke, and 50 XiaoKe in a Shi, so 2.4 minutes. (Xiao means "small". A longer unit that, like Fen, can divide both Shi and Ke, but also is annoying to deal with, and confusing. _"Do you mean Ke or little Ke?"_ Not a few emperors attempted to abolish XiaoKe to little success.)
 
 Also worth considering: 
  - A Digital display. 
  - A chime to herald the passing of Shi and Ke.
