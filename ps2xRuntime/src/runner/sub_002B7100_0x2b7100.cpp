#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B7100
// Address: 0x2b7100 - 0x2b7120
void sub_002B7100_0x2b7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7100_0x2b7100");
#endif

    ctx->pc = 0x2b7100u;

    // 0x2b7100: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b7100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b7104: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2b7104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2b7108: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b7108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b710c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B710Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B710Cu;
            // 0x2b7110: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7114u;
    // 0x2b7114: 0x0  nop
    ctx->pc = 0x2b7114u;
    // NOP
    // 0x2b7118: 0x0  nop
    ctx->pc = 0x2b7118u;
    // NOP
    // 0x2b711c: 0x0  nop
    ctx->pc = 0x2b711cu;
    // NOP
}
