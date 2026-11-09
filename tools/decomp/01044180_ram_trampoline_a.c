
void ram_trampoline_a(void)

{
                    /* WARNING: Could not recover jumptable at 0x01044180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_01044184)();
  return;
}

