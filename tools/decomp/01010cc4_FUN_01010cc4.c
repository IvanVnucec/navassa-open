
int FUN_01010cc4(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r9;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(DAT_01010e3c,param_1);
  iVar2 = *(int *)(DAT_01010e3c + param_1 * 4);
  if (param_2 != 0) {
    if (param_4 == 0) {
      if (param_1 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 2;
      }
      uVar3 = pin_update(DAT_01010e5c,uVar1);
    }
    if (param_2 == 1) {
      if (param_4 == 0) {
        unaff_r9 = 0x116;
        unaff_r8 = 0x119;
      }
      else {
        unaff_r9 = 0x110;
        unaff_r8 = 0x113;
      }
    }
    else if (param_2 == 3) {
      if (param_4 == 0) {
        unaff_r9 = 0x12e;
        unaff_r8 = 0x131;
      }
      else {
        unaff_r9 = 0x128;
        unaff_r8 = 299;
      }
    }
    else if (param_2 == 2) {
      if (param_4 == 0) {
        unaff_r9 = 0x122;
        unaff_r8 = 0x125;
      }
      else {
        unaff_r9 = 0x11c;
        unaff_r8 = 0x11f;
      }
    }
    uVar3 = FUN_01010d68((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1);
    FUN_01010d68((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
    uVar1 = FUN_01002806(unaff_r9 + iVar2,0xffffff);
    *param_3 = uVar1;
    uVar1 = FUN_01002806(unaff_r8 + iVar2,0xffffff);
    param_3[1] = uVar1;
  }
  return param_4;
}

