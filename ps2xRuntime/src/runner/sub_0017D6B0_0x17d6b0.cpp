#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D6B0
// Address: 0x17d6b0 - 0x17d748
void sub_0017D6B0_0x17d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D6B0_0x17d6b0");
#endif

    switch (ctx->pc) {
        case 0x17d6d4u: goto label_17d6d4;
        case 0x17d6e0u: goto label_17d6e0;
        case 0x17d6e8u: goto label_17d6e8;
        case 0x17d700u: goto label_17d700;
        case 0x17d714u: goto label_17d714;
        default: break;
    }

    ctx->pc = 0x17d6b0u;

    // 0x17d6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d6b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17d6b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d6c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17d6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17d6c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d6c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d6cc: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17D6CCu;
    SET_GPR_U32(ctx, 31, 0x17D6D4u);
    ctx->pc = 0x17D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6CCu;
            // 0x17d6d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6D4u; }
        if (ctx->pc != 0x17D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6D4u; }
        if (ctx->pc != 0x17D6D4u) { return; }
    }
    ctx->pc = 0x17D6D4u;
label_17d6d4:
    // 0x17d6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17d6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d6d8: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17D6D8u;
    SET_GPR_U32(ctx, 31, 0x17D6E0u);
    ctx->pc = 0x17D6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6D8u;
            // 0x17d6dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6E0u; }
        if (ctx->pc != 0x17D6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D6E0u; }
        if (ctx->pc != 0x17D6E0u) { return; }
    }
    ctx->pc = 0x17D6E0u;
label_17d6e0:
    // 0x17d6e0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D6E0u;
    {
        const bool branch_taken_0x17d6e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x17d6e0) {
            ctx->pc = 0x17D6F0u;
            goto label_17d6f0;
        }
    }
    ctx->pc = 0x17D6E8u;
label_17d6e8:
    // 0x17d6e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17D6E8u;
    {
        const bool branch_taken_0x17d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6E8u;
            // 0x17d6ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6e8) {
            ctx->pc = 0x17D728u;
            goto label_17d728;
        }
    }
    ctx->pc = 0x17D6F0u;
label_17d6f0:
    // 0x17d6f0: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x17D6F0u;
    {
        const bool branch_taken_0x17d6f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x17D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D6F0u;
            // 0x17d6f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6f0) {
            ctx->pc = 0x17D724u;
            goto label_17d724;
        }
    }
    ctx->pc = 0x17D6F8u;
    // 0x17d6f8: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x17d6fc: 0x0  nop
    ctx->pc = 0x17d6fcu;
    // NOP
label_17d700:
    // 0x17d700: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x17d704: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x17d704u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17d708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17d70c: 0xc05f596  jal         func_17D658
    ctx->pc = 0x17D70Cu;
    SET_GPR_U32(ctx, 31, 0x17D714u);
    ctx->pc = 0x17D710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D70Cu;
            // 0x17d710: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D658u;
    if (runtime->hasFunction(0x17D658u)) {
        auto targetFn = runtime->lookupFunction(0x17D658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D714u; }
        if (ctx->pc != 0x17D714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D658_0x17d658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D714u; }
        if (ctx->pc != 0x17D714u) { return; }
    }
    ctx->pc = 0x17D714u;
label_17d714:
    // 0x17d714: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17D714u;
    {
        const bool branch_taken_0x17d714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D714u;
            // 0x17d718: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d714) {
            ctx->pc = 0x17D6E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d6e8;
        }
    }
    ctx->pc = 0x17D71Cu;
    // 0x17d71c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17D71Cu;
    {
        const bool branch_taken_0x17d71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D71Cu;
            // 0x17d720: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d71c) {
            ctx->pc = 0x17D700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d700;
        }
    }
    ctx->pc = 0x17D724u;
label_17d724:
    // 0x17d724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d728:
    // 0x17d728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d72c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d72cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d734: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d734u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d73c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D73Cu;
            // 0x17d740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D744u;
    // 0x17d744: 0x0  nop
    ctx->pc = 0x17d744u;
    // NOP
}
