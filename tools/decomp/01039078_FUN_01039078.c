
undefined8 FUN_01039078(undefined4 param_1,uint *param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  bool bVar9;
  uint uStack_2c;
  uint local_28;
  
  pbVar2 = DAT_01039254;
  local_28 = *param_2;
  uVar5 = 0;
  if (((local_28 & 3) == 0) || (2 < (local_28 & 3))) {
    uVar5 = 0x2d00;
  }
  else {
    if (((*DAT_01039254 ^ local_28) & 0xff & local_28) != 0) {
      uVar3 = (local_28 & 3) >> 1;
      uVar6 = (short)uVar3 * 0xbc;
      cVar1 = *(char *)(DAT_0103926c + uVar3);
      iVar4 = DAT_0103925c + uVar6;
      if (cVar1 == '\0') {
        uVar6 = (uint)*(byte *)(iVar4 + 0x1c6);
      }
      if (cVar1 != '\0' || uVar6 != 1) {
        bVar9 = cVar1 != '\x01';
        if (!bVar9) {
          cVar1 = *(char *)(iVar4 + 0x1c6);
        }
        if ((bVar9 || cVar1 != '\x01') || (((*DAT_01039254 ^ local_28) & local_28) == 0)) {
          uVar6 = 0;
          uStack_2c = param_3;
          do {
            uVar3 = uVar6 & 0xff;
            if (((int)((local_28 >> (uVar6 & 0xff)) << 0x1f) < 0) &&
               (-1 < (int)((uint)(*pbVar2 >> (uVar6 & 0xff)) << 0x1f))) {
              *pbVar2 = *pbVar2 | (byte)(1 << (uVar6 & 0xff));
              uVar7 = *(undefined4 *)(DAT_01039258 + uVar3 * 4);
              FUN_0100f100(1,uVar7,&DAT_01039270,1,&uStack_2c);
              FUN_0100a84c(pbVar2 + (short)uVar3 * 0x14 + 0xb4);
              iVar4 = (short)uVar3 * 0x58;
              pbVar8 = pbVar2 + iVar4 + 4;
              if (pbVar2[iVar4 + 4] == 0) {
                FUN_01039514(uVar3,pbVar8);
                uVar5 = FUN_0103967c(uVar3,pbVar8);
              }
              else if (pbVar2[iVar4 + 4] == 1) {
                FUN_01039750(uVar3);
                FUN_01039722(uVar3);
                FUN_01039514(uVar3,pbVar8);
                uVar5 = FUN_0103967c(uVar3,pbVar8);
                FUN_0103965e(uVar3);
              }
              FUN_0100a854(pbVar2 + (short)uVar3 * 0x14 + 0xb4,uVar5);
              param_2 = &uStack_2c;
              FUN_0100f180(1,uVar7,&DAT_01039270,1);
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < 2);
          goto LAB_01039190;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01039190:
  return CONCAT44(param_2,uVar5);
}

