
void FUN_0100b5ac(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = (undefined1)param_1[3];
  if (uVar3 <= uVar4) {
    mailbox_xfer(0x3e,*param_1);
    uVar5 = FUN_0100b76c();
    puVar1 = DAT_0100b7bc;
    *(undefined4 *)uVar5 = (int)((ulonglong)uVar5 >> 0x20);
    *puVar1 = 0x50;
    boot_msg(1,0xcd0e,3);
  }
  *(undefined4 *)(*param_1 + uVar4 * 4) = param_2;
  if (uVar4 + 1 == uVar3) {
    uVar2 = 1;
  }
  param_1[2] = uVar4 + 1;
  *(undefined1 *)(param_1 + 3) = uVar2;
  return;
}

