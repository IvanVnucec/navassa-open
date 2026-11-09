
undefined4 FUN_010198e0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 uVar5;
  
  pbVar4 = DAT_01019bbc;
  pbVar3 = DAT_01019bb8;
  bVar1 = *DAT_01019bbc;
  pin_update(DAT_01019bbc,0x20,0);
  bVar2 = *pbVar3;
  pin_update(pbVar3,1,1);
  if ((int)((0x70U >> (param_1 & 0xff)) << 0x1f) < 0) {
    uVar5 = FUN_01019ae0(param_1);
  }
  else {
    uVar5 = 0xff1d;
  }
  if ((int)((uint)(bVar1 >> 5) << 0x1f) < 0) {
    pin_update(pbVar4,0x20,0x20);
  }
  if (-1 < (int)((uint)bVar2 << 0x1f)) {
    pin_update(pbVar3,1,0);
  }
  return uVar5;
}

