
int FUN_01041076(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,int param_7)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(DAT_01041258 + param_1);
  uVar2 = *(undefined1 *)(DAT_010411bc + param_1);
  iVar7 = (short)param_1 * 0x14;
  iVar6 = DAT_010411ec + iVar7;
  iVar3 = (short)(ushort)bVar1 * 0x6c;
  FUN_01041068(iVar3,uVar2,DAT_01041288 + iVar3,0x1b);
  iVar5 = DAT_0104128c + iVar7;
  FUN_0100b698(iVar5,uVar2,DAT_01041290 + (uint)bVar1 * 0x40,0x10);
  iVar3 = DAT_010411f0 + iVar7;
  FUN_0100b698(iVar3,uVar2,DAT_01041294 + param_1 * 0x10,4);
  iVar4 = DAT_010411f4 + iVar7;
  FUN_0100b698(iVar4,uVar2,DAT_01041298 + param_1 * 8,2);
  FUN_0100b698(DAT_010412a0 + iVar7,uVar2,DAT_0104129c + (short)param_1 * 0x30,0xc);
  iVar7 = FUN_01041186(DAT_010411b8 + param_1,DAT_010411b8 + param_2);
  if (iVar7 == 0) {
    iVar7 = FUN_010097ac(param_3,param_4,param_2,param_5,iVar6,iVar5);
  }
  if (iVar7 == 0) {
    if (param_7 != 0) {
      FUN_010413fc(iVar6);
      FUN_01041178();
      FUN_01041164();
      FUN_0104106e();
    }
    FUN_010411a2();
    FUN_0100b594(iVar4);
    FUN_0100b260(iVar3);
    FUN_0100b1da();
    FUN_0104116e();
  }
  return iVar7;
}

