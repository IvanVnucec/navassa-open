
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0101012c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int unaff_r5;
  int unaff_r6;
  
  piVar1 = _DAT_01010024;
  _DAT_01010024[2] = param_5;
  *piVar1 = unaff_r6;
  piVar1[1] = param_4;
  piVar1[3] = unaff_r5;
  piVar1[4] = 0;
  piVar1[5] = 0;
  if (**(int **)(unaff_r6 + 0xc) == 0) {
    FUN_01003f9a(piVar1);
    FUN_01015e2c(param_2);
    FUN_01004044(piVar1);
  }
  if (unaff_r5 < 0) {
    piVar2 = (int *)(unaff_r6 + unaff_r5 * -4 + 0x100);
  }
  else {
    piVar2 = (int *)(unaff_r6 + unaff_r5 * 4 + 0x40);
  }
  *piVar2 = piVar1[4];
  piVar2[0x18] = piVar1[5];
  return param_4;
}

