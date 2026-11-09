
int FUN_01040f60(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int param_6,int param_7)

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
  iVar3 = (short)param_1 * 0x14;
  iVar7 = DAT_010411d8 + iVar3;
  FUN_01041068((short)(ushort)bVar1 * 0x6c,uVar2,DAT_01041270 + (short)(ushort)bVar1 * 0x6c,0x1b);
  iVar4 = iVar3 + DAT_010411f8;
  FUN_0100b698(iVar4,uVar2,DAT_01041274 + (uint)bVar1 * 0x40,0x10);
  iVar5 = iVar3 + DAT_010411dc;
  FUN_0100b698(iVar5,uVar2,DAT_01041278 + param_1 * 0x10,4);
  iVar6 = iVar3 + DAT_010411e0;
  FUN_0100b698(iVar6,uVar2,DAT_0104127c + param_1 * 8,2);
  FUN_0100b698(iVar3 + DAT_01041284,uVar2,DAT_01041280 + (short)param_1 * 0x30,0xc);
  if ((param_6 == 0) || (iVar3 = FUN_01009c88(param_2,(uint)bVar1,0,iVar7), iVar3 == 0)) {
    iVar3 = FUN_01041186(DAT_010411b8 + param_1,DAT_010411b8 + param_2);
  }
  if ((iVar3 == 0) &&
     (iVar3 = FUN_010097ac(param_3,param_4,param_2,param_5,iVar7,iVar4), iVar3 == 0)) {
    if (param_7 != 0) {
      FUN_010413fc(iVar7);
      FUN_01041178();
      FUN_01041164();
      FUN_0104106e();
    }
    FUN_010411a2();
    FUN_0100b594(iVar6);
    FUN_0100b260(iVar5);
    FUN_0100b1da();
    FUN_0104116e();
  }
  return iVar3;
}

