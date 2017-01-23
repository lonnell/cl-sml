#define SGC

#define EXTER extern
/* h/gclincl.h.  Generated from gclincl.h.in by configure.  */
/* h/gclincl.h.in.  Generated from configure.in by autoheader.  */
/* define where the heap could begin.   Normally should
be the smallest value returned by sbrk().   Underestimating
by 10-20 megabytes is not a problem. */

#define DBEGIN 0x8000000 /* where data begins */


/* the size of the page tables for gcl.  Each page is PAGESIZE which
is usually 4K or 8K bytes.  From 1 to 3 bytes per page are
preallocated in a table at compile time.  this must be a power of 2 if
SGC is enabled.  */

#define MAXPAGE (128*1024*(SIZEOF_LONG>>2)/(1<<(PAGEWIDTH-12)))
#define VSSIZE 128*1024
#define BDSSIZE 2*1024
#define IHSSIZE 4*1024
#define FRSSIZE 4*1024

#define HOLEPAGE (MAXPAGE/10)

/* check to see if getcwd exists
*/
#define HAVE_GETCWD 1


/* if we dont have USEGETCWD, we will use GETWD unless following defined
*/
#define HAVE_GETWD 1


/* no gettimeofday function */

/* #undef NO_GETTOD */

/* define if have <asm/signal.h> */
#define HAVE_ASM_SIGNAL_H 1

/* define if have <asm/sigcontext.h> */
#define HAVE_ASM_SIGCONTEXT_H 1

/* define if have struct sigcontext in one of above */
/* #undef HAVE_SIGCONTEXT */


/* define if have <sys/ioctl.h> */
#define HAVE_SYS_IOCTL_H 1

/* define if we can use the file nsocket.c   */
#define HAVE_NSOCKET 1

#ifndef HAVE_ALLOCA
/* define this if you have alloca */
#define HAVE_ALLOCA 1
#endif


/* define if need alloca.h */
/* #undef NEED_ALLOCA_H */

#ifdef NEED_ALLOCA_H
#include <alloca.h>
#endif


/* define LISTEN_USE_FCNTL  if we can check for input using fcntl */
#define LISTEN_USE_FCNTL 1

/* if signal.h alone contains the stuff necessary for sgc */
#define SIGNAL_H_HAS_SIGCONTEXT 1


/* define if the profil system call is not defined in libc */
/* #undef NO_PROFILE */


/* define if the _cleanup() function exists and should be called
   before saving */
/* #define USE_CLEANUP  */


/* define if BIG_ENDIAN or LITTLE_ENDIAN is defined by including
   the standard includes */
/* #define ENDIAN_ALREADY_DEFINED */

/* define if SV_ONSTACK is defined in signal.h */
#define HAVE_SV_ONSTACK 1


/*
   define to be a typical stack address.   We use this to decide
   whether we can use a cheap test for NULL_OR_ON_C_STACK, or whether
   it has to be more complex..

*/

#define CSTACK_ADDRESS -1075718936 

/* define if SIGSYS is defined in signal.h */

#define HAVE_SIGSYS 1

/* define if SIGEMT is defined in signal.h */

/* #undef HAVE_SIGEMT */


/* define if setenv  is define */
#define HAVE_SETENV 1

/* define if putenv  is define */
/* #undef HAVE_PUTENV */


/* define if long long int works to multiply to ints, */

#define HAVE_LONG_LONG 1

/* define if want to use GMP */
#define GMP 1

/* have a broken version of C compiler which makes bad code for -O4 */
/* #undef BROKEN_O4_OPT */

/*  See if gettimeofday is declared in the <sys/time.h> header file. */
/*  if not, set the GETTOD_NOT_DECLARED flag so that tclPort.h can */
/*  declare it. */

#define GETTOD_NOT_DECLARED 1

/* #undef HAVE_BSDGETTIMEOFDAY */

/* #undef NO_UNAME */

/*  FIONBIO vs. O_NONBLOCK for nonblocking I/O */
/* #undef USE_FIONBIO */

/* readline support */
#define HAVE_READLINE 1

/* bfd support */
/* #undef HAVE_LIBBFD */
/* #undef NEED_CONST */
#define HAVE_BFD_BOOLEAN

#ifdef HAVE_BFD_BOOLEAN
#define MY_BFD_BOOLEAN bfd_boolean
#define MY_BFD_FALSE FALSE
#define MY_BFD_TRUE TRUE
#else
#define MY_BFD_BOOLEAN boolean
#define MY_BFD_FALSE false
#define MY_BFD_TRUE true
#endif
/* isnormal check */
#define HAVE_ISNORMAL 1

/* #undef HAVE_IEEEFP */

#ifdef IN_NUM_CO
#ifdef HAVE_ISNORMAL
#define _GNU_SOURCE
#include <math.h>
#define ISNORMAL(a) isnormal(a)
#else
#ifdef HAVE_IEEEFP
#include <ieeefp.h>
#define ISNORMAL(a) (fpclass(a)>=FP_NZERO)
#else
#include <math.h>
#define ISNORMAL(a) ((sizeof (a) == sizeof (float)) ? \
		     gcl_isnormal_float(a) : \
		     gcl_isnormal_double(a))
#endif
#endif
#endif

#define HAVE_ISFINITE 1
/* #undef HAVE_FINITE */

#ifdef NEED_ISFINITE
#ifdef HAVE_ISFINITE
#define _GNU_SOURCE
#include <math.h>
#define ISFINITE(a) isfinite(a)
#else
#ifdef HAVE_FINITE
#include <math.h>
#include <ieeefp.h>
#define ISFINITE(a) finite(a)
#else
#error "No isfinite found"
#endif
#endif
#endif

#define HAVE_VALUES_H 1
#define HAVE_FLOAT_H 1

#ifdef IN_NUM_CO
#ifdef HAVE_VALUES_H
#include <values.h>
#endif
#ifdef HAVE_FLOAT_H
#include <float.h>
#endif
#endif



/* math.h for definitions in generated C code */
#define HAVE_MATH_H 1

#ifdef HAVE_MATH_H
#include <math.h>
#endif

#define LITTLE_END 1

#define PAGEWIDTH 12

/*  #ifdef PAGEWIDTH */
/*  #undef PAGESIZE */
/*  #define PAGESIZE (1<<PAGEWIDTH) */
/*  #endif */

#define SIZEOF_LONG 4

/* #undef USE_DLOPEN */

#define MP_LIMB_BYTES 4

/* #undef ANSI_COMMON_LISP */

/* #undef __SHORT_LIMB */
/* #undef __LONG_LONG_LIMB */

/* #undef HAVE_JAPI_H */

#define HAVE_XDR 1
/* #undef ENDIAN_ALREADY_DEFINED */
/* #undef USE_CLEANUP */
#define SIZEOF_CONTBLOCK 8

/* #undef GCL_GPROF */
#define HAVE_DECL_RL_COMPLETION_MATCHES 1
#define HAVE_RL_COMPENTRY_FUNC_T 1
#define HAVE_GNU_LD 1
#define CAN_UNRANDOMIZE_SBRK 1
#define HOST_CPU "I486"
#define HOST_KERNEL "LINUX"
#define HOST_SYSTEM "GNU"
/* #undef GCL_GPROF_START */
#define HZ 100
/* #undef ADDR_NO_RANDOMIZE */
/* #undef LEADING_UNDERSCORE */
#define HAVE_XGCL 1
/* #undef HAVE_SYS_SOCKIO_H */
/* #undef HAVE_MALLOC_MALLOC_H */
/* #undef HAVE_OBJC_MALLOC_H */
/* #undef HAVE_OUTPUT_BFD */
#define HAVE_BUILTIN_CLEAR_CACHE 1

/* Define to 1 if you have the <asm/sigcontext.h> header file. */
#define HAVE_ASM_SIGCONTEXT_H 1

/* Define to 1 if you have the <asm/signal.h> header file. */
#define HAVE_ASM_SIGNAL_H 1

/* Define to 1 if you have the <elf_abi.h> header file. */
/* #undef HAVE_ELF_ABI_H */

/* Define to 1 if you have the <elf.h> header file. */
#define HAVE_ELF_H 1

/* Have finite function */
/* #undef HAVE_FINITE */

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getwd' function. */
#define HAVE_GETWD 1

/* Have ieeefp fpclass function */
/* #undef HAVE_IEEEFP */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Have isfinite function */
#define HAVE_ISFINITE 1

/* Have isnormal function */
#define HAVE_ISNORMAL 1

/* Define to 1 if you have the <japi.h> header file. */
/* #undef HAVE_JAPI_H */

/* memalign element present */
/* #undef HAVE_MALLOC_ZONE_MEMALIGN */

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define to 1 if you have the <rpc/rpc.h> header file. */
/* #undef HAVE_RPC_RPC_H */

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
/* #undef HAVE_STDLIB_H */

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
/* #undef HAVE_STRING_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/types.h> header file. */
/* #undef HAVE_SYS_TYPES_H */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <values.h> header file. */
#define HAVE_VALUES_H 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* staticly linked images */
/* #undef STATIC_LINKING */

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */
#include <stdarg.h>
#define _VA_LIST_DEFINED

#include <setjmp.h>
#include <stdio.h>

/*  #define	endp(obje)	endp1(obje) */
			   
#define STSET(type,x,i,val)  do{SGC_TOUCH(x);STREF(type,x,i) = (val);} while(0)


#ifndef NEW_LISP
#define t_doublefloat t_longfloat
#endif

enum type {
  t_cons,
  t_start = 0,
  t_fixnum,
  t_bignum,
  t_ratio,
  t_shortfloat,
  t_doublefloat,
  t_complex,
  t_character,
  t_symbol,
  t_package,
  t_hashtable,
  t_array,
  t_vector,
  t_string,
  t_bitvector,
  t_structure,
  t_stream,
  t_random,
  t_readtable,
  t_pathname,
  t_cfun,
  t_cclosure,
  t_sfun,
  t_gfun,
  t_vfun,
  t_afun,
  t_closure,
  t_cfdata,
  t_spice,
  t_end,
  t_contiguous,
  t_relocatable,
  t_other
};


enum signals_allowed_values {
  sig_none,
  sig_normal,
  sig_try_to_delay,
  sig_safe,
  sig_at_read,
  sig_use_signals_allowed_value

};

  
#ifdef __SHORT_LIMB
typedef unsigned int		mp_limb_t;
#else
#ifdef __LONG_LONG_LIMB
typedef unsigned long long int	mp_limb_t;
#else
typedef unsigned long int	mp_limb_t;
#endif
#endif

typedef mp_limb_t *		mp_ptr;

typedef struct
{
  int _mp_alloc;		/* Number of *limbs* allocated and pointed
				   to by the _mp_d field.  */
  int _mp_size;			/* abs(_mp_size) is the number of limbs the
				   last field points to.  If _mp_size is
				   negative this is a negative number.  */
  mp_limb_t *_mp_d;		/* Pointer to the limbs.  */
} __mpz_struct;

typedef __mpz_struct MP_INT;

/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
	object.h
*/

/*
	Some system constants.
*/

#define	TRUE		1	/*  boolean true value  */
#define	FALSE		0	/*  boolean false value  */

#define FIRSTWORD unsigned char  t,flag; char s,m

#define	NBPP		4	/*  number of bytes per pointer  */

#ifndef PAGEWIDTH
#define	PAGEWIDTH	11	/*  page width  */
#endif
				/*  log2(PAGESIZE)  */
#undef PAGESIZE
#define	PAGESIZE	(1 << PAGEWIDTH)	/*  page size in bytes  */


#define	CHCODELIM	256	/*  character code limit  */
				/*  ASCII character set  */
#define	CHFONTLIM	1	/*  character font limit  */
#define	CHBITSLIM	1	/*  character bits limit  */
#define	CHCODEFLEN	8	/*  character code field length  */
#define	CHFONTFLEN	0	/*  character font field length  */
#define	CHBITSFLEN      0	/*  character bits field length  */

#define	PHTABSIZE	512	/*  number of entries  */
				/*  in the package hash table  */

#define	ARANKLIM	64	/*  array rank limit  */

#define	RTABSIZE	CHCODELIM
				/*  read table size  */

#define	CBMINSIZE	64	/*  contiguous block minimal size  */

#ifndef CHAR_SIZE
#define CHAR_SIZE        8     /* number of bits in a char */
#endif

#undef bool
typedef int bool;
typedef long fixnum;
typedef unsigned long ufixnum;
typedef float shortfloat;
typedef double longfloat;
typedef unsigned short fatchar;

#ifndef plong
#define plong int
#endif


#define SIGNED_CHAR(x) (((char ) -1) < (char )0 ? (char) x \
		  : (x >= (1<<(CHAR_SIZE-1)) ? \
		     x - (((int)(1<<(CHAR_SIZE-1))) << 1) \
		     : (char ) x))


/*
	Definition of the type of LISP objects.
*/
typedef union lispunion *object;

typedef union int_object iobject;
union int_object {object o; fixnum i;};

/*
	OBJect NULL value.
	It should not coincide with any legal object value.
*/
#define	OBJNULL		((object)NULL)

/*
	Definition of each implementation type.
*/

struct fixnum_struct {
		FIRSTWORD;
	fixnum	FIXVAL;		/*  fixnum value  */
};
#define	Mfix(obje)	(obje)->FIX.FIXVAL
#define fix(x) Mfix(x)

#define	SMALL_FIXNUM_LIMIT	1024

/* EXTER */
/* struct fixnum_struct small_fixnum_table[2*SMALL_FIXNUM_LIMIT]; */

/* #define	small_fixnum(i)  \ */
/* 	(object)(small_fixnum_table+SMALL_FIXNUM_LIMIT+(i)) */

struct shortfloat_struct {
			FIRSTWORD;
	shortfloat	SFVAL;	/*  shortfloat value  */
};
#define	Msf(obje)	(obje)->SF.SFVAL
#define sf(x) Msf(x)

struct longfloat_struct {
			FIRSTWORD;
	longfloat	LFVAL;	/*  longfloat value  */
};
#define	Mlf(obje)	(obje)->LF.LFVAL
#define lf(x) Mlf(x)



/*  #ifdef _MP_H */

/*  #else */
/*  typedef struct */
/*  { */
/*    int _mp_alloc;		 Number of *limbs* allocated and pointed  */
/*  				   to by the _mp_d field.  */
/*    int _mp_size;			 abs(_mp_size) is the number of limbs the  */
/*  				   last field points to.  If _mp_size is  */
/*  				   negative this is a negative number.   */
/*    void *_mp_d;		 Pointer to the limbs.  */
/*  } our_mpz_struct; */
/*  #endif */

struct bignum {
			FIRSTWORD;
#ifdef GMP
  __mpz_struct big_mpz_t;
#else
  plong             *big_self;	/*  bignum body  */
  int		big_length;	/*  bignum length  */
#endif  
};

struct ratio {
		FIRSTWORD;
	object	rat_den;	/*  denominator  */
				/*  must be an integer  */
	object	rat_num;	/*  numerator  */
				/*  must be an integer  */
};

struct complex {
		FIRSTWORD;
	object	cmp_real;	/*  real part  */
				/*  must be a number  */
	object	cmp_imag;	/*  imaginary part  */
				/*  must be a number  */
};

struct character {
			FIRSTWORD;
	unsigned short	ch_code;	/*  code  */
	unsigned char	ch_font;	/*  font  */
	unsigned char	ch_bits;	/*  bits  */
};



/* struct character character_table1[256+128]; */
/* EXTER  */
/* union lispunion character_table1[256+128]; */
/* #define character_table (character_table1+128) */
/* #define	code_char(c)		(object)(character_table+(c)) */
/* #define	char_code(obje)		((object)obje)->ch.ch_code */
/* #define	char_font(obje)		((object)obje)->ch.ch_font */
/* #define	char_bits(obje)		((object)obje)->ch.ch_bits */

enum stype {			/*  symbol type  */
	stp_ordinary,		/*  ordinary  */
	stp_constant,		/*  constant  */
        stp_special		/*  special  */
};

#define	Cnil			((object)&Cnil_body)
#define	Ct			((object)&Ct_body)
#define sLnil Cnil
#define sLt Ct

#define	NOT_SPECIAL		((void (*)())Cnil)
#define	s_fillp		st_fillp
#define	s_self		st_self

struct symbol {
		FIRSTWORD;
	object	s_dbind;	/*  dynamic binding  */
	void	(*s_sfdef)();	/*  special form definition  */
				/*  This field coincides with c_car  */
	char	*s_self;	/*  print name  */
				/*  These fields coincide with  */
				/*  st_fillp and st_self.  */
	int	s_fillp;	/*  print name length  */

	object	s_gfdef;        /*  global function definition  */
				/*  For a macro,  */
				/*  its expansion function  */
				/*  is to be stored.  */
	object	s_plist;	/*  property list  */
	object	s_hpack;	/*  home package  */
				/*  Cnil for uninterned symbols  */
	short	s_stype;	/*  symbol type  */
				/*  of enum stype  */
	short	s_mflag;	/*  macro flag  */
};
EXTER 
/* struct symbol Cnil_body, Ct_body; */
union lispunion Cnil_body, Ct_body;

struct package {
		FIRSTWORD;
	object	p_name;		/*  package name  */
				/*  a string  */
	object	p_nicknames;	/*  nicknames  */
				/*  list of strings  */
	object	p_shadowings;	/*  shadowing symbol list  */
	object	p_uselist;	/*  use-list of packages  */
	object	p_usedbylist;	/*  used-by-list of packages  */
	object	*p_internal;	/*  hashtable for internal symbols  */
	object	*p_external;	/*  hashtable for external symbols  */
	int p_internal_size;    /* size of internal hash table*/
	int p_external_size;     /* size of external hash table */
	int p_internal_fp;       /* [rough] number of symbols */
        int p_external_fp;    /* [rough]  number of symbols */
	struct package
		*p_link;	/*  package link  */
};

/*
	The values returned by intern and find_symbol.
	File_symbol may return 0.
*/
#define	INTERNAL	1
#define	EXTERNAL	2
#define	INHERITED	3

/*
	All the packages are linked through p_link.
*/
EXTER struct package *pack_pointer;	/*  package pointer  */

struct cons {
		FIRSTWORD;
	object	c_cdr;		/*  cdr  */
	object	c_car;		/*  car  */
};

enum httest {			/*  hash table key test function  */
	htt_eq,			/*  eq  */
	htt_eql,		/*  eql  */
	htt_equal		/*  equal  */
};

struct htent {			/*  hash table entry  */
	object	hte_key;	/*  key  */
	object	hte_value;	/*  value  */
};

struct hashtable {		/*  hash table header  */
		FIRSTWORD;
	struct htent
		*ht_self;	/*  pointer to the hash table  */
	object	ht_rhsize;	/*  rehash size  */
	object	ht_rhthresh;	/*  rehash threshold  */
	int	ht_nent;	/*  number of entries  */
	int	ht_size;	/*  hash table size  */
	short	ht_test;	/*  key test function  */
				/*  of enum httest  */
};

enum aelttype {			/*  array element type  */
	aet_object,		/*  t  */
	aet_ch,			/*  string-char  */
	aet_bit,		/*  bit  */
	aet_fix,		/*  fixnum  */
	aet_sf,			/*  short-float  */
	aet_lf,			/*  plong-float  */
	aet_char,               /* signed char */
        aet_uchar,               /* unsigned char */
	aet_short,              /* signed short */
	aet_ushort,             /*  unsigned short   */
	aet_last
	  };

struct array {			/*  array header  */
		FIRSTWORD;
	object	a_displaced;	/*  displaced  */
	short	a_rank;		/*  array rank  */
	short	a_elttype;	/*  element type  */
	object	*a_self;	/*  pointer to the array  */
	short	a_adjustable;	/*  adjustable flag  */
	short	a_offset;	/*  bitvector offset  */
	int	a_dim;		/*  dimension  */
	int	*a_dims;	/*  table of dimensions  */

};



struct vector {			/*  vector header  */
		FIRSTWORD;
	object	v_displaced;	/*  displaced  */
	short	v_hasfillp;	/*  has-fill-pointer flag  */
	short	v_elttype;	/*  element type  */
		
	object	*v_self;	/*  pointer to the vector  */
	int	v_fillp;	/*  fill pointer  */
				/*  For simple vectors,  */
				/*  v_fillp is equal to v_dim.  */
	int	v_dim;		/*  dimension  */
	short	v_adjustable;	/*  adjustable flag  */
	short	v_offset;	/*  not used  */
};

struct string {			/*  string header  */
		FIRSTWORD;
	object	st_displaced;	/*  displaced  */
	short	st_hasfillp;	/*  has-fill-pointer flag  */
	short	st_adjustable;	/*  adjustable flag  */
	char	*st_self;	/*  pointer to the string  */
	int	st_fillp;	/*  fill pointer  */
				/*  For simple strings,  */
				/*  st_fillp is equal to st_dim.  */
	int	st_dim;		/*  dimension  */
				/*  string length  */

};

struct ustring {
		FIRSTWORD;
	object	ust_displaced;
	short	ust_hasfillp;
	short	ust_adjustable;		
	unsigned char *ust_self;
	int	ust_fillp;

	int	ust_dim;


};

#define USHORT_GCL(x,i) (((unsigned short *)(x)->ust.ust_self)[i])
#define SHORT_GCL(x,i) ((( short *)(x)->ust.ust_self)[i])

#define BV_OFFSET(x) ((type_of(x)==t_bitvector ? x->bv.bv_offset : \
		       type_of(x)== t_array ? x->a.a_offset : (abort(),0)))

#define SET_BV_OFFSET(x,val) ((type_of(x)==t_bitvector ? x->bv.bv_offset = val : \
		       type_of(x)== t_array ? x->a.a_offset=val : (abort(),0)))


		       

struct bitvector {		/*  bitvector header  */
		FIRSTWORD;
	object	bv_displaced;	/*  displaced  */
	short	bv_hasfillp;	/*  has-fill-pointer flag  */
	short	bv_elttype;	/*  not used  */
	char	*bv_self;	/*  pointer to the bitvector  */
	int	bv_fillp;	/*  fill pointer  */
				/*  For simple bitvectors,  */
				/*  st_fillp is equal to st_dim.  */
	int	bv_dim;		/*  dimension  */
				/*  number of bits  */
	short	bv_adjustable;	/*  adjustable flag  */
	short	bv_offset;	/*  bitvector offset  */
				/*  the position of the first bit  */
				/*  in the first byte  */
};

struct fixarray {		/*  fixnum array header  */
		FIRSTWORD;
	object	fixa_displaced;	/*  displaced  */
	short	fixa_rank;	/*  array rank  */
	short	fixa_elttype;	/*  element type  */
	fixnum	*fixa_self;	/*  pointer to the array  */
	short	fixa_adjustable;/*  adjustable flag  */
	short	fixa_offset;	/*  not used  */
	int	fixa_dim;	/*  dimension  */
	int	*fixa_dims;	/*  table of dimensions  */

};

struct sfarray {		/*  short-float array header  */
		FIRSTWORD;
	object	sfa_displaced;	/*  displaced  */
	short	sfa_rank;	/*  array rank  */
	short	sfa_elttype;	/*  element type  */
	shortfloat
		*sfa_self;	/*  pointer to the array  */
	short	sfa_adjustable;	/*  adjustable flag  */
	short	sfa_offset;	/*  not used  */
	int	sfa_dim;	/*  dimension  */

	int	*sfa_dims;	/*  table of dimensions  */



};

struct lfarray {		/*  plong-float array header  */
		FIRSTWORD;
	object	lfa_displaced;	/*  displaced  */
	short	lfa_rank;	/*  array rank  */
	short	lfa_elttype;	/*  element type  */
	longfloat
		*lfa_self;	/*  pointer to the array  */
	short	lfa_adjustable;	/*  adjustable flag  */
	short	lfa_offset;	/*  not used  */
	int	lfa_dim;		/*  dimension  */
	int	*lfa_dims;	/*  table of dimensions  */


};

struct structure {		/*  structure header  */
		FIRSTWORD;
	object	str_def;	/*  structure definition (a structure)  */
	object	*str_self;	/*  structure self  */
};

struct s_data {object name;
	       fixnum   length;
	       object raw;
	       object included;
	       object includes;
	       object staticp;
	       object print_function;
	       object slot_descriptions;
	       object slot_position;
	       fixnum   size;
	       object has_holes;
	     };

#define S_DATA(x) ((struct s_data *)((x)->str.str_self))
#define SLOT_TYPE(def,i) (((S_DATA(def))->raw->ust.ust_self[i]))
#define SLOT_POS(def,i) USHORT_GCL(S_DATA(def)->slot_position,i)
#define STREF(type,x,i) (*((type *)(((char *)((x)->str.str_self))+(i))))



enum smmode {			/*  stream mode  */
	smm_input,		/*  input  */
	smm_output,		/*  output  */
	smm_io,			/*  input-output  */
	smm_probe,		/*  probe  */
	smm_synonym,		/*  synonym  */
	smm_broadcast,		/*  broadcast  */
	smm_concatenated,	/*  concatenated  */
	smm_two_way,		/*  two way  */
	smm_echo,		/*  echo  */
	smm_string_input,	/*  string input  */
	smm_string_output,	/*  string output  */
	smm_user_defined,        /*  for user defined */
	smm_socket		/*  Socket stream  */
};

/* for any stream that takes writec_char, directly (not two_way or echo)
   ie. 	 smm_output,smm_io, smm_string_output, smm_socket
 */
#define STREAM_FILE_COLUMN(str) ((str)->sm.sm_int1)

/* for smm_echo */
#define ECHO_STREAM_N_UNREAD(strm) ((strm)->sm.sm_int0)

/* file fd for socket */
#define SOCKET_STREAM_FD(strm) ((strm)->sm.sm_fd)
#define SOCKET_STREAM_BUFFER(strm) ((strm)->sm.sm_object1)

/*  for     smm_string_input  */
#define STRING_INPUT_STREAM_NEXT(strm) ((strm)->sm.sm_int0)
#define STRING_INPUT_STREAM_END(strm) ((strm)->sm.sm_int1)

/* for smm_two_way and smm_echo */
#define STREAM_OUTPUT_STREAM(strm) ((strm)->sm.sm_object1)
#define STREAM_INPUT_STREAM(strm) ((strm)->sm.sm_object0)

/* for smm_string_{input,output} */
#define STRING_STREAM_STRING(strm) ((strm)->sm.sm_object0)

struct stream {
		FIRSTWORD;
	FILE	*sm_fp;		/*  file pointer  */
	object	sm_object0;	/*  some object  */
	object	sm_object1;	/*  some object */
	int	sm_int0;	/*  some int  */
	int	sm_int1;	/*  column for input or output, stream */
	char  	*sm_buffer;     /*  ptr to BUFSIZE block of storage */
	char	sm_mode;	/*  stream mode  */
        unsigned char    sm_flags;         /* flags from gcl_sm_flags */
        short sm_fd;         /* stream fd */
     
};
/* flags */
#define GET_STREAM_FLAG(strm,name) ((strm)->sm.sm_flags & (1<<(name)))
#define SET_STREAM_FLAG(strm,name,val) {if (val) (strm)->sm.sm_flags |= (1<<(name)); else (strm)->sm.sm_flags &= ~(1<<(name));} 

#define GCL_MODE_BLOCKING 1
#define GCL_MODE_NON_BLOCKING 0
#define GCL_TCP_ASYNC 1
     
enum gcl_sm_flags {
  gcl_sm_blocking=1,
  gcl_sm_tcp_async,
  gcl_sm_input,
  gcl_sm_output,
  gcl_sm_had_error
  
  
};
  
#ifdef BSD
#ifdef SUN3
#define	BASEFF		(unsigned char *)0xffffffff
#else
#define	BASEFF		(char *)0xffffffff
#endif
#endif

#ifdef ATT
#define	BASEFF		(unsigned char *)0xffffffff
#endif

#ifdef E15
#define	BASEFF		(unsigned char *)0xffffffff
#endif

#ifdef MV


#endif

struct random {
			FIRSTWORD;
	unsigned	rnd_value;	/*  random state value  */
};

enum chattrib {			/*  character attribute  */
	cat_whitespace,		/*  whitespace  */
	cat_terminating,	/*  terminating macro  */
	cat_non_terminating,	/*  non-terminating macro  */
	cat_single_escape,	/*  single-escape  */
	cat_multiple_escape,	/*  multiple-escape  */
	cat_constituent		/*  constituent  */
};

struct rtent {				/*  read table entry  */
	enum chattrib	rte_chattrib;	/*  character attribute  */
	object		rte_macro;	/*  macro function  */
	object		*rte_dtab;	/*  pointer to the  */
					/*  dispatch table  */
					/*  NULL for  */
					/*  non-dispatching  */
					/*  macro character, or  */
					/*  non-macro character  */
};

struct readtable {			/*  read table  */
			FIRSTWORD;
	struct rtent	*rt_self;	/*  read table itself  */
};

