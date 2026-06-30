#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178658
// Address: 0x178658 - 0x178730
void sub_00178658_0x178658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178658_0x178658");
#endif

    switch (ctx->pc) {
        case 0x1786b0u: goto label_1786b0;
        case 0x1786c8u: goto label_1786c8;
        case 0x1786e0u: goto label_1786e0;
        case 0x1786f8u: goto label_1786f8;
        default: break;
    }

    ctx->pc = 0x178658u;

    // 0x178658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17865c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17865cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178660: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x178660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17866c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178670: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178674: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x178674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x178678: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x178678u;
    {
        const bool branch_taken_0x178678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17867Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178678u;
            // 0x17867c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178678) {
            ctx->pc = 0x1786C0u;
            goto label_1786c0;
        }
    }
    ctx->pc = 0x178680u;
    // 0x178680: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x178684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17868c: 0x24844ba0  addiu       $a0, $a0, 0x4BA0
    ctx->pc = 0x17868cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19360));
    // 0x178690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178694: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178698: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17869c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17869cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1786a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1786a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1786a4: 0x805e0a6  j           func_178298
    ctx->pc = 0x1786A4u;
    ctx->pc = 0x1786A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1786A4u;
            // 0x1786a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1786ACu;
    // 0x1786ac: 0x0  nop
    ctx->pc = 0x1786acu;
    // NOP
label_1786b0:
    // 0x1786b0: 0x26a2fffc  addiu       $v0, $s5, -0x4
    ctx->pc = 0x1786b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x1786b4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1786b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1786b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1786B8u;
    {
        const bool branch_taken_0x1786b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786B8u;
            // 0x1786bc: 0xa0400004  sb          $zero, 0x4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786b8) {
            ctx->pc = 0x178708u;
            goto label_178708;
        }
    }
    ctx->pc = 0x1786C0u;
label_1786c0:
    // 0x1786c0: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1786C0u;
    SET_GPR_U32(ctx, 31, 0x1786C8u);
    ctx->pc = 0x1786C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1786C0u;
            // 0x1786c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786C8u; }
        if (ctx->pc != 0x1786C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786C8u; }
        if (ctx->pc != 0x1786C8u) { return; }
    }
    ctx->pc = 0x1786C8u;
label_1786c8:
    // 0x1786c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1786c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1786ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1786d0: 0x2451d3dc  addiu       $s1, $v0, -0x2C24
    ctx->pc = 0x1786d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955996));
    // 0x1786d4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1786d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1786d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786dc: 0x0  nop
    ctx->pc = 0x1786dcu;
    // NOP
label_1786e0:
    // 0x1786e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1786e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1786e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1786e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786e8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1786e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786ec: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1786ecu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1786f0: 0xc04b0e8  jal         func_12C3A0
    ctx->pc = 0x1786F0u;
    SET_GPR_U32(ctx, 31, 0x1786F8u);
    ctx->pc = 0x1786F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1786F0u;
            // 0x1786f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786F8u; }
        if (ctx->pc != 0x1786F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786F8u; }
        if (ctx->pc != 0x1786F8u) { return; }
    }
    ctx->pc = 0x1786F8u;
label_1786f8:
    // 0x1786f8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1786F8u;
    {
        const bool branch_taken_0x1786f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786F8u;
            // 0x1786fc: 0x2e030020  sltiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786f8) {
            ctx->pc = 0x1786B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1786b0;
        }
    }
    ctx->pc = 0x178700u;
    // 0x178700: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x178700u;
    {
        const bool branch_taken_0x178700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178700u;
            // 0x178704: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178700) {
            ctx->pc = 0x1786E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1786e0;
        }
    }
    ctx->pc = 0x178708u;
label_178708:
    // 0x178708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17870c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17870cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178714: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178718: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17871c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17871cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178720: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178724: 0x3e00008  jr          $ra
    ctx->pc = 0x178724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178724u;
            // 0x178728: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17872Cu;
    // 0x17872c: 0x0  nop
    ctx->pc = 0x17872cu;
    // NOP
}
