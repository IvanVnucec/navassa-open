
int FUN_01005386(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(char *)(DAT_01005510 + 0x77d) == '\x01') {
    uVar5 = 0x1e;
  }
  else {
    uVar5 = 0x1f;
  }
  bVar1 = FUN_010026f0(*(undefined1 *)(param_1 + 0xb),param_1[1],*DAT_010054f0,DAT_010054f0[1],uVar5
                       ,param_2,*param_1,param_1[1]);
  uVar2 = FUN_0100533c(param_2,*(undefined1 *)((int)param_1 + param_2 + 0x20),param_1[10]);
  iVar3 = param_1[10];
  iVar4 = DAT_010054f4 + (short)param_2 * 0x3450 + (uint)bVar1 * 0x1b0 + param_1[0xc] * 0x90;
  if (iVar3 != 0) {
    iVar4 = iVar4 + uVar2 * 8;
    if (iVar3 == 1 || iVar3 == 3) {
      if (uVar2 < 7) {
        return iVar4 + 0x40;
      }
    }
    else if ((iVar3 == 2) && (uVar2 < 3)) {
      return iVar4 + 0x78;
    }
    iVar4 = 0;
  }
  return iVar4;
}

