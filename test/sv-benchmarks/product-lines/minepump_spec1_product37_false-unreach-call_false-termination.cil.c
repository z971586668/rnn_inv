extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern int __VERIFIER_nondet_int(void);
extern int printf (__const char *__restrict __format, ...);
/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct JoinPoint {
   void **(*fp)(struct JoinPoint * ) ;
   void **args ;
   int argsCount ;
   char const   **argsType ;
   void *(*arg)(int  , struct JoinPoint * ) ;
   char const   *(*argType)(int  , struct JoinPoint * ) ;
   void **retValue ;
   char const   *retType ;
   char const   *funcName ;
   char const   *targetName ;
   char const   *fileName ;
   char const   *kind ;
   void *excep_return ;
};
struct __UTAC__CFLOW_FUNC {
   int (*func)(int  , int  ) ;
   int val ;
   struct __UTAC__CFLOW_FUNC *next ;
};
struct __UTAC__EXCEPTION {
   void *jumpbuf ;
   unsigned long long prtValue ;
   int pops ;
   struct __UTAC__CFLOW_FUNC *cflowfuncs ;
};
typedef unsigned int size_t;
struct __ACC__ERR {
   void *v ;
   struct __ACC__ERR *next ;
};
#pragma merger(0,"libacc.i","")
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion ,
                                                                      char const   *__file ,
                                                                      unsigned int __line ,
                                                                      char const   *__function ) ;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
