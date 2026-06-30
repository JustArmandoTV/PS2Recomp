#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012ABC8
// Address: 0x12abc8 - 0x12ad30
void sub_0012ABC8_0x12abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ABC8_0x12abc8");
#endif

    switch (ctx->pc) {
        case 0x12abecu: goto label_12abec;
        case 0x12abfcu: goto label_12abfc;
        case 0x12ac48u: goto label_12ac48;
        case 0x12ac54u: goto label_12ac54;
        case 0x12acb8u: goto label_12acb8;
        case 0x12acd0u: goto label_12acd0;
        case 0x12ace0u: goto label_12ace0;
        case 0x12ad20u: goto label_12ad20;
        default: break;
    }

    ctx->pc = 0x12abc8u;

    // 0x12abc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12abc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12abcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12abd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12abd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12abd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12abd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12abdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12abe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12abe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abe4: 0xc04aa28  jal         func_12A8A0
    ctx->pc = 0x12ABE4u;
    SET_GPR_U32(ctx, 31, 0x12ABECu);
    ctx->pc = 0x12ABE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABE4u;
            // 0x12abe8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A8A0u;
    if (runtime->hasFunction(0x12A8A0u)) {
        auto targetFn = runtime->lookupFunction(0x12A8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABECu; }
        if (ctx->pc != 0x12ABECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A8A0_0x12a8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABECu; }
        if (ctx->pc != 0x12ABECu) { return; }
    }
    ctx->pc = 0x12ABECu;
label_12abec:
    // 0x12abec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12abecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12abf4: 0xc04aa28  jal         func_12A8A0
    ctx->pc = 0x12ABF4u;
    SET_GPR_U32(ctx, 31, 0x12ABFCu);
    ctx->pc = 0x12ABF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ABF4u;
            // 0x12abf8: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A8A0u;
    if (runtime->hasFunction(0x12A8A0u)) {
        auto targetFn = runtime->lookupFunction(0x12A8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABFCu; }
        if (ctx->pc != 0x12ABFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A8A0_0x12a8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ABFCu; }
        if (ctx->pc != 0x12ABFCu) { return; }
    }
    ctx->pc = 0x12ABFCu;
label_12abfc:
    // 0x12abfc: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x12abfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12ac00: 0x12603f  dsra32      $t4, $s2, 0
    ctx->pc = 0x12ac00u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x12ac04: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12ac08: 0x2583f  dsra32      $t3, $v0, 0
    ctx->pc = 0x12ac08u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12ac0c: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12ac0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12ac10: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x12ac10u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x12ac14: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ac18: 0xd6940  sll         $t5, $t5, 5
    ctx->pc = 0x12ac18u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x12ac1c: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x12ac1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12ac20: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12ac20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12ac24: 0xf7500  sll         $t6, $t7, 20
    ctx->pc = 0x12ac24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 20));
    // 0x12ac28: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x12ac28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12ac2c: 0x16e5823  subu        $t3, $t3, $t6
    ctx->pc = 0x12ac2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x12ac30: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x12ac30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x12ac34: 0x19e0000d  blez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x12AC34u;
    {
        const bool branch_taken_0x12ac34 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x12AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC34u;
            // 0x12ac38: 0xb583c  dsll32      $t3, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac34) {
            ctx->pc = 0x12AC6Cu;
            goto label_12ac6c;
        }
    }
    ctx->pc = 0x12AC3Cu;
    // 0x12ac3c: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x12ac3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12ac40: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x12ac40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x12ac44: 0x24c9025  or          $s2, $s2, $t4
    ctx->pc = 0x12ac44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 12));
label_12ac48:
    // 0x12ac48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac4c: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x12AC4Cu;
    SET_GPR_U32(ctx, 31, 0x12AC54u);
    ctx->pc = 0x12AC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC4Cu;
            // 0x12ac50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC54u; }
        if (ctx->pc != 0x12AC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AC54u; }
        if (ctx->pc != 0x12AC54u) { return; }
    }
    ctx->pc = 0x12AC54u;
label_12ac54:
    // 0x12ac54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12ac54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ac58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12ac58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ac5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12ac5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ac60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12ac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ac64: 0x3e00008  jr          $ra
    ctx->pc = 0x12AC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC64u;
            // 0x12ac68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AC6Cu;
