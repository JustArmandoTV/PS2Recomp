#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00484440
// Address: 0x484440 - 0x4844a0
void sub_00484440_0x484440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484440_0x484440");
#endif

    switch (ctx->pc) {
        case 0x484480u: goto label_484480;
        default: break;
    }

    ctx->pc = 0x484440u;

    // 0x484440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x484440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x484444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x484444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x484448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x484448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48444c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48444cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484450: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x484450u;
    {
        const bool branch_taken_0x484450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x484450) {
            ctx->pc = 0x484454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x484450u;
            // 0x484454: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x484484u;
            goto label_484484;
        }
    }
    ctx->pc = 0x484458u;
    // 0x484458: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x484458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x48445c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x48445cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x484460: 0x2442f288  addiu       $v0, $v0, -0xD78
    ctx->pc = 0x484460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963848));
    // 0x484464: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x484464u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x484468: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x484468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x48446c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48446cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x484470: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x484470u;
    {
        const bool branch_taken_0x484470 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x484474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x484470u;
            // 0x484474: 0xac407b98  sw          $zero, 0x7B98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484470) {
            ctx->pc = 0x484480u;
            goto label_484480;
        }
    }
    ctx->pc = 0x484478u;
    // 0x484478: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x484478u;
    SET_GPR_U32(ctx, 31, 0x484480u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484480u; }
        if (ctx->pc != 0x484480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x484480u; }
        if (ctx->pc != 0x484480u) { return; }
    }
    ctx->pc = 0x484480u;
label_484480:
    // 0x484480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x484480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484484:
    // 0x484484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x484484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x484488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48448c: 0x3e00008  jr          $ra
    ctx->pc = 0x48448Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48448Cu;
            // 0x484490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x484494u;
    // 0x484494: 0x0  nop
    ctx->pc = 0x484494u;
    // NOP
    // 0x484498: 0x0  nop
    ctx->pc = 0x484498u;
    // NOP
    // 0x48449c: 0x0  nop
    ctx->pc = 0x48449cu;
    // NOP
}
