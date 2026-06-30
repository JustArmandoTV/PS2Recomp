#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019ABE8
// Address: 0x19abe8 - 0x19ad78
void sub_0019ABE8_0x19abe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ABE8_0x19abe8");
#endif

    switch (ctx->pc) {
        case 0x19ac5cu: goto label_19ac5c;
        case 0x19aca8u: goto label_19aca8;
        case 0x19acc8u: goto label_19acc8;
        case 0x19ad24u: goto label_19ad24;
        default: break;
    }

    ctx->pc = 0x19abe8u;

    // 0x19abe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19abe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19abec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19abf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19abf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19abf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19abf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19abf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19abfc: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19ac00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19ac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19ac04: 0x2612051c  addiu       $s2, $s0, 0x51C
    ctx->pc = 0x19ac04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
    // 0x19ac08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x19ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19ac0c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ac10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x19ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x19ac14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19ac14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19ac18: 0x260304f8  addiu       $v1, $s0, 0x4F8
    ctx->pc = 0x19ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
    // 0x19ac1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ac20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ac24: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19AC24u;
    {
        const bool branch_taken_0x19ac24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC24u;
            // 0x19ac28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac24) {
            ctx->pc = 0x19AC60u;
            goto label_19ac60;
        }
    }
    ctx->pc = 0x19AC2Cu;
    // 0x19ac2c: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x19ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19ac30: 0x54c5000d  bnel        $a2, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x19AC30u;
    {
        const bool branch_taken_0x19ac30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x19ac30) {
            ctx->pc = 0x19AC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC30u;
            // 0x19ac34: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AC68u;
            goto label_19ac68;
        }
    }
    ctx->pc = 0x19AC38u;
    // 0x19ac38: 0x8c74001c  lw          $s4, 0x1C($v1)
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x19ac3c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x19ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x19ac40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19ac44: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x19ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x19ac48: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC48u;
    {
        const bool branch_taken_0x19ac48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x19ac48) {
            ctx->pc = 0x19AC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC48u;
            // 0x19ac4c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AC64u;
            goto label_19ac64;
        }
    }
    ctx->pc = 0x19AC50u;
    // 0x19ac50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac54: 0xc06839c  jal         func_1A0E70
    ctx->pc = 0x19AC54u;
    SET_GPR_U32(ctx, 31, 0x19AC5Cu);
    ctx->pc = 0x19AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC54u;
            // 0x19ac58: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E70u;
    if (runtime->hasFunction(0x1A0E70u)) {
        auto targetFn = runtime->lookupFunction(0x1A0E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC5Cu; }
        if (ctx->pc != 0x19AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0E70_0x1a0e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC5Cu; }
        if (ctx->pc != 0x19AC5Cu) { return; }
    }
    ctx->pc = 0x19AC5Cu;
label_19ac5c:
    // 0x19ac5c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x19ac5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ac60:
    // 0x19ac60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19ac64:
    // 0x19ac64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ac68:
    // 0x19ac68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19ac68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac6c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19AC6Cu;
    {
        const bool branch_taken_0x19ac6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC6Cu;
            // 0x19ac70: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac6c) {
            ctx->pc = 0x19ACACu;
            goto label_19acac;
        }
    }
    ctx->pc = 0x19AC74u;
    // 0x19ac74: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x19ac78: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19AC78u;
    {
        const bool branch_taken_0x19ac78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC78u;
            // 0x19ac7c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac78) {
            ctx->pc = 0x19ACB0u;
            goto label_19acb0;
        }
    }
    ctx->pc = 0x19AC80u;
    // 0x19ac80: 0x8e53001c  lw          $s3, 0x1C($s2)
    ctx->pc = 0x19ac80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x19ac84: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x19ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x19ac88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19ac8c: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x19ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x19ac90: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19AC90u;
    {
        const bool branch_taken_0x19ac90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19ac90) {
            ctx->pc = 0x19AC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC90u;
            // 0x19ac94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ACB4u;
            goto label_19acb4;
        }
    }
    ctx->pc = 0x19AC98u;
    // 0x19ac98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aca0: 0xc06839c  jal         func_1A0E70
    ctx->pc = 0x19ACA0u;
    SET_GPR_U32(ctx, 31, 0x19ACA8u);
    ctx->pc = 0x19ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACA0u;
            // 0x19aca4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E70u;
    if (runtime->hasFunction(0x1A0E70u)) {
        auto targetFn = runtime->lookupFunction(0x1A0E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACA8u; }
        if (ctx->pc != 0x19ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0E70_0x1a0e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACA8u; }
        if (ctx->pc != 0x19ACA8u) { return; }
    }
    ctx->pc = 0x19ACA8u;
