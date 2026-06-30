#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6A70
// Address: 0x1c6a70 - 0x1c6b10
void sub_001C6A70_0x1c6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6A70_0x1c6a70");
#endif

    switch (ctx->pc) {
        case 0x1c6aa0u: goto label_1c6aa0;
        case 0x1c6ab4u: goto label_1c6ab4;
        case 0x1c6ac4u: goto label_1c6ac4;
        default: break;
    }

    ctx->pc = 0x1c6a70u;

    // 0x1c6a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6a78: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c6a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6a80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6a88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c6a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6a90: 0x1a400017  blez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6A90u;
    {
        const bool branch_taken_0x1c6a90 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C6A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A90u;
            // 0x1c6a94: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a90) {
            ctx->pc = 0x1C6AF0u;
            goto label_1c6af0;
        }
    }
    ctx->pc = 0x1C6A98u;
    // 0x1c6a98: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1c6a98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c6a9c: 0x0  nop
    ctx->pc = 0x1c6a9cu;
    // NOP
label_1c6aa0:
    // 0x1c6aa0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c6aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c6aa4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6AA4u;
    {
        const bool branch_taken_0x1c6aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AA4u;
            // 0x1c6aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aa4) {
            ctx->pc = 0x1C6AD8u;
            goto label_1c6ad8;
        }
    }
    ctx->pc = 0x1C6AACu;
    // 0x1c6aac: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1C6AACu;
    SET_GPR_U32(ctx, 31, 0x1C6AB4u);
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AB4u; }
        if (ctx->pc != 0x1C6AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AB4u; }
        if (ctx->pc != 0x1C6AB4u) { return; }
    }
    ctx->pc = 0x1C6AB4u;
label_1c6ab4:
    // 0x1c6ab4: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6abc: 0xc071a92  jal         func_1C6A48
    ctx->pc = 0x1C6ABCu;
    SET_GPR_U32(ctx, 31, 0x1C6AC4u);
    ctx->pc = 0x1C6AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ABCu;
            // 0x1c6ac0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    if (runtime->hasFunction(0x1C6A48u)) {
        auto targetFn = runtime->lookupFunction(0x1C6A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AC4u; }
        if (ctx->pc != 0x1C6AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6A48_0x1c6a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AC4u; }
        if (ctx->pc != 0x1C6AC4u) { return; }
    }
    ctx->pc = 0x1C6AC4u;
label_1c6ac4:
    // 0x1c6ac4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6AC4u;
    {
        const bool branch_taken_0x1c6ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AC4u;
            // 0x1c6ac8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ac4) {
            ctx->pc = 0x1C6AE8u;
            goto label_1c6ae8;
        }
    }
    ctx->pc = 0x1C6ACCu;
    // 0x1c6acc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6ACCu;
    {
        const bool branch_taken_0x1c6acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ACCu;
            // 0x1c6ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6acc) {
            ctx->pc = 0x1C6AF4u;
            goto label_1c6af4;
        }
    }
    ctx->pc = 0x1C6AD4u;
    // 0x1c6ad4: 0x0  nop
    ctx->pc = 0x1c6ad4u;
    // NOP
label_1c6ad8:
    // 0x1c6ad8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1c6ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6adc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6ADCu;
    {
        const bool branch_taken_0x1c6adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ADCu;
            // 0x1c6ae0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6adc) {
            ctx->pc = 0x1C6AF4u;
            goto label_1c6af4;
        }
    }
    ctx->pc = 0x1C6AE4u;
    // 0x1c6ae4: 0x0  nop
    ctx->pc = 0x1c6ae4u;
    // NOP
label_1c6ae8:
    // 0x1c6ae8: 0x5e40ffed  bgtzl       $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C6AE8u;
    {
        const bool branch_taken_0x1c6ae8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1c6ae8) {
            ctx->pc = 0x1C6AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AE8u;
            // 0x1c6aec: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6aa0;
        }
    }
    ctx->pc = 0x1C6AF0u;
label_1c6af0:
    // 0x1c6af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6af4:
    // 0x1c6af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6b04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B08u;
            // 0x1c6b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6B10u;
}
