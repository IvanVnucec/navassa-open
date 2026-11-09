
undefined4 FUN_01008748(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(*(int *)(DAT_010091f8 + param_1 * 4) + 0xd0);
  iVar2 = param_1 * 0x60 + DAT_010091f0;
  *(char *)(iVar2 + 0x19) = (char)(1 << (*DAT_010091f4 & 7));
  *(char *)(iVar2 + 0x18) = (char)(1 << (bVar1 & 3));
  return (int)(((ulonglong)*(uint *)(DAT_01009360 + 8) / (ulonglong)*(byte *)(iVar2 + 0x18)) /
              (ulonglong)*(byte *)(iVar2 + 0x19));
}

