
void FUN_0103072e(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1 & 3) * 0x36;
  if (param_1 < 4) {
    iVar1 = DAT_01030e20 + iVar1;
  }
  else {
    iVar1 = DAT_01030e20 + 0xd8 + iVar1;
  }
  iVar2 = (param_2 & 3) * 0x36;
  if (param_2 < 4) {
    iVar2 = DAT_01030e20 + iVar2;
  }
  else {
    iVar2 = DAT_01030e20 + 0xd8 + iVar2;
  }
  FUN_0101204c(iVar2,iVar1,0x36,param_4);
  return;
}

