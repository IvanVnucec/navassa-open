
undefined4 FUN_0103624a(byte *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
LAB_01036268:
    FUN_01036204();
    if (*(char *)(DAT_010364e8 + 0xd0) == '\0') {
      thunk_EXT_FUN_200348e4(1);
    }
  }
  else {
    if (param_2 != 2) {
      uVar1 = 0xff40;
      goto LAB_0103627e;
    }
    if (*param_1 < 2) {
      param_2 = 0;
      goto LAB_01036268;
    }
  }
  *param_1 = (byte)param_2;
  param_1[1] = (byte)param_2;
LAB_0103627e:
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return uVar1;
}

