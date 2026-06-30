#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014DBB0
// Address: 0x14dbb0 - 0x14df30
void sub_0014DBB0_0x14dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DBB0_0x14dbb0");
#endif

    switch (ctx->pc) {
        case 0x14dbf8u: goto label_14dbf8;
        case 0x14dc08u: goto label_14dc08;
        case 0x14dc2cu: goto label_14dc2c;
        case 0x14dc54u: goto label_14dc54;
        case 0x14dd08u: goto label_14dd08;
        case 0x14dd40u: goto label_14dd40;
        case 0x14dd6cu: goto label_14dd6c;
        case 0x14dd8cu: goto label_14dd8c;
        case 0x14ddacu: goto label_14ddac;
        case 0x14dde8u: goto label_14dde8;
        case 0x14de40u: goto label_14de40;
        case 0x14de50u: goto label_14de50;
        case 0x14de64u: goto label_14de64;
        case 0x14de7cu: goto label_14de7c;
        case 0x14dea4u: goto label_14dea4;
        case 0x14debcu: goto label_14debc;
        default: break;
    }

    ctx->pc = 0x14dbb0u;

    // 0x14dbb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x14dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14dbb4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14dbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14dbb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14dbbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14dbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14dbc0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14dbc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14dbc8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x14dbc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14dbd0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14dbd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14dbd8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14dbd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14dbe0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x14dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x14dbe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dbe8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14dbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbec: 0x24841fa0  addiu       $a0, $a0, 0x1FA0
    ctx->pc = 0x14dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
    // 0x14dbf0: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14DBF0u;
    SET_GPR_U32(ctx, 31, 0x14DBF8u);
    ctx->pc = 0x14DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DBF0u;
            // 0x14dbf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBF8u; }
        if (ctx->pc != 0x14DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DBF8u; }
        if (ctx->pc != 0x14DBF8u) { return; }
    }
    ctx->pc = 0x14DBF8u;
label_14dbf8:
    // 0x14dbf8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14dbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14dbfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dc00: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14DC00u;
    SET_GPR_U32(ctx, 31, 0x14DC08u);
    ctx->pc = 0x14DC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC00u;
            // 0x14dc04: 0x24a55520  addiu       $a1, $a1, 0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC08u; }
        if (ctx->pc != 0x14DC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC08u; }
        if (ctx->pc != 0x14DC08u) { return; }
    }
    ctx->pc = 0x14DC08u;
label_14dc08:
    // 0x14dc08: 0x8eb20008  lw          $s2, 0x8($s5)
    ctx->pc = 0x14dc08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14dc0c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14dc10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dc14: 0xac605774  sw          $zero, 0x5774($v1)
    ctx->pc = 0x14dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 0));
    // 0x14dc18: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14dc1c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x14dc1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14dc20: 0x102000b7  beqz        $at, . + 4 + (0xB7 << 2)
    ctx->pc = 0x14DC20u;
    {
        const bool branch_taken_0x14dc20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc20) {
            ctx->pc = 0x14DF00u;
            goto label_14df00;
        }
    }
    ctx->pc = 0x14DC28u;
    // 0x14dc28: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_14dc2c:
    // 0x14dc2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dc30: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DC30u;
    {
        const bool branch_taken_0x14dc30 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC30u;
            // 0x14dc34: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc30) {
            ctx->pc = 0x14DC48u;
            goto label_14dc48;
        }
    }
    ctx->pc = 0x14DC38u;
    // 0x14dc38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14dc3c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x14dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x14dc40: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x14dc40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14dc44: 0x0  nop
    ctx->pc = 0x14dc44u;
    // NOP
label_14dc48:
    // 0x14dc48: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x14dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14dc4c: 0xc0535e0  jal         func_14D780
    ctx->pc = 0x14DC4Cu;
    SET_GPR_U32(ctx, 31, 0x14DC54u);
    ctx->pc = 0x14DC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DC4Cu;
            // 0x14dc50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D780u;
    if (runtime->hasFunction(0x14D780u)) {
        auto targetFn = runtime->lookupFunction(0x14D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC54u; }
        if (ctx->pc != 0x14DC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D780_0x14d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DC54u; }
        if (ctx->pc != 0x14DC54u) { return; }
    }
    ctx->pc = 0x14DC54u;
