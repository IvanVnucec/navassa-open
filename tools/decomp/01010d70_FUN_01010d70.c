
void FUN_01010d70(void)

{
  int iVar1;
  int iVar2;
  int in_r3;
  undefined4 *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined8 uVar3;
  
  uVar3 = FUN_01010dd2();
  iVar2 = (int)((ulonglong)uVar3 >> 0x20);
  iVar1 = (int)uVar3;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if (in_r3 == 0) {
        iVar1 = 0x19a;
        unaff_r6 = 0x1a0;
      }
      else {
        iVar1 = 0x197;
        unaff_r6 = 0x19d;
      }
    }
    else if (iVar2 == 3) {
      if (in_r3 == 0) {
        iVar1 = 0xfc;
        unaff_r6 = 0xff;
      }
      else {
        iVar1 = 0xf6;
        unaff_r6 = 0xf9;
      }
    }
    else if (iVar2 == 2) {
      if (in_r3 == 0) {
        iVar1 = 0x18e;
        unaff_r6 = 0x194;
      }
      else {
        iVar1 = 0x18b;
        unaff_r6 = 0x191;
      }
    }
    FUN_01002836(iVar1 + unaff_r5,*unaff_r4);
    FUN_01002836(unaff_r6 + unaff_r5,unaff_r4[1]);
    return;
  }
  return;
}