struct pathname {
		FIRSTWORD;
	object	pn_host;	/*  host  */
	object	pn_device;	/*  device  */
	object	pn_directory;	/*  directory  */
	object	pn_name;	/*  name  */
	object	pn_type;	/*  type  */
	object	pn_version;	/*  version  */
};

struct cfun {			/*  compiled function header  */
		FIRSTWORD;
	object	cf_name;	/*  compiled function name  */
	void	(*cf_self)();	/*  entry address  */
	object	cf_data;	/*  data the function uses  */
				/*  for GBC  */
};

struct cclosure {		/*  compiled closure header  */
		FIRSTWORD;
	object	cc_name;	/*  compiled closure name  */
	void	(*cc_self)();	/*  entry address  */
	object	cc_env;		/*  environment  */
	object	cc_data;	/*  data the closure uses  */
				/*  for GBC  */
	int cc_envdim;
	object	*cc_turbo;	/*  turbo charger */
};

struct closure {
	FIRSTWORD; 
	object	cl_name;       /* name */
	object	(*cl_self)();  /* C start address of code */
	object	cl_data;       /* To object holding VV vector */
	int cl_argd;           /* description of args + number */
	int cl_envdim;         /* length of the environment vector */
	object *cl_env;        /* environment vector referenced by cl_self()*/
};

struct sfun {
		FIRSTWORD; 
	object	sfn_name;       /* name */
	object	(*sfn_self)();  /* C start address of code */
	object	sfn_data;       /* To object holding VV vector */
	int sfn_argd;           /* description of args + number */

	      };

struct vfun {
		FIRSTWORD; 
	object	vfn_name;       /* name */
	object	(*vfn_self)();  /* C start address of code */
	object	vfn_data;       /* To object holding VV data */
	unsigned short vfn_minargs; /* Min args and where varargs start */
	unsigned short vfn_maxargs;    /* Max number of args */
	      };
struct cfdata {
     FIRSTWORD;
     char *cfd_start;             /* beginning of contblock for fun */
     int cfd_size;              /* size of contblock */
     int cfd_fillp;             /* size of self */
     object *cfd_self;          /* body */
   };

struct spice {
		FIRSTWORD;
	int	spc_dummy;
};

/*
	dummy type
*/
struct dummy {
	FIRSTWORD;
};

/*
	Definition of lispunion.
*/
union lispunion {
	struct fixnum_struct
			FIX;	/*  fixnum  */
	struct bignum	big;	/*  bignum  */
	struct ratio	rat;	/*  ratio  */
	struct shortfloat_struct
			SF;	/*  short floating-point number  */
	struct longfloat_struct
			LF;	/*  plong floating-point number  */
	struct complex	cmp;	/*  complex number  */
	struct character
			ch;	/*  character  */
	struct symbol	s;	/*  symbol  */
	struct package	p;	/*  package  */
	struct cons	c;	/*  cons  */
	struct hashtable
			ht;	/*  hash table  */
	struct array	a;	/*  array  */
	struct vector	v;	/*  vector  */
	struct string	st;	/*  string  */
	struct ustring	ust;
	struct bitvector
			bv;	/*  bit-vector  */
	struct structure
			str;	/*  structure  */
	struct stream	sm;	/*  stream  */
	struct random	rnd;	/*  random-states  */
	struct readtable
			rt;	/*  read table  */
	struct pathname	pn;	/*  path name  */
	struct cfun	cf;	/*  compiled function  uses value stack] */
	struct cclosure	cc;	/*  compiled closure  uses value stack */
	struct closure	cl;	/*  compiled closure  uses c stack */
	struct sfun     sfn;    /*  simple function */
	struct vfun     vfn;    /*  function with variable number of args */
	struct cfdata   cfd;    /* compiled fun data */
	struct spice	spc;	/*  spice  */

	struct dummy	d;	/*  dummy  */

	struct fixarray	fixa;	/*  fixnum array  */
	struct sfarray	sfa;	/*  short-float array  */
	struct lfarray	lfa;	/*  plong-float array  */
};


/* struct character character_table1[256+128]; */
EXTER 
union lispunion character_table1[256+128];
#define character_table (character_table1+128)
#define	code_char(c)		(object)(character_table+(c))
#define	char_code(obje)		((object)obje)->ch.ch_code
#define	char_font(obje)		((object)obje)->ch.ch_font
#define	char_bits(obje)		((object)obje)->ch.ch_bits

EXTER
union lispunion small_fixnum_table[2*SMALL_FIXNUM_LIMIT];

#define	small_fixnum(i)  \
	(object)(small_fixnum_table+SMALL_FIXNUM_LIMIT+(i))



#define address_int unsigned long

/*
	The struct of free lists.
*/
struct freelist {
	FIRSTWORD;
	address_int f_link;
};
#ifndef INT_TO_ADDRESS
#define INT_TO_ADDRESS(x) ((object )(long )x)
#endif

#define F_LINK(x) ((struct freelist *)(long) x)->f_link
#define FL_LINK F_LINK
#define SET_LINK(x,val) F_LINK(x) = (address_int) (val)
#define OBJ_LINK(x) ((object) INT_TO_ADDRESS(F_LINK(x)))

#define	FREE	(-1)		/*  free object  */

/*
	Type_of.
*/
#define	type_of(obje)	((enum type)(((object)(obje))->d.t))

/*
	Storage manager for each type.
*/
struct typemanager {
	enum type
		tm_type;	/*  type  */
	short	tm_size;	/*  element size in bytes  */
	short   tm_nppage;	/*  number per page  */
	object	tm_free;	/*  free list  */
				/*  Note that it is of type object.  */
	long	tm_nfree;	/*  number of free elements  */
	long	tm_nused;	/*  number of elements used  */
	long	tm_npage;	/*  number of pages  */
	long	tm_maxpage;	/*  maximum number of pages  */
	char	*tm_name;	/*  type name  */
	int	tm_gbccount;	/*  GBC count  */
	object  tm_alt_free;    /*  Alternate free list (swap with tm_free) */
	long     tm_alt_nfree;   /*  Alternate nfree (length of nfree) */
	short   tm_sgc;         /*  this type has at least this many
				    sgc pages */
	short   tm_sgc_minfree;   /* number free on a page to qualify for
				    being an sgc page */
	short   tm_sgc_max;     /* max on sgc pages */
	short   tm_min_grow;    /* min amount to grow when growing */
	short   tm_max_grow;    /* max amount to grow when growing */
	short   tm_growth_percent;  /* percent to increase maxpages */
	short   tm_percent_free;  /* percent which must be free after a gc for this type */
        short   tm_distinct;       /* pages of this type are distinct */
        float   tm_adjgbccnt;
        long    tm_opt_maxpage;
};


/*
	The table of type managers.
*/
EXTER struct typemanager tm_table[ 32  /* (int) t_relocatable */];

#define	tm_of(t)	(&(tm_table[(int)tm_table[(int)(t)].tm_type]))

/*
	Contiguous block header.
*/
struct contblock {		/*  contiguous block header  */
	int	cb_size;	/*  size in bytes  */
	struct contblock
		*cb_link;	/*  contiguous block link  */
};

/*
	The pointer to the contiguous blocks.
*/
EXTER struct contblock *cb_pointer;	/*  contblock pointer  */

/* SGC cont pages: After SGC_start, old_cb_pointer will be a linked
   list of free blocks on non-SGC pages, and cb_pointer will be
   likewise for SGC pages.  CM 20030827*/
EXTER struct contblock *old_cb_pointer;	/*  old contblock pointer when in SGC  */

/* SGC cont pages: FIXME -- at some point, enable runtime disabling of
   SGC cont pages.  Right now, the tm_sgc variable for type contiguous
   will govern only the possible attempt to get new pages for SGC.
   Contiguous pages normally allocated when SGC is on will always be
   marked with SGC_PAGE_FLAG, as the current GBC algorithm always uses
   sgc_contblock_sweep_phase in this case. */
/* #define SGC_CONT_ENABLED (sgc_enabled && tm_table[t_contiguous].tm_sgc) */
#define SGC_CONT_ENABLED (sgc_enabled)

/*
	Variables for memory management.
*/
EXTER long ncb;			/*  number of contblocks  */
/* int ncbpage;			  number of contblock pages  */
#define ncbpage tm_table[t_contiguous].tm_npage
#define maxcbpage tm_table[t_contiguous].tm_maxpage
#define cbgbccount tm_table[t_contiguous].tm_gbccount  
  

/* int maxcbpage; maximum number of contblock pages  */
EXTER 
long holepage;			/*  hole pages  */
#define nrbpage tm_table[t_relocatable].tm_npage
#define rbgbccount tm_table[t_relocatable].tm_gbccount
/* int nrbpage;			  number of relblock pages  */
  

EXTER 
char *rb_start;			/*  relblock start  */
EXTER char *rb_end;			/*  relblock end  */
EXTER char *rb_limit;			/*  relblock limit  */
EXTER char *rb_pointer;		/*  relblock pointer  */
EXTER char *rb_start1;		/*  relblock start in copy space  */
EXTER char *rb_pointer1;		/*  relblock pointer in copy space  */

EXTER char *heap_end;			/*  heap end  */
EXTER char *core_end;			/*  core end  */
EXTER 
char *tmp_alloc;

/* make f allocate enough extra, so that we can round
   up, the address given to an even multiple.   Special
   case of size == 0 , in which case we just want an aligned
   number in the address range
   */

#define ALLOC_ALIGNED(f, size,align) \
  (align <= sizeof(plong) ? (char *)((f)(size)) : \
   (tmp_alloc = (char *)((f)(size+(size ?(align)-1 : 0)))+(align)-1 , \
   (char *)(align * (((unsigned long)tmp_alloc)/align))))
#define AR_ALLOC(f,n,type) (type *) \
  (ALLOC_ALIGNED(f,(n)*sizeof(type),sizeof(type)))


/* FIXME  Make all other page constants scale similarly by default. */
#ifndef HOLEPAGE
#define	HOLEPAGE	(MAXPAGE/10)
#endif


/* #define	INIT_HOLEPAGE	150 */
/* #define	INIT_NRBPAGE	50 */
/* #define	RB_GETA		512 */

#define	INIT_HOLEPAGE	(6*HOLEPAGE/5)
#define	INIT_NRBPAGE	(INIT_HOLEPAGE/3)
#define	RB_GETA		(10*INIT_NRBPAGE)


#ifdef AV
#define	STATIC	register
#endif
#ifdef MV

#endif

#define	TIME_ZONE	(-9)
/* EXTER  */
/* fixnum FIXtemp; */

/*  For IEEEFLOAT, the double may have exponent in the second word
(little endian) or first word.*/

#if defined(I386) || defined(LITTLE_END)
#define HIND 1  /* (int) of double where the exponent and most signif is */
#define LIND 0  /* low part of a double */
#else /* big endian */
#define HIND 0
#define LIND 1
#endif
#ifndef VOL
#define VOL
#endif


#define	isUpper(xxx)	(((xxx)&0200) == 0 && isupper((int)xxx))
#define	isLower(xxx)	(((xxx)&0200) == 0 && islower((int)xxx))
#define	isDigit(xxx)	(((xxx)&0200) == 0 && isdigit((int)xxx))
enum ftype {f_object,f_fixnum};
EXTER 
char *alloca_val;
/*          ...xx|xx|xxxx|xxxx|   
		     ret  Narg     */

/*    a9a8a7a6a5a4a3a4a3a2a1a0rrrrnnnnnnnn
         ai=argtype(i)         ret   nargs
 */
#define SFUN_NARGS(x) (x & 0xff) /* 8 bits */
#define RESTYPE(x) (x<<8)   /* 3 bits */
   /* set if the VFUN_NARGS = m ; has been set correctly */
#define VFUN_NARG_BIT (1 <<11) 
#define ARGTYPE(i,x) ((x) <<(12+(i*2)))
#define ARGTYPE1(x)  (1 | ARGTYPE(0,x))
#define ARGTYPE2(x,y) (2 | ARGTYPE(0,x)  | ARGTYPE(1,y))
#define ARGTYPE3(x,y,z) (3 | ARGTYPE(0,x) | ARGTYPE(1,y) | ARGTYPE(2,z))

object make_si_sfun();
EXTER object MVloc[10];

/* Set new to be an (object *) whose [i]'th elmt is the
   ith elmnt in a va_list
   if 
   ((vl[0] == va_arg(ap,object)) ||
    (vl[1] == va_arg(ap,object)) || .. vl[n-1] == va_arg(ap,object))
   you may set
   #define DONT_COPY_VA_LIST
   In recent versions of gcc, i think the builtin_alist stuff does not
   allow setting this.
 */
#ifdef DONT_COPY_VA_LIST
#define COERCE_VA_LIST(new,vl,n) new = (object *) (vl)
#else
#define COERCE_VA_LIST(new,vl,n) \
 object Xxvl[65]; \
 {int i; \
  new=Xxvl; \
  if (n >= 65) FEerror("Too plong vl",0); \
  for (i=0 ; i < (n); i++) new[i]=va_arg(vl,object);}
#endif

#ifdef DONT_COPY_VA_LIST
#error Cannot set DONT_COPY_VA_LIST in ANSI C
#else
#define COERCE_VA_LIST_NEW(new,fst,vl,n) \
 object Xxvl[65]; \
 {int i; \
  new=Xxvl; \
  if (n >= 65) FEerror("va_list too long",0); \
  for (i=0 ; i < (n); i++) new[i]=i ? va_arg(vl,object) : fst;}
#endif



#define make_si_vfun(s,f,min,max) \
  make_si_vfun1(s,f,min | (max << 8))

/* Number of args supplied to a variable arg t_vfun
 Used by the C function to set optionals */

struct call_data { 
  object fun;
  int argd;
  int nvalues;
  object values[50];
  double double_return;
};
EXTER struct call_data fcall;

#define  VFUN_NARGS fcall.argd
#define RETURN2(x,y) do{/*  object _x = (void *) x;  */\
			  fcall.values[2]=y;fcall.nvalues=2; \
			  return (x) ;} while(0)
#define RETURN1(x) do{fcall.nvalues=1; return (x) ;} while(0)
#define RETURN0  do{fcall.nvalues=0; return Cnil ;} while(0)

#define RV(x) (*_p++ = x)

#define RETURNI(n,val1,listvals) RETURN(n,int,val1,listvals)
#define RETURNO(n,val1,listvals) RETURN(n,object,val1,listvals)

/* eg: RETURN(3,object,val1,(RV(val2),RV(val3))) */
#define RETURN(n,typ,val1,listvals) \
   do{typ _val1 = val1; object *_p=&fcall.values[1]; listvals; fcall.nvalues= n; return _val1;}while(0)
/* #define CALL(n,form) (VFUN_NARGS=n,form) */

	

/* we sometimes have to touch the header of arrays or structures
   to make sure the page is writable */
#ifdef SGC
#define SGC_TOUCH(x) if ((x)->d.m) system_error(); (x)->d.m=0
#else
#define SGC_TOUCH(x)
#endif

object funcall_cfun(void(*)(),int,...);
object clear_compiler_properties();
EXTER object sSlambda_block_expanded;

# ifdef __GNUC__ 
# define assert(ex)\
{if (!(ex)){(void)fprintf(stderr, \
		  "Assertion failed: file \"%s\", line %d\n", __FILE__, __LINE__);exit(1);}}
# else
# define assert(ex)
# endif

#ifndef FIX_PATH_STRING
#define FIX_PATH_STRING(file) file
#endif
	

#define CHECK_INTERRUPT   if (signals_pending) raise_pending_signals(sig_safe)

#define BEGIN_NO_INTERRUPT \
 plong old_signals_allowed = signals_allowed; \
  signals_allowed = 0

#define END_NO_INTERRUPT \
  signals_allowed = old_signals_allowed
/* could add:   if (signals_pending)
   raise_pending_signals(sig_use_signals_allowed_value) */


#define END_NO_INTERRUPT_SAFE \
  signals_allowed = old_signals_allowed; \
  if (signals_pending) \
    do{ if(signals_allowed ==0) /* should not get here*/abort(); \
	  raise_pending_signals(sig_safe)}while(0)

void raise_pending_signals();

EXTER unsigned plong signals_allowed, signals_pending  ;

EXTER struct symbol Dotnil_body;
#define Dotnil ((object)&Dotnil_body)

#define	endp(x)	({\
    static union lispunion s_my_dot={.c={t_cons,0,0,0,Dotnil,Dotnil}}; \
    object _x=(x);\
    bool _b=FALSE;\
    \
    if (type_of(_x)==t_cons) {\
       if (type_of(_x->c.c_cdr)!=t_cons && _x->c.c_cdr!=Cnil)\
          s_my_dot.c.c_car=_x->c.c_cdr;\
       else \
          s_my_dot.c.c_car=Dotnil;\
    } else {\
       if (_x==s_my_dot.c.c_car)\
	 x=&s_my_dot;\
       else {\
         s_my_dot.c.c_car=Dotnil;\
         if (_x==Cnil || _x==Dotnil)\
             _b=TRUE;\
         else\
             FEwrong_type_argument(sLlist, _x);\
       }\
    }\
    _b;\
    })

#define endp_prop(a) (type_of(a)==t_cons ? FALSE : ((a)==Cnil ? TRUE : (FEwrong_type_argument(sLlist, (a)),FALSE)))
    
#define proper_list(a) (type_of(a)==t_cons || (a)==Cnil)
#define fix_dot(a) ((a) == Dotnil ? Cnil : (type_of(a)==t_cons && (a)->c.c_cdr==Dotnil ? (a)->c.c_car : (a))) 
/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
	vs.h

	value stack
*/

EXTER object *vs_org;
EXTER object *vs_limit;	/*  value stack limit  */

EXTER object *vs_base;	/*  value stack base  */
EXTER object *vs_top;		/*  value stack top  */

#define	vs_push(obje)	(*vs_top++ = (obje))

#define	vs_pop		(*--vs_top)
#define	vs_popp		(--vs_top)
#define	vs_head		vs_top[-1]

#define	vs_mark		object *old_vs_top = vs_top
#define	vs_reset	vs_top = old_vs_top

#define	vs_check	if (vs_top >= vs_limit)  \
				vs_overflow()

#define	vs_check_push(obje)  \
			(vs_top >= vs_limit ?  \
			 (object)vs_overflow() : (*vs_top++ = (obje)))

#define	check_arg(n)  \
			if (vs_top - vs_base != (n))  \
				check_arg_failed(n)

#define CHECK_ARG_RANGE(n,m) if (VFUN_NARGS < n || VFUN_NARGS >m) \
   check_arg_range(n,m)

#define	MMcheck_arg(n)  \
			if (vs_top - vs_base < (n))  \
				too_few_arguments();  \
			else if (vs_top - vs_base > (n))  \
				too_many_arguments()

#define vs_reserve(x)	if(vs_base+(x) >= vs_limit)  \
				vs_overflow();
/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
	bds.h

	bind stack
*/

struct bds_bd {
	object	bds_sym;	/*  symbol  */
	object	bds_val;	/*  previous value of the symbol  */
};


typedef struct bds_bd *bds_ptr;

EXTER bds_ptr bds_org;

EXTER bds_ptr bds_limit;

EXTER bds_ptr bds_top;		/*  bind stack top  */

#ifdef KCLOVM

/* for multiprocessing */
EXTER struct bds_bd save_bind_stack[BDSSIZE + BDSGETA + BDSGETA];
EXTER bds_ptr bds_save_org;
EXTER bds_ptr bds_save_limit;
EXTER bds_ptr bds_save_top;

#endif

#define	bds_check  \
	if (bds_top >= bds_limit)  \
		bds_overflow()

/* do this so that an interrupt in the middle will leave the VALID
   part of the bds stack ie (<= bds_top) in a valid state, so
   that a throw out will be ok */
#define	bds_bind(sym, val)  \
	do {bds_ptr _b = bds_top+1; \
	      (_b)->bds_sym = (sym);  \
	_b->bds_val = ((object)sym)->s.s_dbind;  \
	((object)sym)->s.s_dbind = (val); bds_top=_b;} while (0)

#define	bds_unwind1  \
	((bds_top->bds_sym)->s.s_dbind = bds_top->bds_val, --bds_top)


/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*

	frame.h

	frame stack and non-local jump
*/


/*  IHS	Invocation History Stack  */

typedef struct invocation_history {
	object	ihs_function;
	object	*ihs_base;
} *ihs_ptr;

EXTER ihs_ptr ihs_org;

EXTER ihs_ptr ihs_limit;

EXTER ihs_ptr ihs_top;

#define	ihs_check  \
	if (ihs_top >= ihs_limit)  \
		ihs_overflow()

#define ihs_push(function)  \
	(++ihs_top)->ihs_function = (function);  \
	ihs_top->ihs_base = vs_base
#define ihs_push_base(function,base)  \
	(++ihs_top)->ihs_function = (function);  \
	ihs_top->ihs_base = base

#define ihs_pop() 	(ihs_top--)


#define make_nil_block()  \
{  \
	object x;  \
  \
	lex_copy();  \
	x = alloc_frame_id();  \
	vs_push(x);  \
	lex_block_bind(Cnil, x);  \
	vs_popp;  \
	frs_push(FRS_CATCH, x);  \
}


/*  Frame Stack  */

enum fr_class {
	FRS_CATCH,			/* for catch,block,tabbody */
	FRS_CATCHALL,                   /* for catchall */
	FRS_PROTECT                	/* for protect-all */
};

EXTER int in_signal_handler;
struct frame {
	jmp_buf		frs_jmpbuf;
	object		*frs_lex;
	bds_ptr		frs_bds_top;
	char 	frs_class;
	char frs_in_signal_handler;
	object		frs_val;
	ihs_ptr		frs_ihs;
};

typedef struct frame *frame_ptr;

#define	alloc_frame_id()	alloc_object(t_spice)

/*
frs_class |            frs_value                 |  frs_prev
----------+--------------------------------------+--------------
CATCH     | frame-id, i.e.                       |
	  |    throw-tag,                        |
	  |    block-id (uninterned symbol), or  | value of ihs_top
	  |    tagbody-id (uninterned symbol)    | when the frame
----------+--------------------------------------| was pushed
CATCHALL  |               NIL                    |
----------+--------------------------------------|
PROTECT   |               NIL                    |
----------------------------------------------------------------
*/


EXTER frame_ptr frs_org;

EXTER frame_ptr frs_limit;

EXTER frame_ptr frs_top;		/* frame stack top */


#define frs_push(class, val)  \
   do { frame_ptr _frs_top = frs_top +1; \
	if (_frs_top >= frs_limit)  \
		frs_overflow();  \
	_frs_top->frs_lex = lex_env;\
	_frs_top->frs_bds_top = bds_top;  \
	_frs_top->frs_class = (class);  \
	_frs_top->frs_in_signal_handler = in_signal_handler;  \
	_frs_top->frs_val = (val);  \
	_frs_top->frs_ihs = ihs_top;  \
         frs_top=_frs_top; \
        setjmp(_frs_top->frs_jmpbuf); \
	} while (0)

#define frs_pop()	frs_top--


/*  global variables used during non-local jump  */

EXTER bool nlj_active;		/* true during non-local jump */
EXTER frame_ptr nlj_fr;		/* frame to return  */
EXTER object nlj_tag; 			/* throw-tag, block-id, or */
				/* (tagbody-id . label).   */


/*
(c) Copyright Taiichi Yuasa and Masami Hagiya, 1984.  All rights reserved.
Copying of this file is authorized to users who have executed the true and
proper "License Agreement for Kyoto Common LISP" with SIGLISP.
*/

/*

	lex.h

	lexical environment
*/


EXTER object *lex_env;



/*
			VS
		|		|
		|---------------|
lex_env ------> |    lex-var	|	: lex_env[0]
		|---------------|
		|    lex-fd	|       : lex_env[1]
		|---------------|
		|    lex-tag	|       : lex_env[2]
		|---------------|
		|		|
		|		|
		|		|

	lex-var:        (symbol value)      	; for local binding
		  (....	   or          ....)
			(symbol)                ; for special binding

	lex-fd:         (fun-name 'FUNCTION'   function)
		  (....		or				...)
			(macro-name 'MACRO' expansion-function)

	lex-tag:  	(tag    'TAG'  	frame-id)
		  (....		or                    ....)
			(block-name 'BLOCK' frame-id)

where 'FUN' is the LISP object with pname FUN, etc.


*/

#define lex_copy()	ihs_top->ihs_base = vs_top;  \
			vs_push(lex_env[0]);  \
                  	vs_push(lex_env[1]);  \
                  	vs_push(lex_env[2]);  \
			lex_env = vs_top - 3

#define lex_new()	ihs_top->ihs_base = vs_top;  \
			lex_env = vs_top;  \
			vs_top[0] = vs_top[1] = vs_top[2] = Cnil;  \
			vs_top += 3

#define lex_var_sch(name)	assoc_eq((name),lex_env[0])

#define lex_fd_sch(name)	assoc_eq((name),lex_env[1])

/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/

/*
	eval.h
*/


/*  C control stack  */

#define	CSSIZE		20000
#define	CSGETA		4000

EXTER int *cs_org;
EXTER int *cs_limit;


/* we catch the segmentation fault and check to warn of c stack overflow */
#ifdef AV
#ifndef cs_check
#define	cs_check(something) \
	if ((int *)(&something) < cs_limit) \
		cs_overflow()
#endif
#endif
#ifdef MV



#endif

/*  bind template  */

struct bind_temp {
	object	bt_var;
	object	bt_spp;
	object	bt_init;
	object	bt_aux;
};


#define check_symbol(x) \
	if (type_of(x) != t_symbol) \
		not_a_symbol(x)

#define	check_var(x) \
	if (type_of(x) != t_symbol || \
	    (enum stype)(x)->s.s_stype == stp_constant) \
		not_a_variable(x)


#define	eval_assign(to, form)  \
{  \
	object *old_top = vs_top;  \
  \
	eval(form);  \
	to = vs_base[0];  \
	vs_top = old_top;  \
}


#define MMcall(x)  \
	ihs_check;  \
	ihs_push(x);  \
	(*(x)->cf.cf_self)();  \
	ihs_pop()

#define MMccall(x, env_top)  \
	ihs_check;  \
	ihs_push(x);  \
	(*(x)->cc.cc_self)(env_top);  \
	ihs_pop()


#define MMcons(a,d)	make_cons((a),(d))


#define MMcar(x)	(x)->c.c_car
#define MMcdr(x)	(x)->c.c_cdr
#define MMcaar(x)	(x)->c.c_car->c.c_car
#define MMcadr(x)	(x)->c.c_cdr->c.c_car
#define MMcdar(x)	(x)->c.c_car->c.c_cdr
#define MMcddr(x)	(x)->c.c_cdr->c.c_cdr
#define MMcaaar(x)	(x)->c.c_car->c.c_car->c.c_car
#define MMcaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car
#define MMcadar(x)	(x)->c.c_car->c.c_cdr->c.c_car
#define MMcaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car
#define MMcdaar(x)	(x)->c.c_car->c.c_car->c.c_cdr
#define MMcdadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr
#define MMcddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr
#define MMcdddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr
#define MMcaaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_car
#define MMcaaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_car
#define MMcaadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_car
#define MMcaaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_car
#define MMcadaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_car
#define MMcadadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_car
#define MMcaddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_car
#define MMcadddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_car
#define MMcdaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_cdr
#define MMcdaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_cdr
#define MMcdadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_cdr
#define MMcdaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_cdr
#define MMcddaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_cdr
#define MMcddadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_cdr
#define MMcdddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_cdr
#define MMcddddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_cdr


#define MMnull(x)	((x)==Cnil)


/* the link_desc, is an INT which carries the call information
   for all uses of that link.   It tells whether fcall.nargs is
   set before the call, whether the VFUN_FUN is set, (to pass in
   a closure function) or if the number of values is set after the
   call.  It gives the min and max number of args and the result
   type expected.   It describes the arg types.
   enum F_arg_flags


*/
    
/*
A link arg descriptor:
    a6a5a4a3a2a1a0rrmmmmmmfffllllll
    l = least number of args passed
    m = max number of args passed
    f = flags bits set according to F_arg_flags, There are F_end flag bits.
    r = result type in F_arg_types
    ai = i'th arg type in F_arg_types
*/

/* We allow 2 bits for encoding arg types and return type */
#define F_TYPE_WIDTH 2
#define F_MIN_ARGS(x) (x & MASK_RANGE(0,F_NARG_WIDTH))
#define F_NARGS(x) F_MIN_ARGS(x)
#define F_ARG_FLAGS_P(x,flag) (x & (1 << (F_NARG_WIDTH +  flag)))
#define F_ARG_FLAGS(x) ((x >> F_NARG_WIDTH) & MASK_RANGE(0,F_end))
#define F_MAX_ARGS(x) ((x >> (F_NARG_WIDTH + F_end )) \
		       & MASK_RANGE(0,F_NARG_WIDTH))

#define BITS_PER_CHAR 8
#define MAX_ARGS 63
#define F_TYPES(x) (((x) >> F_START_TYPES_POS ) \
		       & MASK_RANGE(0, sizeof(int)*BITS_PER_CHAR - F_START_TYPES_POS))