label_14dc54:
    // 0x14dc54: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x14DC54u;
    {
        const bool branch_taken_0x14dc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dc54) {
            ctx->pc = 0x14DEC0u;
            goto label_14dec0;
        }
    }
    ctx->pc = 0x14DC5Cu;
    // 0x14dc5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dc60: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14dc64: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x14dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
    // 0x14dc68: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x14dc68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x14dc6c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x14dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x14dc70: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x14dc70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x14dc74: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x14dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
    // 0x14dc78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dc7c: 0x8e490018  lw          $t1, 0x18($s2)
    ctx->pc = 0x14dc7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x14dc80: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14dc84: 0x8c485768  lw          $t0, 0x5768($v0)
    ctx->pc = 0x14dc84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
    // 0x14dc88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14dc8c: 0xace95760  sw          $t1, 0x5760($a3)
    ctx->pc = 0x14dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22368), GPR_U32(ctx, 9));
    // 0x14dc90: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x14dc90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x14dc94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dc98: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x14dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x14dc9c: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x14dc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x14dca0: 0xaca8576c  sw          $t0, 0x576C($a1)
    ctx->pc = 0x14dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22380), GPR_U32(ctx, 8));
    // 0x14dca4: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x14dca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x14dca8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14dca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14dcac: 0xacc5577c  sw          $a1, 0x577C($a2)
    ctx->pc = 0x14dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22396), GPR_U32(ctx, 5));
    // 0x14dcb0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x14dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14dcb4: 0xac855768  sw          $a1, 0x5768($a0)
    ctx->pc = 0x14dcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22376), GPR_U32(ctx, 5));
    // 0x14dcb8: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x14dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x14dcbc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14dcc0: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14dcc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14dcc4: 0xac715780  sw          $s1, 0x5780($v1)
    ctx->pc = 0x14dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 17));
    // 0x14dcc8: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x14dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14dccc: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x14dcd0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14dcd4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x14DCD4u;
    {
        const bool branch_taken_0x14dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DCD4u;
            // 0x14dcd8: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcd4) {
            ctx->pc = 0x14DD98u;
            goto label_14dd98;
        }
    }
    ctx->pc = 0x14DCDCu;
    // 0x14dcdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dce0: 0x8c4257e4  lw          $v0, 0x57E4($v0)
    ctx->pc = 0x14dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22500)));
    // 0x14dce4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DCE4u;
    {
        const bool branch_taken_0x14dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dce4) {
            ctx->pc = 0x14DD18u;
            goto label_14dd18;
        }
    }
    ctx->pc = 0x14DCECu;
    // 0x14dcec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dcf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dcf4: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x14dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
    // 0x14dcf8: 0x1044001f  beq         $v0, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14DCF8u;
    {
        const bool branch_taken_0x14dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14dcf8) {
            ctx->pc = 0x14DD78u;
            goto label_14dd78;
        }
    }
    ctx->pc = 0x14DD00u;
    // 0x14dd00: 0xc057250  jal         func_15C940
    ctx->pc = 0x14DD00u;
    SET_GPR_U32(ctx, 31, 0x14DD08u);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD08u; }
        if (ctx->pc != 0x14DD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD08u; }
        if (ctx->pc != 0x14DD08u) { return; }
    }
    ctx->pc = 0x14DD08u;
label_14dd08:
    // 0x14dd08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14dd0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dd10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14DD10u;
    {
        const bool branch_taken_0x14dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD10u;
            // 0x14dd14: 0xac435848  sw          $v1, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd10) {
            ctx->pc = 0x14DD78u;
            goto label_14dd78;
        }
    }
    ctx->pc = 0x14DD18u;
label_14dd18:
    // 0x14dd18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dd1c: 0x8c4257e0  lw          $v0, 0x57E0($v0)
    ctx->pc = 0x14dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22496)));
    // 0x14dd20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14DD20u;
    {
        const bool branch_taken_0x14dd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd20) {
            ctx->pc = 0x14DD50u;
            goto label_14dd50;
        }
    }
    ctx->pc = 0x14DD28u;
    // 0x14dd28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dd2c: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x14dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
    // 0x14dd30: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14DD30u;
    {
        const bool branch_taken_0x14dd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd30) {
            ctx->pc = 0x14DD78u;
            goto label_14dd78;
        }
    }
    ctx->pc = 0x14DD38u;
    // 0x14dd38: 0xc057250  jal         func_15C940
    ctx->pc = 0x14DD38u;
    SET_GPR_U32(ctx, 31, 0x14DD40u);
    ctx->pc = 0x14DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD38u;
            // 0x14dd3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD40u; }
        if (ctx->pc != 0x14DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD40u; }
        if (ctx->pc != 0x14DD40u) { return; }
    }
    ctx->pc = 0x14DD40u;
