
/* WARNING: Removing unreachable block (ram,0x010315fa) */

void FUN_01031410(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(DAT_0103163c + param_1 * 4) + 0x7e;
  pin_update(iVar1,0x80,0);
  pin_update(iVar1,0x70,0x70);
  pin_update(iVar1,0xc,0xc);
  FUN_0103145e();
  FUN_01031454();
  uVar2 = param_1 == 0;
  if (!(bool)uVar2) {
    if (param_1 != 1) {
      return;
    }
    uVar2 = 0x10;
  }
  pin_update(DAT_0103164c,uVar2,0);
  return;
}

