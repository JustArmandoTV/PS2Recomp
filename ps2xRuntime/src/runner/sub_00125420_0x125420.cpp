#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125420
// Address: 0x125420 - 0x125450
void sub_00125420_0x125420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125420_0x125420");
#endif

    switch (ctx->pc) {
        case 0x125444u: goto label_125444;
        default: break;
    }

    ctx->pc = 0x125420u;

    // 0x125420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125424: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125424u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x125428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12542c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125430: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x125430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x125434: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x125434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x125438: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x125438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x12543c: 0xc0494c4  jal         func_125310
    ctx->pc = 0x12543Cu;
    SET_GPR_U32(ctx, 31, 0x125444u);
    ctx->pc = 0x125440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12543Cu;
            // 0x125440: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125310u;
    if (runtime->hasFunction(0x125310u)) {
        auto targetFn = runtime->lookupFunction(0x125310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125444u; }
        if (ctx->pc != 0x125444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125310_0x125310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125444u; }
        if (ctx->pc != 0x125444u) { return; }
    }
    ctx->pc = 0x125444u;
label_125444:
    // 0x125444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125448: 0x3e00008  jr          $ra
    ctx->pc = 0x125448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125448u;
            // 0x12544c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125450u;
}
