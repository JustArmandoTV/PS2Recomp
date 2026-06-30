#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004658E0
// Address: 0x4658e0 - 0x465940
void sub_004658E0_0x4658e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004658E0_0x4658e0");
#endif

    switch (ctx->pc) {
        case 0x465920u: goto label_465920;
        default: break;
    }

    ctx->pc = 0x4658e0u;

    // 0x4658e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4658e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4658e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4658e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4658e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4658e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4658ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4658ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4658f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4658F0u;
    {
        const bool branch_taken_0x4658f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4658f0) {
            ctx->pc = 0x4658F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4658F0u;
            // 0x4658f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465924u;
            goto label_465924;
        }
    }
    ctx->pc = 0x4658F8u;
    // 0x4658f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4658f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4658fc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4658fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x465900: 0x2442e7c0  addiu       $v0, $v0, -0x1840
    ctx->pc = 0x465900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
    // 0x465904: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x465904u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x465908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x465908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x46590c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x46590cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x465910: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x465910u;
    {
        const bool branch_taken_0x465910 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x465914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465910u;
            // 0x465914: 0xac4075e8  sw          $zero, 0x75E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465910) {
            ctx->pc = 0x465920u;
            goto label_465920;
        }
    }
    ctx->pc = 0x465918u;
    // 0x465918: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x465918u;
    SET_GPR_U32(ctx, 31, 0x465920u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465920u; }
        if (ctx->pc != 0x465920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465920u; }
        if (ctx->pc != 0x465920u) { return; }
    }
    ctx->pc = 0x465920u;
label_465920:
    // 0x465920: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x465920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_465924:
    // 0x465924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x465924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46592c: 0x3e00008  jr          $ra
    ctx->pc = 0x46592Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46592Cu;
            // 0x465930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465934u;
    // 0x465934: 0x0  nop
    ctx->pc = 0x465934u;
    // NOP
    // 0x465938: 0x0  nop
    ctx->pc = 0x465938u;
    // NOP
    // 0x46593c: 0x0  nop
    ctx->pc = 0x46593cu;
    // NOP
}
