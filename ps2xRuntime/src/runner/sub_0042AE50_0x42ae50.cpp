#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042AE50
// Address: 0x42ae50 - 0x42aeb0
void sub_0042AE50_0x42ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042AE50_0x42ae50");
#endif

    switch (ctx->pc) {
        case 0x42ae90u: goto label_42ae90;
        default: break;
    }

    ctx->pc = 0x42ae50u;

    // 0x42ae50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42ae54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42ae58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42ae5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42ae5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ae60: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x42AE60u;
    {
        const bool branch_taken_0x42ae60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ae60) {
            ctx->pc = 0x42AE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE60u;
            // 0x42ae64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42AE94u;
            goto label_42ae94;
        }
    }
    ctx->pc = 0x42AE68u;
    // 0x42ae68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42ae6c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x42ae6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x42ae70: 0x2442c208  addiu       $v0, $v0, -0x3DF8
    ctx->pc = 0x42ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
    // 0x42ae74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x42ae74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x42ae78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x42ae7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42ae80: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42AE80u;
    {
        const bool branch_taken_0x42ae80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x42AE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE80u;
            // 0x42ae84: 0xac4074a0  sw          $zero, 0x74A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae80) {
            ctx->pc = 0x42AE90u;
            goto label_42ae90;
        }
    }
    ctx->pc = 0x42AE88u;
    // 0x42ae88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42AE88u;
    SET_GPR_U32(ctx, 31, 0x42AE90u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE90u; }
        if (ctx->pc != 0x42AE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42AE90u; }
        if (ctx->pc != 0x42AE90u) { return; }
    }
    ctx->pc = 0x42AE90u;
label_42ae90:
    // 0x42ae90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42ae90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42ae94:
    // 0x42ae94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42ae94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42ae98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ae98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ae9c: 0x3e00008  jr          $ra
    ctx->pc = 0x42AE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42AE9Cu;
            // 0x42aea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42AEA4u;
    // 0x42aea4: 0x0  nop
    ctx->pc = 0x42aea4u;
    // NOP
    // 0x42aea8: 0x0  nop
    ctx->pc = 0x42aea8u;
    // NOP
    // 0x42aeac: 0x0  nop
    ctx->pc = 0x42aeacu;
    // NOP
}
