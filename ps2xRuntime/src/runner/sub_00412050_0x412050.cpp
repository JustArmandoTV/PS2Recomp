#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412050
// Address: 0x412050 - 0x412070
void sub_00412050_0x412050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412050_0x412050");
#endif

    ctx->pc = 0x412050u;

    // 0x412050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x412050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x412054: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x412054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x412058: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x412058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x41205c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x41205cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x412060: 0x3e00008  jr          $ra
    ctx->pc = 0x412060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412060u;
            // 0x412064: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412068u;
    // 0x412068: 0x0  nop
    ctx->pc = 0x412068u;
    // NOP
    // 0x41206c: 0x0  nop
    ctx->pc = 0x41206cu;
    // NOP
}
