#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043A310
// Address: 0x43a310 - 0x43a370
void sub_0043A310_0x43a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A310_0x43a310");
#endif

    switch (ctx->pc) {
        case 0x43a350u: goto label_43a350;
        default: break;
    }

    ctx->pc = 0x43a310u;

    // 0x43a310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43a314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43a318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43a31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43a31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a320: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x43A320u;
    {
        const bool branch_taken_0x43a320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a320) {
            ctx->pc = 0x43A324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A320u;
            // 0x43a324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A354u;
            goto label_43a354;
        }
    }
    ctx->pc = 0x43A328u;
    // 0x43a328: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43a32c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x43a32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x43a330: 0x2442cf00  addiu       $v0, $v0, -0x3100
    ctx->pc = 0x43a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954752));
    // 0x43a334: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x43a334u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x43a338: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x43a338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x43a33c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43a340: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x43A340u;
    {
        const bool branch_taken_0x43a340 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x43A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A340u;
            // 0x43a344: 0xac406ec0  sw          $zero, 0x6EC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a340) {
            ctx->pc = 0x43A350u;
            goto label_43a350;
        }
    }
    ctx->pc = 0x43A348u;
    // 0x43a348: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43A348u;
    SET_GPR_U32(ctx, 31, 0x43A350u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A350u; }
        if (ctx->pc != 0x43A350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A350u; }
        if (ctx->pc != 0x43A350u) { return; }
    }
    ctx->pc = 0x43A350u;
label_43a350:
    // 0x43a350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x43a350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43a354:
    // 0x43a354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43a354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a35c: 0x3e00008  jr          $ra
    ctx->pc = 0x43A35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A35Cu;
            // 0x43a360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A364u;
    // 0x43a364: 0x0  nop
    ctx->pc = 0x43a364u;
    // NOP
    // 0x43a368: 0x0  nop
    ctx->pc = 0x43a368u;
    // NOP
    // 0x43a36c: 0x0  nop
    ctx->pc = 0x43a36cu;
    // NOP
}
