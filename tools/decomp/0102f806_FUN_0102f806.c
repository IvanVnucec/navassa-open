
undefined8 FUN_0102f806(uint param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_10;
  
  uVar1 = DAT_0102fbd8;
  uVar5 = param_1 & 2;
  iVar3 = FUN_010173cc();
  if ((iVar3 == 1) && (uVar5 != 0)) {
LAB_0102f84c:
    local_10._3_1_ = (undefined1)((uint)uVar1 >> 0x18);
    local_10._0_3_ = CONCAT12(1,(short)uVar1);
  }
  else {
    uVar4 = *(uint *)(DAT_0102fbc0 + 0xc);
    if (uVar4 < DAT_0102fbc8) {
      if (uVar4 < DAT_0102fbcc) goto joined_r0x0102f84a;
    }
    else {
      uVar5 = param_1 & 3;
joined_r0x0102f84a:
      if (uVar5 != 0) goto LAB_0102f84c;
    }
    uVar5 = uVar4 >> 1;
    if (DAT_0102fbcc < uVar5) {
      uVar4 = 4;
    }
    uVar2 = (undefined1)uVar4;
    if (uVar5 <= DAT_0102fbcc) {
      uVar2 = 2;
    }
    local_10 = CONCAT31((int3)((uint)uVar1 >> 8),uVar2);
  }
  return CONCAT44(local_10,local_10);
}

