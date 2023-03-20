#ifndef _MACROF_H
#define _MACROF_H

/**
 * ABS(x): computes the absolute value of a number x
 * File: 3-function_like_macro.h
 * Auth: Belove Olusola 
 * Desc: Header file containing a function-like macro ABS(x) 
 *       that computes the absolute value of a number x
*/
#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))

#endif