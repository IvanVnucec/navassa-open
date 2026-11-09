
undefined4 FUN_01003cd6(uint *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  bool bVar5;
  
  uVar3 = 0;
  bVar4 = 0;
  for (; (int)param_3 <= param_4; param_3 = param_3 + 1 & 0xff) {
    if ((int)((param_1[9] >> (param_3 & 0xff)) << 0x1f) < 0) {
      *(byte *)(param_2 + param_3 + 4) = bVar4;
      *(byte *)(param_2 + param_3 + 0x14) = bVar4;
      bVar4 = bVar4 + 1;
    }
  }
  if (param_5 < bVar4) {
    uVar1 = 0;
    uVar3 = 0x3103;
    do {
      uVar2 = *param_1 >> (uVar1 & 0xff);
      bVar5 = (int)(uVar2 << 0x1f) < 0;
      if (bVar5) {
        uVar2 = uVar1 << 4;
      }
      if (bVar5) {
        *(undefined4 *)(param_2 + uVar2) = 0x3103;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 2);
  }
  return uVar3;
}

