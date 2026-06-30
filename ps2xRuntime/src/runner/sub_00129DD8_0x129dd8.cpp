#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129DD8
// Address: 0x129dd8 - 0x129ee0
void sub_00129DD8_0x129dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129DD8_0x129dd8");
#endif

    switch (ctx->pc) {
        case 0x129e0cu: goto label_129e0c;
        case 0x129e78u: goto label_129e78;
        case 0x129e94u: goto label_129e94;
        case 0x129ea0u: goto label_129ea0;
        default: break;
    }

    ctx->pc = 0x129dd8u;

    // 0x129dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129ddc: 0x24aa0014  addiu       $t2, $a1, 0x14
    ctx->pc = 0x129ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x129de0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x129de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x129de4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x129de4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129de8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x129de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x129dec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x129decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x129df0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x129df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x129df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129df8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x129df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129dfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x129dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x129e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x129e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e04: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x129e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x129e08: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x129e08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_129e0c:
    // 0x129e0c: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x129e0cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x129e10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x129e14: 0x132582a  slt         $t3, $t1, $s2
    ctx->pc = 0x129e14u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x129e18: 0x31afffff  andi        $t7, $t5, 0xFFFF
    ctx->pc = 0x129e18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x129e1c: 0x1e67818  mult        $t7, $t7, $a2
    ctx->pc = 0x129e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x129e20: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x129e20u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x129e24: 0x71a66818  mult1       $t5, $t5, $a2
    ctx->pc = 0x129e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x129e28: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x129e28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x129e2c: 0xf6402  srl         $t4, $t7, 16
    ctx->pc = 0x129e2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x129e30: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x129e30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x129e34: 0x31efffff  andi        $t7, $t7, 0xFFFF
    ctx->pc = 0x129e34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x129e38: 0xd7400  sll         $t6, $t5, 16
    ctx->pc = 0x129e38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x129e3c: 0xd8c02  srl         $s1, $t5, 16
    ctx->pc = 0x129e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x129e40: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x129e40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x129e44: 0xad4e0000  sw          $t6, 0x0($t2)
    ctx->pc = 0x129e44u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 14));
    // 0x129e48: 0x1560fff0  bnez        $t3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x129E48u;
    {
        const bool branch_taken_0x129e48 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E48u;
            // 0x129e4c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e48) {
            ctx->pc = 0x129E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129E50u;
    // 0x129e50: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x129E50u;
    {
        const bool branch_taken_0x129e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E50u;
            // 0x129e54: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e50) {
            ctx->pc = 0x129EBCu;
            goto label_129ebc;
        }
    }
    ctx->pc = 0x129E58u;
    // 0x129e58: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x129e58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x129e5c: 0x24f782a  slt         $t7, $s2, $t7
    ctx->pc = 0x129e5cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x129e60: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x129E60u;
    {
        const bool branch_taken_0x129e60 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E60u;
            // 0x129e64: 0x127880  sll         $t7, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e60) {
            ctx->pc = 0x129EA8u;
            goto label_129ea8;
        }
    }
    ctx->pc = 0x129E68u;
    // 0x129e68: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x129e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x129e6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x129e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e70: 0xc04a740  jal         func_129D00
    ctx->pc = 0x129E70u;
    SET_GPR_U32(ctx, 31, 0x129E78u);
    ctx->pc = 0x129E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E70u;
            // 0x129e74: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E78u; }
        if (ctx->pc != 0x129E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E78u; }
        if (ctx->pc != 0x129E78u) { return; }
    }
    ctx->pc = 0x129E78u;
label_129e78:
    // 0x129e78: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x129e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x129e7c: 0x2665000c  addiu       $a1, $s3, 0xC
    ctx->pc = 0x129e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x129e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x129e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e84: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x129e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x129e88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x129e88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x129e8c: 0xc04a508  jal         func_129420
    ctx->pc = 0x129E8Cu;
    SET_GPR_U32(ctx, 31, 0x129E94u);
    ctx->pc = 0x129E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E8Cu;
            // 0x129e90: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E94u; }
        if (ctx->pc != 0x129E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E94u; }
        if (ctx->pc != 0x129E94u) { return; }
    }
    ctx->pc = 0x129E94u;
label_129e94:
    // 0x129e94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x129e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e98: 0xc04a76a  jal         func_129DA8
    ctx->pc = 0x129E98u;
    SET_GPR_U32(ctx, 31, 0x129EA0u);
    ctx->pc = 0x129E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E98u;
            // 0x129e9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129DA8u;
    if (runtime->hasFunction(0x129DA8u)) {
        auto targetFn = runtime->lookupFunction(0x129DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EA0u; }
        if (ctx->pc != 0x129EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129DA8_0x129da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EA0u; }
        if (ctx->pc != 0x129EA0u) { return; }
    }
    ctx->pc = 0x129EA0u;
label_129ea0:
    // 0x129ea0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x129ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ea4: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x129ea4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_129ea8:
    // 0x129ea8: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x129ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x129eac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x129eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x129eb0: 0xadf10014  sw          $s1, 0x14($t7)
    ctx->pc = 0x129eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 20), GPR_U32(ctx, 17));
    // 0x129eb4: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x129eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
    // 0x129eb8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x129eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_129ebc:
    // 0x129ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129ec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x129ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x129ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129ec8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x129ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129ecc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x129eccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129ed0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x129ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x129ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129ED4u;
            // 0x129ed8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x129EDCu;
    // 0x129edc: 0x0  nop
    ctx->pc = 0x129edcu;
    // NOP
}
