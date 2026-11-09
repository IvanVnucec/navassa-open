
undefined8 FUN_01017e8c(uint param_1,undefined4 param_2,uint param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uStack_20;
  char *pcStack_1c;
  
  iVar2 = DAT_010181cc;
  iVar1 = DAT_010181c8;
  iVar3 = 0;
  if (*param_4 == '\0') {
    iVar6 = 0;
  }
  else if (*param_4 == '\x01') {
    iVar6 = 3;
  }
  else {
    iVar6 = 1;
  }
  uVar7 = 0;
  uStack_20 = param_3;
  pcStack_1c = param_4;
  do {
    if ((int)((param_1 >> (uVar7 & 0xff)) << 0x1f) < 0) {
      uVar8 = FUN_01014702(uVar7 & 0xff,&uStack_20);
      uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
      iVar3 = (int)uVar8;
      if (iVar3 == 0) {
        uVar4 = uStack_20 & 0xff;
      }
      if (iVar3 != 0 || uVar4 != 0) {
        iVar3 = 0xe704;
      }
      else {
        iVar5 = DAT_010181d0 + (uint)*(byte *)(iVar2 + uVar7) * 0xbc;
        if ((int)((0xcU >> (uVar7 & 0xff)) << 0x1f) < 0) {
          if (*(char *)(iVar5 + 0xb0) == '\x02') {
            if (*(char *)(iVar5 + 0xb2) != '\0') {
              iVar6 = iVar6 + 0x10;
            }
            if (*(char *)(iVar5 + 0xb6) == '\x01') {
              iVar6 = iVar6 + 0x20;
            }
            else if (iVar6 << 0x1e < 0) {
              iVar3 = 0xc300;
            }
          }
          else {
LAB_01017f12:
            iVar6 = 0;
          }
        }
        else {
          if (*(char *)(iVar5 + 0x228) != '\x02') goto LAB_01017f12;
          if (*(char *)(iVar5 + 0x22a) != '\0') {
            iVar6 = iVar6 + 0x10;
          }
        }
        **(undefined1 **)(iVar1 + uVar7 * 4) = (char)iVar6;
      }
    }
    uVar7 = uVar7 + 1;
    if (3 < (int)uVar7) {
      return CONCAT44(uStack_20,iVar3);
    }
  } while( true );
}

