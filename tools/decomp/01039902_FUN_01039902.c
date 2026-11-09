
int FUN_01039902(undefined4 param_1,uint *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_38 [3];
  undefined1 auStack_35 [9];
  undefined4 uStack_2c;
  uint *local_28;
  
  uVar8 = 0;
  iVar7 = 0;
  uVar9 = *param_2;
  if ((uVar9 & 3) == 0) {
    iVar7 = 0;
  }
  else {
    bVar1 = (byte)uVar9 & 3;
    if (bVar1 < 3) {
      if ((((uint)bVar1 ^ *DAT_0103a20c & 3) & uVar9) == 0) {
        iVar7 = 0;
      }
      else if ((*(char *)(DAT_0103a214 + ((int)(uint)bVar1 >> 1)) == '\0') &&
              (*(char *)(DAT_0103a218 + ((int)(uint)bVar1 >> 1) * 0xbc + 0x1c6) == '\0')) {
        iVar7 = 0;
      }
      else {
        uStack_2c = param_1;
        local_28 = param_2;
        if ((*(char *)(DAT_0103a214 + ((int)(uint)bVar1 >> 1)) == '\x01') &&
           ((*(char *)(DAT_0103a218 + ((int)(uint)bVar1 >> 1) * 0xbc + 0x1c6) == '\0' &&
            (((*DAT_0103a20c ^ uVar9) & uVar9) != 0)))) {
          FUN_0103da04(bVar1 >> 1);
          *DAT_0103a21c = '\x01';
        }
        for (bVar5 = 0; piVar4 = DAT_0103a220, bVar5 < 4; bVar5 = bVar5 + 1) {
          *(undefined4 *)(*DAT_0103a220 + (uint)bVar5 * 4 + 0x14) = 0x7fffffff;
          *(undefined4 *)(*piVar4 + (uint)bVar5 * 4 + 0x24) = 0;
          if (uVar9 == 1) {
            iVar6 = *piVar4 + (uint)bVar5 * 8;
            *(undefined4 *)(iVar6 + 0x38) = 0;
            *(undefined4 *)(iVar6 + 0x3c) = 0;
          }
        }
        FUN_0102229c(*DAT_0103a220,0x14,0);
        for (bVar5 = 0; bVar5 < 2; bVar5 = bVar5 + 1) {
          if ((int)((uVar9 >> (uint)bVar5) << 0x1f) < 0) {
            uVar8 = uVar8 | 1 << (uint)bVar5;
          }
        }
        if ((uVar8 & 0xff) == 0) {
          iVar7 = 0x2a02;
        }
        else if ((*DAT_0103a20c & 3) == (uVar8 & 0xff)) {
          iVar7 = 0;
        }
        else {
          if ((int)(uVar8 << 0x1f) < 0) {
            FUN_0100f12c(3,DAT_0103a224,3,auStack_38);
          }
          if ((int)(uVar8 << 0x1e) < 0) {
            FUN_0100f12c(3,DAT_0103a228,3,auStack_35);
          }
          for (uVar9 = 0; uVar9 < 2; uVar9 = uVar9 + 1) {
            if (((uVar8 & 0xff & 1 << (uVar9 & 0xff)) != 0) && (uVar9 < 2)) {
              *(undefined4 *)(DAT_0103a22c + uVar9 * 4) = *(undefined4 *)(DAT_0103a208 + uVar9 * 4);
            }
          }
          FUN_0103de66(uVar8 & 0xff,1);
          FUN_0103dba8(uVar8 & 0xff);
          uVar9 = 0;
          while ((pbVar2 = DAT_0103a204, uVar9 < *DAT_0103a204 &&
                 (iVar7 = FUN_01039bc6(uVar8 & 0xff,*piVar4), iVar7 == 0))) {
            *(uint *)(*piVar4 + 4) = ((uVar9 + 1) * 100) / (uint)*pbVar2;
            *(uint *)(*piVar4 + 0xc) = uVar9 + 1;
            uVar9 = uVar9 + 1;
          }
          if (iVar7 == 0) {
            if (pbVar2[0x18] == 1) {
              FUN_01039846(uVar8 & 0xff,*piVar4);
            }
            iVar7 = FUN_01039fae(uVar8 & 0xff,*piVar4 + 0x38);
            *DAT_0103a20c = *DAT_0103a20c | (byte)uVar8;
          }
          FUN_0103de66(uVar8 & 0xff,0);
          FUN_0103dd84(uVar8 & 0xff);
          if (iVar7 == 0) {
            *(int *)(*piVar4 + 0x10) = *(int *)(*piVar4 + 0x10) + 1;
          }
          *(int *)*piVar4 = iVar7;
          if ((int)(uVar8 << 0x1f) < 0) {
            FUN_0100f1b6(3,DAT_0103a224,3,auStack_38);
          }
          if ((int)(uVar8 << 0x1e) < 0) {
            FUN_0100f1b6(3,DAT_0103a228,3,auStack_35);
          }
          pcVar3 = DAT_0103a21c;
          if (*DAT_0103a21c == '\x01') {
            FUN_0103d93e(bVar1 >> 1);
            *pcVar3 = '\0';
          }
        }
      }
    }
    else {
      iVar7 = 0x2a07;
    }
  }
  return iVar7;
}

