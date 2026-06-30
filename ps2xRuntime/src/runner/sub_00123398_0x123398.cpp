#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123398
// Address: 0x123398 - 0x1233e8
void sub_00123398_0x123398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123398_0x123398");
#endif

    ctx->pc = 0x123398u;

    // 0x123398: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x123398u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12339c: 0x5703f  dsra32      $t6, $a1, 0
    ctx->pc = 0x12339cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1233a0: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1233a0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1233a4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1233a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1233a8: 0x1ee0018  mult        $zero, $t7, $t6
    ctx->pc = 0x1233a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1233ac: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1233acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1233b0: 0x71e50019  multu1      $zero, $t7, $a1
    ctx->pc = 0x1233b0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1233b4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1233b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1233b8: 0x70852000  madd        $a0, $a0, $a1
    ctx->pc = 0x1233b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1233bc: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x1233bcu;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x1233c0: 0x70200ba9  pcpyud      $at, $at, $zero
    ctx->pc = 0x1233c0u;
    SET_GPR_VEC(ctx, 1, _mm_unpackhi_epi64(GPR_VEC(ctx, 1), GPR_VEC(ctx, 0)));
    // 0x1233c4: 0x20782d  daddu       $t7, $at, $zero
    ctx->pc = 0x1233c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1233c8: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x1233c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1233cc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1233ccu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1233d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1233d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1233d4: 0x1e47821  addu        $t7, $t7, $a0
    ctx->pc = 0x1233d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1233d8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1233d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1233dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1233DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1233E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1233DCu;
            // 0x1233e0: 0x4f1025  or          $v0, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1233E4u;
    // 0x1233e4: 0x0  nop
    ctx->pc = 0x1233e4u;
    // NOP
}
