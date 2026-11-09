
undefined4 FUN_010359ec(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = DAT_01035c48;
  puVar1 = DAT_01035c44;
  *DAT_01035c40 = *DAT_01035c40 | 0x1000000;
  *DAT_01035c4c = *DAT_01035c4c | 1;
  thunk_EXT_FUN_200366ec();
  iVar3 = thunk_EXT_FUN_20036634();
  if (iVar3 != 0) {
    periph_init_e(4);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035c06(0xc9);
  }
  thunk_EXT_FUN_20037054();
  thunk_EXT_FUN_20036740();
  thunk_EXT_FUN_20036eec();
  FUN_010184a8();
  iVar3 = thunk_EXT_FUN_20036134();
  if (iVar3 != 0) {
    periph_init_e(3);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035c06(0xe0);
  }
  iVar3 = thunk_EXT_FUN_200361da();
  if (iVar3 != 0) {
    periph_init_e(3);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035c06(0xe8);
  }
  iVar3 = thunk_EXT_FUN_20037148();
  if (iVar3 != 0) {
    periph_init_e(5);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035c06(0xf5);
  }
  thunk_EXT_FUN_200371d8();
  FUN_010097ec();
  iVar3 = DAT_01035c50;
  iVar4 = FUN_010182c8(DAT_01035c50);
  if (iVar4 != 0) {
    periph_init_e(7);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035bfa(0x10a);
  }
  FUN_0102e6fe(0,1);
  FUN_0102e81c(0,1);
  iVar4 = FUN_0102f6b6();
  if (iVar4 != 0) {
    periph_init_e(0xd);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035bfa(299);
  }
  FUN_01009b62();
  iVar4 = FUN_010181f6(1,1);
  if (iVar4 != 0) {
    periph_init_e(6);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035bfa(0x138);
  }
  pin_update(DAT_01035c54,0x10,0);
  FUN_010198e0(6);
  FUN_0101852c();
  iVar4 = FUN_0102f6f0();
  if (iVar4 != 0) {
    periph_init_e(0xe);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035bfa(0x148);
  }
  FUN_0102e828(0,1);
  FUN_0102e71a(0,1);
  iVar4 = DAT_01035c58;
  *DAT_01035c5c = *(undefined4 *)(DAT_01035c58 + 0x14);
  FUN_0100b074(1,*(undefined4 *)(iVar4 + 0x10));
  thunk_EXT_FUN_200371a8();
  thunk_EXT_FUN_20035d58();
  thunk_EXT_FUN_200370a0();
  iVar4 = thunk_EXT_FUN_20034534();
  if (iVar4 != 0) {
    *puVar2 = s_main_c_01035c7c;
    *puVar1 = 0x16b;
    boot_msg(1,iVar4,1);
  }
  thunk_EXT_FUN_200344e0();
  thunk_EXT_FUN_20037114();
  thunk_EXT_FUN_20037fb4();
  *DAT_01035c60 = 0;
  FUN_010360a0();
  iVar4 = FUN_0103ada4();
  if (iVar4 != 0) {
    *puVar2 = s_main_c_01035c7c;
    *puVar1 = 0x181;
    boot_msg(1,iVar4,3);
  }
  FUN_01001a7e(*(byte *)(iVar3 + 0x22) & 0xf,0);
  if (*(char *)(iVar3 + 0x77d) != '\0') {
    FUN_01002694();
    FUN_010026c2();
  }
  FUN_0102b55e();
  FUN_010289a0();
  FUN_01023a44(*DAT_01035c64);
  FUN_01021f44();
  FUN_01036ffa();
  FUN_01014728();
  iVar3 = FUN_01019d2c((char)*(undefined2 *)(iVar3 + 0x22));
  if (iVar3 != 0) {
    periph_init_e(8);
    *puVar2 = s_main_c_01035c7c;
    FUN_01035c06(0x1af);
  }
  pin_update(DAT_01035c68,2,2);
  pin_update(DAT_01035c6c,2,2);
  FUN_0101b232();
  return 0;
}

