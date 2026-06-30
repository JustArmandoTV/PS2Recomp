#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025C810
// Address: 0x25c810 - 0x25c900
void sub_0025C810_0x25c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C810_0x25c810");
#endif

    switch (ctx->pc) {
        case 0x25c850u: goto label_25c850;
        case 0x25c864u: goto label_25c864;
        case 0x25c888u: goto label_25c888;
        case 0x25c8d8u: goto label_25c8d8;
        default: break;
    }

    ctx->pc = 0x25c810u;

    // 0x25c810: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25c814: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25c818: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25c81c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25c820: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25c820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25c828: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25c828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c830: 0xa3a60058  sb          $a2, 0x58($sp)
    ctx->pc = 0x25c830u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 6));
    // 0x25c834: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C834u;
    {
        const bool branch_taken_0x25c834 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x25C838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C834u;
            // 0x25c838: 0x58043  sra         $s0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c834) {
            ctx->pc = 0x25C844u;
            goto label_25c844;
        }
    }
    ctx->pc = 0x25C83Cu;
    // 0x25c83c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x25c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25c840: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x25c840u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_25c844:
    // 0x25c844: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x25C844u;
    {
        const bool branch_taken_0x25c844 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x25c844) {
            ctx->pc = 0x25C870u;
            goto label_25c870;
        }
    }
    ctx->pc = 0x25C84Cu;
    // 0x25c84c: 0x0  nop
    ctx->pc = 0x25c84cu;
    // NOP
label_25c850:
    // 0x25c850: 0x83a70058  lb          $a3, 0x58($sp)
    ctx->pc = 0x25c850u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25c854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c85c: 0xc09727c  jal         func_25C9F0
    ctx->pc = 0x25C85Cu;
    SET_GPR_U32(ctx, 31, 0x25C864u);
    ctx->pc = 0x25C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C85Cu;
            // 0x25c860: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C9F0u;
    if (runtime->hasFunction(0x25C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x25C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C864u; }
        if (ctx->pc != 0x25C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C9F0_0x25c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C864u; }
        if (ctx->pc != 0x25C864u) { return; }
    }
    ctx->pc = 0x25C864u;
label_25c864:
    // 0x25c864: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25c864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x25c868: 0x1e00fff9  bgtz        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25C868u;
    {
        const bool branch_taken_0x25c868 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x25c868) {
            ctx->pc = 0x25C850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c850;
        }
    }
    ctx->pc = 0x25C870u;
label_25c870:
    // 0x25c870: 0x1a40001b  blez        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x25C870u;
    {
        const bool branch_taken_0x25c870 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x25c870) {
            ctx->pc = 0x25C8E0u;
            goto label_25c8e0;
        }
    }
    ctx->pc = 0x25C878u;
    // 0x25c878: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25c878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25c87c: 0x27b0005e  addiu       $s0, $sp, 0x5E
    ctx->pc = 0x25c87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
    // 0x25c880: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x25c880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25c884: 0x0  nop
    ctx->pc = 0x25c884u;
    // NOP
label_25c888:
    // 0x25c888: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25c88c: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x25c88cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25c890: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x25c890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x25c894: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25c894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25c898: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25c898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c89c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c8a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25c8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8a4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x25c8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x25c8a8: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x25c8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c8ac: 0x9622fffc  lhu         $v0, -0x4($s1)
    ctx->pc = 0x25c8acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x25c8b0: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x25c8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c8b4: 0x9622fffe  lhu         $v0, -0x2($s1)
    ctx->pc = 0x25c8b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294967294)));
    // 0x25c8b8: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x25c8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c8bc: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x25c8bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x25c8c0: 0xa622fffc  sh          $v0, -0x4($s1)
    ctx->pc = 0x25c8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967292), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c8c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x25c8c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c8c8: 0xa622fffe  sh          $v0, -0x2($s1)
    ctx->pc = 0x25c8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294967294), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c8cc: 0x83a70058  lb          $a3, 0x58($sp)
    ctx->pc = 0x25c8ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25c8d0: 0xc09727c  jal         func_25C9F0
    ctx->pc = 0x25C8D0u;
    SET_GPR_U32(ctx, 31, 0x25C8D8u);
    ctx->pc = 0x25C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8D0u;
            // 0x25c8d4: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C9F0u;
    if (runtime->hasFunction(0x25C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x25C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8D8u; }
        if (ctx->pc != 0x25C8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C9F0_0x25c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8D8u; }
        if (ctx->pc != 0x25C8D8u) { return; }
    }
    ctx->pc = 0x25C8D8u;
label_25c8d8:
    // 0x25c8d8: 0x1e40ffeb  bgtz        $s2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x25C8D8u;
    {
        const bool branch_taken_0x25c8d8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x25c8d8) {
            ctx->pc = 0x25C888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c888;
        }
    }
    ctx->pc = 0x25C8E0u;
label_25c8e0:
    // 0x25c8e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25c8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25c8e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c8e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c8e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c8ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c8f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8F4u;
            // 0x25c8f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C8FCu;
    // 0x25c8fc: 0x0  nop
    ctx->pc = 0x25c8fcu;
    // NOP
}