#define F_RESULT_TYPE(x) (F_TYPES(x) & MASK_RANGE(0,F_TYPE_WIDTH))
#define F_ARG_LIMIT ((1<< F_NARG_WIDTH) -1)

/* make an argd slot
   where flags and argtypes are already set up as fields
 */		       
#define F_ARGD(min,max,flags, argtypes) \
      (min | ((flags | (max-min ? (1<<F_requires_nargs) : 0) \
	       << F_NARG_WIDTH)) \
       | (max << (F_NARG_WIDTH+F_end)) \
       | (argtypes<< (2* F_NARG_WIDTH + F_end )))

#define ONE_VAL  (1 << F_caller_sets_one_val)
#define CLOS (1 << F_requires_fun_passed)
#define VARARG (1 << F_requires_nargs)
   /* the following may be used as an argument to DEFUN even in the case
      of varargs, since the F_ARGD macro detects minargs<maxargs and sets this.*/
#define NONE 0    

/* we dont want to define all these two letter macros... all the time */

#ifndef NO_DEFUN
#define OO (F_object | F_object << F_TYPE_WIDTH)
#define OI (F_object | F_int << F_TYPE_WIDTH)
#define OD (F_object | F_double_ptr << F_TYPE_WIDTH)
#define IO (F_int | F_object << F_TYPE_WIDTH)
#define II (F_int | F_int << F_TYPE_WIDTH)
#define ID (F_int | F_double_ptr << F_TYPE_WIDTH)
#define DO (F_double_ptr | F_object << F_TYPE_WIDTH)
#define DI (F_double_ptr | F_int << F_TYPE_WIDTH)
#define DD (F_double_ptr | F_double_ptr << F_TYPE_WIDTH)
#endif

#define ARGTYPES(a,b,c,d) \
  (a | (b << (2* F_TYPE_WIDTH)) | (c << (4* F_TYPE_WIDTH)) | (d << (6*F_TYPE_WIDTH)))


#define PUSH_FIRST_VAL(x) int nvals = 1 ; object result = (x)
#define PUSH_VAL(x) if (nvals>=sizeof(fcall.values)/sizeof(*fcall.values) \
                       FEerror("Too many function call values"); \
                     else fcall.values[nvals++] = (x)
#define RETURN_VALS   fcall.nvalues= nvals; return result;} 0

#define FUNCALL(n,form) (VFUN_NARGS=n,form)
 
/*
 Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

This file is part of GNU Common Lisp, herein referred to as GCL

GCL is free software; you can redistribute it and/or modify it under
the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GCL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
License for more details.

You should have received a copy of the GNU Library General Public License 
along with GCL; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

*/
#ifndef COM_LENG
#define COM_LENG
#endif

/*  alloc.c  */
char *alloc_page();
object alloc_object();
void *malloc(size_t);
void *realloc(void *,size_t);
/* void * memalign(size_t,size_t); */
void *alloc_contblock(size_t);
void *alloc_relblock(size_t);
/* object fSallocate_contiguous_pages(); */
/* object fSallocate_relocatable_pages(); */

/*  array.c  */
/* enum aelttype Iarray_element_type(); */
object fLrow_major_aref();
object fSaset1();
EXTER object sLarray_dimension_limit;
EXTER object sLarray_total_size_limit;
object fSmake_array1();
/* object fSmake_vector1(); */

/*  assignment.c  */
/* object setf(); */



/*  backq.c  */
EXTER int backq_level;
EXTER object sLlistA;
EXTER object sLappend;
EXTER object sLnconc;


/*  bds.c  */

/*  big.c  */
object make_integer_clear();
object stretch_big();
object copy_big();
object copy_to_big();
object big_minus();
object big_plus();
object big_times();
object normalize_big_to_object();
double big_to_double();
EXTER  struct bignum big_fixnum1_body,big_fixnum2_body;
EXTER object big_fixnum1,big_fixnum2;
object maybe_replace_big();




/* bind.c */
EXTER object ANDoptional;
EXTER object ANDrest;
EXTER object ANDkey;
EXTER object ANDallow_other_keys;
EXTER object ANDaux;
EXTER object sKallow_other_keys;
object find_special();
object let_bind();
object letA_bind();

/* block.c */

/*  cfun.c  */
object make_cfun();
object MF();
/* object MM(); */
/* object make_function_internal(); */
/* object make_si_function_internal(); */
/* object make_special_form_internal(); */
object make_macro();
object make_cclosure_new();

/*  character.d  */
EXTER object STreturn;
EXTER object STspace;
EXTER object STrubout;
EXTER object STpage;
EXTER object STtab;
EXTER object STbackspace;
EXTER object STlinefeed;
EXTER object STnewline;
object coerce_to_character();

/*  catch.c  */

/*  cmpaux.c  */
char object_to_char();
char *object_to_string();
float object_to_float();
double object_to_double();

/*  error.c  */
EXTER object sKerror;
EXTER object sKwrong_type_argument;
EXTER object sKcatch;
EXTER object sKprotect;
EXTER object sKcatchall;
EXTER object sKtoo_few_arguments;
EXTER object sKtoo_many_arguments;
EXTER object sKunexpected_keyword;
EXTER object sKinvalid_form;
EXTER object sKunbound_variable;
EXTER object sKinvalid_variable;
EXTER object sKundefined_function;
EXTER object sKinvalid_function;
EXTER object sKpackage_error;
object wrong_type_argument();
EXTER object sSuniversal_error_handler;

/*  eval.c  */
EXTER object sLapply;
EXTER object sLfuncall;
object simple_lispcall();
object simple_lispcall_no_event();
object simple_symlispcall();
object simple_symlispcall_no_event();
EXTER object Vevalhook;
EXTER object Vapplyhook;
object ieval();
object ifuncall(object,int,...);
object ifuncall1();
object ifuncall2();
object ifuncall3();
object fcalln1(object,...);
#define fcalln ((object (*)())fcalln1)
object Ieval();
object Imacro_expand1();

/*  unixfasl.c  fasload.c  */

/*  file.d  */
EXTER object sKabort;
EXTER object sKappend;
EXTER object sKcreate;
EXTER object sKdefault;
EXTER object sKdirection;
EXTER object sKelement_type;
EXTER object sKif_does_not_exist;
EXTER object sKif_exists;
EXTER object sKinput;
EXTER object sKio;
EXTER object sKnew_version;
EXTER object sKoutput;
EXTER object sKoverwrite;
EXTER object sKprint;
EXTER object sKprobe;
EXTER object sKrename;
EXTER object sKrename_and_delete;
EXTER object sKset_default_pathname;
EXTER object sKsupersede;
EXTER object sKverbose;

EXTER object sLAstandard_inputA;
EXTER object sLAstandard_outputA;
EXTER object sLAerror_outputA;
EXTER object sLAquery_ioA;
EXTER object sLAdebug_ioA;
EXTER object sLAterminal_ioA;
EXTER object sLAtrace_outputA;
EXTER object terminal_io;
EXTER object standard_io;

EXTER object sLAload_verboseA;
EXTER object FASL_string;
/* object stream_element_type(); */
object open_stream();
/* object make_two_way_stream(); */
/* object make_echo_stream(); */
object make_string_input_stream();
object make_string_output_stream();
/* object get_output_stream_string(); */
object read_fasl_data();

#ifdef UNIX
/*  unixfsys.c  */
FILE *backup_fopen();
#else
/*  filesystem.c  */
FILE *backup_fopen();
#endif

/*  frame.c  */
frame_ptr frs_sch();
frame_ptr frs_sch_catch();

/*  gbc.c  */
EXTER bool GBC_enable;

/*  let.c  */

/*  lex.c  */
object assoc_eq();
object lex_tag_sch();
object lex_block_sch();

/*  list.d  */
EXTER object sKtest;
EXTER object sKtest_not;
EXTER object sKkey;
EXTER object sKrev;
object car();
object cdr();
object kar();
object kdr();
object caar();
object cadr();
object cdar();
object cddr();
object caaar();
object caadr();
object cadar();
object caddr();
object cdaar();
object cdadr();
object cddar();
object cdddr();
object caaaar();
object caaadr();
object caadar();
object caaddr();
object cadaar();
object cadadr();
object caddar();
object cadddr();
object cdaaar();
object cdaadr();
object cdadar();
object cdaddr();
object cddaar();
object cddadr();
object cdddar();
object cddddr();
object nth();
object nthcdr();
object make_cons();
object list(int,...);
object listA(int,...);
object append();
object copy_list();
object make_list();
object nconc();
object sublis1();

/*  macros.c  */
EXTER object sLAmacroexpand_hookA;
EXTER object sSdefmacroA;
object macro_expand();

/*  main.c  */
EXTER char* system_directory;
EXTER int ARGC;
EXTER char **ARGV;
void error();
#ifdef UNIX
EXTER char **ENVP;
#endif
object vs_overflow(void);

EXTER object sSAsystem_directoryA;
#ifdef UNIX
EXTER char *kcl_self;
#endif
#if !defined(IN_MAIN) || !defined(ATT)
EXTER bool initflag,raw_image;
#endif
char *merge_system_directory();


EXTER object sLquote;

EXTER object sLlambda;

EXTER object sLlambda_block;
EXTER object sLlambda_closure;
EXTER object sLlambda_block_closure;

EXTER object sLfunction;
EXTER object sLmacro;
EXTER object sLtag;
EXTER object sLblock;


/*  mapfun.c  */

/*  multival.c  */

/*  number.c  */
EXTER object shortfloat_zero;
EXTER object longfloat_zero;
#define make_fixnum(a) ({fixnum _a=(a);((_a+SMALL_FIXNUM_LIMIT)&(-2*SMALL_FIXNUM_LIMIT))==0?small_fixnum(_a):make_fixnum1(_a);})
object make_fixnum1(long);
object make_ratio();
object make_shortfloat();
object make_longfloat();
object make_complex();
double number_to_double();
long fixint(object);
/*  num_pred.c  */

/*  num_comp.c  */

/*  num_arith  */
object bignum2();
object bignum3();
/* object number_to_complex(); */
object complex_plus();
object number_plus();
object number_negate();
object number_minus();
object number_times();
object number_divide();
object number_expt();
object integer_divide1();
object get_gcd();
object get_lcm();
object one_plus();
object one_minus();
object fixnum_add();
object fixnum_sub();
object new_bignum();

/*  num_co.c  */
object double_to_integer();

/*  num_log.c  */
object shift_integer();

/*  package.d  */
EXTER object lisp_package;
EXTER object user_package;
#ifdef ANSI_COMMON_LISP
EXTER object common_lisp_package;
#endif
EXTER object keyword_package;
EXTER object system_package;
EXTER object sLApackageA;
EXTER object sKinternal;
EXTER object sKexternal;
EXTER object sKinherited;
EXTER object sKnicknames;
EXTER object sKuse;
EXTER int intern_flag;
EXTER object uninterned_list;
/* object make_package(); */
/* object in_package(); */
/* object rename_package(); */
object find_package();
/* object coerce_to_package(); */
object current_package();
object intern();
object find_symbol();

/*  pathname.d  */
EXTER object Vdefault_pathname_defaults;
EXTER object sKwild;
EXTER object sKnewest;
EXTER object sKstart;
EXTER object sKend;
EXTER object sKjunk_allowed;
EXTER object sKhost;
EXTER object sKdevice;
EXTER object sKdirectory;
EXTER object sKname;
EXTER object sKtype;
EXTER object sKversion;
EXTER object sKdefaults;
EXTER object sKroot;
EXTER object sKcurrent;
EXTER object sKparent;
EXTER object sKper;
/* object parse_namestring(); */
object coerce_to_pathname();
/* object default_device(); */
object merge_pathnames();
object namestring();
object coerce_to_namestring();

/*  prediate.c  */

int eql(),equal(),eq();

/*  print.d  */
EXTER object sKupcase;
EXTER object sKdowncase;
EXTER object sKcapitalize;
EXTER object sKstream;
EXTER object sKreadably;
EXTER object sKescape;
EXTER object sKpretty;
EXTER object sKcircle;
EXTER object sKbase;
EXTER object sKradix;
EXTER object sKcase;
EXTER object sKgensym;
EXTER object sKlevel;
EXTER object sKlength;
EXTER object sKarray;
EXTER object sLAprint_readablyA;
EXTER object sLAprint_escapeA;
EXTER object sLAprint_prettyA;
EXTER object sLAprint_circleA;
EXTER object sLAprint_baseA;
EXTER object sLAprint_radixA;
EXTER object sLAprint_caseA;
EXTER object sLAprint_gensymA;
EXTER object sLAprint_levelA;
EXTER object sLAprint_lengthA;
EXTER object sLAprint_arrayA;
EXTER object *PRINTvs_top;
EXTER object *PRINTvs_limit;
EXTER object PRINTstream;
EXTER bool PRINTreadably;
EXTER bool PRINTescape;
EXTER bool PRINTpretty;
EXTER bool PRINTcircle;
EXTER int PRINTbase;
EXTER bool PRINTradix;
EXTER object PRINTcase;
EXTER bool PRINTgensym;
EXTER int PRINTlevel;
EXTER int PRINTlength;
EXTER bool PRINTarray;
EXTER void (*write_ch_fun)(int);
object princ();
object prin1();
object print();
object terpri();
EXTER object sSpretty_print_format;
EXTER int  line_length;

/*  Read.d  */
EXTER object standard_readtable;
EXTER object Vreadtable;
EXTER object sLAread_default_float_formatA;
EXTER object sLAread_baseA;
EXTER object sLAread_suppressA;
EXTER object READtable;
EXTER object read_byte1();
EXTER int READdefault_float_format;
EXTER int READbase;
EXTER bool READsuppress;
EXTER object siSsharp_comma;
EXTER bool escape_flag;
EXTER object delimiting_char;
EXTER bool detect_eos_flag;
/* bool in_list_flag; */
EXTER bool dot_flag;
EXTER bool preserving_whitespace_flag;
EXTER object default_dispatch_macro;
EXTER object big_register_0;
EXTER int sharp_eq_context_max;
object read_char();
object read_char1(object,object);
object peek_char();
/* object read_object_recursive(); */
object read_object_non_recursive();
object standard_read_object_non_recursive();
object read_object();
/* object parse_number(); */
/* object parse_integer(); */
/* object copy_readtable(); */
/* object current_readtable(); */
/* object patch_sharp(); */
object read_fasl_vector();

/* fasdump.c */
EXTER object sharing_table;

/*  reference.c  */
object symbol_function();


/*  sequence.d  */
object alloc_simple_vector();
object alloc_simple_bitvector();
object elt();
object elt_set();
object reverse();
object nreverse();

/*  structure.c  */
EXTER object sSs_data;
object structure_ref();
object structure_set();
object structure_to_list();

/*  string.d  */
object alloc_simple_string();
object make_simple_string();
object copy_simple_string();
object coerce_to_string();
EXTER int string_sign, string_boundary;

/*  symbol.d  */
EXTER object string_register;
EXTER object gensym_prefix;
/* EXTER int gensym_counter; */
EXTER object sLgensym_counter;
EXTER object gentemp_prefix;
EXTER int gentemp_counter;
EXTER object token;
object make_symbol();
object make_ordinary();
object make_special();
object make_constant();
object make_si_ordinary();
object make_si_special();
object make_si_constant();
object make_keyword();
object symbol_value();
object symbol_name();
object getf();
object get();
object putf();
object putprop();
object sputprop();
object remprop();
object gensym();		/*  to be deleted  */

#ifdef UNIX
/*  unixsys.c  */
#else
/*  sys.c  */
#endif

#ifdef UNIX
/*  unixtime.c  */
object unix_time_to_universal_time();
#else
/*  time.c  */
#endif

/*  toplevel.c  */
EXTER object sLspecial,sLdeclare;
EXTER object sSvariable_documentation;
EXTER object sSfunction_documentation;

/*  typespec.c  */
EXTER object sLcommon,sLnull,sLcons,sLlist,sLsymbol,sLarray,sLvector,sLbit_vector,sLstring;
EXTER object sLsequence,sLsimple_array,sLsimple_vector,sLsimple_bit_vector,sLsimple_string;
EXTER object sLcompiled_function,sLpathname,sLcharacter,sLnumber,sLrational,sLfloat,sLstring_char;
EXTER object sLinteger,sLratio,sLshort_float,sLstandard_char,sLfixnum,sLpositive_fixnum, sLcomplex;
EXTER object sLsingle_float,sLpackage,sLbignum,sLrandom_state,sLdouble_float,sLstream,sLbit,sLreadtable;
EXTER object sLlong_float,sLhash_table,sLstructure,sLboolean;

#ifdef ANSI_COMMON_LISP
/* new ansi types */
EXTER object sLarithmetic_error,sLbase_char,sLbase_string,sLbroadcast_stream,sLbuilt_in_class;
EXTER object sLcell_error,sLclass,sLconcatenated_stream,sLcondition,sLcontrol_error,sLdivision_by_zero;
EXTER object sLecho_stream,sLend_of_file,sLerror,sLextended_char,sLfile_error,sLfile_stream;
EXTER object sLfloating_point_inexact,sLfloating_point_invalid_operation,sLfloating_point_overflow;
EXTER object sLfloating_point_underflow,sLgeneric_function,sLlogical_pathname,sLmethod,sLpackage_error;
EXTER object sLparse_error,sLprint_not_readable,sLprogram_error,sLreader_error,sLserious_condition;
EXTER object sLsimple_base_string,sLsimple_condition,sLsimple_type_error,sLsimple_warning,sLstandard_class;
EXTER object sLstandard_generic_function,sLstandard_method,sLstandard_object,sLstorage_condition;
EXTER object sLstream_error,sLstring_stream,sLstructure_class,sLstyle_warning,sLsynonym_stream;
EXTER object sLtwo_way_stream,sLtype_error,sLunbound_slot,sLunbound_variable,sLundefined_function,sLwarning;
EXTER object sLmethod_combination,sLstructure_object;
#endif

EXTER object sLsatisfies;
EXTER object sLmember;
EXTER object sLnot;
EXTER object sLor;
EXTER object sLand;
EXTER object sLvalues;
EXTER object sLmod;
EXTER object sLsigned_byte;
EXTER object sLunsigned_byte;
EXTER object sLsigned_char;
EXTER object sLunsigned_char;
EXTER object sLsigned_short;
EXTER object sLunsigned_short;
EXTER object sLA;
EXTER object sLplusp;
EXTER object TSor_symbol_string;
EXTER object TSor_string_symbol;
EXTER object TSor_symbol_string_package;
EXTER object TSnon_negative_integer;
EXTER object TSpositive_number;
EXTER object TSor_integer_float;
EXTER object TSor_rational_float;
#ifdef UNIX
EXTER object TSor_pathname_string_symbol;
#endif
EXTER object TSor_pathname_string_symbol_stream;

EXTER int interrupt_flag;		/* console interupt flag */
EXTER int interrupt_enable;		/* console interupt enable */

/*  CMPtemp  */
EXTER object CMPtemp;
EXTER object CMPtemp1;
EXTER object CMPtemp2;
EXTER object CMPtemp3;

EXTER object sLAlink_arrayA;

/* nfunlink.c */
object Icall_proc();
float Icall_proc_float();
/* object Icall_proc(); */
float Icall_proc_float();
object ImakeStructure();
object list_vector();
object list_vector_new();
object Iapply_ap();
object IisFboundp();
object IapplyVector();
object c_apply_n();
EXTER object sSPmemory;
EXTER object sSPinit;
object sLfset();
object MakeAfun();
extern  object Cstd_key_defaults[];   
extern object call_proc0();
/* extern object call_proc(); */
/* extern object call_vproc(); */
object fLrow_major_aref();
object Icheck_one_type();

/* utils.c */
object Iis_fixnum();
object Iapply_fun_n(object,int,int,...);
object Iapply_fun_n1(object (*)(),int,int,...);
object Iapply_fun_n2(object,int,int,...);
object Ifuncall_n(object,int,...);
object Ivs_values();
object Icheck_one_type();
object fSincorrect_type();
EXTER object fLbye (fixnum exitc);
EXTER object fLquit (fixnum exitc);
EXTER object sSAno_initA;
EXTER object fLidentity (object x0);
EXTER object fSgcl_compile_time (void);
EXTER object fSldb1 (fixnum a,fixnum b, fixnum c);
EXTER object fLlisp_implementation_version (void);
EXTER object sSAlisp_maxpagesA;
EXTER object sSAsystem_directoryA;
EXTER object sSAmultiply_stacksA;
EXTER object sStop_level;
EXTER object sSAcommand_argsA;
EXTER object sSAafter_gbc_hookA;
EXTER object sSAignore_maximum_pagesA;
EXTER object sSAoptimize_maximum_pagesA;
EXTER object sSAnotify_optimize_maximum_pagesA;
EXTER object fSallocated (object typ);
EXTER object fSreset_number_used (object typ);
EXTER object fSstaticp (object x);
EXTER object fSallocate_sgc (object type,fixnum min,fixnum max,fixnum free_percent);
EXTER object fSallocate_growth (object type,fixnum min,fixnum max,fixnum percent,fixnum percent_free);
EXTER object fSallocate_contiguous_pages (fixnum npages,...);
EXTER object fSallocated_contiguous_pages (void);
EXTER object fSmaximum_contiguous_pages (void);
EXTER object fSallocate_relocatable_pages (fixnum npages,...);
EXTER object fSallocate (object type,fixnum npages,...);
EXTER object fSallocated_relocatable_pages (void);
EXTER object fSget_hole_size (void);
EXTER object fSset_hole_size (fixnum npages,...);
EXTER object fLgbc (object x0);
EXTER object sSAnotify_gbcA;
EXTER object sSAgbc_messageA;
EXTER object sLcommon;
EXTER object sLnull;
EXTER object sLcons;
EXTER object sLlist;
EXTER object sLsymbol;
EXTER object sLarray;
EXTER object sLvector;
EXTER object sLbit_vector;
EXTER object sLstring;
EXTER object sLsequence;
EXTER object sLsimple_array;
EXTER object sLsimple_vector;
EXTER object sLsimple_bit_vector;
EXTER object sLsimple_string;
EXTER object sLfunction;
EXTER object sLcompiled_function;
EXTER object sLpathname;
EXTER object sLcharacter;
EXTER object sLnumber;
EXTER object sLrational;
EXTER object sLfloat;
EXTER object sLstring_char;
EXTER object sLinteger;
EXTER object sLratio;
EXTER object sLshort_float;
EXTER object sLstandard_char;
EXTER object sLboolean;
EXTER object sLfixnum;
EXTER object sLpositive_fixnum;
EXTER object sLcomplex;
EXTER object sLsingle_float;
EXTER object sLpackage;
EXTER object sLbignum;
EXTER object sLrandom_state;
EXTER object sLdouble_float;
EXTER object sLstream;
EXTER object sLbit;
EXTER object sLreadtable;
EXTER object sLlong_float;
EXTER object sLhash_table;
EXTER object sLkeyword;
EXTER object sLstructure;
EXTER object sLsatisfies;
EXTER object sLmember;
EXTER object sLnot;
EXTER object sLor;
EXTER object sLand;
EXTER object sLvalues;
EXTER object sLmod;
EXTER object sLsigned_byte;
EXTER object sLunsigned_byte;
EXTER object sLsigned_char;
EXTER object sLunsigned_char;
EXTER object sLsigned_short;
EXTER object sLunsigned_short;
EXTER object sLA;
EXTER object sLplusp;
EXTER object sSchar_size;
EXTER object sSshort_size;
EXTER object fLfuncall (object fun,...);
EXTER object fLapply (object fun,...);
EXTER object fLeval (object x0);
EXTER object fLconstantp (object x0);
EXTER object sSlambda_block_expanded;
EXTER object sSAbreak_pointsA;
EXTER object sSAbreak_stepA;
EXTER object fLmacroexpand (object form,...);
EXTER object sLfuncall;
EXTER object sLAmacroexpand_hookA;
EXTER object sSdefmacroA;
EXTER object sSAinhibit_macro_specialA;
EXTER object fLnull (object x0);
EXTER object fLnot (object x0);
EXTER object fLsymbolp (object x0);
EXTER object fLatom (object x0);
EXTER object fLconsp (object x0);
EXTER object fLlistp (object x0);
EXTER object fLnumberp (object x0);
EXTER object fLintegerp (object x0);
EXTER object fLrationalp (object x0);
EXTER object fLrealp (object x0);
EXTER object fLfloatp (object x0);
EXTER object fLcomplexp (object x0);
EXTER object fLcharacterp (object x0);
EXTER object fLstringp (object x0);
EXTER object fLbit_vector_p (object x0);
EXTER object fLvectorp (object x0);
EXTER object fLsimple_string_p (object x0);
EXTER object fLsimple_bit_vector_p (object x0);
EXTER object fLsimple_vector_p (object x0);
EXTER object fLarrayp (object x0);
EXTER object fLpackagep (object x0);
EXTER object fLfunctionp (object x0);
EXTER object fLcompiled_function_p (object x0);
EXTER object fLcommonp (object x0);
EXTER object fLeq (object x0,object x1);
EXTER object fLeql (object x0,object x1);
EXTER object fLequal (object x0,object x1);
EXTER object fLequalp (object x0,object x1);
EXTER object fScontains_sharp_comma (object x0);
EXTER object fSspicep (object x0);
EXTER object fSfixnump (object x0);
EXTER object fLset (object symbol,object value);
EXTER object fSfset (object sym,object function);
EXTER object fLmakunbound (object sym);
EXTER object fLfmakunbound (object sym);
EXTER object sSclear_compiler_properties;
EXTER object fSclear_compiler_properties (object x0,object x1);
EXTER object sLaref;
EXTER object sLcar;
EXTER object sLcdr;
EXTER object sLchar;
EXTER object sLdecf;
EXTER object sLelt;
EXTER object sLfill_pointer;
EXTER object sLget;
EXTER object sLgetf;
EXTER object sLgethash;
EXTER object sLincf;
EXTER object sLpop;
EXTER object sLpush;
EXTER object sLschar;
EXTER object sLsetf;
EXTER object sSsetf_lambda;
EXTER object sSstructure_access;
EXTER object sLsvref;
EXTER object sStraced;
EXTER object sLvector;
EXTER object sKallow_other_keys;
EXTER object fSerror_set (volatile object x0);
EXTER object sLgensym_counter;
EXTER object fSmc (object name,object address);
EXTER object fSmfsfun (object name,object address,object argd);
EXTER object fSmfvfun (object name,object address,object argd);
EXTER object fSmfvfun_key (object symbol,object address,object argd,object keys);
EXTER object fSmf (object name,object addr);
EXTER object fSmm (object name,object addr);
EXTER object fScompiled_function_name (object fun);
EXTER object fSturbo_closure (object funobj);
EXTER object fSspecialp (object sym);
EXTER object sSdebug;
EXTER object fSdefvar1 (object sym,object val,...);
EXTER object fSdebug (object sym,object val);
EXTER object fSsetvv (object index,object val);
EXTER object sSPmemory;
EXTER object sSPinit;
EXTER object fSinit_cmp_anon (void);
EXTER object fSfind_init_name (object namestring);
EXTER object sKexternal;
EXTER object sKinherited;
EXTER object sKinternal;
EXTER object sKnicknames;
EXTER object sKuse;
EXTER object sLApackageA;
EXTER object fSset_gmp_allocate_relocatable (object flag);
EXTER object fSallocate_bigger_fixnum_range (fixnum min,fixnum max);
EXTER object fScmod (object num);
EXTER object fScplus (object x0,object x1);
EXTER object fSctimes (object x0,object x1);
EXTER object fScdifference (object x0,object x1);
EXTER object fLnth (fixnum index,object list);
EXTER object fLfirst (object x);
EXTER object fLsecond (object x);
EXTER object fLthird (object x);
EXTER object fLfourth (object x);
EXTER object fLfifth (object x);
EXTER object fLsixth (object x);
EXTER object fLseventh (object x);
EXTER object fLeighth (object x);
EXTER object fLninth (object x);
EXTER object fLtenth (object x);
EXTER object fSnext_hash_table_entry (object table,object ind);
EXTER object fLhash_table_test (object table);
EXTER object fLhash_table_size (object table);
EXTER object sLarray_rank_limit;
EXTER object sLarray_dimension_limit;
EXTER object sLarray_total_size_limit;
EXTER object sLbit;
EXTER object fLaref (object x,fixnum i, ...);
EXTER object fLsvref (object x,ufixnum i);
EXTER object fLrow_major_aref (object x,fixnum i);
EXTER object fSaset1 (object x, fixnum i,object val);
EXTER object fSaset (object x,object ii,object y, ...);
EXTER object fSsvset (object x,fixnum i,object val);
EXTER object fSmake_vector1 (fixnum n,fixnum elt_type,object staticp,...);
EXTER object fSget_aelttype (object x);
EXTER object fSmake_vector (object x0,object x1,object x2,object x3,object x4,object x5,object x6,...);
EXTER object fSmake_array1 (fixnum elt_type,object staticp,object initial_element,object displaced_to,fixnum displaced_index_offset, object dimensions);
EXTER object fScopy_array_portion (object x,object y,fixnum i1,fixnum i2,object n1o);
EXTER object fSfill_pointer_set (object x,fixnum i);
EXTER object fLfill_pointer (object x);
EXTER object fLarray_has_fill_pointer_p (object x);
EXTER object fLarray_element_type (object x);
EXTER object fLadjustable_array_p (object x);
EXTER object fSdisplaced_array_p (object x);
EXTER object fLarray_rank (object x);
EXTER object fLarray_dimension (object x,fixnum i);
EXTER object fSreplace_array (object old,object new);
EXTER object fLarray_total_size (object x);
EXTER object fSaset_by_cursor (object array,object val,object cursor);
EXTER object sSAmatch_dataA;
EXTER object sSAcase_fold_searchA;
EXTER object fSmatch_beginning (fixnum i);
EXTER object fSmatch_end (fixnum i);
EXTER object fScompile_regexp (object p);
EXTER object fSstring_match (object pattern,object string,...);
EXTER object sSs_data;
EXTER object sLcompile;
EXTER object sKcompile_toplevel;
EXTER object sLdeclare;
EXTER object sLeval;
EXTER object sKexecute;
EXTER object sSfunction_documentation;
EXTER object sLload;
EXTER object sKload_toplevel;
EXTER object sLprogn;
EXTER object sLtypep;
EXTER object sLvalues;
EXTER object sSvariable_documentation;
EXTER object sLwarn;
EXTER object sSAallow_gzipped_fileA;
EXTER object sSAcollect_binary_modulesA;
EXTER object sSAbinary_modulesA;
EXTER object sKmyaddr;
EXTER object sKmyport;
EXTER object sKasync;
EXTER object sKhost;
EXTER object sKserver;
EXTER object sKdaemon;
EXTER object sKpersistent;
EXTER object sSsocket;
EXTER object sLAstandard_inputA;
EXTER object sLAstandard_outputA;
EXTER object sLAerror_outputA;
EXTER object sLAterminal_ioA;
EXTER object sLAquery_ioA;
EXTER object sLAdebug_ioA;
EXTER object sLAtrace_outputA;
EXTER object sSAignore_eof_on_terminal_ioA;
EXTER object sSAload_pathnameA;
EXTER object sLAload_verboseA;
EXTER object sKabort;
EXTER object sKappend;
EXTER object sKcreate;
EXTER object sKdefault;
EXTER object sKdirection;
EXTER object sKelement_type;
EXTER object sKerror;
EXTER object sKif_does_not_exist;
EXTER object sKif_exists;
EXTER object sKinput;
EXTER object sKio;
EXTER object sKnew_version;
EXTER object sKoutput;
EXTER object sKoverwrite;
EXTER object sKprint;
EXTER object sKprobe;
EXTER object sKrename;
EXTER object sKrename_and_delete;
EXTER object sKset_default_pathname;
EXTER object sKsupersede;
EXTER object sKverbose;
EXTER object sLAread_default_float_formatA;
EXTER object sLAread_baseA;
EXTER object sLAread_suppressA;
EXTER object sSY;
EXTER object sSYB;
EXTER object sSYZ;
EXTER object sLlistA;
EXTER object sLappend;
EXTER object sLnconc;
EXTER object sLapply;
EXTER object sLvector;
EXTER object sKupcase;
EXTER object sKdowncase;
EXTER object sKcapitalize;
EXTER object sKstream;
EXTER object sKescape;
EXTER object sKreadably;
EXTER object sKpretty;
EXTER object sKcircle;
EXTER object sKbase;
EXTER object sKradix;
EXTER object sKcase;
EXTER object sKgensym;
EXTER object sKlevel;
EXTER object sKlength;
EXTER object sKarray;
EXTER object sLAprint_escapeA;
EXTER object sLAprint_readablyA;
EXTER object sLAprint_prettyA;
EXTER object sLAprint_circleA;
EXTER object sLAprint_baseA;
EXTER object sLAprint_radixA;
EXTER object sLAprint_caseA;
EXTER object sLAprint_gensymA;
EXTER object sLAprint_levelA;
EXTER object sLAprint_lengthA;
EXTER object sLAprint_arrayA;
EXTER object sSAprint_packageA;
EXTER object sSAprint_structureA;
EXTER object sSpretty_print_format;
EXTER object sSAprint_nansA;
EXTER object fLformat (object strm, object control,...);
EXTER object sSAindent_formatted_outputA;
EXTER object sKdirectory;
EXTER object sKlink;
EXTER object sKfile;
EXTER object fSstat (object path);
EXTER object fSsetenv (object variable,object value);
EXTER object fLdelete_file (object path);
EXTER object fLerror (object fmt_string,...);
EXTER object fLspecific_error (object error_name,object fmt_string,...);
EXTER object fLspecific_correctable_error (object error_name,object fmt_string,...);
EXTER object fLcerror (object continue_fmt_string,object fmt_string,...);
EXTER object fSihs_top (void);
EXTER object fSihs_fun (object x0);
EXTER object fSihs_vs (object x0);
EXTER object fSfrs_top (void);
EXTER object fSfrs_vs (object x0);
EXTER object fSfrs_bds (object x0);
EXTER object fSfrs_class (object x0);
EXTER object fSfrs_tag (object x0);
EXTER object fSfrs_ihs (object x0);
EXTER object fSbds_top (void);
EXTER object fSbds_var (object x0);
EXTER object fSbds_val (object x0);
EXTER object fSvs_top (void);
EXTER object fSvs (object x0);
EXTER object fSsch_frs_base (object x0,object x1);
EXTER object fSinternal_super_go (object tag,object x1,object x2);
EXTER object sSuniversal_error_handler;
EXTER object fSuniversal_error_handler (object x0,object x1,object x2,object x3,object error_fmt_string);
EXTER object sSterminal_interrupt;
EXTER object sKwrong_type_argument;
EXTER object sKtoo_few_arguments;
EXTER object sKtoo_many_arguments;
EXTER object sKunexpected_keyword;
EXTER object sKinvalid_form;
EXTER object sKunbound_variable;
EXTER object sKinvalid_variable;
EXTER object sKundefined_function;
EXTER object sKinvalid_function;
EXTER object sKpackage_error;
EXTER object sKcatch;
EXTER object sKprotect;
EXTER object sKcatchall;
EXTER object fLget_universal_time (void);
EXTER object fSgettimeofday (void);
EXTER object fLget_internal_real_time (void);
EXTER object sSAdefault_time_zoneA;
EXTER object fSgetpid (void);
EXTER object sSAload_with_freadA;
EXTER object fSuse_fast_links (object flag,...);
EXTER object sScdefn;
EXTER object sLAlink_arrayA;
EXTER object fSprofile (object start_address,object scale);
EXTER object fSfunction_start (object funobj);
EXTER object fSset_up_combined (object first,...);
EXTER object fSdisplay_profile (object start_addr,object scal);
EXTER object fSarray_adress (object array);
EXTER object sSAprofile_arrayA;
EXTER object sSAinterrupt_enableA;
EXTER object sSsigusr1_interrupt;
EXTER object sSsigio_interrupt;
EXTER object sSsignal_safety_required (fixnum signo,fixnum safety);
EXTER object fSallow_signal (fixnum n);
EXTER object fSinitfun (object sym,object addr_ind,object argd,...);
EXTER object fSinitmacro (object first,...);
EXTER object fSset_key_struct (object key_struct_ind);
EXTER object fSinvoke (object x);
EXTER object fSopen_named_socket (fixnum port);
EXTER object fSclose_fd (fixnum fd);
EXTER object fSclose_sfd (object sfd);
EXTER object fSaccept_socket_connection (object named_socket);
EXTER object fShostname_to_hostid (object host);
EXTER object fSgethostname (void);
EXTER object fShostid_to_hostname (object host_id);
EXTER object fScheck_fd_for_input (fixnum fd,fixnum timeout);
EXTER object fSclear_connection (fixnum fd);
EXTER object fSconnection_state_fd (object sfd);
EXTER object fSour_write (object sfd,object buffer,fixnum nbytes);
EXTER object fSour_read_with_offset (object fd,object buffer,fixnum offset,fixnum nbytes,fixnum timeout);
EXTER object fSprint_to_string1 (object str,object x,object the_code);
EXTER object fSset_sigio_for_fd (fixnum fd);
EXTER object fSreset_string_input_stream (object strm,object string,fixnum start,fixnum end);
EXTER object fScheck_state_input (object osfd,fixnum timeout);
EXTER object fSclear_connection_state (object osfd);
EXTER object fSgetpeername (object sock);
EXTER object fSgetsockname (object sock);
EXTER object fSset_blocking (object sock,object setBlocking);
EXTER object sSAreadline_prefixA;
/* if already mp.h has been included skip */
#ifdef GMP
#define save_avma 
#define restore_avma 
#endif

