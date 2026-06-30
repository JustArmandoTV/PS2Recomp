#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7AD0
// Address: 0x1d7ad0 - 0x1d7b10
void sub_001D7AD0_0x1d7ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7AD0_0x1d7ad0");
#endif

    ctx->pc = 0x1d7ad0u;

    // 0x1d7ad0: 0x808211aa  lb          $v0, 0x11AA($a0)
    ctx->pc = 0x1d7ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
    // 0x1d7ad4: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1d7ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1d7ad8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d7ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d7adc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7ADCu;
    {
        const bool branch_taken_0x1d7adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7adc) {
            ctx->pc = 0x1D7AFCu;
            goto label_1d7afc;
        }
    }
    ctx->pc = 0x1D7AE4u;
    // 0x1d7ae4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d7ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1d7ae8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1d7aec: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1d7aecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
    // 0x1d7af0: 0x401027  not         $v0, $v0
    ctx->pc = 0x1d7af0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1d7af4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d7af8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d7af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d7afc:
    // 0x1d7afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7B04u;
    // 0x1d7b04: 0x0  nop
    ctx->pc = 0x1d7b04u;
    // NOP
    // 0x1d7b08: 0x0  nop
    ctx->pc = 0x1d7b08u;
    // NOP
    // 0x1d7b0c: 0x0  nop
    ctx->pc = 0x1d7b0cu;
    // NOP
}
