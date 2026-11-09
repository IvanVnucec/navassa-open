
byte FUN_010483f8(byte param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  puVar4 = DAT_01048b4c;
  iVar3 = DAT_01048b40;
  iVar2 = DAT_01048b30;
  *(byte *)(DAT_01048b30 + 0x10) = *(byte *)(DAT_01048b30 + 0x10) & ~param_1;
  FUN_010484e4(0);
  uVar9 = 0;
  do {
    uVar7 = 1 << (uVar9 & 0xff);
    if ((param_1 & uVar7) != 0) {
      thunk_FUN_01015d2e(uVar9 + 3 & 0xff);
      thunk_FUN_01017f68(uVar9 & 0xff,0);
      thunk_FUN_01002ba0(uVar9 & 0xff,1);
      if ((*puVar4 & uVar7) != 0) {
        bVar1 = *(byte *)(iVar3 + uVar9);
        uVar7 = (uint)bVar1;
        uVar5 = thunk_FUN_01006ce2(uVar9 & 0xff);
        FUN_01048b12(uVar5,uVar9 & 0xff,0);
        iVar8 = DAT_01048b34 + uVar9;
        if ((*(char *)(iVar8 + 0xb) != '\x01') || (1 < *(byte *)(iVar2 + uVar7))) {
          FUN_01048a0c(uVar9 & 0xff,0);
        }
        uVar6 = uVar9 - 2;
        if (uVar6 < 2) {
          uVar6 = DAT_01048b3c + (short)(ushort)bVar1 * 0xbc;
          if (*(char *)(uVar6 + 0x3c) == '\x02') goto LAB_010484ca;
          FUN_010489ec(uVar9 - 2 & 0xff,1);
          *(undefined1 *)(iVar8 + 9) = 1;
          uVar5 = FUN_010484de(1,5,uVar7,0);
          uVar5 = FUN_010484de(uVar5,1,uVar7,0);
          uVar6 = FUN_010484de(uVar5,2,uVar7,0);
          uVar5 = 3;
        }
        else {
LAB_010484ca:
          uVar5 = 0;
        }
        FUN_010484de(uVar6,uVar5,uVar7,0);
      }
    }
    uVar9 = uVar9 + 1;
    if (3 < (int)uVar9) {
      return param_1;
    }
  } while( true );
}

