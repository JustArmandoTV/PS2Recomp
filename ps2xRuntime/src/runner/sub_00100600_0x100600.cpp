#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100600
// Address: 0x100600 - 0x100620
void sub_00100600_0x100600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100600_0x100600");
#endif

    ctx->pc = 0x100600u;

    // 0x100600: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x100600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x100604: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x100604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100608: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x100608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x10060c: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x10060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x100610: 0x80fe54c  j           func_3F9530
    ctx->pc = 0x100610u;
    ctx->pc = 0x100614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100610u;
            // 0x100614: 0x8c46b6b0  lw          $a2, -0x4950($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003F9530_0x3f9530(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x100618u;
    // 0x100618: 0x0  nop
    ctx->pc = 0x100618u;
    // NOP
    // 0x10061c: 0x0  nop
    ctx->pc = 0x10061cu;
    // NOP
}