label_14dd40:
    // 0x14dd40: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dd44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14DD44u;
    {
        const bool branch_taken_0x14dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD44u;
            // 0x14dd48: 0xac405848  sw          $zero, 0x5848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dd44) {
            ctx->pc = 0x14DD78u;
            goto label_14dd78;
        }
    }
    ctx->pc = 0x14DD4Cu;
    // 0x14dd4c: 0x0  nop
    ctx->pc = 0x14dd4cu;
    // NOP
label_14dd50:
    // 0x14dd50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dd54: 0x8c425848  lw          $v0, 0x5848($v0)
    ctx->pc = 0x14dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22600)));
    // 0x14dd58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dd5c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DD5Cu;
    {
        const bool branch_taken_0x14dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14dd5c) {
            ctx->pc = 0x14DD78u;
            goto label_14dd78;
        }
    }
    ctx->pc = 0x14DD64u;
    // 0x14dd64: 0xc057250  jal         func_15C940
    ctx->pc = 0x14DD64u;
    SET_GPR_U32(ctx, 31, 0x14DD6Cu);
    ctx->pc = 0x15C940u;
    if (runtime->hasFunction(0x15C940u)) {
        auto targetFn = runtime->lookupFunction(0x15C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD6Cu; }
        if (ctx->pc != 0x14DD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C940_0x15c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD6Cu; }
        if (ctx->pc != 0x14DD6Cu) { return; }
    }
    ctx->pc = 0x14DD6Cu;
label_14dd6c:
    // 0x14dd6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dd70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dd74: 0xac435848  sw          $v1, 0x5848($v0)
    ctx->pc = 0x14dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22600), GPR_U32(ctx, 3));
label_14dd78:
    // 0x14dd78: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x14dd78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14dd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14dd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14dd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd84: 0xc053684  jal         func_14DA10
    ctx->pc = 0x14DD84u;
    SET_GPR_U32(ctx, 31, 0x14DD8Cu);
    ctx->pc = 0x14DD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DD84u;
            // 0x14dd88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DA10u;
    if (runtime->hasFunction(0x14DA10u)) {
        auto targetFn = runtime->lookupFunction(0x14DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD8Cu; }
        if (ctx->pc != 0x14DD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014DA10_0x14da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DD8Cu; }
        if (ctx->pc != 0x14DD8Cu) { return; }
    }
    ctx->pc = 0x14DD8Cu;
label_14dd8c:
    // 0x14dd8c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x14DD8Cu;
    {
        const bool branch_taken_0x14dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd8c) {
            ctx->pc = 0x14DEC0u;
            goto label_14dec0;
        }
    }
    ctx->pc = 0x14DD94u;
    // 0x14dd94: 0x0  nop
    ctx->pc = 0x14dd94u;
    // NOP
label_14dd98:
    // 0x14dd98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14dd9c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14dda0: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x14dda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
    // 0x14dda4: 0xc05056c  jal         func_1415B0
    ctx->pc = 0x14DDA4u;
    SET_GPR_U32(ctx, 31, 0x14DDACu);
    ctx->pc = 0x14DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDA4u;
            // 0x14dda8: 0x24845760  addiu       $a0, $a0, 0x5760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1415B0u;
    if (runtime->hasFunction(0x1415B0u)) {
        auto targetFn = runtime->lookupFunction(0x1415B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDACu; }
        if (ctx->pc != 0x14DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001415B0_0x1415b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDACu; }
        if (ctx->pc != 0x14DDACu) { return; }
    }
    ctx->pc = 0x14DDACu;
label_14ddac:
    // 0x14ddac: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x14DDACu;
    {
        const bool branch_taken_0x14ddac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ddac) {
            ctx->pc = 0x14DEC0u;
            goto label_14dec0;
        }
    }
    ctx->pc = 0x14DDB4u;
    // 0x14ddb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ddb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14ddbc: 0x8c445828  lw          $a0, 0x5828($v0)
    ctx->pc = 0x14ddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
    // 0x14ddc0: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x14ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x14ddc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ddc8: 0x8c4254d8  lw          $v0, 0x54D8($v0)
    ctx->pc = 0x14ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21720)));
    // 0x14ddcc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14ddd0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x14ddd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x14ddd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DDD4u;
    {
        const bool branch_taken_0x14ddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDD4u;
            // 0x14ddd8: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ddd4) {
            ctx->pc = 0x14DDE8u;
            goto label_14dde8;
        }
    }
    ctx->pc = 0x14DDDCu;
    // 0x14dddc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x14dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x14dde0: 0xc0534dc  jal         func_14D370
    ctx->pc = 0x14DDE0u;
    SET_GPR_U32(ctx, 31, 0x14DDE8u);
    ctx->pc = 0x14DDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DDE0u;
            // 0x14dde4: 0x24841fa0  addiu       $a0, $a0, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D370u;
    if (runtime->hasFunction(0x14D370u)) {
        auto targetFn = runtime->lookupFunction(0x14D370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDE8u; }
        if (ctx->pc != 0x14DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D370_0x14d370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DDE8u; }
        if (ctx->pc != 0x14DDE8u) { return; }
    }
    ctx->pc = 0x14DDE8u;
