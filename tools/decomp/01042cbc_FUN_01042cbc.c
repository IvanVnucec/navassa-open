
undefined4 FUN_01042cbc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  
  iVar2 = DAT_01043038;
  FUN_01042e3a();
  iVar4 = DAT_0104303c;
  *(undefined1 *)(DAT_0104303c + 1) = 0;
  FUN_01042d4c(0,extraout_r1,0);
  pbVar3 = DAT_01043040;
  *DAT_01043040 = 0;
  if (param_1 == 0) {
    if (param_2 != 0x18) {
      bVar1 = (byte)(1 << (param_2 & 0xf));
      *DAT_01043044 = *DAT_01043044 | bVar1;
      *(byte *)(iVar4 + 1) = bVar1 | *(byte *)(iVar4 + 1);
      return param_4;
    }
    pin_update(DAT_01043048,0xf,DAT_01043044[1] & 0xf | 1);
    iVar4 = iVar2;
  }
  else {
    if (param_2 != 8) {
      bVar1 = (byte)(1 << (param_2 & 0xff));
      *DAT_0104304c = *DAT_0104304c | bVar1;
      *pbVar3 = bVar1 | *pbVar3;
      return param_4;
    }
    DAT_0104304c[1] = DAT_0104304c[1] | 1;
  }
  uVar5 = pin_update(iVar4,1,1,param_4);
  return uVar5;
}

