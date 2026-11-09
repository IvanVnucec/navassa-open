
undefined8 FUN_01032b90(uint param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  
  iVar6 = thunk_EXT_FUN_20036204(3);
  iVar4 = DAT_01033844;
  iVar3 = DAT_010335c4;
  iVar2 = DAT_010335c0;
  iVar7 = 0;
  if (iVar6 == 0) {
    if ((param_1 & 0xc) == 0) {
      iVar7 = 0x4402;
    }
    if (2 < (byte)param_4[1]) {
      iVar7 = 0x4400;
    }
    if (1 < (byte)param_4[2]) {
      iVar7 = 0x4400;
    }
    if ((byte)param_4[3] < 5) {
      if (iVar7 == 0) {
        iVar6 = 0;
        do {
          if ((int)((param_1 >> (iVar6 + 2U & 0xff)) << 0x1f) < 0) {
            cVar5 = *param_4;
            if (cVar5 != '\0') {
              cVar5 = '\x01';
            }
            iVar8 = iVar6 * 0x5c + DAT_010335bc;
            pcVar11 = (char *)(iVar8 + 0x358);
            *pcVar11 = cVar5;
            *(char *)(iVar8 + 0x359) = param_4[1];
            *(char *)(iVar8 + 0x35b) = param_4[2];
            *(char *)(iVar8 + 0x35a) = param_4[3];
            if ((*pcVar11 != '\0') && (*(char *)(iVar6 * 0xbc + iVar4 + 0x48) != '\x02')) {
              *pcVar11 = '\0';
              iVar7 = 0x4405;
              break;
            }
            if (param_4[4] != '\0') {
              iVar9 = 0;
              do {
                iVar1 = iVar9 * 4;
                iVar10 = iVar9 * 0xc;
                iVar9 = iVar9 + 1;
                *(undefined4 *)(iVar2 + iVar6 * 4 + iVar10 + (short)(ushort)(byte)param_4[3] * 0x38)
                     = *(undefined4 *)(param_4 + iVar1 + 5);
              } while (iVar9 < 4);
            }
            *(uint *)(iVar8 + 0x35c) = (uint)(byte)param_4[0x15];
            cVar5 = param_4[0x16];
            if (cVar5 != '\0') {
              cVar5 = '\x01';
            }
            *(char *)(iVar3 + iVar6 * 0xc) = cVar5;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 2);
      }
    }
    else {
      iVar7 = 0x4400;
    }
  }
  else {
    iVar7 = 0xd203;
  }
  return CONCAT44(param_4,iVar7);
}