label_14dde8:
    // 0x14dde8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ddec: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x14ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
    // 0x14ddf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ddf4: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x14ddf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x14ddf8: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14DDF8u;
    {
        const bool branch_taken_0x14ddf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14ddf8) {
            ctx->pc = 0x14DE70u;
            goto label_14de70;
        }
    }
    ctx->pc = 0x14DE00u;
    // 0x14de00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14de04: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14DE04u;
    {
        const bool branch_taken_0x14de04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14de04) {
            ctx->pc = 0x14DE58u;
            goto label_14de58;
        }
    }
    ctx->pc = 0x14DE0Cu;
    // 0x14de0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14de10: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14DE10u;
    {
        const bool branch_taken_0x14de10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14de10) {
            ctx->pc = 0x14DE48u;
            goto label_14de48;
        }
    }
    ctx->pc = 0x14DE18u;
    // 0x14de18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14de1c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DE1Cu;
    {
        const bool branch_taken_0x14de1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14de1c) {
            ctx->pc = 0x14DE38u;
            goto label_14de38;
        }
    }
    ctx->pc = 0x14DE24u;
    // 0x14de24: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x14DE24u;
    {
        const bool branch_taken_0x14de24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de24) {
            ctx->pc = 0x14DE80u;
            goto label_14de80;
        }
    }
    ctx->pc = 0x14DE2Cu;
    // 0x14de2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14DE2Cu;
    {
        const bool branch_taken_0x14de2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de2c) {
            ctx->pc = 0x14DE80u;
            goto label_14de80;
        }
    }
    ctx->pc = 0x14DE34u;
    // 0x14de34: 0x0  nop
    ctx->pc = 0x14de34u;
    // NOP
label_14de38:
    // 0x14de38: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14DE38u;
    SET_GPR_U32(ctx, 31, 0x14DE40u);
    ctx->pc = 0x14DE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE38u;
            // 0x14de3c: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE40u; }
        if (ctx->pc != 0x14DE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE40u; }
        if (ctx->pc != 0x14DE40u) { return; }
    }
    ctx->pc = 0x14DE40u;
label_14de40:
    // 0x14de40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14DE40u;
    {
        const bool branch_taken_0x14de40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de40) {
            ctx->pc = 0x14DE80u;
            goto label_14de80;
        }
    }
    ctx->pc = 0x14DE48u;
label_14de48:
    // 0x14de48: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14DE48u;
    SET_GPR_U32(ctx, 31, 0x14DE50u);
    ctx->pc = 0x14DE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE48u;
            // 0x14de4c: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE50u; }
        if (ctx->pc != 0x14DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE50u; }
        if (ctx->pc != 0x14DE50u) { return; }
    }
    ctx->pc = 0x14DE50u;
label_14de50:
    // 0x14de50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14DE50u;
    {
        const bool branch_taken_0x14de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de50) {
            ctx->pc = 0x14DE80u;
            goto label_14de80;
        }
    }
    ctx->pc = 0x14DE58u;
label_14de58:
    // 0x14de58: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x14de58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x14de5c: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14DE5Cu;
    SET_GPR_U32(ctx, 31, 0x14DE64u);
    ctx->pc = 0x14DE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE5Cu;
            // 0x14de60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE64u; }
        if (ctx->pc != 0x14DE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE64u; }
        if (ctx->pc != 0x14DE64u) { return; }
    }
    ctx->pc = 0x14DE64u;
label_14de64:
    // 0x14de64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14DE64u;
    {
        const bool branch_taken_0x14de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de64) {
            ctx->pc = 0x14DE80u;
            goto label_14de80;
        }
    }
    ctx->pc = 0x14DE6Cu;
    // 0x14de6c: 0x0  nop
    ctx->pc = 0x14de6cu;
    // NOP
