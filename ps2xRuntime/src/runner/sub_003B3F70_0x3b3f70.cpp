#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B3F70
// Address: 0x3b3f70 - 0x3b3fd0
void sub_003B3F70_0x3b3f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3F70_0x3b3f70");
#endif

    switch (ctx->pc) {
        case 0x3b3fb0u: goto label_3b3fb0;
        default: break;
    }

    ctx->pc = 0x3b3f70u;

    // 0x3b3f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b3f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b3f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b3f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b3f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3f80: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B3F80u;
    {
        const bool branch_taken_0x3b3f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3f80) {
            ctx->pc = 0x3B3F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3F80u;
            // 0x3b3f84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B3FB4u;
            goto label_3b3fb4;
        }
    }
    ctx->pc = 0x3B3F88u;
    // 0x3b3f88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3b3f8c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3b3f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3b3f90: 0x244289c8  addiu       $v0, $v0, -0x7638
    ctx->pc = 0x3b3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937032));
    // 0x3b3f94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3b3f94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3b3f98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b3f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b3f9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3b3fa0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3FA0u;
    {
        const bool branch_taken_0x3b3fa0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B3FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3FA0u;
            // 0x3b3fa4: 0xac4064f0  sw          $zero, 0x64F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3fa0) {
            ctx->pc = 0x3B3FB0u;
            goto label_3b3fb0;
        }
    }
    ctx->pc = 0x3B3FA8u;
    // 0x3b3fa8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3B3FA8u;
    SET_GPR_U32(ctx, 31, 0x3B3FB0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3FB0u; }
        if (ctx->pc != 0x3B3FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B3FB0u; }
        if (ctx->pc != 0x3B3FB0u) { return; }
    }
    ctx->pc = 0x3B3FB0u;
label_3b3fb0:
    // 0x3b3fb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3fb4:
    // 0x3b3fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b3fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B3FBCu;
            // 0x3b3fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B3FC4u;
    // 0x3b3fc4: 0x0  nop
    ctx->pc = 0x3b3fc4u;
    // NOP
    // 0x3b3fc8: 0x0  nop
    ctx->pc = 0x3b3fc8u;
    // NOP
    // 0x3b3fcc: 0x0  nop
    ctx->pc = 0x3b3fccu;
    // NOP
}
