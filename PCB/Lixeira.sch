EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:Lixeira-cache
EELAYER 27 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date "27 jul 2015"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L LED D1
U 1 1 55A80F62
P 6700 5500
F 0 "D1" H 6700 5600 50  0000 C CNN
F 1 "LED" H 6700 5400 50  0000 C CNN
F 2 "~" H 6700 5500 60  0000 C CNN
F 3 "~" H 6700 5500 60  0000 C CNN
	1    6700 5500
	0    -1   -1   0   
$EndComp
$Comp
L LED D3
U 1 1 55A81143
P 7200 5500
F 0 "D3" H 7200 5600 50  0000 C CNN
F 1 "LED" H 7200 5400 50  0000 C CNN
F 2 "~" H 7200 5500 60  0000 C CNN
F 3 "~" H 7200 5500 60  0000 C CNN
	1    7200 5500
	0    -1   -1   0   
$EndComp
$Comp
L LED D2
U 1 1 55A81152
P 6950 5500
F 0 "D2" H 6950 5600 50  0000 C CNN
F 1 "LED" H 6950 5400 50  0000 C CNN
F 2 "~" H 6950 5500 60  0000 C CNN
F 3 "~" H 6950 5500 60  0000 C CNN
	1    6950 5500
	0    -1   -1   0   
$EndComp
$Comp
L LED D4
U 1 1 55A81412
P 7450 5500
F 0 "D4" H 7450 5600 50  0000 C CNN
F 1 "LED" H 7450 5400 50  0000 C CNN
F 2 "~" H 7450 5500 60  0000 C CNN
F 3 "~" H 7450 5500 60  0000 C CNN
	1    7450 5500
	0    -1   -1   0   
$EndComp
$Comp
L CONN_3 K2
U 1 1 55A81613
P 6250 6900
F 0 "K2" V 6200 6900 50  0000 C CNN
F 1 "CONN_3" V 6300 6900 40  0000 C CNN
F 2 "" H 6250 6900 60  0000 C CNN
F 3 "" H 6250 6900 60  0000 C CNN
	1    6250 6900
	0    1    1    0   
$EndComp
$Comp
L VCC #PWR01
U 1 1 55A816CE
P 5900 6150
F 0 "#PWR01" H 5900 6250 30  0001 C CNN
F 1 "VCC" H 5900 6250 30  0000 C CNN
F 2 "" H 5900 6150 60  0000 C CNN
F 3 "" H 5900 6150 60  0000 C CNN
	1    5900 6150
	-1   0    0    1   
$EndComp
$Comp
L CONN_3 K1
U 1 1 55A81781
P 5700 6900
F 0 "K1" V 5650 6900 50  0000 C CNN
F 1 "CONN_3" V 5750 6900 40  0000 C CNN
F 2 "" H 5700 6900 60  0000 C CNN
F 3 "" H 5700 6900 60  0000 C CNN
	1    5700 6900
	0    1    1    0   
$EndComp
$Comp
L R R5
U 1 1 55A81A15
P 7450 6200
F 0 "R5" V 7530 6200 40  0000 C CNN
F 1 "R" V 7457 6201 40  0000 C CNN
F 2 "~" V 7380 6200 30  0000 C CNN
F 3 "~" H 7450 6200 30  0000 C CNN
	1    7450 6200
	-1   0    0    1   
$EndComp
$Comp
L R R4
U 1 1 55A81A24
P 7250 6200
F 0 "R4" V 7330 6200 40  0000 C CNN
F 1 "R" V 7257 6201 40  0000 C CNN
F 2 "~" V 7180 6200 30  0000 C CNN
F 3 "~" H 7250 6200 30  0000 C CNN
	1    7250 6200
	-1   0    0    1   
$EndComp
$Comp
L R R3
U 1 1 55A81A33
P 7050 6200
F 0 "R3" V 7130 6200 40  0000 C CNN
F 1 "R" V 7057 6201 40  0000 C CNN
F 2 "~" V 6980 6200 30  0000 C CNN
F 3 "~" H 7050 6200 30  0000 C CNN
	1    7050 6200
	-1   0    0    1   
$EndComp
$Comp
L R R2
U 1 1 55A81A42
P 5700 3900
F 0 "R2" V 5780 3900 40  0000 C CNN
F 1 "R" V 5707 3901 40  0000 C CNN
F 2 "~" V 5630 3900 30  0000 C CNN
F 3 "~" H 5700 3900 30  0000 C CNN
	1    5700 3900
	0    -1   -1   0   
$EndComp
$Comp
L C C1
U 1 1 55A81A51
P 5100 4800
F 0 "C1" H 5100 4900 40  0000 L CNN
F 1 "C" H 5106 4715 40  0000 L CNN
F 2 "~" H 5138 4650 30  0000 C CNN
F 3 "~" H 5100 4800 60  0000 C CNN
	1    5100 4800
	1    0    0    -1  
$EndComp
$Comp
L CONN_2 P1
U 1 1 55A81A89
P 4600 6000
F 0 "P1" V 4550 6000 40  0000 C CNN
F 1 "CONN_2" V 4650 6000 40  0000 C CNN
F 2 "" H 4600 6000 60  0000 C CNN
F 3 "" H 4600 6000 60  0000 C CNN
	1    4600 6000
	-1   0    0    1   