#ifdef _MP_H
#ifdef GMP

#else /* no gmp */

typedef  plong *GEN1;
/* if genpari.h not loaded */
#ifndef MAXBLOC
typedef  plong *GEN;
GEN1 addii(),mulii(),mulsi(),powerii(),shifti(),stoi(),dvmdii(),subii();
int cmpii();
plong itos();
#define signe(x)          (((GEN1)(x))[1]>>24)
#define lg(x)             (((GEN1)(x))[0]&0xffff)
#define setlg(x,s)        (((GEN1)(x))[0]=(((GEN1)(x))[0]&0xffff0000)+s)
#define lgef(x)           (((GEN1)(x))[1]&0xffff)
#define setlgef(x,s)      (((GEN1)(x))[1]=(((GEN1)(x))[1]&0xffff0000)+s)

#define our_ulong unsigned plong
#endif /* end MAXBLOC */


EXTER int in_saved_avma ;
EXTER unsigned plong avma;
EXTER GEN1 gzero;
EXTER GEN1 icopy_x;
/* #define DEBUG_AVMA */

#ifdef DEBUG_AVMA
#define save_avma long lvma = (in_saved_avma = 1, avma)
#define restore_avma avma = (in_saved_avma = 0, lvma)
#else
#define save_avma long lvma = avma
#define restore_avma avma = lvma
#endif

#endif /* NO GMP */
#endif /*  _MP_H */

  /* copy x to y, increasing space by factor of 2  */
object make_integer();

#define Mcar(x)	(x)->c.c_car
#define Mcdr(x)	(x)->c.c_cdr
#define Mcaar(x)	(x)->c.c_car->c.c_car
#define Mcadr(x)	(x)->c.c_cdr->c.c_car
#define Mcdar(x)	(x)->c.c_car->c.c_cdr
#define Mcddr(x)	(x)->c.c_cdr->c.c_cdr
#define Mcaaar(x)	(x)->c.c_car->c.c_car->c.c_car
#define Mcaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car
#define Mcadar(x)	(x)->c.c_car->c.c_cdr->c.c_car
#define Mcaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car
#define Mcdaar(x)	(x)->c.c_car->c.c_car->c.c_cdr
#define Mcdadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr
#define Mcddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr
#define Mcdddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr
#define Mcaaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_car
#define Mcaaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_car
#define Mcaadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_car
#define Mcaaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_car
#define Mcadaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_car
#define Mcadadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_car
#define Mcaddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_car
#define Mcadddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_car
#define Mcdaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_cdr
#define Mcdaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_cdr
#define Mcdadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_cdr
#define Mcdaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_cdr
#define Mcddaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_cdr
#define Mcddadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_cdr
#define Mcdddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_cdr
#define Mcddddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_cdr

/* for cmp */

#define CMPcar(x)	(x)->c.c_car
#define CMPcdr(x)	(x)->c.c_cdr
#define CMPcaar(x)	(x)->c.c_car->c.c_car
#define CMPcadr(x)	(x)->c.c_cdr->c.c_car
#define CMPcdar(x)	(x)->c.c_car->c.c_cdr
#define CMPcddr(x)	(x)->c.c_cdr->c.c_cdr
#define CMPcaaar(x)	(x)->c.c_car->c.c_car->c.c_car
#define CMPcaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car
#define CMPcadar(x)	(x)->c.c_car->c.c_cdr->c.c_car
#define CMPcaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car
#define CMPcdaar(x)	(x)->c.c_car->c.c_car->c.c_cdr
#define CMPcdadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr
#define CMPcddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr
#define CMPcdddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr
#define CMPcaaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_car
#define CMPcaaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_car
#define CMPcaadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_car
#define CMPcaaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_car
#define CMPcadaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_car
#define CMPcadadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_car
#define CMPcaddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_car
#define CMPcadddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_car
#define CMPcdaaar(x)	(x)->c.c_car->c.c_car->c.c_car->c.c_cdr
#define CMPcdaadr(x)	(x)->c.c_cdr->c.c_car->c.c_car->c.c_cdr
#define CMPcdadar(x)	(x)->c.c_car->c.c_cdr->c.c_car->c.c_cdr
#define CMPcdaddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_car->c.c_cdr
#define CMPcddaar(x)	(x)->c.c_car->c.c_car->c.c_cdr->c.c_cdr
#define CMPcddadr(x)	(x)->c.c_cdr->c.c_car->c.c_cdr->c.c_cdr
#define CMPcdddar(x)	(x)->c.c_car->c.c_cdr->c.c_cdr->c.c_cdr
#define CMPcddddr(x)	(x)->c.c_cdr->c.c_cdr->c.c_cdr->c.c_cdr
#define CMPfuncall	funcall
#define Creturn(v) return((vs_top=vs,(v)))
/* end for cmp*/

/* 2^6 is the limit on the number of args */
#define F_NARG_WIDTH 6
#define F_START_TYPES_POS   (2* F_NARG_WIDTH + F_end )
enum F_arg_flags
{ F_requires_nargs, /* if set, then caller must store VFUN_NARGS with number
		       of args passed.   F_ARGD is used to set up the argd,
		       and it sets this if minargs < maxargs.   */
  F_caller_sets_one_val, /* If set, then the CALLER will look after setting the
		       fcall.nvalues to 1, if necessary (eg the call is at the
		       end of a function, or if multiple-values-list invokes
		       the function.)  If foo is proclaimed to return exactly
		       one value, then the CALLER might set this flag in the
		       link argd, or it might do it in the case we have (setq
		       x (foo)) or (values (foo)).   
		      
		       If this flag is not set, then the CALLED function is
		       responsible for setting the number of values in
		       fcall.nvalues, and also for always returning as C value
		       Cnil, in the case that it sets fcall.nvalues == 0.  */
  F_requires_fun_passed, /* if set, the caller must set VFUN_FUN to the
			    calling function.  This is used by closures, but
			    could be used by other things i suppose. */
  F_end               /* 1 bigger than the largest flag */
  };
enum F_arg_types
{ F_object,
  F_int,  
  F_double_ptr,
  F_shortfloat  
  };

/* Make a mask for bits i < j, masking j-i bits */
#define MASK_RANGE(i,j)  ((~(~0 << (j-i)))<< i)

#define F_PLAIN(x) (((x) & MASK_RANGE( F_START_TYPES_POS,31)) == 0)
#define ARG_LIMIT 63

EXTER object MVloc[10];

#define TYPEP(x,t) (type_of(x) == (t))


#ifdef HAVE_ALLOCA
/* #ifndef alloca */
/* char *alloca(); */
/* #endif */
#include <stdlib.h>
EXTER char *alloca_val;
#define OUR_ALLOCA(n) alloca(n)
#define ALLOCA_FREE(n) 

#define ALLOCA_CONS(n) (alloca_val=alloca((n)*sizeof(struct cons))) 
#define ON_STACK_CONS(x,y) (alloca_val=alloca(sizeof(struct cons)), on_stack_cons(x,y)) 
#define ON_STACK_LIST on_stack_list
#define ON_STACK_LIST_VECTOR on_stack_list_vector
#define ON_STACK_LIST_VECTOR_NEW on_stack_list_vector_new
#define ON_STACK_MAKE_LIST on_stack_make_list
object on_stack_cons();
object on_stack_list(int,...);
/* object on_stack_list_vector(int,va_list); */
object on_stack_list_vector_new(int,object,va_list);
object on_stack_make_list();
#else /* no HAVE_ALLOCA */
#define OUR_ALLOCA(n) malloc(n)
#define ALLOCA_FREE(n) free(n)
#define ALLOCA_CONS(n) 0
#define ON_STACK_CONS(x,y) MMcons(x,y)
#define ON_STACK_LIST list
#define ON_STACK_LIST_VECTOR list_vector
#define ON_STACK_MAKE_LIST make_list
#endif
#ifndef KEYTYPE
#define KEYTYPE void *
#endif



#define Scons sLcons
#define aref1 fLrow_major_aref 
#define aref  fLrow_major_aref
/*  #define aset1 fSaset1 */
#define aset  aset1
#define siSPinit sSPinit
#define siSPmemory sSPmemory
#define siSdefmacroA sSdefmacroA
#define siSfunction_documentation sSfunction_documentation
#define siSlambda_block_expanded sSlambda_block_expanded
#define siSpretty_print_format sSpretty_print_format
#define IdoInit(x,y) do_init(y)
/* #define siSsharp_comma  */
#define siSvariable_documentation sSvariable_documentation


#define EQ(x,y) ((x)==(y))

#define	CMPmake_fixnum(x) make_fixnum(x)

object make_integer();
  /* copy x to y, increasing space by factor of 2  */

#ifndef GMP
GEN otoi();
/*
object integ_temp;
#define otoi(x) (integ_temp = (x) , (type_of(integ_temp) == t_bignum \
   ? MP(integ_temp) :stoi(fix(integ_temp))))
*/
#define ISETQ_FIX(a,b,c) isetq_fix(a,c)
void isetq_fix();
#ifdef HAVE_ALLOCA
#define SETQ_II(var,alloc,val) \
  do{GEN _xx =(val) ; \
  int _n = replace_copy1(_xx,var); \
  if(_n) var = replace_copy2(_xx,alloca(_n));}while(0)

#define SETQ_IO(var,alloc,val) {object _xx =(val) ; \
			      int _n = obj_replace_copy1(_xx,var); \
			    if(_n) var = obj_replace_copy2(_xx,alloca(_n));}
#define IDECL(a,b,c) our_ulong b[4];a =(b[0]=0x1010000 +4,b) ; object c
#else
GEN setq_io(),setq_ii();
#define SETQ_IO(x,alloc,val)   (x)=setq_io(x,&alloc,val)
#define SETQ_II(x,alloc,val)   (x)=setq_ii(x,&alloc,val)
#define IDECL(a,b,c) our_ulong b[4];a =(b[0]=0x1010000 +4,b);object c
#endif

#else

typedef MP_INT * GEN;

int obj_to_mpz(object,MP_INT *);
int obj_to_mpz1(object,MP_INT *,void *);
int mpz_to_mpz(MP_INT *,MP_INT *);
int mpz_to_mpz1(MP_INT *,MP_INT *,void *);
void isetq_fix(MP_INT *,int);
MP_INT * otoi(object x);

#ifndef HAVE_ALLOCA
#error Need alloca for GMP
#endif

/* Add fourth argument af to the SETQ macros to allow for malloc allocation */
/* inside setjmp frames, and faster alloca allocation otherwise.*/
/* FIXME, verify that IDECL need not be changed, improve logic behind malloc */
/* selection, e.g. closure boundaries.  CM 20031201*/
#define IDECL(a,b,c) mp_limb_t *c=(mp_limb_t *)alloca(1*sizeof(mp_limb_t));MP_INT b={1,1,c}; a = &b 
#define SETQ_IO(var,alloc,val,af) { object _xx = (val); \
                                    int _n; \
                                    if ((_n=obj_to_mpz(_xx,(var)))) {\
                                      obj_to_mpz1(_xx,(var),af(_n));}}
#define SETQ_II(var,alloc,val,af) { MP_INT * _xx = (val); \
                                    int _n; \
                                    if ((_n=mpz_to_mpz(_xx,(var)))) {\
                                      mpz_to_mpz1(_xx,(var),af(_n));}}
#define ISETQ_FIX(a,b,c) isetq_fix(a,c)


/*  #define IDECL(a,b,c) MP_INT b; a = (mpz_init(&b),&b) ; object c */
/*  #define SETQ_IO(var,alloc,val) { object _xx = (val); \ */
/*                                   obj_to_mpz(_xx,(var));} */
/*  #define SETQ_II(var,alloc,val) { MP_INT * _xx = (val); \ */
/*                                   mpz_to_mpz(_xx,(var));} */
/*  #define ISETQ_FIX(a,b,c) isetq_fix(a,c) */


#endif /* end no GMP */

#define	cclosure_call	funcall

#ifndef _REGEXP
#define _REGEXP 1

#define NSUBEXP  10
typedef struct regexp {
	char *startp[NSUBEXP];
	char *endp[NSUBEXP];
	char regstart;		/* Internal use only. */
	char reganch;		/* Internal use only. */
	char *regmust;		/* Internal use only. */
	int regmlen;		/* Internal use only. */
	unsigned char regmaybe_boyer;
	char program[1];	/* Unwarranted chumminess with compiler. */
} regexp;

#if __STDC__ == 1
#define _ANSI_ARGS_(x) x
#else
#define _ANSI_ARGS_(x) ()
#endif

/* extern regexp *regcomp _ANSI_ARGS_((char *exp)); */
/* extern int regexec _ANSI_ARGS_((regexp *prog, char *string, char *start,int length )); */
extern void regsub _ANSI_ARGS_((regexp *prog, char *source, char *dest));
#ifndef regerror
extern void regerror _ANSI_ARGS_((char *msg));
#endif

