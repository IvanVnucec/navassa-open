
undefined4 FUN_01049646(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = DAT_01049724;
  uVar3 = (uint)*param_1;
  bVar1 = param_1[2];
  uVar6 = 0;
  uStack_20 = param_4;
  if (bVar1 == 0) {
    bVar1 = param_1[3];
    uVar7 = 0;
    do {
      if ((uVar3 & 1 << (uVar7 & 0xff)) != 0) {
        thunk_FUN_01017f5c(uVar7 & 0xff);
        thunk_FUN_01017f68(uVar7 & 0xff,0);
        iVar5 = *(int *)(iVar2 + uVar7 * 4);
        uVar4 = *(uint *)(iVar5 + 4);
        *(byte *)(iVar5 + 0x25) = *(byte *)(iVar5 + 0x25) & 0xf3 | (byte)((bVar1 & 3) << 2);
        if ((uVar4 == 2 || uVar4 == 3) || uVar4 == 1) {
          thunk_FUN_01017972(uVar7 & 0xff,
                             ((uint)*(byte *)(*(int *)(iVar2 + uVar7 * 4) + 0x25) &
                             1 << (uVar4 & 0xff)) == 0);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
  }
  else if (bVar1 == 1) {
    uVar7 = 0xffffffff;
    if (param_1[3] != 0xff) {
      uVar7 = (uint)param_1[3];
    }
    uVar6 = FUN_01049478(uVar3,uVar7,param_1[4]);
  }
  else if (bVar1 == 2) {
    uVar6 = FUN_0104950c(uVar3,param_1[3],*DAT_0104970c,DAT_0104970c[1],
                         *(undefined1 *)(DAT_0104970c + 2),*(undefined1 *)((int)DAT_0104970c + 9));
  }
  else if (bVar1 == 0xf1) {
    local_28 = *DAT_0104970c;
    uStack_24 = DAT_0104970c[1];
    uVar6 = FUN_010498dc(uVar3,&local_28);
  }
  return uVar6;
}