$EndComp
$Comp
L POT RV1
U 1 1 55A81BDD
P 5100 5200
F 0 "RV1" H 5100 5100 50  0000 C CNN
F 1 "POT" H 5100 5200 50  0000 C CNN
F 2 "~" H 5100 5200 60  0000 C CNN
F 3 "~" H 5100 5200 60  0000 C CNN
	1    5100 5200
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 55A81C5D
P 5100 4150
F 0 "R1" V 5180 4150 40  0000 C CNN
F 1 "R" V 5107 4151 40  0000 C CNN
F 2 "~" V 5030 4150 30  0000 C CNN
F 3 "~" H 5100 4150 30  0000 C CNN
	1    5100 4150
	-1   0    0    1   
$EndComp
Text Notes 7500 5250 1    60   ~ 0
L.power\n
Text Notes 7250 5250 1    60   ~ 0
L.Verde\n\n
Text Notes 7000 5250 1    60   ~ 0
L.Amarelo\n
Text Notes 6750 5250 1    60   ~ 0
L.Vermelho\n
$Comp
L BC307 Q1
U 1 1 55A90882
P 7100 4100
F 0 "Q1" H 7300 4000 50  0000 C CNN
F 1 "BC307" H 7350 4250 50  0000 C CNN
F 2 "" H 7100 4100 60  0000 C CNN
F 3 "" H 7100 4100 60  0000 C CNN
	1    7100 4100
	0    1    1    0   
$EndComp
Text Notes 7500 6150 1    60   ~ 0
1
Text Notes 7300 6150 1    55   Italic 0
2
Text Notes 7100 6150 1    55   Italic 0
3
$Comp
L CONN_1 P2
U 1 1 55A90C9A
P 5300 3750
F 0 "P2" H 5380 3750 40  0000 L CNN
F 1 "CONN_1" H 5300 3805 30  0001 C CNN
F 2 "" H 5300 3750 60  0000 C CNN
F 3 "" H 5300 3750 60  0000 C CNN
	1    5300 3750
	0    -1   -1   0   
$EndComp
Text Notes 6300 7350 1    60   ~ 0
S. Pir\n
NoConn ~ 5700 6550
NoConn ~ 6250 6550
Text Notes 5750 7600 1    60   ~ 0
Servo Motor\n
NoConn ~ 4850 5200
$Comp
L CONN_1 P?
U 1 1 55B6BA8F
P 5200 6900
F 0 "P?" H 5280 6900 40  0000 L CNN
F 1 "CONN_1" H 5200 6955 30  0001 C CNN
F 2 "" H 5200 6900 60  0000 C CNN
F 3 "" H 5200 6900 60  0000 C CNN
	1    5200 6900
	0    1    1    0   
$EndComp
Wire Wire Line
	7450 5950 7450 5700
Wire Wire Line
	7250 5950 7200 5950
Wire Wire Line
	7200 5950 7200 5700
Wire Wire Line
	7200 5800 6950 5800
Wire Wire Line
	6950 5800 6950 5700
Connection ~ 7200 5800
Wire Wire Line
	7050 5950 6700 5950
Wire Wire Line
	6700 5950 6700 5700
Wire Wire Line
	7450 5300 7450 4200
Wire Wire Line
	7450 4200 7300 4200
Wire Wire Line
	7200 4500 7200 5350
Wire Wire Line
	7200 4500 6900 4500
Wire Wire Line
	6900 4500 6900 4100
Wire Wire Line
	6950 5300 6950 4600
Wire Wire Line
	6950 4600 6850 4600
Wire Wire Line
	5100 3900 5450 3900
Connection ~ 5300 3900
Wire Wire Line
	6850 4600 6850 4200
Wire Wire Line
	6850 4200 6900 4200
Wire Wire Line
	6700 5300 6700 4100
Wire Wire Line
	6700 4100 6900 4100
Connection ~ 6900 4200
Wire Wire Line
	5100 4400 5100 4600
Wire Wire Line
	5100 5000 5350 5000
Wire Wire Line
	5350 5000 5350 5200
Wire Wire Line
	5100 5050 5100 5900
Wire Wire Line
	5100 5900 4950 5900
Wire Wire Line
	4950 6100 5050 6100
Connection ~ 7450 6450
Connection ~ 7250 6450
Wire Wire Line
	5950 3900 7100 3900
Wire Wire Line
	6800 6450 7450 6450
Wire Wire Line
	6800 6200 6800 6450
Connection ~ 7050 6450
Wire Wire Line
	6350 6550 6350 6300
Wire Wire Line
	6350 6300 5900 6300
Wire Wire Line
	5900 6300 5900 6150
Wire Wire Line
	5800 6150 5800 6550
Connection ~ 5900 6200
Wire Wire Line
	6150 6550 5950 6550
Connection ~ 7200 5300
Wire Wire Line
	6800 6200 6000 6200
Wire Wire Line
	6000 6200 6000 6150
Wire Wire Line
	6000 6150 5800 6150
Connection ~ 5900 6150
Wire Wire Line
	5050 6100 5050 6750
Wire Wire Line
	5050 6750 5350 6750
Wire Wire Line
	5950 7100 5350 7100
Wire Wire Line
	5350 7100 5350 6750
Connection ~ 5200 6750
Wire Wire Line
	5950 6550 5950 7100
Wire Wire Line
	5600 6550 5200 6550
Wire Wire Line
	5200 6550 5200 6750
$EndSCHEMATC