#endif /* REGEXP */
/* alloc.c:89:OF */ extern char *alloc_page (long n); /* (n) int n; */
/* alloc.c:149:OF */ extern void add_page_to_freelist (char *p, struct typemanager *tm); /* (p, tm) char *p; struct typemanager *tm; */
/* alloc.c:196:OF */ extern object type_name (int t); /* (t) int t; */
/* alloc.c:213:OF */ extern object alloc_object (enum type t); /* (t) enum type t; */
/* alloc.c:296:OF */ extern object make_cons (object a, object d); /* (a, d) object a; object d; */
/* alloc.c:364:OF */ extern object on_stack_cons (object x, object y); /* (x, y) object x; object y; */
/* alloc.c:376:OF */ extern object fSallocated (object typ); /* (typ) object typ; */
/* alloc.c:401:OF */ extern object fSreset_number_used (object typ); /* (typ) object typ; */
/* alloc.c:480:OF */ extern void insert_contblock (char *p, int s); /* (p, s) char *p; int s; */
/* alloc.c:480:OF */ extern void insert_maybe_sgc_contblock (char *p, int s); /* (p, s) char *p; int s; */
/* alloc.c:611:OF */ extern void set_maxpage (void); /* () */
/* alloc.c:635:OF */ extern void gcl_init_alloc (void); /* () */
/* alloc.c:737:OF */ extern object fSstaticp (object x); /* (x) object x; */
/* alloc.c:822:OF */ extern object fSallocate_sgc (object type,fixnum min,fixnum max,fixnum free_percent); /* (type, min, max, free_percent) object type; int min; int max; int free_percent; */
/* alloc.c:846:OF */ extern object fSallocate_growth (object type,fixnum min,fixnum max,fixnum percent,fixnum percent_free); /* (type, min, max, percent, percent_free) object type; int min; int max; int percent; int percent_free; */
/* alloc.c:911:OF */ extern object fSallocated_contiguous_pages (void); /* () */
/* alloc.c:918:OF */ extern object fSmaximum_contiguous_pages (void); /* () */
/* alloc.c:958:OF */ extern object fSallocated_relocatable_pages (void); /* () */
/* alloc.c:965:OF */ extern object fSget_hole_size (void); /* () */
/* alloc.c:1000:OF */ extern void gcl_init_alloc_function (void); /* () */
/* alloc.c:1126:OF */ extern void free (void *ptr); /* (ptr) void *ptr; */
/* array.c:57:OF */ extern void Laref (void); /* () */
/* array.c:126:OF */ extern object fLsvref (object x, ufixnum i); /* (x, i) object x; unsigned int i; */
/* array.c:142:OF */ extern object fLrow_major_aref (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:190:OF */ extern object fSaset1 (object x,fixnum i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:262:OF */ extern void siLaset (void); /* () */
/* array.c:321:OF */ extern void siLsvset (void); /* () */
/* array.c:324:OF */ extern object fSsvset (object x,fixnum i, object val); /* (x, i, val) object x; int i; object val; */
/* array.c:461:OF */ extern object fSget_aelttype (object x); /* (x) object x; */
/* array.c:480:OF */ extern void siLmake_vector (void); /* () */
/* array.c:519:OF */ extern object fSmake_array1 (fixnum elt_type, object staticp, object initial_element, object displaced_to,fixnum displaced_index_offset, object dimensions); /* (elt_type, staticp, initial_element, displaced_to, displaced_index_offset, dimensions) int elt_type; object staticp; object initial_element; object displaced_to; int displaced_index_offset; object dimensions; */
/* array.c::OF */ extern object fSmake_vector1_1 (fixnum n,fixnum elt_type,object staticp); 
/* array.c:738:OF */ extern void adjust_displaced (object x, long diff); /* (x, diff) object x; int diff; */
/* array.c:790:OF */ extern void gset (void *p1, void *val, int n, int typ); /* (p1, val, n, typ) char *p1; char *val; int n; int typ; */
/* array.c:831:OF */ extern object fScopy_array_portion (object x, object y,fixnum i1,fixnum i2, object n1); /* (x, y, i1, i2, n1) object x; object y; int i1; int i2; int n1; */
/* array.c:879:OF */ extern void array_allocself (object x, int staticp, object dflt); /* (x, staticp, dflt) object x; int staticp; object dflt; */
/* array.c:920:OF */ extern void siLfill_pointer_set (void); /* () */
/* array.c:923:OF */ extern object fSfill_pointer_set (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:944:OF */ extern void Lfill_pointer (void); /* () */
/* array.c:947:OF */ extern object fLfill_pointer (object x); /* (x) object x; */
/* array.c:965:OF */ extern object fLarray_has_fill_pointer_p (object x); /* (x) object x; */
/* array.c:986:OF */ extern void Larray_element_type (void); /* () */
/* array.c:989:OF */ extern object fLarray_element_type (object x); /* (x) object x; */
/* array.c:995:OF */ extern void Ladjustable_array_p (void); /* () */
/* array.c:998:OF */ extern object fLadjustable_array_p (object x); /* (x) object x; */
/* array.c:1002:OF */ extern void siLdisplaced_array_p (void); /* () */
/* array.c:1005:OF */ extern object fSdisplaced_array_p (object x); /* (x) object x; */
/* array.c:1010:OF */ extern void Larray_rank (void); /* () */
/* array.c:1013:OF */ extern object fLarray_rank (object x); /* (x) object x; */
/* array.c:1020:OF */ extern void Larray_dimension (void); /* () */
/* array.c:1023:OF */ extern object fLarray_dimension (object x,fixnum i); /* (x, i) object x; int i; */
/* array.c:1090:OF */ extern void siLreplace_array (void); /* () */
/* array.c:1093:OF */ extern object fSreplace_array (object old, object new); /* (old, new) object old; object new; */
/* array.c:1132:OF */ extern object fLarray_total_size (object x); /* (x) object x; */
/* array.c:1140:OF */ extern object fSaset_by_cursor (object array, object val, object cursor); /* (array, val, cursor) object array; object val; object cursor; */
/* array.c:1160:OF */ extern void gcl_init_array_function (void); /* () */
/* assignment.c:62:OF */ extern void setq (object sym, object val); /* (sym, val) object sym; object val; */
/* assignment.c:128:OF */ extern void Lset (void); /* () */
/* assignment.c:130:OF */ extern object fLset (object symbol, object value); /* (symbol, value) object symbol; object value; */
/* assignment.c:142:OF */ extern void siLfset (void); /* () */
/* assignment.c:144:OF */ extern object fSfset (object sym, object function); /* (sym, function) object sym; object function; */
/* assignment.c:214:OF */ extern object fLmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:228:OF */ extern void Lfmakunbound (void); /* () */
/* assignment.c:230:OF */ extern object fLfmakunbound (object sym); /* (sym) object sym; */
/* assignment.c:547:OF */ extern object clear_compiler_properties (object sym, object code); /* (sym, code) object sym; object code; */
/* assignment.c:563:OF */ extern object fSclear_compiler_properties (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* assignment.c:591:OF */ extern void gcl_init_assignment (void); /* () */
/* backq.c:259:OF */ extern int backq_car (object x); /* (x) object x; */
/* backq.c:381:OF */ extern void gcl_init_backq (void); /* () */
/* bds.c:31:OF */ extern void bds_unwind (bds_ptr new_bds_top); /* (new_bds_top) bds_ptr new_bds_top; */
/* big.c:53:OF */ extern object fSset_gmp_allocate_relocatable (object flag); /* (flag) object flag; */
/* gmp_big.c:96:OF */ extern void gcl_init_big1 (void); /* () */
/* gmp_big.c:108:OF */ extern object new_bignum (void); /* () */
/* gmp_big.c:161:OF */ extern object make_integer (__mpz_struct *u); /* (u) __mpz_struct *u; */
/* gmp_big.c:207:OF */ extern int big_compare (object x, object y); /* (x, y) object x; object y; */
/* gmp_big.c:214:OF */ extern object normalize_big_to_object (object x); /* (x) object x; */
/* gmp_big.c:230:OF */ extern void add_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:244:OF */ extern void mul_int_big (int i, object x); /* (i, x) int i; object x; */
/* gmp_big.c:289:OF */ extern object normalize_big (object x); /* (x) object x; */
/* gmp_big.c:302:OF */ extern object big_minus (object x); /* (x) object x; */
/* gmp_big.c:324:OF */ extern double big_to_double (object x); /* (x) object x; */
/* gmp_big.c:454:OF */ extern object maybe_replace_big (object x); /* (x) object x; */
/* gmp_big.c:472:OF */ extern object bignum2 (unsigned int h, unsigned int l); /* (h, l) unsigned int h; unsigned int l; */
/* gmp_big.c:482:OF */ extern void integer_quotient_remainder_1 (object x, object y, object *qp, object *rp); /* (x, y, qp, rp) object x; object y; object *qp; object *rp; */
/* gmp_big.c:502:OF */ extern object coerce_big_to_string (object x, int printbase); /* (x, printbase) object x; int printbase; */
/* gmp_big.c:521:OF */ extern void gcl_init_big (void); /* () */
/* big.c:72:OF */ extern int big_sign (object x); /* (x) object x; */
/* big.c:78:OF */ extern void set_big_sign (object x, int sign); /* (x, sign) object x; int sign; */
/* big.c:85:OF */ extern void zero_big (object x); /* (x) object x; */
/* bind.c:74:OF */ extern void lambda_bind (object *arg_top); /* (arg_top) object *arg_top; */
/* bind.c:564:OF */ extern void bind_var (object var, object val, object spp); /* (var, val, spp) object var; object val; object spp; */
/* bind.c:610:OF */ extern object find_special (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:670:OF */ extern object let_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:688:OF */ extern object letA_bind (object body, struct bind_temp *start, struct bind_temp *end); /* (body, start, end) object body; struct bind_temp *start; struct bind_temp *end; */
/* bind.c:712:OF */ extern void parse_key (object *base, bool rest, bool allow_other_keys, register int n, ... ); 
/* bind.c:820:OF */ extern void check_other_key (object l, int n, ...); 
struct key {short n,allow_other_keys;
	    iobject *defaults;
	    iobject keys[1];
	   };

/* bind.c:866:OF */ extern int parse_key_new_new (int n, object *base, struct key *keys, object first, va_list ap); /* (n, base, keys, ap) int n; object *base; struct key *keys; va_list ap; */
/* bind.c:916:OF */ extern int parse_key_rest_new (object rest, int n, object *base, struct key *keys, object first, va_list ap); /* (rest, n, base, keys, ap) object rest; int n; object *base; struct key *keys; va_list ap; */
/* bind.c:975:OF */ extern void set_key_struct (struct key *ks, object data); /* (ks, data) struct key *ks; object data; */
/* bind.c:995:OF */ extern void gcl_init_bind (void); /* () */
/* block.c:121:OF */ extern void gcl_init_block (void); /* () */
/* bsearch.c:5:OF */ extern void *bsearch (const void *key, const void *base, size_t nel, size_t keysize, int (*compar) (const void *,const void *)); /* (key, base, nel, keysize, compar) char *key; char *base; unsigned int nel; unsigned int keysize; int (*compar)(); */
#if defined (__MINGW32__)
/* bzero.c:3:OF */ /*  extern void bzero (char *b, size_t length); */ /* (b, length) char *b; int length; */
#endif
/* catch.c:61:OF */ extern object fSerror_set (object x0); /* (x0) object x0; */
/* catch.c:166:OF */ extern void gcl_init_catch (void); /* () */
/* cfun.c:37:OF */ extern object make_cfun (void (*self)(), object name, object data, char *start, int size); /* (self, name, data, start, size) int (*self)(); object name; object data; char *start; int size; */
/* cfun.c:56:OF */ extern object make_sfun (object name, object (*self)(), int argd, object data); /* (name, self, argd, data) object name; int (*self)(); int argd; object data; */
/* cfun.c:91:OF */ extern object make_cclosure_new (void (*self)(), object name, object env, object data); /* (self, name, env, data) int (*self)(); object name; object env; object data; */
/* cfun.c:108:OF */ extern object make_cclosure (void (*self)(), object name, object env, object data, char *start, int size); /* (self, name, env, data, start, size) int (*self)(); object name; object env; object data; char *start; int size; */
/* cfun.c:124:OF */ extern object fSmc (object name, object address); /* (name, address) object name; object address; */
/* cfun.c:150:OF */ extern object fSmfsfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:174:OF */ extern object fSmfvfun (object name, object address, object argd); /* (name, address, argd) object name; object address; object argd; */
/* cfun.c:193:OF */ extern object fSmfvfun_key (object symbol, object address, object argd, object keys); /* (symbol, address, argd, keys) object symbol; object address; object argd; object keys; */
/* cfun.c:221:OF */ extern object fSmf (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:269:OF */ extern object fSmm (object name, object addr); /* (name, addr) object name; object addr; */
/* cfun.c:283:OF */ extern object make_function_internal (char *s, void(*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:299:OF */ extern object make_si_sfun_internal (char *s, object (*f)(), int argd); /* (s, f, argd) char *s; int (*f)(); int argd; */
/* cfun.c:322:OF */ extern object make_si_function_internal (char *s, void (*f) ()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:341:OF */ extern object make_special_form_internal (char *s, void (*f)()); /* (s, f) char *s; int (*f)(); */
/* cfun.c:352:OF */ extern object fScompiled_function_name (object fun); /* (fun) object fun; */
/* cfun.c:371:OF */ extern void turbo_closure (object fun); /* (fun) object fun; */
/* cfun.c:392:OF */ extern object fSturbo_closure (object funobj); /* (funobj) object funobj; */
/* cfun.c:403:OF */ extern void gcl_init_cfun (void); /* () */
/* cmac.c:147:OF */ extern object fScmod (object num); /* (num) object num; */
/* cmac.c:156:OF */ extern object fScplus (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:165:OF */ extern object fSctimes (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:175:OF */ extern object fScdifference (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* cmac.c:191:OF */ extern void gcl_init_cmac (void); /* () */
/* cmpaux.c:33:OF */ extern void siLspecialp (void); /* () */
/* cmpaux.c:35:OF */ extern object fSspecialp (object sym); /* (sym) object sym; */
/* cmpaux.c:73:OF */ extern object fSdebug (object sym, object val); /* (sym, val) object sym; object val; */
/* cmpaux.c:82:OF */ extern object fSsetvv (object index, object val); /* (index, val) object index; object val; */
/* cmpaux.c:95:OF */ extern void gcl_init_cmpaux (void); /* () */
/* cmpaux.c:106:OF */ /* extern int ifloor (int x, int y); */ /* (x, y) int x; int y; */
/* cmpaux.c:124:OF */ /* extern int imod (int x, int y); */ /* (x, y) int x; int y; */
/* cmpaux.c:185:OF */ extern int object_to_int (object x); /* (x) object x; */
/* cmpaux.c:185:OF */ extern fixnum object_to_fixnum (object x); /* (x) object x; */
/* cmpaux.c:263:OF */ extern char *object_to_string (object x); /* (x) object x; */
typedef int (*FUNC)();
/* cmpaux.c:294:OF */ extern void call_init (int init_address, object memory, object fasl_vec, FUNC fptr); /* (init_address, memory, fasl_vec, fptr) int init_address; object memory; object fasl_vec; FUNC fptr; */
/* cmpaux.c:339:OF */ extern void do_init (object *statVV); /* (statVV) object *statVV; */
/* cmpaux.c:416:OF */ extern void gcl_init_or_load1 (void (*fn) (void), const char *file); /* (fn, file) int (*fn)(); char *file; */
/* conditional.c:200:OF */ extern void gcl_init_conditional (void); /* () */
/* error.c:38:OF */ extern void terminal_interrupt (int correctable); /* (correctable) int correctable; */
/* error.c:147:OF */ extern void Lerror (void); /* () */
/* error.c:164:OF */ extern void Lcerror (void); /* () */
/* error.c:184:OF */ extern void FEerror (char *s, int num, ... ); /* (s, num, arg1, arg2, arg3, arg4) char *s; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:203:OF */ extern void FEwrong_type_argument (object type, object value); /* (type, value) object type; object value; */
/* error.c:210:OF */ extern void FEtoo_few_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:219:OF */ extern void FEtoo_few_argumentsF (object args); /* (args) object args; */
/* error.c:227:OF */ extern void FEtoo_many_arguments (object *base, object *top); /* (base, top) object *base; object *top; */
/* error.c:234:OF */ extern void FEtoo_many_argumentsF (object args); /* (args) object args; */
/* error.c:247:OF */ extern void FEunexpected_keyword (object key); /* (key) object key; */
/* error.c:258:OF */ extern void FEinvalid_form (char *s, object form); /* (s, form) char *s; object form; */
/* error.c:266:OF */ extern void FEunbound_variable (object sym); /* (sym) object sym; */
/* error.c:273:OF */ extern void FEinvalid_variable (char *s, object obj); /* (s, obj) char *s; object obj; */
/* error.c:280:OF */ extern void FEundefined_function (object fname); /* (fname) object fname; */
/* error.c:287:OF */ extern void FEinvalid_function (object obj); /* (obj) object obj; */
/* error.c:297:OF */ extern object CEerror (char *error_str, char *cont_str, int num, object arg1, object arg2, object arg3, object arg4); /* (error_str, cont_str, num, arg1, arg2, arg3, arg4) char *error_str; char *cont_str; int num; object arg1; object arg2; object arg3; object arg4; */
/* error.c:330:OF */ extern object fSihs_top (void); /* () */
/* error.c:337:OF */ extern object fSihs_fun (object x0); /* (x0) object x0; */
/* error.c:346:OF */ extern object fSihs_vs (object x0); /* (x0) object x0; */
/* error.c:371:OF */ extern object fSfrs_top (void); /* () */
/* error.c:378:OF */ extern object fSfrs_vs (object x0); /* (x0) object x0; */
/* error.c:387:OF */ extern object fSfrs_bds (object x0); /* (x0) object x0; */
/* error.c:397:OF */ extern object fSfrs_class (object x0); /* (x0) object x0; */
/* error.c:413:OF */ extern object fSfrs_tag (object x0); /* (x0) object x0; */
/* error.c:422:OF */ extern object fSfrs_ihs (object x0); /* (x0) object x0; */
/* error.c:448:OF */ extern object fSbds_top (void); /* () */
/* error.c:455:OF */ extern object fSbds_var (object x0); /* (x0) object x0; */
/* error.c:464:OF */ extern object fSbds_val (object x0); /* (x0) object x0; */
/* error.c:487:OF */ extern object fSvs_top (void); /* () */
/* error.c:496:OF */ extern object fSvs (object x0); /* (x0) object x0; */
/* error.c:505:OF */ extern object fSsch_frs_base (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* error.c:523:OF */ extern object fSinternal_super_go (object tag, object x1, object x2); /* (tag, x1, x2) object tag; object x1; object x2; */
/* error.c:549:OF */ extern object fSuniversal_error_handler (object x0, object x1, object x2, object x3, object error_fmt_string); /* (x0, x1, x2, x3, error_fmt_string) object x0; object x1; object x2; object x3; object error_fmt_string; */
/* error.c:561:OF */ extern void check_arg_failed (int n); /* (n) int n; */
/* error.c:568:OF */ extern void too_few_arguments (void); /* () */
/* error.c:573:OF */ extern void too_many_arguments (void); /* () */
/* error.c:586:OF */ extern void ck_larg_exactly (int n, object x); /* (n, x) int n; object x; */
/* error.c:595:OF */ extern void invalid_macro_call (void); /* () */
/* error.c:618:OF */ extern object wrong_type_argument (object typ, object obj); /* (typ, obj) object typ; object obj; */
/* error.c:625:OF */ extern void illegal_declare (object form); /* (form) int form; */
/* error.c:635:OF */ extern void not_a_string_or_symbol (object x); /* (x) object x; */
/* error.c:641:OF */ extern void not_a_symbol (object obj); /* (obj) object obj; */
/* error.c:647:OF */ extern int not_a_variable (object obj); /* (obj) object obj; */
/* error.c:653:OF */ extern void illegal_index (object x, object i); /* (x, i) object x; object i; */
/* error.c:660:OF */ extern void check_socket (object x); /* (x) object x; */
/* error.c:670:OF */ extern void check_stream (object strm); /* (strm) object strm; */
/* error.c:697:OF */ extern void check_arg_range (int n, int m); /* (n, m) int n; int m; */
/* error.c:727:OF */ extern void gcl_init_error (void); /* () */
/* eval.c:143:OF */ extern void funcall (object fun); /* (fun) object fun; */
/* eval.c:375:OF */ extern void lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:461:OF */ extern void symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:549:OF */ extern object simple_lispcall (object *funp, int narg); /* (funp, narg) object *funp; int narg; */
/* eval.c:645:OF */ extern object simple_symlispcall (object sym, object *base, int narg); /* (sym, base, narg) object sym; object *base; int narg; */
/* eval.c:739:OF */ extern void super_funcall (object fun); /* (fun) object fun; */
/* eval.c:752:OF */ extern void super_funcall_no_event (object fun); /* (fun) object fun; */
/* eval.c:936:OF */ extern object Ieval (object form); /* (form) object form; */
/* eval.c:944:OF */ extern void eval (object form); /* (form) object form; */
/* eval.c:1189:OF */ extern void Leval (void); /* () */
/* eval.c:1191:OF */ extern object fLeval (object x0); /* (x0) object x0; */
/* eval.c:1203:OF */ extern void Levalhook (void); /* () */
/* eval.c:1269:OF */ extern void Lconstantp (void); /* () */
/* eval.c:1271:OF */ extern object fLconstantp (object x0); /* (x0) object x0; */
/* eval.c:1293:OF */ extern object ieval (object x); /* (x) object x; */
/* eval.c:1309:OF */ extern object ifuncall1 (object fun, object arg1); /* (fun, arg1) object fun; object arg1; */
/* eval.c:1328:OF */ extern object ifuncall2 (object fun, object arg1, object arg2); /* (fun, arg1, arg2) object fun; object arg1; object arg2; */
/* eval.c:1348:OF */ extern object ifuncall3 (object fun, object arg1, object arg2, object arg3); /* (fun, arg1, arg2, arg3) object fun; object arg1; object arg2; object arg3; */
typedef void (*funcvoid)(void);
/* eval.c:1545:OF */ extern void gcl_init_eval (void); /* () */
/* fasdump.c:1465:OF */ extern object read_fasl_vector (object in); /* (in) object in; */
/* fat_string.c:29:OF */ extern object fSprofile (object start_address, object scale); /* (start_address, scale) object start_address; object scale; */
/* fat_string.c:46:OF */ extern object fSfunction_start (object funobj); /* (funobj) object funobj; */
/* fat_string.c:331:OF */ extern object fSdisplay_profile (object start_addr, object scal); /* (start_addr, scal) object start_addr; object scal; */
/* fat_string.c:394:OF */ extern object fSarray_adress (object array); /* (array) object array; */
/* fat_string.c:435:OF */ extern void gcl_init_fat_string (void); /* () */
/* sfasli.c::OF */ extern void gcl_init_sfasl (void); /* () */
/* format.c::OF */ extern object fLformat_1(object strm, object control,object x);
/* format.c:2084:OF */ extern void Lformat (void); /* () */
/* format.c:2171:OF */ extern void gcl_init_format (void); /* () */
/* frame.c:32:OF */ extern void unwind (frame_ptr fr, object tag); /* (fr, tag) frame_ptr fr; object tag; */
/* frame.c:58:OF */ extern frame_ptr frs_sch (object frame_id); /* (frame_id) object frame_id; */
/* frame.c:69:OF */ extern frame_ptr frs_sch_catch (object frame_id); /* (frame_id) object frame_id; */
/* funlink.c:19:OF */ extern void call_or_link (object sym, void **link); /* (sym, link) object sym; void **link; */
/* funlink.c:41:OF */ extern void call_or_link_closure (object sym, void **link, void **ptr); /* (sym, link, ptr) object sym; void **link; object *ptr; */
/* funlink.c:230:OF */ extern object c_apply_n (object (*fn)(), int n, object *x); /* (fn, n, x) long int (*fn)(); int n; object *x; */
/* funlink.c:696:OF */ extern object call_proc0 (object sym, void *link); /* (sym, link) object sym; void *link; */
/* funlink.c:784:OF */ extern int clear_stack (object *beg, object *limit); /* (beg, limit) object *beg; object *limit; */
/* funlink.c:821:OF */ extern void gcl_init_links (void); /* () */
/* gbc.c:151:OF */ extern void enter_mark_origin (object *p); /* (p) object *p; */
/* gbc.c:938:OF */ extern void GBC (enum type t); /* (t) enum type t; */
/* gbc.c:1326:OF */ extern object fLgbc (object x0); /* (x0) object x0; */
/* sgbc.c:924:OF */ extern int sgc_count_type (int t); /* (t) int t; */
/* sgbc.c:938:OF */ extern int sgc_start (void); /* () */
/* sgbc.c:1068:OF */ extern int sgc_quit (void); /* () */
/* sgbc.c:1131:OF */ extern void make_writable (unsigned long beg, unsigned long i); /* (beg, i) int beg; int i; */
#ifndef __MINGW32__
/* #include <signal.h> */
#endif
/* sgbc.c:1246:OF */ extern void memory_protect (int on); /* (on) int on; */
/* sgbc.c:1306:OF */ extern void perm_writable (char *p, long n); /* (p, n) char *p; int n; */
/* sgbc.c:1321:OF */ extern void system_error (void); /* () */
/* gbc.c:1357:OF */ extern void gcl_init_GBC (void); /* () */
/* gnumalloc.c:286:OF */ extern void malloc_init (char *start, void (*warnfun) (/* ??? */)); /* (start, warnfun) char *start; void (*warnfun)(); */
/* gnumalloc.c:301:OF */ extern int malloc_usable_size (char *mem); /* (mem) char *mem; */
/* gnumalloc.c:461:OF */ /*  extern void *malloc (size_t n); */ /* (n) unsigned int n; */
/* gnumalloc.c:529:OF */ /*  extern int free (char *mem); */ /* (mem) char *mem; */
/* gnumalloc.c:577:OF */ /*  extern char *realloc (char *mem, register unsigned int n); */ /* (mem, n) char *mem; register unsigned int n; */
/* gnumalloc.c:639:OF */ /*  extern char *memalign (unsigned int alignment, unsigned int size); */ /* (alignment, size) unsigned int alignment; unsigned int size; */
/* gnumalloc.c:737:OF */ extern int get_lim_data (void); /* () */
/* grab_defs.c:35:OF */ extern int read_some (char *buf, int n, int start_ch, int copy); /* (buf, n, start_ch, copy) char *buf; int n; int start_ch; int copy; */
/* grab_defs.c:71:OF */ /*  extern int main (void); */ /* () */
/* iteration.c:457:OF */ extern void gcl_init_iteration (void); /* () */
/* let.c:29:OF */ extern void let_var_list (object var_list); /* (var_list) object var_list; */
/* let.c:321:OF */ extern void gcl_init_let (void); /* () */
/* lex.c:34:OF */ extern object assoc_eq (object key, object alist); /* (key, alist) object key; object alist; */
/* lex.c:47:OF */ extern void lex_fun_bind (object name, object fun); /* (name, fun) object name; object fun; */
/* lex.c:59:OF */ extern void lex_macro_bind (object name, object exp_fun); /* (name, exp_fun) object name; object exp_fun; */
/* lex.c:70:OF */ extern void lex_tag_bind (object tag, object id); /* (tag, id) object tag; object id; */
/* lex.c:82:OF */ extern void lex_block_bind (object name, object id); /* (name, id) object name; object id; */
/* lex.c:95:OF */ extern object lex_tag_sch (object tag); /* (tag) object tag; */
/* lex.c:110:OF */ extern object lex_block_sch (object name); /* (name) object name; */
/* lex.c:125:OF */ extern void gcl_init_lex (void); /* () */
/* littleXwin.c:32:OF */ /*  extern Window open_window (void); */ /* () */
/* littleXwin.c:102:OF */ /*  extern int close_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:110:OF */ /*  extern int draw_line (Window the_window, int x1, int y1, int x2, int y2); */ /* (the_window, x1, y1, x2, y2) Window the_window; int x1; int y1; int x2; int y2; */
/* littleXwin.c:119:OF */ /*  extern int draw_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2);  *//* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:129:OF */ /*  extern int fill_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2); */ /* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:139:OF */ /*  extern int clear_arc (Window the_window, int x, int y, int width, int height, int angle1, int angle2);  *//* (the_window, x, y, width, height, angle1, angle2) Window the_window; int x; int y; int width; int height; int angle1; int angle2; */
/* littleXwin.c:149:OF */ /*  extern int set_arc_mode (int pie_or_chord); */ /* (pie_or_chord) int pie_or_chord; */
/* littleXwin.c:162:OF */ /*  extern int erase_line (Window the_window, int x1, int y1, int x2, int y2);  *//* (the_window, x1, y1, x2, y2) Window the_window; int x1; int y1; int x2; int y2; */
/* littleXwin.c:171:OF */ /*  extern int draw_text (Window the_window, char *string, int x, int y); */ /* (the_window, string, x, y) Window the_window; char *string; int x; int y; */
/* littleXwin.c:182:OF */ /*  extern int erase_text (Window the_window, char *string, int x, int y); */ /* (the_window, string, x, y) Window the_window; char *string; int x; int y; */
/* littleXwin.c:193:OF */ /*  extern int clear_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:201:OF */ /*  extern int resize_window (Window the_window, int width, int height); */ /* (the_window, width, height) Window the_window; int width; int height; */
/* littleXwin.c:210:OF */ /*  extern int raise_window (Window the_window); */ /* (the_window) Window the_window; */
/* littleXwin.c:218:OF */ /*  extern int use_font (char *font_name); */ /* (font_name) char *font_name; */
/* littleXwin.c:233:OF */ /*  extern int set_background (Window the_window, char *color_string); */ /* (the_window, color_string) Window the_window; char *color_string; */
/* littleXwin.c:251:OF */ /*  extern int set_foreground (char *color_string); */ /* (color_string) char *color_string; */
/* macros.c:139:OF */ extern object Imacro_expand1 (object exp_fun, object form); /* (exp_fun, form) object exp_fun; object form; */
/* macros.c:173:OF */ extern void Lmacroexpand (void); /* () */
/* macros.c:224:OF */ extern void Lmacroexpand_1 (void); /* () */
/* macros.c:265:OF */ extern object macro_expand (object form); /* (form) object form; */
/* macros.c:344:OF */ extern void gcl_init_macros (void); /* () */
/* main.c:111:OF */ extern int main (int argc, char **argv, char **envp); /* (argc, argv, envp) int argc; char **argv; char **envp; */
/* main.c:346:OF */ extern void install_segmentation_catcher (void); /* () */
/* main.c:359:OF */ extern void error (char *s); /* (s) char *s; */
/* main.c:519:OF */ extern object vs_overflow (void); /* () */
/* main.c:528:OF */ extern void bds_overflow (void); /* () */
/* main.c:537:OF */ extern void frs_overflow (void); /* () */
/* main.c:546:OF */ extern void ihs_overflow (void); /* () */
/* main.c:556:OF */ extern void segmentation_catcher (int); /* () */
/* main.c:587:OF */ extern void Lby (void); /* () */
/* main.c:607:OF */ extern void Lquit(void); /* () */
/* main.c:612:OF */ extern void Lexit(void); /* () */
/* main.c:619:OF */ extern int c_trace (void); /* () */
/* main.c:695:OF */ extern void siLreset_stack_limits (void); /* (arg) int arg; */
/* main.c:797:OF */ extern void Lidentity(void); /* () */
/* main.c:799:OF */ extern object fLidentity (object x0); /* (x0) object x0; */
/* main.c:805:OF */ extern void Llisp_implementation_version(void); /* () */
/* main.c:807:OF */ extern object fLlisp_implementation_version (void); /* () */
/* makefun.c:10:OF */ extern object MakeAfun (object (*addr)(object,object), unsigned int argd, object data); /* (addr, argd, data) int (*addr)(); unsigned int argd; object data; */
/* makefun.c:113:OF */ extern object fSset_key_struct (object key_struct_ind); /* (key_struct_ind) object key_struct_ind; */
/* makefun.c:122:OF */ extern void SI_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:131:OF */ extern void LISP_makefun (char *strg, object (*fn) (/* ??? */), unsigned int argd); /* (strg, fn, argd) char *strg; object (*fn)(); unsigned int argd; */
/* makefun.c:167:OF */ extern object fSinvoke (object x); /* (x) object x; */
/* mapfun.c:324:OF */ extern void gcl_init_mapfun (void); /* () */
/* multival.c:32:OF */ extern void Lvalues (void); /* () */
/* multival.c:37:OF */ extern void Lvalues_list (void); /* () */
/* multival.c:134:OF */ extern void gcl_init_multival (void); /* () */
/* nfunlink.c:190:OF */ extern object IapplyVector (object fun, int nargs, object *base); /* (fun, nargs, base) object fun; int nargs; object *base; */
/* nfunlink.c:269:OF */ extern void Iinvoke_c_function_from_value_stack (object (*f)(), int fargd); /* (f, fargd) object (*f)(); int fargd; */
/* nsocket.c:190:OF */ extern int CreateSocket (int port, char *host, int server, char *myaddr, int myport, int async); /* (port, host, server, myaddr, myport, async) int port; char *host; int server; char *myaddr; int myport; int async; */
/* nsocket.c:329:OF */ extern object fSgetpeername (object sock); /* (sock) object sock; */
/* nsocket.c:353:OF */ extern object fSgetsockname (object sock); /* (sock) object sock; */
/* nsocket.c:385:OF */ extern object fSset_blocking (object sock, object setBlocking); /* (sock, setBlocking) object sock; object setBlocking; */
/* nsocket.c:484:OF */ extern int getOneChar (FILE *fp); /* (fp) FILE *fp; */
/* nsocket.c:539:OF */ extern void ungetCharGclSocket (int c, object strm); /* (c, strm) int c; object strm; */
#ifndef __MINGW32__
/* nsocket.c:592:OF */ extern void tcpCloseSocket (int fd); /* (fd) int fd; */
/* nsocket.c:575:OF */ extern int TcpOutputProc (int fd, char *buf, int toWrite, int *errorCodePtr); /* (fd, buf, toWrite, errorCodePtr) int fd; char *buf; int toWrite; int *errorCodePtr; */
#endif
/* nsocket.c:619:OF */ extern int getCharGclSocket (object strm, object block); /* (strm, block) object strm; object block; */
/* num_arith.c:31:OF */ extern object fixnum_add (fixnum i, fixnum j); /* (i, j) int i; int j; */
/* num_arith.c:48:OF */ extern object fixnum_sub (fixnum i, fixnum j); /* (i, j) int i; int j; */
/* num_arith.c:100:OF */ extern object number_plus (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:246:OF */ extern object one_plus (object x); /* (x) object x; */
/* num_arith.c:292:OF */ extern object number_minus (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:438:OF */ extern object one_minus (object x); /* (x) object x; */
/* num_arith.c:478:OF */ extern object number_negate (object x); /* (x) object x; */
/* num_arith.c:520:OF */ extern object number_times (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:670:OF */ extern object number_divide (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:818:OF */ extern object integer_divide1 (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:828:OF */ extern object get_gcd (object x, object y); /* (x, y) object x; object y; */
/* num_arith.c:873:OF */ extern void Lplus (void); /* () */
/* num_arith.c:889:OF */ extern void Lminus (void); /* () */
/* num_arith.c:907:OF */ extern void Ltimes (void); /* () */
/* num_arith.c:923:OF */ extern void Ldivide (void); /* () */
/* num_arith.c:1029:OF */ extern void gcl_init_num_arith (void); /* () */
/* num_co.c:292:OF */ extern object double_to_integer (double d); /* (d) double d; */
/* num_co.c:372:OF */ extern void Lfloat (void); /* () */
/* num_co.c:424:OF */ extern void Lnumerator (void); /* () */
/* num_co.c:432:OF */ extern void Ldenominator (void); /* () */
/* num_co.c:442:OF */ extern void Lfloor (void); /* () */
/* num_co.c:563:OF */ extern void Lceiling (void); /* () */
/* num_co.c:684:OF */ extern void Ltruncate (void); /* () */
/* num_co.c:766:OF */ extern void Lround (void); /* () */
/* num_co.c:896:OF */ extern void Lmod (void); /* () */
/* num_co.c:987:OF */ extern void Lfloat_radix (void); /* () */
/* num_co.c:1089:OF */ extern void Linteger_decode_float (void); /* () */
/* num_co.c:1114:OF */ extern void Lcomplex (void); /* () */
/* num_co.c:1136:OF */ extern void Lrealpart (void); /* () */
/* num_co.c:1147:OF */ extern void Limagpart (void); /* () */
/* num_co.c:1185:OF */ extern void gcl_init_num_co (void); /* () */
/* num_comp.c:40:OF */ extern int number_compare (object x, object y); /* (x, y) object x; object y; */
/* num_comp.c:269:OF */ extern void Lmonotonically_increasing (void); /* () */
/* num_comp.c:271:OF */ extern void Lmonotonically_nondecreasing (void); /* () */
/* num_comp.c:272:OF */ extern void Lmonotonically_nonincreasing (void); /* () */
/* num_comp.c:292:OF */ extern void Lmin (void); /* () */
/* num_comp.c:309:OF */ extern void gcl_init_num_comp (void); /* () */
/* num_log.c:224:OF */ extern object shift_integer (object x, int w); /* (x, w) object x; int w; */
/* num_log.c:258:OF */ extern void Llogior (void); /* () */
/* num_log.c:279:OF */ extern void Llogxor (void); /* () */
/* num_log.c:299:OF */ extern void Llogand (void); /* () */
/* num_log.c:339:OF */ extern void Lboole (void); /* () */
/* num_log.c:380:OF */ extern void Llogbitp (void); /* () */
/* num_log.c:420:OF */ extern void Lash (void); /* () */
/* num_log.c:482:OF */ extern void Linteger_length (void); /* () */
/* num_log.c:549:OF */ extern void gcl_init_num_log (void); /* () */
/* num_log.c:585:OF */ extern void siLbit_array_op (void); /* () */
/* num_pred.c:31:OF */ extern int number_zerop (object x); /* (x) object x; */
/* num_pred.c:67:OF */ extern int number_plusp (object x); /* (x) object x; */
/* num_pred.c:107:OF */ extern int number_minusp (object x); /* (x) object x; */
/* num_pred.c:147:OF */ extern int number_oddp (object x); /* (x) object x; */
/* num_pred.c:161:OF */ extern int number_evenp (object x); /* (x) object x; */
/* num_pred.c:240:OF */ extern void gcl_init_num_pred (void); /* () */
/* num_rand.c:111:OF */ extern void Lrandom (void); /* () */
/* num_rand.c:151:OF */ extern void gcl_init_num_rand (void); /* () */
/* num_sfun.c:91:OF */ extern object number_expt (object x, object y); /* (x, y) object x; object y; */
/* num_sfun.c:453:OF */ extern void Lexp (void); /* () */
/* num_sfun.c:469:OF */ extern void Llog (void); /* () */
/* num_sfun.c:488:OF */ extern void Lsqrt (void); /* () */
/* num_sfun.c:495:OF */ extern void Lsin (void); /* () */
/* num_sfun.c:502:OF */ extern void Lcos (void); /* () */
/* num_sfun.c:516:OF */ extern void Latan (void); /* () */
/* num_sfun.c:535:OF */ extern void gcl_init_num_sfun (void); /* () */
/* number.c:35:OF */ extern long int fixint (object x); /* (x) object x; */
/* number.c:44:OF */ extern int fixnnint (object x); /* (x) object x; */
/* number.c:59:OF */ extern object fSallocate_bigger_fixnum_range (fixnum min,fixnum max); /* (min, max) int min; int max; */
/* number.c:81:OF */ extern object make_fixnum1 (long i); /* (i) int i; */
/* number.c:102:OF */ extern object make_ratio (object num, object den); /* (num, den) object num; object den; */
/* number.c:144:OF */ extern object make_shortfloat (double f); /* (f) double f; */
/* number.c:157:OF */ extern object make_longfloat (longfloat f); /* (f) longfloat f; */
/* number.c:170:OF */ extern object make_complex (object r, object i); /* (r, i) object r; object i; */
/* number.c:229:OF */ extern double number_to_double (object x); /* (x) object x; */
/* number.c:254:OF */ extern void gcl_init_number (void); /* () */
/* peculiar.c:14:OF */ /*  extern int main (void); */ /* () */
/* predicate.c:35:OF */ extern object fLnot (object x0); /* (x0) object x0; */
/* predicate.c:46:OF */ extern void Lsymbolp (void); /* () */
/* predicate.c:48:OF */ extern object fLsymbolp (object x0); /* (x0) object x0; */
/* predicate.c:61:OF */ extern object fLatom (object x0); /* (x0) object x0; */
/* predicate.c:74:OF */ extern object fLconsp (object x0); /* (x0) object x0; */
/* predicate.c:87:OF */ extern object fLlistp (object x0); /* (x0) object x0; */
/* predicate.c:100:OF */ extern object fLnumberp (object x0); /* (x0) object x0; */
/* predicate.c:117:OF */ extern object fLintegerp (object x0); /* (x0) object x0; */
/* predicate.c:132:OF */ extern object fLrationalp (object x0); /* (x0) object x0; */
/* predicate.c:148:OF */ extern object fLrealp (object x0); /* (x0) object x0; */
/* predicate.c:164:OF */ extern object fLfloatp (object x0); /* (x0) object x0; */
/* predicate.c:176:OF */ extern void Lcomplexp (void); /* () */
/* predicate.c:178:OF */ extern object fLcomplexp (object x0); /* (x0) object x0; */
/* predicate.c:190:OF */ extern object fLcharacterp (object x0); /* (x0) object x0; */
/* predicate.c:202:OF */ extern object fLstringp (object x0); /* (x0) object x0; */
/* predicate.c:214:OF */ extern object fLbit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:226:OF */ extern object fLvectorp (object x0); /* (x0) object x0; */
/* predicate.c:238:OF */ extern void Lsimple_string_p (void); /* () */
/* predicate.c:240:OF */ extern object fLsimple_string_p (object x0); /* (x0) object x0; */
/* predicate.c:253:OF */ extern void Lsimple_bit_vector_p (void); /* () */
/* predicate.c:255:OF */ extern object fLsimple_bit_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:268:OF */ extern void Lsimple_vector_p (void); /* () */
/* predicate.c:270:OF */ extern object fLsimple_vector_p (object x0); /* (x0) object x0; */
/* predicate.c:288:OF */ extern object fLarrayp (object x0); /* (x0) object x0; */
/* predicate.c:301:OF */ extern void Lpackagep (void); /* () */
/* predicate.c:303:OF */ extern object fLpackagep (object x0); /* (x0) object x0; */
/* predicate.c:313:OF */ extern void Lfunctionp (void); /* () */
/* predicate.c:315:OF */ extern object fLfunctionp (object x0); /* (x0) object x0; */
/* predicate.c:344:OF */ extern void Lcompiled_function_p (void); /* () */
/* predicate.c:346:OF */ extern object fLcompiled_function_p (object x0); /* (x0) object x0; */
/* predicate.c:367:OF */ extern object fLcommonp (object x0); /* (x0) object x0; */
/* predicate.c:379:OF */ extern object fLeq (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:393:OF */ extern int eql (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:455:OF */ extern object fLeql (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:469:OF */ extern int equal (register object x, register object y); /* (x, y) register object x; register object y; */
/* predicate.c:543:OF */ extern object fLequal (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:557:OF */ extern bool equalp (object x, object y); /* (x, y) object x; object y; */
/* predicate.c:681:OF */ extern object fLequalp (object x0, object x1); /* (x0, x1) object x0; object x1; */
/* predicate.c:750:OF */ extern bool contains_sharp_comma (object x); /* (x) object x; */
/* predicate.c:797:OF */ extern object fScontains_sharp_comma (object x0); /* (x0) object x0; */
/* predicate.c:810:OF */ extern object fSspicep (object x0); /* (x0) object x0; */
/* predicate.c:822:OF */ extern object fSfixnump (object x0); /* (x0) object x0; */
/* predicate.c:833:OF */ extern void gcl_init_predicate_function (void); /* () */
/* prog.c:48:OF */ extern void Ftagbody (object body); /* (body) object body; */
/* prog.c:246:OF */ extern void Fprogn (object body); /* (body) object body; */
/* prog.c:303:OF */ extern void gcl_init_prog (void); /* () */
/* reference.c:32:OF */ extern void Lfboundp (void); /* () */
/* reference.c:49:OF */ extern object symbol_function (object sym); /* (sym) object sym; */
/* reference.c:69:OF */ extern void Lsymbol_function (void); /* () */
/* reference.c:143:OF */ extern void Lsymbol_value (void); /* () */
/* reference.c:156:OF */ extern void Lboundp (void); /* () */
/* reference.c:169:OF */ extern void Lmacro_function (void); /* () */
/* reference.c:180:OF */ extern void Lspecial_form_p (void); /* () */
/* reference.c:191:OF */ extern void gcl_init_reference (void); /* () */
/*  #include "regexp.h" */
/* regexp.c:1588:OF */ extern void regerror (char *s); /* (s) char *s; */
/* regexpr.c:48:OF */ extern object fSmatch_beginning (fixnum i); /* (i) int i; */
/* regexpr.c:57:OF */ extern object fSmatch_end (fixnum i); /* (i) int i; */
/* save.c:17:OF */ extern void Lsave (void); /* () */
#include <unistd.h>
/* sbrk.c:9:OF */ /*  extern void * sbrk (int n); */ /* (n) int n; */
/* strcspn.c:3:OF */ /*  extern size_t strcspn (const char *s1, const char *s2); */ /* (s1, s2) char *s1; char *s2; */
/* structure.c:59:OF */ extern object structure_ref (object x, object name, int i); /* (x, name, i) object x; object name; int i; */
/* structure.c:107:OF */ extern object structure_set (object x, object name, int i, object v); /* (x, name, i, v) object x; object name; int i; object v; */
/* structure.c:164:OF */ extern object structure_to_list (object x); /* (x) object x; */
/* structure.c:188:OF */ extern void siLmake_structure (void); /* () */
/* structure.c:281:OF */ extern void siLstructure_set (void); /* () */
/* structure.c:326:OF */ extern void siLlist_nth (void); /* () */
/* structure.c:439:OF */ extern void gcl_init_structure_function (void); /* () */
/* toplevel.c:211:OF */ extern void gcl_init_toplevel (void); /* () */
/* typespec.c:38:OF */ extern void check_type_integer (object *p); /* (p) object *p; */
/* typespec.c:47:OF */ extern void check_type_non_negative_integer (object *p); /* (p) object *p; */
/* typespec.c:65:OF */ extern void check_type_rational (object *p); /* (p) object *p; */
/* typespec.c:75:OF */ extern void check_type_float (object *p); /* (p) object *p; */
/* typespec.c:94:OF */ extern void check_type_or_rational_float (object *p); /* (p) object *p; */
/* typespec.c:104:OF */ extern void check_type_number (object *p); /* (p) object *p; */
/* typespec.c:123:OF */ extern void check_type_character (object *p); /* (p) object *p; */
/* typespec.c:139:OF */ extern void check_type_symbol (object *p); /* (p) object *p; */
/* typespec.c:146:OF */ extern void check_type_or_symbol_string (object *p); /* (p) object *p; */
/* typespec.c:153:OF */ extern void check_type_or_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:170:OF */ extern void check_type_package (object *p); /* (p) object *p; */
/* typespec.c:177:OF */ extern void check_type_string (object *p); /* (p) object *p; */
/* typespec.c:191:OF */ extern void check_type_cons (object *p); /* (p) object *p; */
/* typespec.c:198:OF */ extern void check_type_stream (object *p); /* (p) object *p; */
/* typespec.c:205:OF */ extern void check_type_readtable (object *p); /* (p) object *p; */
/* typespec.c:213:OF */ extern void check_type_or_Pathname_string_symbol (object *p); /* (p) object *p; */
/* typespec.c:225:OF */ extern void check_type_or_pathname_string_symbol_stream (object *p); /* (p) object *p; */
/* typespec.c:236:OF */ extern void check_type_random_state (object *p); /* (p) object *p; */
/* typespec.c:243:OF */ extern void check_type_hash_table (object *p); /* (p) object *p; */
/* typespec.c:250:OF */ extern void check_type_array (object *p); /* (p) object *p; */
/* typespec.c:284:OF */ extern void check_type (object x, int t); /* (x, t) object x; int t; */
/* typespec.c:294:OF */ extern void Ltype_of (void); /* () */
/* typespec.c:493:OF */ extern void gcl_init_typespec (void); /* () */
/* typespec.c:497:OF */ extern void gcl_init_typespec_function (void); /* () */
/* unexec-19.29.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexec.c:1016:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unexlin.c:808:OF */ extern int write_segment (int new, register char *ptr, register char *end); /* (new, ptr, end) int new; register char *ptr; register char *end; */
/* unixfasl.c:409:OF */ extern void gcl_init_unixfasl (void); /* () */
/* unixfsys.c:145:OF */ extern char *getwd (char *buffer); /* (buffer) char *buffer; */
/* unixfsys.c:209:OF */ extern void coerce_to_filename (object pathname, char *p); /* (pathname, p) object pathname; char *p; */
/* unixfsys.c:329:OF */ extern bool file_exists (object file); /* (file) object file; */
/* unixfsys.c:359:OF */ extern FILE *backup_fopen (char *filename, char *option); /* (filename, option) char *filename; char *option; */
/* unixfsys.c:359:OF */ extern FILE *fopen_not_dir (char *filename, char *option); /* (filename, option) char *filename; char *option; */
/* unixfsys.c:372:OF */ extern int file_len (FILE *fp); /* (fp) FILE *fp; */
/* unixfsys.c:382:OF */ extern object truename (object); /* () */
/* unixfsys.c:382:OF */ extern void Ltruename (void); /* () */
/* unixfsys.c:418:OF */ extern object fSsetenv (object variable, object value); /* (variable, value) object variable; object value; */
/* unixfsys.c:442:OF */ extern object fLdelete_file (object path); /* (path) object path; */
/* unixfsys.c:456:OF */ extern void Lprobe_file (void); /* () */
/* unixfsys.c:533:OF */ extern void Ldirectory (void); /* () */
/* unixfsys.c:777:OF */ extern void gcl_init_unixfsys (void); /* () */
/* unixsave.c:173:OF */ extern void gcl_init_unixsave (void); /* () */
/* unixsys.c:83:OF */ extern object fSgetpid (void); /* () */
/* unixsys.c:87:OF */ extern void gcl_init_unixsys (void); /* () */
/* unixtime.c:67:OF */ extern int runtime (void); /* () */
/* unixtime.c:82:OF */ extern object unix_time_to_universal_time (int i); /* (i) int i; */
/* unixtime.c:99:OF */ extern object fLget_universal_time (void); /* () */
/* unixtime.c:144:OF */ extern object fLget_internal_real_time (void); /* () */
/* unixtime.c:173:OF */ extern void gcl_init_unixtime (void); /* () */
/* user_init.c:2:OF */ extern object user_init (void); /* () */
/* user_init.c:2:OF */ extern int user_match (const char *,int n); /* () */
/* usig.c:49:OF */ extern void gcl_signal (int signo, void (*handler) (/* ??? */)); /* (signo, handler) int signo; void (*handler)(); */
/* usig.c:92:OF */ extern int unblock_signals (int n, int m); /* (n, m) int n; int m; */
/* usig.c:119:OF */ extern void unblock_sigusr_sigio (void); /* () */
/* usig.c:182:OF */ extern void install_default_signals (void); /* () */
/* usig2.c:142:OF */ extern void gcl_init_safety (void); /* () */
/* usig2.c:158:OF */ extern object sSsignal_safety_required (fixnum signo,fixnum safety); /* (signo, safety) int signo; int safety; */
#ifdef __MINGW32__
/* usig2.c:167:OF */ extern void main_signal_handler (int signo); /* (signo) int signo */
#else
/* usig2.c:167:OF */ extern void main_signal_handler (int signo, int a, int b); /* (signo, a, b) int signo; int a; int b; */
#endif
/* usig2.c:375:OF */ extern void raise_pending_signals (int cond); /* (cond) int cond; */
/* usig2.c:407:OF */ extern object fSallow_signal (fixnum n); /* (n) int n; */
/* utils.c:12:OF */ extern object IisSymbol (object f); /* (f) object f; */
/* utils.c:20:OF */ extern object IisFboundp (object f); /* (f) object f; */
/* utils.c:30:OF */ extern object IisArray (object f); /* (f) object f; */
/* utils.c:44:OF */ extern object Iis_fixnum (object f); /* (f) object f; */
/* utils.c:61:OF */ extern object Iapply_ap_new (object (*f) (/* ??? */), object first, va_list ap); /* (f, ap) object (*f)(); va_list ap; */
/* utils.c:178:OF */ extern object Icheck_one_type (object x, enum type t); /* (x, t) object x; enum type t; */
/* utils.c:189:OF */ extern object fSincorrect_type (object val, object type); /* (val, type) object val; object type; */
/* utils.c:202:OF */ extern object Ivs_values (void); /* () */
/* utils.c:227:OF */ extern char *lisp_copy_to_null_terminated (object string, char *buf, int n); /* (string, buf, n) object string; char *buf; int n; */


/*  readline.d */
extern int readline_on;
void
gcl_init_readline_function(void);

/*  sys_gcl.c */
void
gcl_init_init(void);

/* misc */
void
gcl_init_symbol(void);

void
gcl_init_package(void);

void
gcl_init_character(void);

void
gcl_init_read(void);

void
gcl_init_pathname(void);

void
gcl_init_print(void);

void
gcl_init_character_function(void);

void
gcl_init_file_function(void);

void
gcl_init_list_function(void);

void
gcl_init_package_function(void);

void
gcl_init_pathname_function(void);

void
gcl_init_print_function(void);

void
gcl_init_read_function(void);

void
gcl_init_sequence_function(void);

void
gcl_init_string_function(void);

void
gcl_init_symbol_function(void);

void
gcl_init_socket_function(void);

void
gcl_init_hash(void);

void
import(object,object);

void
export(object,object);

void
NewInit(void);

void
gcl_init_system(object);

void
set_up_string_register(char *);

bool
endp1(object);

void
stack_cons(void);

bool
char_equal(object,object);

bool
string_equal(object,object);

bool
string_eq(object,object);

bool
remf(object *,object);

bool
keywordp(object);

int
pack_hash(object);

void
load(const char *);

bool
member_eq(object,object);

void
delete_eq(object,object *);

int
length(object);

int
rl_getc_em(FILE *);

void
setupPRINTdefault(object);

void
write_str(char *);

void
write_object(object,int);

void
cleanupPRINT(void);

int
fasload(object);

int
readc_stream(object);

void
unreadc_stream(int,object);

void
end_of_stream(object);

bool
stream_at_end(object);

int
digitp(int,int);

bool
char_eq(object,object);

bool
listen_stream(object);

void
get_string_start_end(object,object,object,int *,int *);

int
file_column(object);

int
writec_stream(int,object);

int
digit_weight(int,int);

void
flush_stream(object);

void
writestr_stream(char *,object);

void
write_string(object,object);

void
edit_double(int, double, int *, char *, int *);

void
sethash(object,object,object);

int
file_position(object);

int
file_position_set(object, int);

void
princ_str(char *s, object);

void
close_stream(object);

void
build_symbol_table(void);

void
gcl_init_file(void);

object
aset1(object,fixnum,object);

void
dfprintf(FILE *,char *,...);

void
Lmake_list(void);

void
Llast(void);

void
Lgensym(void);

void
Lldiff(void);

void
Lintern(void);

void
Lgensym(void);

void
Lldiff(void);

void
Lgensym(void);

void
Lintern(void);

void
Lintern(void);

void
Lreconc(void);

void
Lmember(void);

void
Ladjoin(void);

void
Llist(void);

void
Lappend(void);

void
Lread(void);

void
Lread_char(void);

void
Lchar_eq(void);

void
Lwrite_char(void);

void
Lforce_output(void);

void
Lchar_neq(void);

void
Llist(void);

void
Lwrite(void);

void
Lfresh_line(void);

void
Lsymbol_package(void);

void
Lfind_package(void);

void
Lfind_symbol(void);

void
Lpackage_name(void);

void
Lsymbol_plist(void);

void
Lpackage_nicknames(void);

void
Lpackage_use_list(void);

void
Lpackage_used_by_list(void);

void
Lstandard_char_p(void);

void
Lstring_char_p(void);

void
Lchar_code(void);

void
Lchar_bits(void);

void
Lchar_font(void);

void
Lread_line(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Llist_all_packages(void);

void
Lgensym(void);

void
Lread(void);

void
Lwrite(void);

void
Lstring_equal(void);

void
Lclose(void);

void
Lnamestring(void);

void
Lmake_echo_stream(void);

void
Lmake_broadcast_stream(void);

void
Lmake_two_way_stream(void);

void
Lbutlast(void);

void
Ladjoin(void);

void
Lstring_downcase(void);

void
Lmember(void);

void
Lgensym(void);

void
Llist_all_packages(void);

void
Lfind_symbol(void);

void
Lstring_equal(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lpackage_use_list(void);

void
Lreconc(void);

void
Lstandard_char_p(void);

void
Lstring_char_p(void);

void
Lcharacter(void);

void
Llength(void);

void
Lreconc(void);

void
Llength(void);

void
Lgensym(void);

void
Llist_length(void);

void
Lgensym(void);

void
Lbutlast(void);

void
Lnconc(void);

void
Lfind_package(void);

void
Lpackage_name(void);

void
Llist(void);

void
Lfresh_line(void);

void
Lread_char(void);

void
Lunread_char(void);

void
Lread_line(void);

void
Lread(void);

void
Lforce_output(void);

void
Lwrite(void);

void
Lmember(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lmake_pathname(void);

void
Lnamestring(void);

void
Lclose(void);

void
Lgensym(void);

void
Lfresh_line(void);

void
Llist(void);

void
Lread_char(void);

void
Lchar_eq(void);

void
Lfinish_output(void);

void
Lchar_neq(void);

void
Lwrite(void);

void
Lgensym(void);

void
Lmember(void);

void
Lappend(void);

void
Lcopy_tree(void);

void
Ladjoin(void);

void
Lgetf(void);

void
Lsubst(void);

void
Lsymbol_package(void);

void
Lcopy_list(void);

void
Lintern(void);

void
Lfind_package(void);

void
LlistA(void);

void
Llist(void);

void
Lgetf(void);

void
Lstreamp(void);

void
Lpeek_char(void);

void
Lread_char(void);

void
Lread_line(void);

void
Lset_macro_character(void);

void
Lclrhash(void);

void
siLhash_set(void);

void
Lgethash(void);

void
Lremhash(void);

void
Llist_all_packages(void);

void
Lintern(void);

void
Lunintern(void);

void
Lsubseq(void);

void
Lsymbol_package(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
Lread_char(void);

void
Lfile_length(void);

void
Lfile_position(void);

void
Lclose(void);

void
Lsubseq(void);

void
Lnamestring(void);

void
Lmerge_pathnames(void);

void
Lcopy_list(void);

void
Lread_line(void);

void
Lgensym(void);

void
Lcopy_list(void);

void
Lintern(void);

void
Lappend(void);

void
Lgensym(void);

void
Lcopy_list(void);

void
Lmember(void);

void
Lintern(void);

void
Lappend(void);

void
Lfind_package(void);

void
Lpackage_name(void);

void
Lpackage_nicknames(void);

void
Lpackage_use_list(void);

void
siLpackage_external(void);

void
siLpackage_internal(void);

void
Lsymbol_package(void);

void
Lappend(void);

void
Lgentemp(void);

void
Lgensym(void);

void
Lassoc(void);

void
Ladjoin(void);

void
Lstring_eq(void);

void
Lmember(void);

void
Lgethash(void);

void
Lfinish_output(void);

void
Lread(void);

void
Lmake_hash_table(void);

void
siLhash_set(void);

void
Lrevappend(void);

void
Lreconc(void);

void
Lcopy_list(void);

void
LlistA(void);

void
Lfind_package(void);

void
siLpackage_internal(void);

void
siLpackage_external(void);

void
princ_char(int,object);

void
Ldigit_char_p(void);

void
Lwrite_byte(void);

void
unlink_loaded_files(void);

void
FEpackage_error(object,const char *s);

int
system_time_zone_helper(void);

object
call_proc_new(object,void **,int,object,va_list);

object 
call_vproc_new(object,void *,object,va_list);

void
funcall_with_catcher(object, object);

void
siLset_symbol_plist(void);

void
Lhash_table_p(void);

void
Lreadtablep(void);

int 
fixnum_expt(int, int);

void
check_alist(object);

void
ck_larg_at_least(int,object);

void
vfun_wrong_number_of_args(object);

/* FIXME from lfun_list.lsp -- should be automatically generated */
void Lgensym(void);
void Lsubseq(void);
void Lminusp(void);
void Linteger_decode_float(void);
void Lminus(void);
void Lint_char(void);
void Lchar_int(void);
void Lall_different(void);
void Lcopy_seq(void);
void Lkeywordp(void);
void Lname_char(void);
void Lchar_name(void);
void Lrassoc_if(void);
void Lmake_list(void);
void Lhost_namestring(void);
void Lmake_echo_stream(void);
void Lnth(void);
void Lsin(void);
void Lnumerator(void);
void Larray_rank(void);
void Lcaar(void);
void Lboth_case_p(void);
void Lnull(void);
void Lrename_file(void);
void Lfile_author(void);
void Lstring_capitalize(void);
void Lmacroexpand(void);
void Lnconc(void);
void Lboole(void);
void Ltailp(void);
void Lconsp(void);
void Llistp(void);
void Lmapcan(void);
void Llength(void);
void Lrassoc(void);
void Lpprint(void);
void Lpathname_host(void);
void Lnsubst_if_not(void);
void Lfile_position(void);
void Lstring_l(void);
void Lreverse(void);
void Lstreamp(void);
void siLputprop(void);
void Lremprop(void);
void Lsymbol_package(void);
void Lnstring_upcase(void);
void Lstring_ge(void);
void Lrealpart(void);
void Lnbutlast(void);
void Larray_dimension(void);
void Lcdr(void);
void Leql(void);
void Llog(void);
void Ldirectory(void);
void Lstring_not_equal(void);
void Lshadowing_import(void);
void Lmapc(void);
void Lmapl(void);
void Lmakunbound(void);
void Lcons(void);
void Llist(void);
void Luse_package(void);
void Lfile_length(void);
void Lmake_symbol(void);
void Lstring_right_trim(void);
void Lenough_namestring(void);
void Lprint(void);
void Lcddaar(void);
void Lcdadar(void);
void Lcdaadr(void);
void Lcaddar(void);
void Lcadadr(void);
void Lcaaddr(void);
void Lset_macro_character(void);
void Lforce_output(void);
void Lnthcdr(void);
void Llogior(void);
void Lchar_downcase(void);
void Lstring_char_p(void);
void Lstream_element_type(void);
void Lpackage_used_by_list(void);
void Ldivide(void);
void Lmaphash(void);
void Lstring_eq(void);
void Lpairlis(void);
void Lsymbolp(void);
void Lchar_not_lessp(void);
void Lone_plus(void);
void Lby(void);
void Lnsubst_if(void);
void Lcopy_list(void);
void Ltan(void);
void Lset(void);
void Lfunctionp(void);
void Lwrite_byte(void);
void Llast(void);
void Lmake_string(void);
void Lcaaar(void);
void Llist_length(void);
void Lcdddr(void);
void Lprin1(void);
void Lprinc(void);
void Llower_case_p(void);
void Lchar_le(void);
void Lstring_equal(void);
void Lclear_output(void);
void CERROR(void);
void Lterpri(void);
void Lnsubst(void);
void Lunuse_package(void);
void Lstring_not_greaterp(void);
void Lstring_g(void);
void Lfinish_output(void);
void Lspecial_form_p(void);
void Lstringp(void);
void Lget_internal_run_time(void);
void Ltruncate(void);
void Lcode_char(void);
void Lchar_code(void);
void Lsimple_string_p(void);
void Lrevappend(void);
void Lhash_table_count(void);
void Lpackage_use_list(void);
void Lrem(void);
void Lmin(void);
void Lapplyhook(void);
void Lexp(void);
void Lchar_lessp(void);
void Lcdar(void);
void Lcadr(void);
void Llist_all_packages(void);
void Lcdr(void);
void Lcopy_symbol(void);
void Lacons(void);
void Ladjustable_array_p(void);
void Lsvref(void);
void Lapply(void);
void Ldecode_float(void);
void Lsubst_if_not(void);
void Lrplaca(void);
void Lsymbol_plist(void);
void Lwrite_string(void);
void Llogeqv(void);
void Lstring(void);
void Lstring_upcase(void);
void Lceiling(void);
void Lgethash(void);
void Ltype_of(void);
void Lbutlast(void);
void Lone_minus(void);
void Lmake_hash_table(void);
void Lstring_neq(void);
void Lmonotonically_nondecreasing(void);
void Lmake_broadcast_stream(void);
void Limagpart(void);
void Lintegerp(void);
void Lread_char(void);
void Lpeek_char(void);
void Lchar_font(void);
void Lstring_greaterp(void);
void Loutput_stream_p(void);
void Lash(void);
void Llcm(void);
void Lelt(void);
void Lcos(void);
void Lnstring_downcase(void);
void Lcopy_alist(void);
void Latan(void);
void Ldelete_file(void);
void Lfloat_radix(void);
void Lsymbol_name(void);
void Lclear_input(void);
void Lfind_symbol(void);
void Lchar_l(void);
void Lhash_table_p(void);
void Levenp(void);
void siLcmod(void);
void siLcplus(void);
void siLctimes(void);
void siLcdifference(void);
void Lzerop(void);
void Lcaaaar(void);
void Lchar_ge(void);
void Lcdddar(void);
void Lcddadr(void);
void Lcdaddr(void);
void Lcadddr(void);
void Lfill_pointer(void);
void Lmapcar(void);
void Lfloatp(void);
void Lshadow(void);
void Lmacroexpand_1(void);
void Lsxhash(void);
void Llisten(void);
void Larrayp(void);
void Lmake_pathname(void);
void Lpathname_type(void);
void Lfuncall(void);
void Lclrhash(void);
void Lgraphic_char_p(void);
void Lfboundp(void);
void Lnsublis(void);
void Lchar_not_equal(void);
void Lmacro_function(void);
void Lsubst_if(void);
void Lcomplexp(void);
void Lread_line(void);
void Lpathnamep(void);
void Lmax(void);
void Lin_package(void);
void Lreadtablep(void);
void Lfloat_sign(void);
void Lcharacterp(void);
void Lread(void);
void Lnamestring(void);
void Lunread_char(void);
void Lcdaar(void);
void Lcadar(void);
void Lcaadr(void);
void Lchar_eq(void);
void Lalpha_char_p(void);
void Lstring_trim(void);
void Lmake_package(void);
void Lclose(void);
void Ldenominator(void);
void Lfloat(void);
void Lcar(void);
void Lround(void);
void Lsubst(void);
void Lupper_case_p(void);
void Larray_element_type(void);
void Ladjoin(void);
void Llogand(void);
void Lmapcon(void);
void Lintern(void);
void Lvalues(void);
void Lexport(void);
void Ltimes(void);
void Lmonotonically_increasing(void);
void Lcomplex(void);
void Lset_syntax_from_char(void);
void Lchar_bit(void);
void Linteger_length(void);
void Lpackagep(void);
void Linput_stream_p(void);
void Lmonotonically_nonincreasing(void);
void Lpathname(void);
void Leq(void);
void Lmake_char(void);
void Lfile_namestring(void);
void Lcharacter(void);
void Lsymbol_function(void);
void Lconstantp(void);
void Lchar_equal(void);
void Ltree_equal(void);
void Lcddr(void);
void Lgetf(void);
void Lsave(void);
void Lmake_random_state(void);
void Lchar_not_greaterp(void);
void Lexpt(void);
void Lsqrt(void);
void Lscale_float(void);
void Lchar_g(void);
void Lldiff(void);
void Lassoc_if_not(void);
void Lbit_vector_p(void);
void Lnstring_capitalize(void);
void Lsymbol_value(void);
void Lrplacd(void);
void Lboundp(void);
void Lequalp(void);
void Lsimple_bit_vector_p(void);
void Lmember_if_not(void);
void Lmake_two_way_stream(void);
void Lparse_integer(void);
void Lplus(void);
void Lall_the_same(void);
void Lgentemp(void);
void Lrename_package(void);
void Lcommonp(void);
void Lnumberp(void);
void Lcopy_readtable(void);
void Lrandom_state_p(void);
void Ldirectory_namestring(void);
void Lstandard_char_p(void);
void Ltruename(void);
void Lidentity(void);
void Lnreverse(void);
void Lpathname_device(void);
void Lunintern(void);
void Lunexport(void);
void Lfloat_precision(void);
void Lstring_downcase(void);
void Lcar(void);
void Lconjugate(void);
void Lnull(void);
void Lread_char_no_hang(void);
void Lfresh_line(void);
void Lwrite_char(void);
void Lparse_namestring(void);
void Lstring_not_lessp(void);
void Lchar(void);
void Laref(void);
void Lpackage_nicknames(void);
void Lendp(void);
void Loddp(void);
void Lchar_upcase(void);
void LlistA(void);
void Lvalues_list(void);
void Lequal(void);
void Ldigit_char_p(void);
void ERROR(void);
void Lchar_neq(void);
void Lpathname_directory(void);
void Lcdaaar(void);
void Lcadaar(void);
void Lcaadar(void);
void Lcaaadr(void);
void Lcddddr(void);
void Lget_macro_character(void);
void Lformat(void);
void Lcompiled_function_p(void);
void Lsublis(void);
void Lpathname_name(void);
void Limport(void);
void Llogxor(void);
void Lrassoc_if_not(void);
void Lchar_greaterp(void);
void Lmake_synonym_stream(void);
void Lalphanumericp(void);
void Lremhash(void);
void Lreconc(void);
void Lmonotonically_decreasing(void);
void Llogbitp(void);
void Lmaplist(void);
void Lvectorp(void);
void Lassoc_if(void);
void Lget_properties(void);
void Lstring_le(void);
void Levalhook(void);
void Lfile_write_date(void);
void Llogcount(void);
void Lmerge_pathnames(void);
void Lmember_if(void);
void Lread_byte(void);
void Lsimple_vector_p(void);
void Lchar_bits(void);
void Lcopy_tree(void);
void Lgcd(void);
void Lby(void);
void Lget(void);
void Lmod(void);
void Ldigit_char(void);
void Lprobe_file(void);
void Lstring_left_trim(void);
void Lpathname_version(void);
void Lwrite_line(void);
void Leval(void);
void Latom(void);
void Lcddar(void);
void Lcdadr(void);
void Lcaddr(void);
void Lfmakunbound(void);
void Lsleep(void);
void Lpackage_name(void);
void Lfind_package(void);
void Lassoc(void);
void Lset_char_bit(void);
void Lfloor(void);
void Lwrite(void);
void Lplusp(void);
void Lfloat_digits(void);
void Lread_delimited_list(void);
void Lappend(void);
void Lmember(void);
void Lstring_lessp(void);
void Lrandom(void);
void siLspecialp(void);
void siLoutput_stream_string(void);
void siLstructurep(void);
void siLcopy_stream(void);
void siLinit_system(void);
void siLstring_to_object(void);
void siLreset_stack_limits(void);
void siLdisplaced_array_p(void);
void siLrplaca_nthcdr(void);
void siLlist_nth(void);
void siLmake_vector(void);
void siLaset(void);
void siLsvset(void);
void siLfill_pointer_set(void);
void siLreplace_array(void);
void siLfset(void);
void siLhash_set(void);
void Lboole(void);
void siLpackage_internal(void);
void siLpackage_external(void);
void siLelt_set(void);
void siLchar_set(void);
void siLmake_structure(void);
void siLstructure_name(void);
void siLstructure_ref(void);
void siLstructure_set(void);
void siLput_f(void);
void siLrem_f(void);
void siLset_symbol_plist(void);
void siLbit_array_op(void);

object
cmod(object);
object
ctimes(object,object);
object
cdifference(object,object);
object
cplus(object,object);

object
Icall_error_handler(object,object,int,...);

void *
gcl_gmp_alloc(size_t);

int
my_plt(const char *,unsigned long *);

int
parse_plt(void);

int
sgc_count_read_only_type(int);

int 
gcl_isnormal_double(double);

int 
gcl_isnormal_float(float);

object
find_init_name1(char *,unsigned);

#ifdef SGC
void
memprotect_test_reset(void);
#endif


#if defined (__MINGW32__)
int bcmp ( const void *s1, const void *s2, size_t n );
void bcopy ( const void *s1, void *s2, size_t n );
void bzero(void *b, size_t length);
int TcpOutputProc ( int fd, char *buf, int toWrite, int *errorCodePtr, int block );
void recreate_heap1 ( void );
void gcl_init_shared_memory ( void );
void fix_filename ( object pathname, char *filename1 );
void alarm ( int n );
void *sbrk ( unsigned long increment );
void sigemptyset( sigset_t *set);
void sigaddset ( sigset_t *set, int n);
int sigismember ( sigset_t *set, int n );
int sigprocmask ( int how, const sigset_t *set, sigset_t *oldset );
#endif

#ifdef GCL_GPROF
void
gprof_cleanup(void);
#endif

int
msystem(const char *);

void
assert_error(const char *,unsigned,const char *,const char *);

#ifdef _WIN32
void
detect_wine(void);

void
init_shared_memory(void);

void *
alloca(size_t);

object
find_init_string(const char *);

#endif

void *
get_mmap(FILE *,void **);

int
un_mmap(void *,void *);

object
fSuse_fast_links_2(object,object);

MP_INT *
otoi(object);
void
isetq_fix(MP_INT *,int);
int
mpz_to_mpz1(MP_INT *,MP_INT *,void *);
int
mpz_to_mpz(MP_INT *,MP_INT *);
int
obj_to_mpz1(object,MP_INT *,void *);
int
obj_to_mpz(object,MP_INT *);


#include "f-ol-syntax.h"
void init_code(){do_init((void *)VV);}
/*	function definition for Q-MK_ANTIQUOT	*/

static void L1()
{register object *base=vs_base;
	register object *sup=base+VM1; VC1
	vs_check;
	{object V1;
	V1=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= make_cons(((object)VV[0]),(V1));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for Q-MK_PRED	*/

static void L2()
{register object *base=vs_base;
	register object *sup=base+VM2; VC2
	vs_check;
	{object V2;
	object V3;
	V2=(base[0]);
	V3=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= (V2);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk66)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk67)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V3);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T2;}
	base[2]= listA(3,((object)VV[1]),(V2),(V3));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T2;
T2:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[3]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for ML-IS_PRED	*/

static void L3()
{register object *base=vs_base;
	register object *sup=base+VM3; VC3
	vs_check;
	{object V4;
	V4=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V4)))==(((object)VV[1]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_PRED	*/

static void L4()
{register object *base=vs_base;
	register object *sup=base+VM4; VC4
	vs_check;
	{object V5;
	V5=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V5)),((object)VV[1])))){
	goto T11;}
	base[1]= CMPcdr((V5));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T11;
T11:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[4]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_CONJ	*/

static void L5()
{register object *base=vs_base;
	register object *sup=base+VM5; VC5
	vs_check;
	{object V6;
	object V7;
	V6=(base[0]);
	V7=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= listA(3,((object)VV[5]),(V6),(V7));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for ML-IS_CONJ	*/

static void L6()
{register object *base=vs_base;
	register object *sup=base+VM6; VC6
	vs_check;
	{object V8;
	V8=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V8)))==(((object)VV[5]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_CONJ	*/

static void L7()
{register object *base=vs_base;
	register object *sup=base+VM7; VC7
	vs_check;
	{object V9;
	V9=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V9)),((object)VV[5])))){
	goto T15;}
	base[1]= CMPcdr((V9));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T15;
T15:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[6]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_DISJ	*/

static void L8()
{register object *base=vs_base;
	register object *sup=base+VM8; VC8
	vs_check;
	{object V10;
	object V11;
	V10=(base[0]);
	V11=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= listA(3,((object)VV[7]),(V10),(V11));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for ML-IS_DISJ	*/

static void L9()
{register object *base=vs_base;
	register object *sup=base+VM9; VC9
	vs_check;
	{object V12;
	V12=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V12)))==(((object)VV[7]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_DISJ	*/

static void L10()
{register object *base=vs_base;
	register object *sup=base+VM10; VC10
	vs_check;
	{object V13;
	V13=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V13)),((object)VV[7])))){
	goto T19;}
	base[1]= CMPcdr((V13));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T19;
T19:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[8]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_IMP	*/

static void L11()
{register object *base=vs_base;
	register object *sup=base+VM11; VC11
	vs_check;
	{object V14;
	object V15;
	V14=(base[0]);
	V15=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= listA(3,((object)VV[9]),(V14),(V15));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for ML-IS_IMP	*/

static void L12()
{register object *base=vs_base;
	register object *sup=base+VM12; VC12
	vs_check;
	{object V16;
	V16=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V16)))==(((object)VV[9]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_IMP	*/

static void L13()
{register object *base=vs_base;
	register object *sup=base+VM13; VC13
	vs_check;
	{object V17;
	V17=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V17)),((object)VV[9])))){
	goto T23;}
	base[1]= CMPcdr((V17));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T23;
T23:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[10]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_NEG	*/

static void L14()
{register object *base=vs_base;
	register object *sup=base+VM14; VC14
	vs_check;
	{object V18;
	V18=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= listA(3,((object)VV[9]),(V18),(((object)VV[11])->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for Q-MK_FORALL	*/

static void L15()
{register object *base=vs_base;
	register object *sup=base+VM15; VC15
	vs_check;
	{object V19;
	object V20;
	V19=(base[0]);
	V20=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V21;
	base[2]= (V19);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk70)();
	vs_top=sup;
	V21= vs_base[0];
	base[2]= (V21);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk71)();
	vs_top=sup;
	base[2]= (V21);
	base[3]= (V20);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk72)();
	return;}
	}
}
/*	function definition for ML-MK_FORALL	*/

static void L16()
{register object *base=vs_base;
	register object *sup=base+VM16; VC16
	vs_check;
	{object V22;
	object V23;
	V22=(base[0]);
	V23=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V22)))==(((object)VV[12])))){
	goto T33;}
	base[2]= listA(3,((object)VV[13]),(V22),(V23));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T33;
T33:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[14]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for ML-IS_FORALL	*/

static void L17()
{register object *base=vs_base;
	register object *sup=base+VM17; VC17
	vs_check;
	{object V24;
	V24=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V24)))==(((object)VV[13]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_FORALL	*/

static void L18()
{register object *base=vs_base;
	register object *sup=base+VM18; VC18
	vs_check;
	{object V25;
	V25=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V25)),((object)VV[13])))){
	goto T37;}
	base[1]= CMPcdr((V25));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T37;
T37:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[15]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_EXISTS	*/

static void L19()
{register object *base=vs_base;
	register object *sup=base+VM19; VC19
	vs_check;
	{object V26;
	object V27;
	V26=(base[0]);
	V27=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V28;
	base[2]= (V26);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk70)();
	vs_top=sup;
	V28= vs_base[0];
	base[2]= (V28);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk71)();
	vs_top=sup;
	base[2]= (V28);
	base[3]= (V27);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk73)();
	return;}
	}
}
/*	function definition for ML-MK_EXISTS	*/

static void L20()
{register object *base=vs_base;
	register object *sup=base+VM20; VC20
	vs_check;
	{object V29;
	object V30;
	V29=(base[0]);
	V30=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V29)))==(((object)VV[12])))){
	goto T47;}
	base[2]= listA(3,((object)VV[16]),(V29),(V30));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T47;
T47:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[17]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for ML-IS_EXISTS	*/

static void L21()
{register object *base=vs_base;
	register object *sup=base+VM21; VC21
	vs_check;
	{object V31;
	V31=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V31)))==(((object)VV[16]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_EXISTS	*/

static void L22()
{register object *base=vs_base;
	register object *sup=base+VM22; VC22
	vs_check;
	{object V32;
	V32=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V32)),((object)VV[16])))){
	goto T51;}
	base[1]= CMPcdr((V32));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T51;
T51:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[18]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_EQUIV	*/

static void L23()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM23; VC23
	vs_check;
	{VOL object V33;
	VOL object V34;
	V33=(base[0]);
	V34=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{VOL object V35;
	frs_push(FRS_CATCH,((object)VV[2]));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V35= vs_base[0];
	goto T54;}
	else{
	base[2]= ((object)VV[19]);
	base[4]= (V33);
	base[5]= (V34);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk74)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk75)();
	vs_top=sup;
	V36= vs_base[0];
	V37= make_cons(V36,Cnil);
	frs_pop();
	V35= V37;}
	goto T54;
T54:;
	if(!(type_of((V35))!=t_cons)){
	goto T62;}
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[20]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	goto T62;
T62:;
	base[2]= CMPcar((V35));
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for Q-MK_INEQUIV	*/

static void L24()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM24; VC24
	vs_check;
	{VOL object V39;
	VOL object V40;
	V39=(base[0]);
	V40=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{VOL object V41;
	frs_push(FRS_CATCH,((object)VV[2]));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V41= vs_base[0];
	goto T65;}
	else{
	base[2]= ((object)VV[21]);
	base[4]= (V39);
	base[5]= (V40);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk74)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk75)();
	vs_top=sup;
	V42= vs_base[0];
	V43= make_cons(V42,Cnil);
	frs_pop();
	V41= V43;}
	goto T65;
T65:;
	if(!(type_of((V41))!=t_cons)){
	goto T73;}
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[22]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	goto T73;
T73:;
	base[2]= CMPcar((V41));
	vs_top=(vs_base=base+2)+1;
	return;}
	}
}
/*	function definition for Q-MK_VAR	*/

static void L25()
{register object *base=vs_base;
	register object *sup=base+VM25; VC25
	vs_check;
	{object V45;
	V45=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;{object V47;
	base[1]= (V45);
	base[2]= (((object)VV[23])->s.s_dbind);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	V47= vs_base[0];
	if(V47==Cnil)goto T77;
	V46= V47;
	goto T76;
	goto T77;
T77:;}
	base[1]= (V45);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk77)();
	vs_top=sup;
	V46= vs_base[0];
	goto T76;
T76:;
	base[1]= listA(3,((object)VV[12]),(V45),V46);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for NEW-VAR-TYPE	*/

static void L26()
{register object *base=vs_base;
	register object *sup=base+VM26; VC26
	vs_check;
	{object V48;
	V48=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V49;
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	V49= vs_base[0];
	{object V50;
	V50= make_cons((V48),(V49));
	(((object)VV[23])->s.s_dbind)= make_cons((V50),(((object)VV[23])->s.s_dbind));}
	base[1]= (V49);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for Q-FREE-VAR	*/

static void L27()
{register object *base=vs_base;
	register object *sup=base+VM27; VC27
	vs_check;
	{object V51;
	V51=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V51)))==(((object)VV[12])))){
	goto T87;}
	base[1]= CMPcadr((V51));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk77)();
	return;
	goto T87;
T87:;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for MK_REALVAR	*/

static void L28()
{register object *base=vs_base;
	register object *sup=base+VM28; VC28
	vs_check;
	{object V52;
	object V53;
	V52=(base[0]);
	V53=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;{object V54;
	base[2]= (V53);
	{object V55 =((V52))->s.s_plist;
	 object ind= ((object)VV[24]);
	while(V55!=Cnil){
	if(V55->c.c_car==ind){
	base[3]= (V55->c.c_cdr->c.c_car);
	goto T93;
	}else V55=V55->c.c_cdr->c.c_cdr;}
	base[3]= Cnil;}
	goto T93;
T93:;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	V54= vs_base[0];
	if(V54==Cnil)goto T90;
	base[2]= V54;
	vs_top=(vs_base=base+2)+1;
	return;
	goto T90;
T90:;}
	base[2]= (V52);
	V57= listA(3,((object)VV[12]),(V52),(V53));
	base[3]= make_cons((V53),/* INLINE-ARGS */V57);
	base[4]= ((object)VV[24]);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk79)();
	vs_top=sup;
	V56= vs_base[0];
	base[2]= CMPcdr(V56);
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for ML-GENVAR	*/

static void L29()
{register object *base=vs_base;
	register object *sup=base+VM29; VC29
	vs_check;
	{object V58;
	V58=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= ((object)VV[25]);
	base[3]= ((object)VV[12]);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk80)();
	vs_top=sup;
	base[1]= vs_base[0];
	base[2]= (V58);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk81)();
	return;
	}
}
/*	function definition for ML-IS_VAR	*/

static void L30()
{register object *base=vs_base;
	register object *sup=base+VM30; VC30
	vs_check;
	{object V59;
	V59=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V59)))==(((object)VV[12]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_VAR	*/

static void L31()
{register object *base=vs_base;
	register object *sup=base+VM31; VC31
	vs_check;
	{object V60;
	V60=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V60)),((object)VV[12])))){
	goto T103;}
	base[1]= CMPcdr((V60));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T103;
T103:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[26]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_CONST	*/

static void L32()
{register object *base=vs_base;
	register object *sup=base+VM32; VC32
	vs_check;
	{object V61;
	V61=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= (V61);
	base[1]= simple_symlispcall(((object)VV[82]),base+2,1);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk67)();
	vs_top=sup;
	V62= vs_base[0];
	base[1]= listA(3,((object)VV[27]),(V61),V62);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-MK_CONST	*/

static void L33()
{register object *base=vs_base;
	register object *sup=base+VM33; VC33
	vs_check;
	{register object V63;
	register object V64;
	V63=(base[0]);
	V64=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V65;
	base[2]= (V64);
	{object V66 =((V63))->s.s_plist;
	 object ind= ((object)VV[28]);
	while(V66!=Cnil){
	if(V66->c.c_car==ind){
	base[3]= (V66->c.c_cdr->c.c_car);
	goto T111;
	}else V66=V66->c.c_cdr->c.c_cdr;}
	base[3]= Cnil;}
	goto T111;
T111:;
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk76)();
	vs_top=sup;
	V65= vs_base[0];
	if(((V65))==Cnil){
	goto T113;}
	base[2]= (V65);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T113;
T113:;
	base[2]= (V63);
	if((simple_symlispcall(((object)VV[82]),base+2,1))==Cnil){
	goto T116;}
	base[2]= (V64);
	base[5]= (V63);
	base[4]= simple_symlispcall(((object)VV[82]),base+5,1);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk67)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T116;}
	base[2]= (V63);
	V68= listA(3,((object)VV[27]),(V63),(V64));
	base[3]= make_cons((V64),/* INLINE-ARGS */V68);
	base[4]= ((object)VV[28]);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk79)();
	vs_top=sup;
	V67= vs_base[0];
	base[2]= CMPcdr(V67);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T116;