label_14de70:
    // 0x14de70: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x14de70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x14de74: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x14DE74u;
    SET_GPR_U32(ctx, 31, 0x14DE7Cu);
    ctx->pc = 0x14DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE74u;
            // 0x14de78: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE7Cu; }
        if (ctx->pc != 0x14DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE7Cu; }
        if (ctx->pc != 0x14DE7Cu) { return; }
    }
    ctx->pc = 0x14DE7Cu;
label_14de7c:
    // 0x14de7c: 0x0  nop
    ctx->pc = 0x14de7cu;
    // NOP
label_14de80:
    // 0x14de80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14de84: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x14de84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x14de88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14de8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DE8Cu;
    {
        const bool branch_taken_0x14de8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de8c) {
            ctx->pc = 0x14DEB0u;
            goto label_14deb0;
        }
    }
    ctx->pc = 0x14DE94u;
    // 0x14de94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14de94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14de98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de9c: 0xc054390  jal         func_150E40
    ctx->pc = 0x14DE9Cu;
    SET_GPR_U32(ctx, 31, 0x14DEA4u);
    ctx->pc = 0x14DEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE9Cu;
            // 0x14dea0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150E40u;
    if (runtime->hasFunction(0x150E40u)) {
        auto targetFn = runtime->lookupFunction(0x150E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DEA4u; }
        if (ctx->pc != 0x14DEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150E40_0x150e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DEA4u; }
        if (ctx->pc != 0x14DEA4u) { return; }
    }
    ctx->pc = 0x14DEA4u;
label_14dea4:
    // 0x14dea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dea8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DEA8u;
    {
        const bool branch_taken_0x14dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEA8u;
            // 0x14deac: 0xaf8381a4  sw          $v1, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dea8) {
            ctx->pc = 0x14DEC0u;
            goto label_14dec0;
        }
    }
    ctx->pc = 0x14DEB0u;
label_14deb0:
    // 0x14deb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14deb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14deb4: 0xc053978  jal         func_14E5E0
    ctx->pc = 0x14DEB4u;
    SET_GPR_U32(ctx, 31, 0x14DEBCu);
    ctx->pc = 0x14DEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEB4u;
            // 0x14deb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E5E0u;
    if (runtime->hasFunction(0x14E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x14E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DEBCu; }
        if (ctx->pc != 0x14DEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E5E0_0x14e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DEBCu; }
        if (ctx->pc != 0x14DEBCu) { return; }
    }
    ctx->pc = 0x14DEBCu;
label_14debc:
    // 0x14debc: 0x0  nop
    ctx->pc = 0x14debcu;
    // NOP
label_14dec0:
    // 0x14dec0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14dec4: 0x8c63579c  lw          $v1, 0x579C($v1)
    ctx->pc = 0x14dec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22428)));
    // 0x14dec8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DEC8u;
    {
        const bool branch_taken_0x14dec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dec8) {
            ctx->pc = 0x14DEE8u;
            goto label_14dee8;
        }
    }
    ctx->pc = 0x14DED0u;
    // 0x14ded0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x14ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x14ded4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14ded8: 0x8c845774  lw          $a0, 0x5774($a0)
    ctx->pc = 0x14ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22388)));
    // 0x14dedc: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x14dedcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x14dee0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14dee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14dee4: 0xac645774  sw          $a0, 0x5774($v1)
    ctx->pc = 0x14dee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 4));
label_14dee8:
    // 0x14dee8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14deec: 0x8c645774  lw          $a0, 0x5774($v1)
    ctx->pc = 0x14deecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22388)));
    // 0x14def0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14def4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x14def4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14def8: 0x5460ff4c  bnel        $v1, $zero, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x14DEF8u;
    {
        const bool branch_taken_0x14def8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14def8) {
            ctx->pc = 0x14DEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14DEF8u;
            // 0x14defc: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14DC2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14dc2c;
        }
    }
    ctx->pc = 0x14DF00u;
label_14df00:
    // 0x14df00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14df00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14df04: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14df04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14df08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14df08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14df0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14df0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14df10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14df10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14df14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14df14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14df18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14df18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14df1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14df1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14df20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14df20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14df24: 0x3e00008  jr          $ra
    ctx->pc = 0x14DF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF24u;
            // 0x14df28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14DF2Cu;
    // 0x14df2c: 0x0  nop
    ctx->pc = 0x14df2cu;
    // NOP
}
