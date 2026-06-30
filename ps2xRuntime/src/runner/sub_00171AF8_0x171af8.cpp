#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171AF8
// Address: 0x171af8 - 0x171b08
void sub_00171AF8_0x171af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171AF8_0x171af8");
#endif

    ctx->pc = 0x171af8u;

    // 0x171af8: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x171af8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x171afc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x171afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x171b00: 0x3e00008  jr          $ra
    ctx->pc = 0x171B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B00u;
            // 0x171b04: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171B08u;
}
