#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018A240
// Address: 0x18a240 - 0x18a288
void sub_0018A240_0x18a240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A240_0x18a240");
#endif

    ctx->pc = 0x18a240u;

    // 0x18a240: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x18a240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18a244: 0x70c50018  mult1       $zero, $a2, $a1
    ctx->pc = 0x18a244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18a248: 0x1012  mflo        $v0
    ctx->pc = 0x18a248u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x18a24c: 0x2010  mfhi        $a0
    ctx->pc = 0x18a24cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x18a250: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18a250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18a254: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x18a254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x18a258: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18a25c: 0x70001812  mflo1       $v1
    ctx->pc = 0x18a25cu;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x18a260: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x18a260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18a264: 0x70001010  mfhi1       $v0
    ctx->pc = 0x18a264u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
    // 0x18a268: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18a268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18a26c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18a26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18a270: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18a270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18a274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18a278: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x18a278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x18a27c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A27Cu;
            // 0x18a280: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A284u;
    // 0x18a284: 0x0  nop
    ctx->pc = 0x18a284u;
    // NOP
}
