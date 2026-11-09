
undefined4
FUN_01036fd2(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(DAT_01037168 + (param_2 & 0x1f) * 0x24 + 0x18);
  uVar1 = 0x6301;
  if (pcVar2 != (code *)0x0) {
    uVar1 = (*pcVar2)(param_1,param_3,param_4,param_5);
  }
  return uVar1;
}

