
int FUN_01021de0(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_38 [5];
  
  uVar4 = *(uint *)(DAT_0102213c + (short)param_5 * 0x24);
  iVar3 = 0;
  iVar1 = param_9 * 0xbc + DAT_01022124;
  bVar6 = param_3 == 2 || param_3 == 3;
  if (param_3 == 2 || param_3 == 3) {
    bVar6 = *(char *)(iVar1 + 0x3c) == '\x02';
  }
  uVar2 = 0x1ffU >> (param_5 & 0xff) & 1;
  if ((bVar6) ||
     ((((param_10 != 3 && (param_3 == 3)) && (uVar2 != 0)) && (*(char *)(iVar1 + 0x49) == '\0')))) {
    iVar3 = 1;
  }
  if (((uVar4 & 1) == 0 && iVar3 == 0) && (param_1 != 0)) {
    iVar3 = 1;
  }
  if (((iVar3 != 0) || ((int)(uVar4 << 0x1e) < 0)) || (param_2 == param_11)) {
    if (iVar3 != 0) goto LAB_01021e98;
    FUN_0101206c(local_38,&DAT_0102227c,0x14);
    if ((uVar4 & local_38[param_3]) != 0) {
      if ((int)(uVar4 << 0x15) < 0) {
        param_8 = param_8 + param_5 * 2;
        if (*(char *)(param_8 + (uint)*(byte *)(param_7 + 1)) != '\x01') {
          *(undefined1 *)(param_8 + (uint)*(byte *)(param_7 + 1)) = 1;
LAB_01021e82:
          if ((int)(((*(uint *)(param_6 + (uint)*(byte *)(param_7 + 1) * 4 + 4) &
                     *(uint *)(param_7 + 4)) >> (param_5 & 0xff)) << 0x1f) < 0) goto LAB_01021e98;
        }
      }
      else if (param_4 < 3) {
        local_38[0] = DAT_01022290;
        local_38[1] = DAT_01022294;
        local_38[2] = DAT_01022298;
        if ((uVar4 & local_38[param_4]) != 0) goto LAB_01021e82;
      }
    }
  }
  iVar3 = 1;
LAB_01021e98:
  iVar1 = DAT_01022118;
  iVar5 = DAT_01022120 + param_2 * 8;
  uVar4 = DAT_01022120;
  if ((int)((DAT_01021f50 >> (param_5 & 0xff)) << 0x1f) < 0) {
    if (*(char *)(DAT_01022118 + 0x20) == '\0') {
      return iVar3;
    }
    uVar4 = FUN_01036632(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
    if (uVar4 == 0xff) {
      iVar3 = 1;
    }
  }
  if (uVar2 != 0) {
    uVar4 = (uint)*(byte *)(iVar1 + 0x20);
  }
  if ((uVar2 != 0 && uVar4 != 0) &&
     (iVar1 = FUN_01036632(*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc)), iVar1 == 0xff))
  {
    iVar3 = 1;
  }
  return iVar3;
}

