#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCB50
// Address: 0x1dcb50 - 0x1dcb70
void sub_001DCB50_0x1dcb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCB50_0x1dcb50");
#endif

    switch (ctx->pc) {
        case 0x1dcb50u: goto label_1dcb50;
        case 0x1dcb54u: goto label_1dcb54;
        case 0x1dcb58u: goto label_1dcb58;
        case 0x1dcb5cu: goto label_1dcb5c;
        case 0x1dcb60u: goto label_1dcb60;
        case 0x1dcb64u: goto label_1dcb64;
        case 0x1dcb68u: goto label_1dcb68;
        case 0x1dcb6cu: goto label_1dcb6c;
        default: break;
    }

    ctx->pc = 0x1dcb50u;

label_1dcb50:
    // 0x1dcb50: 0x8c990058  lw          $t9, 0x58($a0)
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1dcb54:
    // 0x1dcb54: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1dcb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb58:
    // 0x1dcb58: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1dcb58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb5c:
    // 0x1dcb5c: 0x8085010d  lb          $a1, 0x10D($a0)
    ctx->pc = 0x1dcb5cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 269)));
label_1dcb60:
    // 0x1dcb60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dcb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb64:
    // 0x1dcb64: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1dcb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1dcb68:
    // 0x1dcb68: 0x3200008  jr          $t9
label_1dcb6c:
    if (ctx->pc == 0x1DCB6Cu) {
        ctx->pc = 0x1DCB70u;
        goto label_fallthrough_0x1dcb68;
    }
    ctx->pc = 0x1DCB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dcb68:
    ctx->pc = 0x1DCB70u;
}
