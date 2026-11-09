
undefined4 FUN_0102ecd8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0102eccc();
  param_3 = param_3 + (int)((ulonglong)uVar4 >> 0x20) * param_1;
  iVar3 = (short)param_2 * 0x16 + param_3;
  iVar2 = (short)param_2 * 0xbc + DAT_0102f220;
  switch((int)uVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
    param_3 = iVar2 + 0x19c;
    break;
  case 4:
    param_3 = iVar2 + 0x314;
    break;
  case 5:
    param_3 = iVar2 + 0x604;
    break;
  case 6:
    param_3 = iVar2 + 0x48c;
  }
  if (*(char *)(param_3 + 0x2a) == '\x01') {
    cVar1 = *(char *)(param_3 + 0x28);
  }
  else {
    cVar1 = *(char *)(param_3 + 0x29);
  }
  if (cVar1 == '\x02') {
    iVar2 = 3;
  }
  else if (cVar1 == '\x01') {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  FUN_0102e834(*(undefined4 *)(&DAT_0102f294 + param_2 * 4),(int)uVar4 + 0x3bU & 0xffff,0x3f,
               iVar2 << 3 | 3);
  *(char *)(iVar3 + 0x15) = (char)iVar2;
  *(undefined1 *)(iVar3 + 0x14) = 3;
  return param_4;
}

