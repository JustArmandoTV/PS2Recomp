#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3A68
// Address: 0x1a3a68 - 0x1a3ab8
void sub_001A3A68_0x1a3a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3A68_0x1a3a68");
#endif

    switch (ctx->pc) {
        case 0x1a3a84u: goto label_1a3a84;
        default: break;
    }

    ctx->pc = 0x1a3a68u;

    // 0x1a3a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3a70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a3a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a3a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3a7c: 0xc069262  jal         func_1A4988
    ctx->pc = 0x1A3A7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3A84u);
    ctx->pc = 0x1A3A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A7Cu;
            // 0x1a3a80: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4988u;
    if (runtime->hasFunction(0x1A4988u)) {
        auto targetFn = runtime->lookupFunction(0x1A4988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A84u; }
        if (ctx->pc != 0x1A3A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4988_0x1a4988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A84u; }
        if (ctx->pc != 0x1A3A84u) { return; }
    }
    ctx->pc = 0x1A3A84u;
label_1a3a84:
    // 0x1a3a84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3a84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a88: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3A88u;
    {
        const bool branch_taken_0x1a3a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A88u;
            // 0x1a3a8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a88) {
            ctx->pc = 0x1A3AA4u;
            goto label_1a3aa4;
        }
    }
    ctx->pc = 0x1A3A90u;
    // 0x1a3a90: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1a3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a3a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a3a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a98: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1a3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1a3a9c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1a3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a3aa0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1a3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1a3aa4:
    // 0x1a3aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3AB0u;
            // 0x1a3ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3AB8u;
}