void __utac__exception__cf_handler_set(void *exception , int (*cflow_func)(int  ,
                                                                           int  ) ,
                                       int val ) 
{ struct __UTAC__EXCEPTION *excep ;
  struct __UTAC__CFLOW_FUNC *cf ;
  void *tmp ;
  unsigned long __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  int (**mem_15)(int  , int  ) ;
  int *mem_16 ;
  struct __UTAC__CFLOW_FUNC **mem_17 ;
  struct __UTAC__CFLOW_FUNC **mem_18 ;
  struct __UTAC__CFLOW_FUNC **mem_19 ;

  {
  {
  excep = (struct __UTAC__EXCEPTION *)exception;
  tmp = malloc(24UL);
  cf = (struct __UTAC__CFLOW_FUNC *)tmp;
  mem_15 = (int (**)(int  , int  ))cf;
  *mem_15 = cflow_func;
  __cil_tmp7 = (unsigned long )cf;
  __cil_tmp8 = __cil_tmp7 + 8;
  mem_16 = (int *)__cil_tmp8;
  *mem_16 = val;
  __cil_tmp9 = (unsigned long )cf;
  __cil_tmp10 = __cil_tmp9 + 16;
  __cil_tmp11 = (unsigned long )excep;
  __cil_tmp12 = __cil_tmp11 + 24;
  mem_17 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp10;
  mem_18 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp12;
  *mem_17 = *mem_18;
  __cil_tmp13 = (unsigned long )excep;
  __cil_tmp14 = __cil_tmp13 + 24;
  mem_19 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp14;
  *mem_19 = cf;
  }
  return;
}
}
void __utac__exception__cf_handler_free(void *exception ) 
{ struct __UTAC__EXCEPTION *excep ;
  struct __UTAC__CFLOW_FUNC *cf ;
  struct __UTAC__CFLOW_FUNC *tmp ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct __UTAC__CFLOW_FUNC *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  void *__cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  struct __UTAC__CFLOW_FUNC **mem_15 ;
  struct __UTAC__CFLOW_FUNC **mem_16 ;
  struct __UTAC__CFLOW_FUNC **mem_17 ;

  {
  excep = (struct __UTAC__EXCEPTION *)exception;
  __cil_tmp5 = (unsigned long )excep;
  __cil_tmp6 = __cil_tmp5 + 24;
  mem_15 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp6;
  cf = *mem_15;
  {
  while (1) {
    while_0_continue: /* CIL Label */ ;
    {
    __cil_tmp7 = (struct __UTAC__CFLOW_FUNC *)0;
    __cil_tmp8 = (unsigned long )__cil_tmp7;
    __cil_tmp9 = (unsigned long )cf;
    if (__cil_tmp9 != __cil_tmp8) {

    } else {
      goto while_0_break;
    }
    }
    {
    tmp = cf;
    __cil_tmp10 = (unsigned long )cf;
    __cil_tmp11 = __cil_tmp10 + 16;
    mem_16 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp11;
    cf = *mem_16;
    __cil_tmp12 = (void *)tmp;
    free(__cil_tmp12);
    }
  }
  while_0_break: /* CIL Label */ ;
  }
  __cil_tmp13 = (unsigned long )excep;
  __cil_tmp14 = __cil_tmp13 + 24;
  mem_17 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp14;
  *mem_17 = (struct __UTAC__CFLOW_FUNC *)0;
  return;
}
}
void __utac__exception__cf_handler_reset(void *exception ) 
{ struct __UTAC__EXCEPTION *excep ;
  struct __UTAC__CFLOW_FUNC *cf ;
  unsigned long __cil_tmp5 ;
  unsigned long __cil_tmp6 ;
  struct __UTAC__CFLOW_FUNC *__cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  int (*__cil_tmp10)(int  , int  ) ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  int __cil_tmp13 ;
  unsigned long __cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  struct __UTAC__CFLOW_FUNC **mem_16 ;
  int (**mem_17)(int  , int  ) ;
  int *mem_18 ;
  struct __UTAC__CFLOW_FUNC **mem_19 ;

  {
  excep = (struct __UTAC__EXCEPTION *)exception;
  __cil_tmp5 = (unsigned long )excep;
  __cil_tmp6 = __cil_tmp5 + 24;
  mem_16 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp6;
  cf = *mem_16;
  {
  while (1) {
    while_1_continue: /* CIL Label */ ;
    {
    __cil_tmp7 = (struct __UTAC__CFLOW_FUNC *)0;
    __cil_tmp8 = (unsigned long )__cil_tmp7;
    __cil_tmp9 = (unsigned long )cf;
    if (__cil_tmp9 != __cil_tmp8) {

    } else {
      goto while_1_break;
    }
    }
    {
    mem_17 = (int (**)(int  , int  ))cf;
    __cil_tmp10 = *mem_17;
    __cil_tmp11 = (unsigned long )cf;
    __cil_tmp12 = __cil_tmp11 + 8;
    mem_18 = (int *)__cil_tmp12;
    __cil_tmp13 = *mem_18;
    (*__cil_tmp10)(4, __cil_tmp13);
    __cil_tmp14 = (unsigned long )cf;
    __cil_tmp15 = __cil_tmp14 + 16;
    mem_19 = (struct __UTAC__CFLOW_FUNC **)__cil_tmp15;
    cf = *mem_19;
    }
  }
  while_1_break: /* CIL Label */ ;
  }
  {
  __utac__exception__cf_handler_free(exception);
  }
  return;
}
}
void *__utac__error_stack_mgt(void *env , int mode , int count ) ;
static struct __ACC__ERR *head  =    (struct __ACC__ERR *)0;
void *__utac__error_stack_mgt(void *env , int mode , int count ) 
{ void *retValue_acc ;
  struct __ACC__ERR *new ;
  void *tmp ;
  struct __ACC__ERR *temp ;
  struct __ACC__ERR *next ;
  void *excep ;
  unsigned long __cil_tmp10 ;
  unsigned long __cil_tmp11 ;
  unsigned long __cil_tmp12 ;
  unsigned long __cil_tmp13 ;
  void *__cil_tmp14 ;
  unsigned long __cil_tmp15 ;
  unsigned long __cil_tmp16 ;
  void *__cil_tmp17 ;
  void **mem_18 ;
  struct __ACC__ERR **mem_19 ;
  struct __ACC__ERR **mem_20 ;
  void **mem_21 ;
  struct __ACC__ERR **mem_22 ;
  void **mem_23 ;
  void **mem_24 ;

  {
  if (count == 0) {
    return (retValue_acc);
  } else {

  }
  if (mode == 0) {
    {
    tmp = malloc(16UL);
    new = (struct __ACC__ERR *)tmp;
    mem_18 = (void **)new;
    *mem_18 = env;
    __cil_tmp10 = (unsigned long )new;
    __cil_tmp11 = __cil_tmp10 + 8;
    mem_19 = (struct __ACC__ERR **)__cil_tmp11;
    *mem_19 = head;
    head = new;
    retValue_acc = (void *)new;
    }
    return (retValue_acc);
  } else {

  }
  if (mode == 1) {
    temp = head;
    {
    while (1) {
      while_2_continue: /* CIL Label */ ;
      if (count > 1) {

      } else {
        goto while_2_break;
      }
      {
      __cil_tmp12 = (unsigned long )temp;
      __cil_tmp13 = __cil_tmp12 + 8;
      mem_20 = (struct __ACC__ERR **)__cil_tmp13;
      next = *mem_20;
      mem_21 = (void **)temp;
      excep = *mem_21;
      __cil_tmp14 = (void *)temp;
      free(__cil_tmp14);
      __utac__exception__cf_handler_reset(excep);
      temp = next;
      count = count - 1;
      }
    }
    while_2_break: /* CIL Label */ ;
    }
    {
    __cil_tmp15 = (unsigned long )temp;
    __cil_tmp16 = __cil_tmp15 + 8;
    mem_22 = (struct __ACC__ERR **)__cil_tmp16;
    head = *mem_22;
    mem_23 = (void **)temp;
    excep = *mem_23;
    __cil_tmp17 = (void *)temp;
    free(__cil_tmp17);
    __utac__exception__cf_handler_reset(excep);
    retValue_acc = excep;
    }
    return (retValue_acc);
  } else {

  }
  if (mode == 2) {
    if (head) {
      mem_24 = (void **)head;
      retValue_acc = *mem_24;
      return (retValue_acc);
    } else {
      retValue_acc = (void *)0;
      return (retValue_acc);
    }
  } else {

  }
  return (retValue_acc);
}
}
void *__utac__get_this_arg(int i , struct JoinPoint *this ) 
{ void *retValue_acc ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  void **__cil_tmp10 ;
  void **__cil_tmp11 ;
  int *mem_12 ;
  void ***mem_13 ;

  {
  if (i > 0) {
    {
    __cil_tmp4 = (unsigned long )this;
    __cil_tmp5 = __cil_tmp4 + 16;
    mem_12 = (int *)__cil_tmp5;
    __cil_tmp6 = *mem_12;
    if (i <= __cil_tmp6) {

    } else {
      {
      __assert_fail("i > 0 && i <= this->argsCount", "libacc.c",
                    123U, "__utac__get_this_arg");
      }
    }
    }
  } else {
    {
    __assert_fail("i > 0 && i <= this->argsCount", "libacc.c",
                  123U, "__utac__get_this_arg");
    }
  }
  __cil_tmp7 = i - 1;
  __cil_tmp8 = (unsigned long )this;
  __cil_tmp9 = __cil_tmp8 + 8;
  mem_13 = (void ***)__cil_tmp9;
  __cil_tmp10 = *mem_13;
  __cil_tmp11 = __cil_tmp10 + __cil_tmp7;
  retValue_acc = *__cil_tmp11;
  return (retValue_acc);
  return (retValue_acc);
}
}
char const   *__utac__get_this_argtype(int i , struct JoinPoint *this ) 
{ char const   *retValue_acc ;
  unsigned long __cil_tmp4 ;
  unsigned long __cil_tmp5 ;
  int __cil_tmp6 ;
  int __cil_tmp7 ;
  unsigned long __cil_tmp8 ;
  unsigned long __cil_tmp9 ;
  char const   **__cil_tmp10 ;
  char const   **__cil_tmp11 ;
  int *mem_12 ;
  char const   ***mem_13 ;

  {
  if (i > 0) {
    {
    __cil_tmp4 = (unsigned long )this;
    __cil_tmp5 = __cil_tmp4 + 16;
    mem_12 = (int *)__cil_tmp5;
    __cil_tmp6 = *mem_12;
    if (i <= __cil_tmp6) {

    } else {
      {
      __assert_fail("i > 0 && i <= this->argsCount", "libacc.c",
                    131U, "__utac__get_this_argtype");
      }
    }
    }
  } else {
    {
    __assert_fail("i > 0 && i <= this->argsCount", "libacc.c",
                  131U, "__utac__get_this_argtype");
    }
  }
  __cil_tmp7 = i - 1;
  __cil_tmp8 = (unsigned long )this;
  __cil_tmp9 = __cil_tmp8 + 24;
  mem_13 = (char const   ***)__cil_tmp9;
  __cil_tmp10 = *mem_13;
  __cil_tmp11 = __cil_tmp10 + __cil_tmp7;
  retValue_acc = *__cil_tmp11;
  return (retValue_acc);
  return (retValue_acc);
}
}
#pragma merger(0,"Test.i","")
int cleanupTimeShifts  =    4;
void timeShift(void) ;
void cleanup(void) 
{ int i ;
  int __cil_tmp2 ;

  {
  {
  timeShift();
  i = 0;
  }
  {
  while (1) {
    while_3_continue: /* CIL Label */ ;
    {
    __cil_tmp2 = cleanupTimeShifts - 1;
    if (i < __cil_tmp2) {

    } else {
      goto while_3_break;
    }
    }
    {
    timeShift();
    i = i + 1;
    }
  }
  while_3_break: /* CIL Label */ ;
  }
  return;
}
}
void printPump(void) ;
void waterRise(void) ;
void changeMethaneLevel(void) ;
void Specification2(void) 
{ 

  {
  {
  timeShift();
  printPump();
  timeShift();
  printPump();
  timeShift();
  printPump();
  waterRise();
  printPump();
  timeShift();
  printPump();
  changeMethaneLevel();
  printPump();
  timeShift();
  printPump();
  cleanup();
  }
  return;
}
}
void setup(void) 
{ 

  {
  return;
}
}
void test(void) ;
void runTest(void) 
{ 

  {
  {
  test();
  }
  return;
}
}
void select_helpers(void) ;
void select_features(void) ;
int valid_product(void) ;
int main(void) 
{ int retValue_acc ;
  int tmp ;

  {
  {
  select_helpers();
  select_features();
  tmp = valid_product();
  }
  if (tmp) {
    {
    setup();
    runTest();
    }
  } else {

  }
  retValue_acc = 0;
  return (retValue_acc);
  return (retValue_acc);
}
}
#pragma merger(0,"Specification1_spec.i","")
void __automaton_fail(void) ;
int isPumpRunning(void) ;
int isMethaneLevelCritical(void) ;
inline static void __utac_acc__Specification1_spec__1(void) 
{ int tmp ;
  int tmp___0 ;

  {
  {
  tmp = isMethaneLevelCritical();
  }
  if (tmp) {
    {
    tmp___0 = isPumpRunning();
    }
    if (tmp___0) {
      {
      __automaton_fail();
      }
    } else {

    }
  } else {

  }
  return;
}
}
#pragma merger(0,"wsllib_check.i","")
void __automaton_fail(void) 
{ 

  {
  ERROR: __VERIFIER_error();
  return;
}
}
#pragma merger(0,"featureselect.i","")
int select_one(void) ;
int select_one(void) 
{ int retValue_acc ;
  int choice = __VERIFIER_nondet_int();

  {
  retValue_acc = choice;
  return (retValue_acc);
  return (retValue_acc);
}
}
void select_features(void) 
{ 

  {
  return;
}
}
void select_helpers(void) 
{ 

  {
  return;
}
}
int valid_product(void) 
{ int retValue_acc ;

  {
  retValue_acc = 1;
  return (retValue_acc);
  return (retValue_acc);
}
}
#pragma merger(0,"MinePump.i","")
void lowerWaterLevel(void) ;
void printEnvironment(void) ;
int isHighWaterSensorDry(void) ;
void activatePump(void) ;
void deactivatePump(void) ;
int pumpRunning  =    0;
int systemActive  =    1;
void processEnvironment(void) ;
void timeShift(void) 
{ 

  {
  if (pumpRunning) {
    {
    lowerWaterLevel();
    }
  } else {

  }
  if (systemActive) {
    {
    processEnvironment();
    }
  } else {

  }
  {
  __utac_acc__Specification1_spec__1();
  }
  return;
}
}
void processEnvironment__wrappee__base(void) 
{ 

  {
  return;
}
}
int isHighWaterLevel(void) ;
void processEnvironment__wrappee__highWaterSensor(void) 
{ int tmp ;

  {
  if (! pumpRunning) {
    {
    tmp = isHighWaterLevel();
    }
    if (tmp) {
      {
      activatePump();
      }
    } else {
      {
      processEnvironment__wrappee__base();
      }
    }
  } else {
    {
    processEnvironment__wrappee__base();
    }
  }
  return;
}
}
int isMethaneAlarm(void) ;
void processEnvironment(void) 
{ int tmp ;

  {
  if (pumpRunning) {
    {
    tmp = isMethaneAlarm();
    }
    if (tmp) {
      {
      deactivatePump();
      }
    } else {
      {
      processEnvironment__wrappee__highWaterSensor();
      }
    }
  } else {
    {
    processEnvironment__wrappee__highWaterSensor();
    }
  }
  return;
}
}
void activatePump(void) 
{ 

  {
  pumpRunning = 1;
  return;
}
}
void deactivatePump(void) 
{ 

  {
  pumpRunning = 0;
  return;
}
}
int isMethaneAlarm(void) 
{ int retValue_acc ;

  {
  {
  retValue_acc = isMethaneLevelCritical();
  }
  return (retValue_acc);
  return (retValue_acc);
}
}
int isPumpRunning(void) 
{ int retValue_acc ;

  {
  retValue_acc = pumpRunning;
  return (retValue_acc);
  return (retValue_acc);
}
}
void printPump(void) 
{ 

  {
  {
  printf("Pump(System:");
  }
  if (systemActive) {
    {
    printf("On");
    }
  } else {
    {
    printf("Off");
    }
  }
  {
  printf(",Pump:");
  }
  if (pumpRunning) {
    {
    printf("On");
    }
  } else {
    {
    printf("Off");
    }
  }
  {
  printf(") ");
  printEnvironment();
  printf("\n");
  }
  return;
}
}
int isHighWaterLevel(void) 
{ int retValue_acc ;
  int tmp ;
  int tmp___0 ;

  {
  {
  tmp = isHighWaterSensorDry();
  }
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  retValue_acc = tmp___0;
  return (retValue_acc);
  return (retValue_acc);
}
}
#pragma merger(0,"scenario.i","")
void test(void) 
{ int splverifierCounter ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  splverifierCounter = 0;
  {
  while (1) {
    while_4_continue: /* CIL Label */ ;
    if (splverifierCounter < 4) {

    } else {
      goto while_4_break;
    }
    {
    tmp = __VERIFIER_nondet_int();
    }
    if (tmp) {
      {
      waterRise();
      }
    } else {

    }
    {
    tmp___0 = __VERIFIER_nondet_int();
    }
    if (tmp___0) {
      {
      changeMethaneLevel();
      }
    } else {

    }
    {
    tmp___2 = __VERIFIER_nondet_int();
    }
    if (tmp___2) {

    } else {
      {
      tmp___1 = __VERIFIER_nondet_int();
      }
      if (tmp___1) {

      } else {

      }
    }
    {
    timeShift();
    }
  }
  while_4_break: /* CIL Label */ ;
  }
  {
  cleanup();
  }
  return;
}
}
#pragma merger(0,"Environment.i","")
int getWaterLevel(void) ;
int waterLevel  =    1;
int methaneLevelCritical  =    0;
void lowerWaterLevel(void) 
{ 

  {
  if (waterLevel > 0) {
    waterLevel = waterLevel - 1;
  } else {

  }
  return;
}
}
void waterRise(void) 
{ 

  {
  if (waterLevel < 2) {
    waterLevel = waterLevel + 1;
  } else {

  }
  return;
}
}
void changeMethaneLevel(void) 
{ 

  {
  if (methaneLevelCritical) {
    methaneLevelCritical = 0;
  } else {
    methaneLevelCritical = 1;
  }
  return;
}
}
int isMethaneLevelCritical(void) 
{ int retValue_acc ;

  {
  retValue_acc = methaneLevelCritical;
  return (retValue_acc);
  return (retValue_acc);
}
}
void printEnvironment(void) 
{ 

  {
  {
  printf("Env(Water:%i", waterLevel);
  printf(",Meth:");
  }
  if (methaneLevelCritical) {
    {
    printf("CRIT");
    }
  } else {
    {
    printf("OK");
    }
  }
  {
  printf(")");
  }
  return;
}
}
int getWaterLevel(void) 
{ int retValue_acc ;

  {
  retValue_acc = waterLevel;
  return (retValue_acc);
  return (retValue_acc);
}
}
int isHighWaterSensorDry(void) 
{ int retValue_acc ;

  {
  if (waterLevel < 2) {
    retValue_acc = 1;
    return (retValue_acc);
  } else {
    retValue_acc = 0;
    return (retValue_acc);
  }
  return (retValue_acc);
}
}
