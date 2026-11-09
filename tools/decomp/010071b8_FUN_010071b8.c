
undefined4 FUN_010071b8(int param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = (uint)((ulonglong)param_2 * 1000);
  iVar4 = (int)((ulonglong)param_2 * 1000 >> 0x20);
  uVar2 = 0;
  uVar5 = iVar4 + (CARRY4(uVar3,DAT_01007cc0) - 1);
  if ((uVar5 == 0) || ((uVar5 < 2 && (uVar3 + DAT_01007cc0 < DAT_01007cc4)))) {
    uVar3 = FUN_01007754(uVar3,iVar4,param_3,1);
    iVar4 = DAT_01007cc8;
    uVar1 = (undefined1)((uVar3 & 0x7f) << 1);
    if (param_1 == 0) {
      *DAT_01007ccc = uVar1;
    }
    else {
      if (param_1 != 1) {
        return 0;
      }
      *(undefined1 *)(DAT_01007cc8 + 0x11) = uVar1;
      iVar4 = DAT_01007cd0;
    }
    pin_update(iVar4,1,0);
  }
  else {
    uVar2 = 0xc903;
  }
  return uVar2;
}