T116:;
	base[2]= (V63);
	if((simple_symlispcall(((object)VV[82]),base+2,1))!=Cnil){
	goto T130;}
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[29]);
	base[3]= (V63);
	base[4]= ((object)VV[30]);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk83)();
	unwind(fr,((object)VV[2]));}
	goto T130;
T130:;
	base[2]= (V64);
	base[5]= (V63);
	base[4]= simple_symlispcall(((object)VV[82]),base+5,1);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk67)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])!=Cnil){
	goto T138;}
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[31]);
	base[3]= (V63);
	base[4]= ((object)VV[32]);
	vs_top=(vs_base=base+2)+3;
	(void) (*Lnk83)();
	unwind(fr,((object)VV[2]));}
	goto T138;
T138:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[33]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}}
	}
}
/*	function definition for ML-IS_CONST	*/

static void L34()
{register object *base=vs_base;
	register object *sup=base+VM34; VC34
	vs_check;
	{object V69;
	V69=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V69)))==(((object)VV[27]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_CONST	*/

static void L35()
{register object *base=vs_base;
	register object *sup=base+VM35; VC35
	vs_check;
	{object V70;
	V70=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V70)),((object)VV[27])))){
	goto T150;}
	base[1]= CMPcdr((V70));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T150;
T150:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[34]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_ABS	*/

