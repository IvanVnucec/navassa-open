
int FUN_01043be2(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_34 [8];
  uint local_2c;
  undefined4 uStack_28;
  
  pbVar2 = DAT_01043d38;
  local_2c = *param_2;
  iVar3 = 0;
  if ((local_2c & 0xc) != 0) {
    if ((local_2c << 0x1c) >> 0x1e < 4) {
      if (((*DAT_01043d38 ^ local_2c) & 0xff & local_2c) != 0) {
        uVar5 = 2;
        uStack_28 = param_4;
        do {
          uVar4 = uVar5 - 2;
          if (((int)((local_2c >> (uVar5 & 0xff)) << 0x1f) < 0) &&
             (-1 < (int)((uint)(*pbVar2 >> (uVar5 & 0xff)) << 0x1f))) {
            uVar6 = uVar4 & 0xff;
            sVar1 = (short)uVar6;
            if (*(char *)(sVar1 * 0xbc + DAT_01043d3c + 0x3c) != '\x02') {
              *pbVar2 = *pbVar2 | (byte)(1 << (uVar5 & 0xff));
              uVar7 = *(undefined4 *)(DAT_01043d40 + uVar6 * 4);
              FUN_0100f100(5,uVar7,&LAB_01043d44,5,auStack_34);
              FUN_0100a84c(pbVar2 + sVar1 * 0x14 + 4);
              if ((iVar3 == 0) && (iVar3 = FUN_01034d2a(uVar4 & 0xff), iVar3 == 0)) {
                FUN_01034dc2(uVar4 & 0xff);
                iVar3 = FUN_01034f60(uVar4 & 0xff);
                FUN_01035046(uVar4 & 0xff,pbVar2 + uVar6 * 0x80 + 0x2c);
                if (iVar3 == 0) {
                  iVar3 = FUN_01035108(uVar4 & 0xff);
                }
              }
              FUN_0100a854(pbVar2 + sVar1 * 0x14 + 4,iVar3);
              if (iVar3 != 0) {
                return iVar3;
              }
              FUN_0100f180(5,uVar7,&LAB_01043d44,5,auStack_34);
            }
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 4);
      }
    }
    else {
      iVar3 = 0x2709;
    }
  }
  return iVar3;
}