label_19aca8:
    // 0x19aca8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x19aca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19acac:
    // 0x19acac: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x19acacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19acb0:
    // 0x19acb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19acb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19acb4:
    // 0x19acb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acb8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x19acb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19acbc: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x19acbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x19acc0: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x19acc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x19acc4: 0x0  nop
    ctx->pc = 0x19acc4u;
    // NOP
label_19acc8:
    // 0x19acc8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x19acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x19accc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19acccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19acd0: 0x54890009  bnel        $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19ACD0u;
    {
        const bool branch_taken_0x19acd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        if (branch_taken_0x19acd0) {
            ctx->pc = 0x19ACD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACD0u;
            // 0x19acd4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ACF8u;
            goto label_19acf8;
        }
    }
    ctx->pc = 0x19ACD8u;
    // 0x19acd8: 0x50b40007  beql        $a1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x19ACD8u;
    {
        const bool branch_taken_0x19acd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x19acd8) {
            ctx->pc = 0x19ACDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACD8u;
            // 0x19acdc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ACF8u;
            goto label_19acf8;
        }
    }
    ctx->pc = 0x19ACE0u;
    // 0x19ace0: 0x10b30004  beq         $a1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19ACE0u;
    {
        const bool branch_taken_0x19ace0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x19ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACE0u;
            // 0x19ace4: 0xe61821  addu        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ace0) {
            ctx->pc = 0x19ACF4u;
            goto label_19acf4;
        }
    }
    ctx->pc = 0x19ACE8u;
    // 0x19ace8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19acec: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x19acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x19acf0: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x19acf0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_19acf4:
    // 0x19acf4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_19acf8:
    // 0x19acf8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x19acf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19acfc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19ACFCu;
    {
        const bool branch_taken_0x19acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACFCu;
            // 0x19ad00: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acfc) {
            ctx->pc = 0x19ACC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19acc8;
        }
    }
    ctx->pc = 0x19AD04u;
    // 0x19ad04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ad08: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AD08u;
    {
        const bool branch_taken_0x19ad08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x19AD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD08u;
            // 0x19ad0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad08) {
            ctx->pc = 0x19AD18u;
            goto label_19ad18;
        }
    }
    ctx->pc = 0x19AD10u;
    // 0x19ad10: 0x15420004  bne         $t2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AD10u;
    {
        const bool branch_taken_0x19ad10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ad10) {
            ctx->pc = 0x19AD24u;
            goto label_19ad24;
        }
    }
    ctx->pc = 0x19AD18u;
label_19ad18:
    // 0x19ad18: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x19ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x19ad1c: 0xc067522  jal         func_19D488
    ctx->pc = 0x19AD1Cu;
    SET_GPR_U32(ctx, 31, 0x19AD24u);
    ctx->pc = 0x19AD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD1Cu;
            // 0x19ad20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D488u;
    if (runtime->hasFunction(0x19D488u)) {
        auto targetFn = runtime->lookupFunction(0x19D488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD24u; }
        if (ctx->pc != 0x19AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D488_0x19d488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD24u; }
        if (ctx->pc != 0x19AD24u) { return; }
    }
    ctx->pc = 0x19AD24u;
label_19ad24:
    // 0x19ad24: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x19AD24u;
    {
        const bool branch_taken_0x19ad24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ad24) {
            ctx->pc = 0x19AD28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD24u;
            // 0x19ad28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AD58u;
            goto label_19ad58;
        }
    }
    ctx->pc = 0x19AD2Cu;
    // 0x19ad2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ad30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ad34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ad34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ad38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ad38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19ad3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ad40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19ad40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ad44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19ad44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x19ad48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19ad4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19ad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ad50: 0x80673c8  j           func_19CF20
    ctx->pc = 0x19AD50u;
    ctx->pc = 0x19AD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD50u;
            // 0x19ad54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF20u;
    if (runtime->hasFunction(0x19CF20u)) {
        auto targetFn = runtime->lookupFunction(0x19CF20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0019CF20_0x19cf20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19AD58u;
label_19ad58:
    // 0x19ad58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ad58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ad5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19ad5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ad60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19ad60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ad64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x19ad64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x19ad68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19ad6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19ad6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ad70: 0x3e00008  jr          $ra
    ctx->pc = 0x19AD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD70u;
            // 0x19ad74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AD78u;
}
