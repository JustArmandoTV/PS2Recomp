#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428A90
// Address: 0x428a90 - 0x428af0
void sub_00428A90_0x428a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428A90_0x428a90");
#endif

    switch (ctx->pc) {
        case 0x428ad0u: goto label_428ad0;
        default: break;
    }

    ctx->pc = 0x428a90u;

    // 0x428a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x428a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x428a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x428a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x428a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x428a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x428a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x428a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428aa0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x428AA0u;
    {
        const bool branch_taken_0x428aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x428aa0) {
            ctx->pc = 0x428AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x428AA0u;
            // 0x428aa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x428AD4u;
            goto label_428ad4;
        }
    }
    ctx->pc = 0x428AA8u;
    // 0x428aa8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x428aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x428aac: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x428aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x428ab0: 0x2442bff0  addiu       $v0, $v0, -0x4010
    ctx->pc = 0x428ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950896));
    // 0x428ab4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x428ab4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x428ab8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x428ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x428abc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x428abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x428ac0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x428AC0u;
    {
        const bool branch_taken_0x428ac0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x428AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428AC0u;
            // 0x428ac4: 0xac406ec8  sw          $zero, 0x6EC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428ac0) {
            ctx->pc = 0x428AD0u;
            goto label_428ad0;
        }
    }
    ctx->pc = 0x428AC8u;
    // 0x428ac8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x428AC8u;
    SET_GPR_U32(ctx, 31, 0x428AD0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428AD0u; }
        if (ctx->pc != 0x428AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x428AD0u; }
        if (ctx->pc != 0x428AD0u) { return; }
    }
    ctx->pc = 0x428AD0u;
label_428ad0:
    // 0x428ad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x428ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_428ad4:
    // 0x428ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x428ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x428ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428adc: 0x3e00008  jr          $ra
    ctx->pc = 0x428ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428ADCu;
            // 0x428ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428AE4u;
    // 0x428ae4: 0x0  nop
    ctx->pc = 0x428ae4u;
    // NOP
    // 0x428ae8: 0x0  nop
    ctx->pc = 0x428ae8u;
    // NOP
    // 0x428aec: 0x0  nop
    ctx->pc = 0x428aecu;
    // NOP
}
