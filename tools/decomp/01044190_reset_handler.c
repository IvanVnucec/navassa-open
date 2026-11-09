
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * reset_handler(void)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  pcVar1 = DAT_01044214;
  *DAT_0104420c = DAT_01044210;
  init_write_boot_byte(pcVar1 + 1);
  if (pcVar1[1] == '\t') {
    *pcVar1 = '\x03';
  }
  init_sequence();
  ram_trampoline_a();
  pin_init();
  if (*pcVar1 == '\0') {
    ram_trampoline_b();
    iVar4 = check_ram_words_equal();
    if (iVar4 == 0) {
      periph_init_e(2);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  *pcVar1 = '\x02';
  set_vtor_flash();
  *DAT_01044218 = 0x70000;
  fpu_faults_enable();
  pbVar2 = DAT_01044220;
  *DAT_01044220 = *DAT_0104421c & 1;
  puVar3 = _DAT_01044228;
  if (*pbVar2 != 0) {
    *DAT_01044224 = s_cstartup_m_c_0104422b + 1;
    *puVar3 = 0x99;
    boot_msg(1,0xea02,3);
  }
  FUN_01044298();
  FUN_010359ec(0);
  piVar5 = (int *)thunk_FUN_010442c4();
  piVar7 = (int *)((int)&DAT_010442bc + DAT_010442bc);
  piVar6 = (int *)((int)&DAT_010442b8 + DAT_010442b8);
  while (piVar6 != piVar7) {
    piVar5 = (int *)(*(code *)((int)piVar6 + *piVar6))(piVar6 + 1);
    piVar6 = piVar5;
  }
  return piVar5;
}

