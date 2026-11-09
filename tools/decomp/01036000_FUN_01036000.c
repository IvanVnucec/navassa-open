
undefined8 FUN_01036000(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  uStack_18 = param_3;
  uStack_14 = param_4;
  if (param_2 != 0) {
    if (param_3 == 0) {
      FUN_0101abba();
    }
    else {
      FUN_0101ac18();
    }
    goto LAB_01036092;
  }
  if ((char)*DAT_01036098 < '\0') {
    uVar1 = 0;
    bVar4 = (bool)isCurrentModePrivileged();
    if (bVar4) {
      uVar1 = isIRQinterruptsEnabled();
    }
    disableIRQinterrupts();
    *DAT_01036098 = *DAT_01036098 & 0x7f;
    bVar4 = (bool)isCurrentModePrivileged();
    if (bVar4) {
      enableIRQinterrupts((uVar1 & 1) == 1);
    }
  }
  FUN_01013eb8(2,(int)&uStack_18 + 1);
  if (param_1 == 0) {
    uVar2 = 0;
LAB_01036042:
    FUN_01013eb8(uVar2,&uStack_18);
  }
  else if (param_1 == 1) {
    uVar2 = 5;
    goto LAB_01036042;
  }
  uVar1 = uStack_18 >> 8 & 0xff;
  bVar4 = uVar1 == 7;
  if (bVar4) {
    uVar1 = uStack_18 & 0xff;
  }
  if (bVar4 && uVar1 == 7) {
    if (*(char *)(DAT_0103609c + param_1 * 0xbc + 0x3c) == '\x02') {
      FUN_0101a95e(param_1);
    }
    else if (param_3 == 0) {
      FUN_0101aa38(param_1);
    }
    else {
      FUN_0101ab4c();
    }
  }
  else {
    uVar3 = 0x2111;
  }
LAB_01036092:
  return CONCAT44(uStack_18,uVar3);
}

