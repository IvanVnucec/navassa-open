
void FUN_01012826(undefined4 param_1,undefined4 param_2)

{
  char in_CY;
  undefined8 uVar1;
  
  uVar1 = CONCAT44(param_2,param_1);
  do {
    uVar1 = FUN_01012840((undefined4 *)uVar1,(int)((ulonglong)uVar1 >> 0x20),*(undefined4 *)uVar1,0)
    ;
  } while (in_CY == '\0');
  return;
}

