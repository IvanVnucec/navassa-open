
longlong FUN_0100e934(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = DAT_0100ee14;
  *(undefined2 *)(DAT_0100ee14 + param_1 * 0x24c) = 1;
  uVar5 = 0;
  iVar4 = iVar4 + param_1 * 0x24c;
  do {
    iVar3 = iVar4 + uVar5 * 2;
    FUN_0100ee44(iVar3,1,uVar5 & 0xff,iVar3 + 0xc2,1,0,param_4);
    puVar1 = DAT_0100ee30;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  uVar5 = 0;
  do {
    uVar2 = FUN_010242e8(*(undefined4 *)(iVar4 + uVar5 * 4 + 0x144));
    *puVar1 = uVar2;
    uVar6 = 1;
    FUN_0100ee44(1,1,uVar5 & 0xff,puVar1,1,1,param_4);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  return (ulonglong)uVar6 << 0x20;
}

