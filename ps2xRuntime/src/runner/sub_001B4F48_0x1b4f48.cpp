#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4F48
// Address: 0x1b4f48 - 0x1b4fb0
void sub_001B4F48_0x1b4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4F48_0x1b4f48");
#endif

    switch (ctx->pc) {
        case 0x1b4f88u: goto label_1b4f88;
        case 0x1b4f94u: goto label_1b4f94;
        default: break;
    }

    ctx->pc = 0x1b4f48u;

    // 0x1b4f48: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b4f4c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x1b4f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1b4f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4f54: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1b4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1b4f58: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b4f58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1b4f5c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b4f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b4f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F60u;
            // 0x1b4f64: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4F68u;
    // 0x1b4f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4f74: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4F74u;
    {
        const bool branch_taken_0x1b4f74 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B4F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F74u;
            // 0x1b4f78: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f74) {
            ctx->pc = 0x1B4F9Cu;
            goto label_1b4f9c;
        }
    }
    ctx->pc = 0x1B4F7Cu;
    // 0x1b4f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b4f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b4f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b4f88:
    // 0x1b4f88: 0x26310dd8  addiu       $s1, $s1, 0xDD8
    ctx->pc = 0x1b4f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3544));
    // 0x1b4f8c: 0xc06d3ec  jal         func_1B4FB0
    ctx->pc = 0x1B4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F94u);
    ctx->pc = 0x1B4F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F8Cu;
            // 0x1b4f90: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4FB0u;
    if (runtime->hasFunction(0x1B4FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F94u; }
        if (ctx->pc != 0x1B4F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4FB0_0x1b4fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4F94u; }
        if (ctx->pc != 0x1B4F94u) { return; }
    }
    ctx->pc = 0x1B4F94u;
label_1b4f94:
    // 0x1b4f94: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B4F94u;
    {
        const bool branch_taken_0x1b4f94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4F94u;
            // 0x1b4f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f94) {
            ctx->pc = 0x1B4F88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b4f88;
        }
    }
    ctx->pc = 0x1B4F9Cu;
label_1b4f9c:
    // 0x1b4f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4FA8u;
            // 0x1b4fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4FB0u;
}
