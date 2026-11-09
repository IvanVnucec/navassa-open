
undefined4 FUN_0103a2f6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_54 [56];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  sVar1 = *DAT_0103a38c;
  uVar3 = *DAT_0103a390;
  if ((int)(uVar3 << 0x15) < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (-1 < (int)(uVar3 << 0x17)) {
      iVar5 = (uVar3 & 0x1f) + 1;
      uStack_14 = param_4;
      do {
        FUN_0103a554(auStack_54);
        cVar2 = FUN_0103ac40(auStack_54,local_1c,local_18,(int)sVar1,param_1 + 0x30);
        if (cVar2 == '\x01') {
          return 1;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

