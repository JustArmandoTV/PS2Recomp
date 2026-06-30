#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0870
// Address: 0x2f0870 - 0x2f08a0
void sub_002F0870_0x2f0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0870_0x2f0870");
#endif

    switch (ctx->pc) {
        case 0x2f0870u: goto label_2f0870;
        case 0x2f0874u: goto label_2f0874;
        case 0x2f0878u: goto label_2f0878;
        case 0x2f087cu: goto label_2f087c;
        case 0x2f0880u: goto label_2f0880;
        case 0x2f0884u: goto label_2f0884;
        case 0x2f0888u: goto label_2f0888;
        case 0x2f088cu: goto label_2f088c;
        case 0x2f0890u: goto label_2f0890;
        case 0x2f0894u: goto label_2f0894;
        case 0x2f0898u: goto label_2f0898;
        case 0x2f089cu: goto label_2f089c;
        default: break;
    }

    ctx->pc = 0x2f0870u;

label_2f0870:
    // 0x2f0870: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f0870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f0874:
    // 0x2f0874: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2f0874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0878:
    // 0x2f0878: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x2f0878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_2f087c:
    // 0x2f087c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2f087cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2f0880:
    // 0x2f0880: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f0880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f0884:
    // 0x2f0884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f0884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0888:
    // 0x2f0888: 0x44838000  mtc1        $v1, $f16
    ctx->pc = 0x2f0888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_2f088c:
    // 0x2f088c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2f088cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f0890:
    // 0x2f0890: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f0890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0894:
    // 0x2f0894: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2f0894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2f0898:
    // 0x2f0898: 0x3200008  jr          $t9
label_2f089c:
    if (ctx->pc == 0x2F089Cu) {
        ctx->pc = 0x2F08A0u;
        goto label_fallthrough_0x2f0898;
    }
    ctx->pc = 0x2F0898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f0898:
    ctx->pc = 0x2F08A0u;
}
