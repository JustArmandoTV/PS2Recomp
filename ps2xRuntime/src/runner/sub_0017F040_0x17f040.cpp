#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F040
// Address: 0x17f040 - 0x17f050
void sub_0017F040_0x17f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F040_0x17f040");
#endif

    ctx->pc = 0x17f040u;

    // 0x17f040: 0x9c82000c  lwu         $v0, 0xC($a0)
    ctx->pc = 0x17f040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f044: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x17f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17f048: 0x3e00008  jr          $ra
    ctx->pc = 0x17F048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F048u;
            // 0x17f04c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F050u;
}