static void L36()
{register object *base=vs_base;
	register object *sup=base+VM36; VC36
	vs_check;
	{object V71;
	object V72;
	V71=(base[0]);
	V72=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V73;
	base[2]= (V71);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk70)();
	vs_top=sup;
	V73= vs_base[0];
	base[2]= (V73);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk71)();
	vs_top=sup;
	base[2]= (V73);
	base[3]= (V72);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk84)();
	return;}
	}
}
/*	function definition for ML-MK_ABS	*/

static void L37()
{register object *base=vs_base;
	register object *sup=base+VM37; VC37
	vs_check;
	{object V74;
	object V75;
	V74=(base[0]);
	V75=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V74)))==(((object)VV[12])))){
	goto T160;}
	V76= make_cons((V74),(V75));
	base[2]= (V74);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V77= vs_base[0];
	base[2]= (V75);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V78= vs_base[0];
	V79= list(2,V77,V78);
	base[2]= listA(3,((object)VV[35]),/* INLINE-ARGS */V76,make_cons(((object)VV[36]),/* INLINE-ARGS */V79));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T160;
T160:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[37]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for ML-IS_ABS	*/

static void L38()
{register object *base=vs_base;
	register object *sup=base+VM38; VC38
	vs_check;
	{object V80;
	V80=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V80)))==(((object)VV[35]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_ABS	*/

static void L39()
{register object *base=vs_base;
	register object *sup=base+VM39; VC39
	vs_check;
	{object V81;
	V81=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V81)),((object)VV[35])))){
	goto T169;}
	V82= CMPcdr((V81));
	goto T167;
	goto T169;
T169:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[38]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	goto T167;
T167:;
	base[1]= CMPcar(V82);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PREP-TERM-FN	*/

static void L40()
{register object *base=vs_base;
	register object *sup=base+VM40; VC40
	vs_check;
	{register object V83;
	V83=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V84= CMPcar((V83));
	if((V84!= ((object)VV[12])))goto T172;
	V85= CMPcadr((V83));
	base[1]= CMPcddr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V86= vs_base[0];
	base[1]= listA(3,((object)VV[12]),/* INLINE-ARGS */V85,V86);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T172;
T172:;
	if((V84!= ((object)VV[27])))goto T175;
	V87= CMPcadr((V83));
	base[1]= CMPcddr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V88= vs_base[0];
	base[1]= listA(3,((object)VV[27]),/* INLINE-ARGS */V87,V88);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T175;
T175:;
	if((V84!= ((object)VV[39])))goto T178;
	base[1]= CMPcaadr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk86)();
	vs_top=sup;
	V89= vs_base[0];
	base[1]= CMPcdadr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk86)();
	vs_top=sup;
	V90= vs_base[0];
	V91= make_cons(V89,V90);
	base[1]= CMPcddr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V92= vs_base[0];
	base[1]= listA(3,((object)VV[39]),/* INLINE-ARGS */V91,V92);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T178;
T178:;
	if((V84!= ((object)VV[35])))goto T185;
	base[1]= CMPcaadr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk86)();
	vs_top=sup;
	V93= vs_base[0];
	base[1]= CMPcdadr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk86)();
	vs_top=sup;
	V94= vs_base[0];
	V95= make_cons(V93,V94);
	base[1]= CMPcddr((V83));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	V96= vs_base[0];
	base[1]= listA(3,((object)VV[35]),/* INLINE-ARGS */V95,V96);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T185;
T185:;
	if((V84!= ((object)VV[0])))goto T192;
	V83= CMPcdr((V83));
	goto TTL;
	goto T192;
T192:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[40]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}}
	}
}
/*	function definition for PREP-TERM-FOR-PRINT	*/

static void L41()
{register object *base=vs_base;
	register object *sup=base+VM41; VC41
	vs_check;
	bds_check;
	{object V97;
	V97=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V98;
	base[1]= (V97);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V98= vs_base[0];
	base[3]= (V98);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	base[1]= vs_base[0];
	bds_bind(((object)VV[41]),base[1]);
	base[2]= (V98);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk86)();
	bds_unwind1;
	return;}
	}
}
/*	function definition for ADD-TERM-LINKS	*/

static void L42()
{register object *base=vs_base;
	register object *sup=base+VM42; VC42
	vs_check;
	{register object V99;
	V99=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V100= CMPcar((V99));
	if((V100!= ((object)VV[12])))goto T202;
	V101= CMPcadr((V99));
	base[1]= CMPcddr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	V102= vs_base[0];
	base[1]= listA(3,((object)VV[12]),/* INLINE-ARGS */V101,V102);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T202;
T202:;
	if((V100!= ((object)VV[27])))goto T205;
	V103= CMPcadr((V99));
	base[1]= CMPcddr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	V104= vs_base[0];
	base[1]= listA(3,((object)VV[27]),/* INLINE-ARGS */V103,V104);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T205;
T205:;
	if((V100!= ((object)VV[39])))goto T208;
	base[1]= CMPcaadr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V105= vs_base[0];
	base[1]= CMPcdadr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V106= vs_base[0];
	V107= make_cons(V105,V106);
	base[1]= CMPcddr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	V108= vs_base[0];
	base[1]= listA(3,((object)VV[39]),/* INLINE-ARGS */V107,V108);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T208;
T208:;
	if((V100!= ((object)VV[35])))goto T215;
	base[1]= CMPcaadr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V109= vs_base[0];
	base[1]= CMPcdadr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk87)();
	vs_top=sup;
	V110= vs_base[0];
	V111= make_cons(V109,V110);
	base[1]= CMPcddr((V99));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	V112= vs_base[0];
	base[1]= listA(3,((object)VV[35]),/* INLINE-ARGS */V111,V112);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T215;
T215:;
	if((V100!= ((object)VV[0])))goto T222;
	V99= CMPcdr((V99));
	goto TTL;
	goto T222;
T222:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[42]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}}
	}
}
/*	function definition for ADD-TYPE-LINKS	*/

