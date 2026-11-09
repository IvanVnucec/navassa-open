
void FUN_0101e80c(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  
  cVar1 = *param_1;
  cVar4 = *(char *)(*(int *)(param_1 + 0xc) + 0xa6);
  if (cVar4 != '\0') {
    cVar4 = '\x01';
  }
  FUN_0101d7c8(cVar1,0,0);
  FUN_0101d826(cVar1,0,1);
  FUN_01022c68(cVar1,0,cVar4,0,0,*DAT_0101e984,1,*(undefined1 *)(*(int *)(param_1 + 0xc) + 10),
               *(undefined1 *)(*(int *)(param_1 + 4) + 0x69),param_4);
  if (*param_1 == '\0') {
    uVar3 = (uint)(byte)param_1[0x10d];
    uVar2 = 1;
  }
  else {
    if (*param_1 != '\x01') {
      return;
    }
    uVar3 = ((uint)(byte)param_1[0x10d] << 0x1c) >> 0x18;
    uVar2 = 0x10;
  }
  pin_update(DAT_0101e978,uVar2,uVar3);
  return;
}

