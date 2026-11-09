
undefined4 FUN_0100083a(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  pbVar5 = DAT_01001408;
  pbVar2 = DAT_01001404;
  uVar3 = DAT_01001400;
  if (param_1 == 2) {
    bVar1 = *DAT_01001404;
    *DAT_01001404 = 0;
    pin_update(uVar3,3,param_2);
    param_2 = param_2 << 0x1a;
    uVar4 = 0xc;
    pbVar5 = pbVar2;
  }
  else {
    if (param_1 != 3) {
      return param_4;
    }
    bVar1 = *DAT_01001408;
    *DAT_01001408 = 0;
    pin_update(uVar3,0x30,(param_2 & 0xf) << 4);
    param_2 = param_2 << 0x1e;
    uVar4 = 0xc0;
  }
  pin_update(uVar3,uVar4,param_2 >> 0x18);
  uVar3 = FUN_010027d8(pbVar5,bVar1 | 3,param_4);
  return uVar3;
}

