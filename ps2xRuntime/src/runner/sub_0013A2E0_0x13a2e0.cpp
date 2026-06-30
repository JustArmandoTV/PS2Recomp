#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A2E0
// Address: 0x13a2e0 - 0x13a320
void sub_0013A2E0_0x13a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A2E0_0x13a2e0");
#endif

    ctx->pc = 0x13a2e0u;

    // 0x13a2e0: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13a2e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a2e4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13A2E4u;
    {
        const bool branch_taken_0x13a2e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a2e4) {
            ctx->pc = 0x13A310u;
            goto label_13a310;
        }
    }
    ctx->pc = 0x13A2ECu;
    // 0x13a2ec: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x13a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13a2f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a2f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13a2f8: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a2fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a300: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a304: 0xe46c003c  swc1        $f12, 0x3C($v1)
    ctx->pc = 0x13a304u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x13a308: 0xe46d0040  swc1        $f13, 0x40($v1)
    ctx->pc = 0x13a308u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x13a30c: 0xe46e0044  swc1        $f14, 0x44($v1)
    ctx->pc = 0x13a30cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_13a310:
    // 0x13a310: 0x3e00008  jr          $ra
    ctx->pc = 0x13A310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A318u;
    // 0x13a318: 0x0  nop
    ctx->pc = 0x13a318u;
    // NOP
    // 0x13a31c: 0x0  nop
    ctx->pc = 0x13a31cu;
    // NOP
}
