
undefined4 FUN_0101deb2(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_2 == 3) {
    uVar1 = 0xc600;
  }
  else {
    iVar2 = *(int *)(DAT_0101e15c + param_1 * 4) + 0xda;
    pin_update(iVar2,3);
    pin_update(iVar2,0x30,(uint)(param_3 << 0x1c) >> 0x18);
  }
  return uVar1;
}

