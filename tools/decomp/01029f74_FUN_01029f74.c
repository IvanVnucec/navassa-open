
void FUN_01029f74(uint param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar5;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  puVar5 = DAT_0102ac6c;
  uVar1 = (undefined1)param_2;
  uVar2 = (undefined1)((uint)param_2 >> 8);
  uVar3 = (undefined1)((uint)param_2 >> 0x10);
  uVar4 = (undefined1)((uint)param_2 >> 0x18);
  if (param_1 == 0) {
    DAT_0102ac6c[3] = uVar1;
    puVar5[2] = uVar2;
    puVar5[1] = uVar3;
    *puVar5 = uVar4;
    return;
  }
  if (param_1 != 2) {
    if (1 < param_1) {
      return;
    }
    DAT_0102ac6c[7] = uVar1;
    puVar5[6] = uVar2;
    puVar5[5] = uVar3;
    puVar5[4] = uVar4;
    return;
  }
  DAT_0102ac6c[0xb] = uVar1;
  puVar5[10] = uVar2;
  puVar5[9] = uVar3;
  puVar5[8] = uVar4;
  return;
}

