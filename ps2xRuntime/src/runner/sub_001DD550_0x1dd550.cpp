#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD550
// Address: 0x1dd550 - 0x1dd570
void sub_001DD550_0x1dd550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD550_0x1dd550");
#endif

    switch (ctx->pc) {
        case 0x1dd550u: goto label_1dd550;
        case 0x1dd554u: goto label_1dd554;
        case 0x1dd558u: goto label_1dd558;
        case 0x1dd55cu: goto label_1dd55c;
        case 0x1dd560u: goto label_1dd560;
        case 0x1dd564u: goto label_1dd564;
        case 0x1dd568u: goto label_1dd568;
        case 0x1dd56cu: goto label_1dd56c;
        default: break;
    }

    ctx->pc = 0x1dd550u;

label_1dd550:
    // 0x1dd550: 0x8c840144  lw          $a0, 0x144($a0)
    ctx->pc = 0x1dd550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
label_1dd554:
    // 0x1dd554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd558:
    // 0x1dd558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dd558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dd55c:
    // 0x1dd55c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1dd55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1dd560:
    // 0x1dd560: 0x3200008  jr          $t9
label_1dd564:
    if (ctx->pc == 0x1DD564u) {
        ctx->pc = 0x1DD568u;
        goto label_1dd568;
    }
    ctx->pc = 0x1DD560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD568u;
label_1dd568:
    // 0x1dd568: 0x0  nop
    ctx->pc = 0x1dd568u;
    // NOP
label_1dd56c:
    // 0x1dd56c: 0x0  nop
    ctx->pc = 0x1dd56cu;
    // NOP
}
