#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030BCF0
// Address: 0x30bcf0 - 0x30bd10
void sub_0030BCF0_0x30bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BCF0_0x30bcf0");
#endif

    ctx->pc = 0x30bcf0u;

    // 0x30bcf0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x30bcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30bcf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30bcf8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30bcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30bcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x30BCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BCFCu;
            // 0x30bd00: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BD04u;
    // 0x30bd04: 0x0  nop
    ctx->pc = 0x30bd04u;
    // NOP
    // 0x30bd08: 0x0  nop
    ctx->pc = 0x30bd08u;
    // NOP
    // 0x30bd0c: 0x0  nop
    ctx->pc = 0x30bd0cu;
    // NOP
}