static void L43()
{register object *base=vs_base;
	register object *sup=base+VM43; VC43
	vs_check;
	{register object V113;
	V113=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V114= CMPcar((V113));
	if((V114!= ((object)VV[0])))goto T226;
	base[1]= CMPcdr((V113));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T226;
T226:;
	if((V114!= ((object)VV[47])))goto T227;
	base[1]= (V113);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T227;
T227:;
	if((V114!= ((object)VV[43])))goto T228;
	{object V115= CMPcdr((V113));
	if(!(type_of(V115)==t_fixnum||
type_of(V115)==t_bignum||
type_of(V115)==t_ratio||
type_of(V115)==t_shortfloat||
type_of(V115)==t_longfloat||
type_of(V115)==t_complex)){
	goto T230;}}
	base[1]= (V113);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T230;
T230:;
	if((CMPcdr((V113)))!=Cnil){
	goto T233;}
	(((object)VV[44])->s.s_dbind)= number_plus((((object)VV[44])->s.s_dbind),small_fixnum(1));
	base[1]= make_cons(((object)VV[43]),(((object)VV[44])->s.s_dbind));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T233;
T233:;
	V113= CMPcdr((V113));
	goto TTL;
	goto T228;
T228:;
	V116= CMPcar((V113));
	{object V118;
	object V119= CMPcdr((V113));
	if(V119==Cnil){
	V117= Cnil;
	goto T238;}
	base[1]=V118=MMcons(Cnil,Cnil);
	goto T239;
T239:;
	base[2]= (V119->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	(V118->c.c_car)= vs_base[0];
	if((V119=MMcdr(V119))==Cnil){
	V117= base[1];
	goto T238;}
	V118=MMcdr(V118)=MMcons(Cnil,Cnil);
	goto T239;}
	goto T238;
T238:;
	base[1]= make_cons(/* INLINE-ARGS */V116,V117);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for GET-TYPE-LINKS	*/

static void L44()
{register object *base=vs_base;
	register object *sup=base+VM44; VC44
	vs_check;
	{register object V120;
	V120=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V121= CMPcar((V120));
	if((V121!= ((object)VV[0]))
	&& (V121!= ((object)VV[47])))goto T242;
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;
	goto T242;
T242:;
	if((V121!= ((object)VV[43])))goto T243;
	{object V122= CMPcdr((V120));
	if(!(type_of(V122)==t_fixnum||
type_of(V122)==t_bignum||
type_of(V122)==t_ratio||
type_of(V122)==t_shortfloat||
type_of(V122)==t_longfloat||
type_of(V122)==t_complex)){
	goto T245;}}
	base[1]= make_cons(CMPcdr((V120)),Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T245;
T245:;
	V120= CMPcdr((V120));
	goto TTL;
	goto T243;
T243:;
	{object V123;
	{object V124;
	object V125= CMPcdr((V120));
	if(V125==Cnil){
	V123= Cnil;
	goto T249;}
	base[1]=V124=MMcons(Cnil,Cnil);
	goto T250;
T250:;
	base[2]= (V125->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	(V124->c.c_car)= vs_base[0];
	if((V125=MMcdr(V125))==Cnil){
	V123= base[1];
	goto T249;}
	V124=MMcdr(V124)=MMcons(Cnil,Cnil);
	goto T250;}
	goto T249;
T249:;
	 vs_top=base+1;
	 while(V123!=Cnil)
	 {vs_push((V123)->c.c_car);V123=(V123)->c.c_cdr;}
	vs_base=base+1;}
	Lappend();
	return;}
	}
}
/*	function definition for GET-TERM-LINKS	*/

static void L45()
{register object *base=vs_base;
	register object *sup=base+VM45; VC45
	vs_check;
	{register object V126;
	V126=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V127= CMPcar((V126));
	if((V127!= ((object)VV[12])))goto T253;
	base[1]= CMPcddr((V126));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk91)();
	return;
	goto T253;
T253:;
	if((V127!= ((object)VV[27])))goto T255;
	base[1]= CMPcddr((V126));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk91)();
	return;
	goto T255;
T255:;
	if((V127!= ((object)VV[39])))goto T257;
	base[1]= CMPcaadr((V126));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	V128= vs_base[0];
	base[1]= CMPcdadr((V126));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	V129= vs_base[0];
	base[1]= append(V128,V129);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T257;
T257:;
	if((V127!= ((object)VV[35])))goto T262;
	base[1]= CMPcaadr((V126));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	V130= vs_base[0];
	base[1]= CMPcdadr((V126));
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk88)();
	vs_top=sup;
	V131= vs_base[0];
	base[1]= append(V130,V131);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T262;
T262:;
	if((V127!= ((object)VV[0])))goto T267;
	V126= CMPcdr((V126));
	goto TTL;
	goto T267;
T267:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[45]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}}
	}
}
/*	function definition for MAKE-LINK-NAMES	*/

static void L46()
{register object *base=vs_base;
	register object *sup=base+VM46; VC46
	vs_check;
	{object V132;
	V132=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{register object V133;
	register object V134;
	register object V135;
	V133= Cnil;
	V134= Cnil;
	V135= Cnil;
	if(((V132))!=Cnil){
	goto T275;}
	base[1]= make_cons(Cnil,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T275;
T275:;
	if(!(((long)length((V132)))==((long)1))){
	goto T273;}
	V136= make_cons(CMPcar((V132)),((object)VV[46]));
	base[1]= make_cons(/* INLINE-ARGS */V136,Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T273;
T273:;
	V135= small_fixnum(1);
	V133= (V132);
	V134= Cnil;
	goto T272;
T272:;
	if(((V133))!=Cnil){
	goto T286;}
	base[1]= (V134);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T286;
T286:;
	{object V137;
	{register object x= CMPcar((V133)),V138= (V134);
	while(V138!=Cnil)
	if(equal(x,V138->c.c_car->c.c_car) &&V138->c.c_car != Cnil){
	V137= (V138->c.c_car);
	goto T288;
	}else V138=V138->c.c_cdr;
	V137= Cnil;}
	goto T288;
T288:;
	if(((V137))==Cnil){
	goto T290;}
	goto T284;
	goto T290;
T290:;
	V139= CMPcar((V133));
	base[1]= ((object)VV[46]);
	base[2]= (V135);
	vs_top=(vs_base=base+1)+2;
	(void) (*Lnk83)();
	vs_top=sup;
	V140= vs_base[0];
	V141= make_cons(/* INLINE-ARGS */V139,V140);
	V134= make_cons(/* INLINE-ARGS */V141,(V134));
	V135= one_plus((V135));}
	goto T284;
T284:;
	V133= CMPcdr((V133));
	goto T272;}
	}
}
/*	function definition for PREP-TY-FN	*/

static void L47()
{register object *base=vs_base;
	register object *sup=base+VM47; VC47
	vs_check;
	{register object V142;
	V142=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V143= CMPcar((V142));
	if((V143!= ((object)VV[0])))goto T301;
	base[1]= CMPcdr((V142));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T301;
T301:;
	if((V143!= ((object)VV[47])))goto T302;
	base[1]= (V142);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T302;
T302:;
	if((V143!= ((object)VV[43])))goto T303;
	{object V144= CMPcdr((V142));
	if(!(type_of(V144)==t_fixnum||
type_of(V144)==t_bignum||
type_of(V144)==t_ratio||
type_of(V144)==t_shortfloat||
type_of(V144)==t_longfloat||
type_of(V144)==t_complex)){
	goto T305;}}
	{register object x= CMPcdr((V142)),V146= (((object)VV[41])->s.s_dbind);
	while(V146!=Cnil)
	if(equal(x,V146->c.c_car->c.c_car) &&V146->c.c_car != Cnil){
	V145= (V146->c.c_car);
	goto T307;
	}else V146=V146->c.c_cdr;
	V145= Cnil;}
	goto T307;
T307:;
	base[1]= make_cons(((object)VV[47]),CMPcdr(V145));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T305;
T305:;
	V142= CMPcdr((V142));
	goto TTL;
	goto T303;
T303:;
	V147= CMPcar((V142));
	{object V149;
	object V150= CMPcdr((V142));
	if(V150==Cnil){
	V148= Cnil;
	goto T310;}
	base[1]=V149=MMcons(Cnil,Cnil);
	goto T311;
T311:;
	base[2]= (V150->c.c_car);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk85)();
	vs_top=sup;
	(V149->c.c_car)= vs_base[0];
	if((V150=MMcdr(V150))==Cnil){
	V148= base[1];
	goto T310;}
	V149=MMcdr(V149)=MMcons(Cnil,Cnil);
	goto T311;}
	goto T310;
T310:;
	base[1]= make_cons(/* INLINE-ARGS */V147,V148);
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for PREP-TY-FOR-PRINT	*/

static void L48()
{register object *base=vs_base;
	register object *sup=base+VM48; VC48
	vs_check;
	bds_check;
	{object V151;
	V151=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V152;
	base[1]= (V151);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk90)();
	vs_top=sup;
	V152= vs_base[0];
	base[3]= (V152);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk91)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk89)();
	vs_top=sup;
	base[1]= vs_base[0];
	bds_bind(((object)VV[41]),base[1]);
	base[2]= (V152);
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk85)();
	bds_unwind1;
	return;}
	}
}
/*	function definition for PREP-TERM-TY	*/

static void L49()
{register object *base=vs_base;
	register object *sup=base+VM49; VC49
	vs_check;
	{object V153;
	V153=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V153)))==(((object)VV[0])))){
	goto T321;}
	base[1]= CMPcddr(CMPcdr((V153)));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T321;
T321:;
	base[1]= CMPcddr((V153));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PRINT-MK_COMB-ERROR	*/

static void L50()
{register object *base=vs_base;
	register object *sup=base+VM50; VC50
	vs_check;
	{object V154;
	object V155;
	V154=(base[0]);
	V155=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[2]= ((object)VV[48]);
	base[3]= small_fixnum(27);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	base[2]= small_fixnum(2);
	base[3]= small_fixnum(4);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk93)();
	vs_top=sup;
	base[3]= (V154);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk96)();
	vs_top=sup;
	base[2]= ((object)VV[49]);
	base[3]= small_fixnum(27);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	base[2]= small_fixnum(2);
	base[3]= small_fixnum(4);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk93)();
	vs_top=sup;
	base[4]= (V154);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk97)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk98)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk96)();
	vs_top=sup;
	base[2]= ((object)VV[50]);
	base[3]= small_fixnum(27);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	base[2]= small_fixnum(2);
	base[3]= small_fixnum(4);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk93)();
	vs_top=sup;
	base[3]= (V155);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk94)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk95)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk96)();
	vs_top=sup;
	base[2]= ((object)VV[51]);
	base[3]= small_fixnum(27);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk92)();
	vs_top=sup;
	base[2]= small_fixnum(2);
	base[3]= small_fixnum(4);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk93)();
	vs_top=sup;
	base[4]= (V155);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk97)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk98)();
	vs_top=sup;
	base[2]= vs_base[0];
	vs_top=(vs_base=base+2)+1;
	(void) (*Lnk99)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk96)();
	vs_top=sup;
	vs_base=vs_top;
	(void) (*Lnk96)();
	return;
	}
}
/*	function definition for Q-MK_COMB	*/

static void L51()
{register object *base=vs_base;
	register object *sup=base+VM51; VC51
	vs_check;
	{object V156;
	object V157;
	V156=(base[0]);
	V157=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V158;
	vs_base=vs_top;
	(void) (*Lnk78)();
	vs_top=sup;
	V158= vs_base[0];
	base[3]= (V156);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V157);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	V159= vs_base[0];
	V160= list(2,V159,(V158));
	base[3]= make_cons(((object)VV[36]),/* INLINE-ARGS */V160);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T367;}
	base[2]= listA(3,((object)VV[39]),make_cons((V156),(V157)),(V158));
	vs_top=(vs_base=base+2)+1;
	return;
	goto T367;
T367:;
	if(((((object)VV[52])->s.s_dbind))==Cnil){
	goto T374;}
	base[2]= (V156);
	base[3]= (V157);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk100)();
	vs_top=sup;
	goto T374;
T374:;
	{object V161;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[53]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	base[2]= (V161);
	vs_top=(vs_base=base+2)+1;
	return;}}
	}
}
/*	function definition for ML-MK_COMB	*/

static void L52()
{register object *VOL base=vs_base;
	register object *VOL sup=base+VM52; VC52
	vs_check;
	{VOL object V162;
	VOL object V163;
	V162=(base[0]);
	V163=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{VOL object V164;
	VOL object V165;
	VOL object V166;
	{VOL object V167;
	frs_push(FRS_CATCH,((object)VV[2]));
	if(nlj_active)
	{nlj_active=FALSE;frs_pop();
	vs_top=sup;
	V167= vs_base[0];
	goto T382;}
	else{
	base[5]= CMPcddr((V162));
	vs_top=(vs_base=base+5)+1;
	(void) (*Lnk101)();
	vs_top=sup;
	V168= vs_base[0];
	V169= make_cons(V168,Cnil);
	frs_pop();
	V167= V169;}
	goto T382;
T382:;
	if(!(type_of((V167))!=t_cons)){
	goto T387;}
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[5]= ((object)VV[53]);
	vs_top=(vs_base=base+5)+1;
	unwind(fr,((object)VV[2]));}
	goto T387;
T387:;
	V164= CMPcar((V167));}
	V165= CMPcar((V164));
	V166= CMPcdr((V164));
	if(!(((V165))==(((object)VV[36])))){
	goto T393;}
	if(!(equal(CMPcar((V166)),CMPcddr((V163))))){
	goto T393;}
	base[5]= listA(3,((object)VV[39]),make_cons((V162),(V163)),CMPcadr((V166)));
	vs_top=(vs_base=base+5)+1;
	return;
	goto T393;
T393:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[5]= ((object)VV[53]);
	vs_top=(vs_base=base+5)+1;
	unwind(fr,((object)VV[2]));}}
	}
}
/*	function definition for ML-IS_COMB	*/

static void L53()
{register object *base=vs_base;
	register object *sup=base+VM53; VC53
	vs_check;
	{object V171;
	V171=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V171)))==(((object)VV[39]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_COMB	*/

static void L54()
{register object *base=vs_base;
	register object *sup=base+VM54; VC54
	vs_check;
	{object V172;
	V172=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!(eql(CMPcar((V172)),((object)VV[39])))){
	goto T400;}
	V173= CMPcdr((V172));
	goto T398;
	goto T400;
T400:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[54]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	goto T398;
T398:;
	base[1]= CMPcar(V173);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for Q-MK_TYPED	*/

static void L55()
{register object *base=vs_base;
	register object *sup=base+VM55; VC55
	vs_check;
	{object V174;
	object V175;
	V174=(base[0]);
	V175=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[3]= (V174);
	vs_top=(vs_base=base+3)+1;
	(void) (*Lnk68)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[4]= (V175);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk104)();
	vs_top=sup;
	base[3]= vs_base[0];
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk69)();
	vs_top=sup;
	if((vs_base[0])==Cnil){
	goto T404;}
	base[2]= (V174);
	vs_top=(vs_base=base+2)+1;
	return;
	goto T404;
T404:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[55]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_PAIR	*/

static void L56()
{register object *base=vs_base;
	register object *sup=base+VM56; VC56
	vs_check;
	{object V176;
	object V177;
	V176=(base[0]);
	V177=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[4]= ((object)VV[56]);
	vs_top=(vs_base=base+4)+1;
	(void) (*Lnk105)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V176);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk106)();
	vs_top=sup;
	base[2]= vs_base[0];
	base[3]= (V177);
	vs_top=(vs_base=base+2)+2;
	(void) (*Lnk106)();
	return;
	}
}
/*	function definition for Q-MK_COND	*/

static void L57()
{register object *base=vs_base;
	register object *sup=base+VM57; VC57
	vs_check;
	{object V178;
	object V179;
	object V180;
	V178=(base[0]);
	V179=(base[1]);
	V180=(base[2]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[6]= ((object)VV[57]);
	vs_top=(vs_base=base+6)+1;
	(void) (*Lnk105)();
	vs_top=sup;
	base[5]= vs_base[0];
	base[6]= (V178);
	vs_top=(vs_base=base+5)+2;
	(void) (*Lnk106)();
	vs_top=sup;
	base[4]= vs_base[0];
	base[5]= (V179);
	vs_top=(vs_base=base+4)+2;
	(void) (*Lnk106)();
	vs_top=sup;
	base[3]= vs_base[0];
	base[4]= (V180);
	vs_top=(vs_base=base+3)+2;
	(void) (*Lnk106)();
	return;
	}
}
/*	function definition for Q-MK_VARTYPE	*/

static void L58()
{register object *base=vs_base;
	register object *sup=base+VM58; VC58
	vs_check;
	{register object V181;
	V181=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V182;
	{object V183 =((V181))->s.s_plist;
	 object ind= ((object)VV[58]);
	while(V183!=Cnil){
	if(V183->c.c_car==ind){
	V182= (V183->c.c_cdr->c.c_car);
	goto T423;
	}else V183=V183->c.c_cdr->c.c_cdr;}
	V182= Cnil;}
	goto T423;
T423:;
	if(((V182))==Cnil){
	goto T425;}
	base[1]= (V182);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T425;
T425:;
	base[1]= (V181);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk107)();
	vs_top=sup;
	V184= vs_base[0];
	if(!(number_compare(CMPcar(V184),small_fixnum(42))==0)){
	goto T428;}
	V185= make_cons(((object)VV[47]),(V181));
	base[1]= sputprop((V181),((object)VV[58]),/* INLINE-ARGS */V185);
	vs_top=(vs_base=base+1)+1;
	return;
	goto T428;
T428:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[58]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}}
	}
}
/*	function definition for ML-IS_VARTYPE	*/

static void L59()
{register object *base=vs_base;
	register object *sup=base+VM59; VC59
	vs_check;
	{object V186;
	V186=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= ((CMPcar((V186)))==(((object)VV[47]))?Ct:Cnil);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_VARTYPE	*/

static void L60()
{register object *base=vs_base;
	register object *sup=base+VM60; VC60
	vs_check;
	{object V187;
	V187=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V187)))==(((object)VV[47])))){
	goto T434;}
	base[1]= CMPcdr((V187));
	vs_top=(vs_base=base+1)+1;
	return;
	goto T434;
T434:;
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[59]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	}
}
/*	function definition for Q-MK_TYPE	*/

static void L61()
{register object *base=vs_base;
	register object *sup=base+VM61; VC61
	vs_check;
	{object V188;
	object V189;
	V188=(base[0]);
	V189=(base[1]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V191 =((V188))->s.s_plist;
	 object ind= ((object)VV[60]);
	while(V191!=Cnil){
	if(V191->c.c_car==ind){
	V190= (V191->c.c_cdr->c.c_car);
	goto T440;
	}else V191=V191->c.c_cdr->c.c_cdr;}
	V190= Cnil;}
	goto T440;
T440:;
	V192 = CMPmake_fixnum((long)length((V189)));
	if(equal(V190,V192)){
	goto T438;}
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[2]= ((object)VV[61]);
	vs_top=(vs_base=base+2)+1;
	unwind(fr,((object)VV[2]));}
	goto T438;
T438:;
	if(((V189))!=Cnil){
	goto T443;}
	{object V193 =((V188))->s.s_plist;
	 object ind= ((object)VV[62]);
	while(V193!=Cnil){
	if(V193->c.c_car==ind){
	base[2]= (V193->c.c_cdr->c.c_car);
	vs_top=(vs_base=base+2)+1;
	return;
	}else V193=V193->c.c_cdr->c.c_cdr;}
	base[2]= Cnil;
	vs_top=(vs_base=base+2)+1;
	return;}
	goto T443;
T443:;
	base[2]= make_cons((V188),(V189));
	vs_top=(vs_base=base+2)+1;
	return;
	}
}
/*	function definition for ML-DEST_TYPE	*/

static void L62()
{register object *base=vs_base;
	register object *sup=base+VM62; VC62
	vs_check;
	{object V194;
	V194=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	if(!((CMPcar((V194)))==(((object)VV[47])))){
	goto T446;}
	{frame_ptr fr;
	fr=frs_sch_catch(((object)VV[2]));
	if(fr==NULL) FEerror("The tag ~s is undefined.",1,((object)VV[2]));
	base[1]= ((object)VV[63]);
	vs_top=(vs_base=base+1)+1;
	unwind(fr,((object)VV[2]));}
	goto T446;
T446:;
	base[1]= (V194);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-TYPE_OF	*/

static void L63()
{register object *base=vs_base;
	register object *sup=base+VM63; VC63
	vs_check;
	{object V195;
	V195=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= CMPcddr((V195));
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for Q-TYPEOF	*/

static void L64()
{register object *base=vs_base;
	register object *sup=base+VM64; VC64
	vs_check;
	{object V196;
	V196=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V196);
	vs_top=(vs_base=base+1)+1;
	(void) (*Lnk70)();
	vs_top=sup;
	V197= vs_base[0];
	base[1]= CMPcddr(V197);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for STRIP-ANTIQUOT	*/

static void L65()
{register object *base=vs_base;
	register object *sup=base+VM65; VC65
	vs_check;
	{register object V198;
	V198=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	goto T453;
T453:;
	if(!((CMPcar((V198)))==(((object)VV[0])))){
	goto T456;}
	V198= CMPcdr((V198));
	goto T453;
	goto T456;
T456:;
	goto T451;
	goto T451;
	goto T451;
T451:;
	base[1]= (V198);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-THM_COUNT	*/

static void L66()
{register object *base=vs_base;
	register object *sup=base+VM66; VC66
	vs_check;
	vs_top=sup;
	goto TTL;
TTL:;
	base[0]= (((object)VV[64])->s.s_dbind);
	vs_top=(vs_base=base+0)+1;
	return;
}
/*	function definition for ML-MK_THM	*/

static void L67()
{register object *base=vs_base;
	register object *sup=base+VM67; VC67
	vs_check;
	{object V199;
	V199=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	(((object)VV[64])->s.s_dbind)= number_plus((((object)VV[64])->s.s_dbind),small_fixnum(1));
	base[1]= (V199);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for ML-DEST_THM	*/

static void L68()
{register object *base=vs_base;
	register object *sup=base+VM68; VC68
	vs_check;
	{object V200;
	V200=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	base[1]= (V200);
	vs_top=(vs_base=base+1)+1;
	return;
	}
}
/*	function definition for PREDICATEP	*/

static void L69()
{register object *base=vs_base;
	register object *sup=base+VM69; VC69
	vs_check;
	{object V201;
	V201=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V202 =((V201))->s.s_plist;
	 object ind= ((object)VV[65]);
	while(V202!=Cnil){
	if(V202->c.c_car==ind){
	base[1]= (V202->c.c_cdr->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	}else V202=V202->c.c_cdr->c.c_cdr;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
/*	function definition for CONSTP	*/

static void L70()
{register object *base=vs_base;
	register object *sup=base+VM70; VC70
	vs_check;
	{object V203;
	V203=(base[0]);
	vs_top=sup;
	goto TTL;
TTL:;
	{object V204 =((V203))->s.s_plist;
	 object ind= ((object)VV[27]);
	while(V204!=Cnil){
	if(V204->c.c_car==ind){
	base[1]= (V204->c.c_cdr->c.c_car);
	vs_top=(vs_base=base+1)+1;
	return;
	}else V204=V204->c.c_cdr->c.c_cdr;}
	base[1]= Cnil;
	vs_top=(vs_base=base+1)+1;
	return;}
	}
}
static void LnkT107(){ call_or_link(((object)VV[107]),(void **)(void *)&Lnk107);} /* EXPLODEN */
static void LnkT106(){ call_or_link(((object)VV[106]),(void **)(void *)&Lnk106);} /* Q-MK_COMB */
static void LnkT105(){ call_or_link(((object)VV[105]),(void **)(void *)&Lnk105);} /* Q-MK_CONST */
static void LnkT104(){ call_or_link(((object)VV[104]),(void **)(void *)&Lnk104);} /* Q-MK_ANTIQUOT */
static object  LnkTLI103(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(((object)VV[103]),(void **)(void *)&LnkLI103,1,first,ap);va_end(ap);return V1;} /* SECOND */
static object  LnkTLI102(object first,...){object V1;va_list ap;va_start(ap,first);V1=call_proc_new(((object)VV[102]),(void **)(void *)&LnkLI102,1,first,ap);va_end(ap);return V1;} /* FIRST */
static void LnkT101(){ call_or_link(((object)VV[101]),(void **)(void *)&Lnk101);} /* ML-DEST_TYPE */
static void LnkT100(){ call_or_link(((object)VV[100]),(void **)(void *)&Lnk100);} /* PRINT-MK_COMB-ERROR */
static void LnkT99(){ call_or_link(((object)VV[99]),(void **)(void *)&Lnk99);} /* ML-PRINT_TYPE */
static void LnkT98(){ call_or_link(((object)VV[98]),(void **)(void *)&Lnk98);} /* PREP-TY-FOR-PRINT */
static void LnkT97(){ call_or_link(((object)VV[97]),(void **)(void *)&Lnk97);} /* PREP-TERM-TY */
static void LnkT96(){ call_or_link(((object)VV[96]),(void **)(void *)&Lnk96);} /* PNEWLINE */
static void LnkT95(){ call_or_link(((object)VV[95]),(void **)(void *)&Lnk95);} /* ML-PRINT_TERM */
static void LnkT94(){ call_or_link(((object)VV[94]),(void **)(void *)&Lnk94);} /* PREP-TERM-FOR-PRINT */
static void LnkT93(){ call_or_link(((object)VV[93]),(void **)(void *)&Lnk93);} /* PBREAK */
static void LnkT92(){ call_or_link(((object)VV[92]),(void **)(void *)&Lnk92);} /* PSTRINGLEN */
static void LnkT91(){ call_or_link(((object)VV[91]),(void **)(void *)&Lnk91);} /* GET-TYPE-LINKS */
static void LnkT90(){ call_or_link(((object)VV[90]),(void **)(void *)&Lnk90);} /* ADD-TYPE-LINKS */
static void LnkT89(){ call_or_link(((object)VV[89]),(void **)(void *)&Lnk89);} /* MAKE-LINK-NAMES */
static void LnkT88(){ call_or_link(((object)VV[88]),(void **)(void *)&Lnk88);} /* GET-TERM-LINKS */
static void LnkT87(){ call_or_link(((object)VV[87]),(void **)(void *)&Lnk87);} /* ADD-TERM-LINKS */
static void LnkT86(){ call_or_link(((object)VV[86]),(void **)(void *)&Lnk86);} /* PREP-TERM-FN */
static void LnkT85(){ call_or_link(((object)VV[85]),(void **)(void *)&Lnk85);} /* PREP-TY-FN */
static void LnkT84(){ call_or_link(((object)VV[84]),(void **)(void *)&Lnk84);} /* ML-MK_ABS */
static void LnkT83(){ call_or_link(((object)VV[83]),(void **)(void *)&Lnk83);} /* CONCAT */
static void LnkT81(){ call_or_link(((object)VV[81]),(void **)(void *)&Lnk81);} /* MK_REALVAR */
static void LnkT80(){ call_or_link(((object)VV[80]),(void **)(void *)&Lnk80);} /* UNIQUESYM */
static void LnkT79(){ call_or_link(((object)VV[79]),(void **)(void *)&Lnk79);} /* CONSPROP */
static void LnkT78(){ call_or_link(((object)VV[78]),(void **)(void *)&Lnk78);} /* GENLINK */
static void LnkT77(){ call_or_link(((object)VV[77]),(void **)(void *)&Lnk77);} /* NEW-VAR-TYPE */
static void LnkT76(){ call_or_link(((object)VV[76]),(void **)(void *)&Lnk76);} /* ASSOC1 */
static void LnkT75(){ call_or_link(((object)VV[75]),(void **)(void *)&Lnk75);} /* Q-MK_PRED */
static void LnkT74(){ call_or_link(((object)VV[74]),(void **)(void *)&Lnk74);} /* Q-MK_PAIR */
static void LnkT73(){ call_or_link(((object)VV[73]),(void **)(void *)&Lnk73);} /* ML-MK_EXISTS */
static void LnkT72(){ call_or_link(((object)VV[72]),(void **)(void *)&Lnk72);} /* ML-MK_FORALL */
static void LnkT71(){ call_or_link(((object)VV[71]),(void **)(void *)&Lnk71);} /* Q-FREE-VAR */
static void LnkT70(){ call_or_link(((object)VV[70]),(void **)(void *)&Lnk70);} /* STRIP-ANTIQUOT */
static void LnkT69(){ call_or_link(((object)VV[69]),(void **)(void *)&Lnk69);} /* UNIFY */
static void LnkT68(){ call_or_link(((object)VV[68]),(void **)(void *)&Lnk68);} /* Q-TYPEOF */
static void LnkT67(){ call_or_link(((object)VV[67]),(void **)(void *)&Lnk67);} /* OMUTANT */
static void LnkT66(){ call_or_link(((object)VV[66]),(void **)(void *)&Lnk66);} /* PREDICATEP */