label_12ac6c:
    // 0x12ac6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12ac6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12ac70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12ac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12ac74: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x12AC74u;
    {
        const bool branch_taken_0x12ac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC74u;
            // 0x12ac78: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac74) {
            ctx->pc = 0x12AC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12ac48;
        }
    }
    ctx->pc = 0x12AC7Cu;
    // 0x12ac7c: 0x0  nop
    ctx->pc = 0x12ac7cu;
    // NOP
    // 0x12ac80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ac84: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x12ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x12ac88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ac8c: 0x2153c  dsll32      $v0, $v0, 20
    ctx->pc = 0x12ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 20));
    // 0x12ac90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12ac94: 0x288f0018  slti        $t7, $a0, 0x18
    ctx->pc = 0x12ac94u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x12ac98: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12AC98u;
    {
        const bool branch_taken_0x12ac98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AC98u;
            // 0x12ac9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac98) {
            ctx->pc = 0x12ACC4u;
            goto label_12acc4;
        }
    }
    ctx->pc = 0x12ACA0u;
    // 0x12aca0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x12aca0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x12aca4: 0x470c0  sll         $t6, $a0, 3
    ctx->pc = 0x12aca4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12aca8: 0x25ef0978  addiu       $t7, $t7, 0x978
    ctx->pc = 0x12aca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2424));
    // 0x12acac: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12acacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12acb0: 0xddc20000  ld          $v0, 0x0($t6)
    ctx->pc = 0x12acb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12acb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12acb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12acb8:
    // 0x12acb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12acb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12acbc: 0x3e00008  jr          $ra
    ctx->pc = 0x12ACBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ACC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACBCu;
            // 0x12acc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12ACC4u;
label_12acc4:
    // 0x12acc4: 0x5880fffc  blezl       $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12ACC4u;
    {
        const bool branch_taken_0x12acc4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x12acc4) {
            ctx->pc = 0x12ACC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACC4u;
            // 0x12acc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12ACB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acb8;
        }
    }
    ctx->pc = 0x12ACCCu;
    // 0x12accc: 0x24051009  addiu       $a1, $zero, 0x1009
    ctx->pc = 0x12acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
label_12acd0:
    // 0x12acd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12acd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12acd4: 0x52cbc  dsll32      $a1, $a1, 18
    ctx->pc = 0x12acd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 18));
    // 0x12acd8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x12ACD8u;
    SET_GPR_U32(ctx, 31, 0x12ACE0u);
    ctx->pc = 0x12ACDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACD8u;
            // 0x12acdc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACE0u; }
        if (ctx->pc != 0x12ACE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12ACE0u; }
        if (ctx->pc != 0x12ACE0u) { return; }
    }
    ctx->pc = 0x12ACE0u;
label_12ace0:
    // 0x12ace0: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12ACE0u;
    {
        const bool branch_taken_0x12ace0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x12ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACE0u;
            // 0x12ace4: 0x24051009  addiu       $a1, $zero, 0x1009 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ace0) {
            ctx->pc = 0x12ACD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acd0;
        }
    }
    ctx->pc = 0x12ACE8u;
    // 0x12ace8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x12ACE8u;
    {
        const bool branch_taken_0x12ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ACE8u;
            // 0x12acec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ace8) {
            ctx->pc = 0x12ACB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12acb8;
        }
    }
    ctx->pc = 0x12ACF0u;
    // 0x12acf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12acf4: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x12acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x12acf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12acfc: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x12acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x12ad00: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x12ad00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad04: 0xffa80020  sd          $t0, 0x20($sp)
    ctx->pc = 0x12ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 8));
    // 0x12ad08: 0xffa90028  sd          $t1, 0x28($sp)
    ctx->pc = 0x12ad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 9));
    // 0x12ad0c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x12ad0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ad10: 0xffaa0030  sd          $t2, 0x30($sp)
    ctx->pc = 0x12ad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 10));
    // 0x12ad14: 0xffab0038  sd          $t3, 0x38($sp)
    ctx->pc = 0x12ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    // 0x12ad18: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x12AD18u;
    SET_GPR_U32(ctx, 31, 0x12AD20u);
    ctx->pc = 0x12AD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD18u;
            // 0x12ad1c: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AD20u; }
        if (ctx->pc != 0x12AD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012DEC0_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AD20u; }
        if (ctx->pc != 0x12AD20u) { return; }
    }
    ctx->pc = 0x12AD20u;
label_12ad20:
    // 0x12ad20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ad24: 0x3e00008  jr          $ra
    ctx->pc = 0x12AD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AD24u;
            // 0x12ad28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AD2Cu;
    // 0x12ad2c: 0x0  nop
    ctx->pc = 0x12ad2cu;
    // NOP
}
