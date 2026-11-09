
undefined4 FUN_0103476a(byte *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  
  bVar3 = *param_2;
  *param_2 = bVar3 & 0xef;
  *param_2 = bVar3 & 0xef | param_1[0x14] << 4;
  param_2[1] = 0;
  bVar3 = *param_1 | param_1[3] << 6 | param_1[4] << 7;
  param_2[1] = bVar3;
  FUN_01034800();
  bVar3 = bVar3 & 0xc0;
  uVar4 = FUN_01034810();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  *(byte *)(iVar2 + 2) = bVar3;
  *(byte *)(iVar2 + 2) = *(byte *)(iVar2 + 2) | *(char *)(iVar1 + 0x11) << 5;
  bVar3 = *(byte *)(iVar2 + 3) & 0xf;
  *(byte *)(iVar2 + 3) = bVar3;
  *(byte *)(iVar2 + 3) =
       bVar3 | *(char *)(iVar1 + 0x16) << 5 | *(char *)(iVar1 + 0x15) << 4 |
               *(char *)(iVar1 + 0x17) << 6 | *(char *)(iVar1 + 0x18) << 7;
  bVar3 = *(byte *)(iVar2 + 5) & 0xfe;
  *(byte *)(iVar2 + 5) = bVar3;
  *(byte *)(iVar2 + 5) = bVar3 | *(byte *)(iVar1 + 2);
  bVar3 = *(byte *)(iVar2 + 4) & 0xf0;
  *(byte *)(iVar2 + 4) = bVar3;
  *(byte *)(iVar2 + 4) = bVar3 | *(char *)(iVar1 + 1) - 1U;
  return 0;
}

