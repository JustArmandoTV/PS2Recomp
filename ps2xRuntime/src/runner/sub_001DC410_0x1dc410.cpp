#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC410
// Address: 0x1dc410 - 0x1dc440
void sub_001DC410_0x1dc410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC410_0x1dc410");
#endif

    ctx->pc = 0x1dc410u;

    // 0x1dc410: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1dc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1dc414: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1dc414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc418: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1dc41c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1dc41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc420: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1dc420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc424: 0x8c44e360  lw          $a0, -0x1CA0($v0)
    ctx->pc = 0x1dc424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x1dc428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dc428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dc42c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1dc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1dc430: 0x8052918  j           func_14A460
    ctx->pc = 0x1DC430u;
    ctx->pc = 0x1DC434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC430u;
            // 0x1dc434: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A460u;
    if (runtime->hasFunction(0x14A460u)) {
        auto targetFn = runtime->lookupFunction(0x14A460u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0014A460_0x14a460(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DC438u;
    // 0x1dc438: 0x0  nop
    ctx->pc = 0x1dc438u;
    // NOP
    // 0x1dc43c: 0x0  nop
    ctx->pc = 0x1dc43cu;
    // NOP
}
