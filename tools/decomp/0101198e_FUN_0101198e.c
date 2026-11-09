
undefined8 FUN_0101198e(int param_1,ushort *param_2,int param_3)

{
  byte *pbVar1;
  ushort uVar2;
  ushort *extraout_r1;
  ushort *puVar3;
  undefined4 uVar4;
  short local_16;
  
  puVar3 = DAT_01011a10;
  *DAT_01011a10 = 0x2086;
  puVar3[8] = 0xca;
  uVar4 = 0xff35;
  puVar3[0xd] = 0xff35;
  FUN_010119c6();
  local_16 = (short)((uint)param_3 >> 0x10);
  FUN_01011960();
  uVar2 = *(ushort *)(DAT_01011a08 + 0x28);
  FUN_01011968();
  extraout_r1[0x14] = uVar2;
  extraout_r1[9] = *(ushort *)(param_3 + 0x34);
  puVar3 = DAT_01011a80;
  *extraout_r1 = *(ushort *)(param_3 + 0x30);
  pbVar1 = DAT_01011a6c;
  *puVar3 = *puVar3 | 0x100;
  if (*(int *)(pbVar1 + 4) == 0) {
    *extraout_r1 = *extraout_r1 & 0xff7f;
  }
  else {
    *extraout_r1 = *extraout_r1 | 0x80;
    puVar3 = extraout_r1;
    if (*(int *)(pbVar1 + 8) == param_1) {
      puVar3 = (ushort *)(uint)*pbVar1;
    }
    if (*(int *)(pbVar1 + 8) == param_1 && puVar3 == param_2) {
      uVar2 = 0;
      goto LAB_01011946;
    }
  }
  uVar2 = 0x1000;
LAB_01011946:
  *DAT_01011a10 = uVar2 | local_16 << 8 | 0xa046;
  *(int *)(pbVar1 + 8) = param_1;
  *pbVar1 = (byte)param_2;
  return CONCAT44(uVar4,param_3);
}

