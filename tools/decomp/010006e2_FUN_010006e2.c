
void FUN_010006e2(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  sbyte sVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar6 = (undefined4 *)
           (*(int *)(DAT_010011f4 + (uint)*(byte *)(param_3 + 0x85) * 8 + 4) +
           *(int *)(param_3 + 0x80) * 0x14);
  param_2[param_1 + 4] =
       *(undefined4 *)
        (param_4 + (uint)*(byte *)(param_3 + 0x85) * 0x100 + *(int *)(param_3 + 0x80) * 4 + 0x30);
  *(char *)(param_2 + 0xb) =
       (char)*(undefined4 *)
              (param_4 + (uint)*(byte *)(param_3 + 0x85) * 0x100 + *(int *)(param_3 + 0x80) * 4 +
              0x430);
  uVar4 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar4;
  param_2[param_1 + 2] = puVar6[param_1 + 2];
  if (*(int *)(param_4 + 0x2c) << 0x14 < 0) {
    sVar1 = *(sbyte *)(param_4 + param_1 + 0x7d8);
    uVar3 = (uint)*(byte *)(param_4 + param_1 + 0x792);
    uVar7 = (*(uint *)(param_4 + 0x7c8) & (uint)*(ushort *)(param_4 + param_1 * 2 + 0x7d4) << sVar1)
            >> sVar1;
    if (uVar3 < uVar7) {
      uVar7 = uVar3 - 1;
      *DAT_010011f8 = DAT_010011fc;
      *DAT_01001200 = 0x2e3;
      boot_msg(1,0xeb08,1);
    }
    *(undefined1 *)((int)param_2 + param_1 + 0x20) =
         *(undefined1 *)(param_4 + param_1 * 8 + uVar7 + 0x796);
  }
  else {
    *(undefined1 *)((int)param_2 + param_1 + 0x20) = *(undefined1 *)((int)puVar6 + param_1 + 0x10);
  }
  if (*DAT_010011f0 != '\x04') {
    return;
  }
  if (param_1 == 0) {
    FUN_01002ba0(0,0);
    pbVar2 = DAT_010013fc;
    if ((int)((uint)*DAT_010013fc << 0x1b) < 0) {
      FUN_01002bfa(0,0);
      *pbVar2 = *pbVar2 ^ 1;
      goto LAB_01000828;
    }
    *DAT_010013fc = *DAT_010013fc | 0x11;
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    FUN_01002ba0(1,0);
    pbVar2 = DAT_010013fc;
    if ((int)((uint)*DAT_010013fc << 0x1a) < 0) {
      FUN_01002bfa(1,0);
      *pbVar2 = *pbVar2 ^ 2;
      goto LAB_01000828;
    }
    *DAT_010013fc = *DAT_010013fc | 0x22;
    uVar5 = 2;
    uVar4 = 1;
  }
  FUN_01002bfa(uVar4,0,uVar5);
LAB_01000828:
  FUN_01002ba0(param_1,1);
  return;
}

