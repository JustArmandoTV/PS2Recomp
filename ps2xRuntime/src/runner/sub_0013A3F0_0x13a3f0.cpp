#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A3F0
// Address: 0x13a3f0 - 0x13a430
void sub_0013A3F0_0x13a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A3F0_0x13a3f0");
#endif

    ctx->pc = 0x13a3f0u;

    // 0x13a3f0: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13a3f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a3f4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x13A3F4u;
    {
        const bool branch_taken_0x13a3f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a3f4) {
            ctx->pc = 0x13A420u;
            goto label_13a420;
        }
    }
    ctx->pc = 0x13A3FCu;
    // 0x13a3fc: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x13a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13a400: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a404: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13a404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13a408: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a40c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a414: 0xe46c0030  swc1        $f12, 0x30($v1)
    ctx->pc = 0x13a414u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x13a418: 0xe46d0034  swc1        $f13, 0x34($v1)
    ctx->pc = 0x13a418u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x13a41c: 0xe46e0038  swc1        $f14, 0x38($v1)
    ctx->pc = 0x13a41cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_13a420:
    // 0x13a420: 0x3e00008  jr          $ra
    ctx->pc = 0x13A420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A428u;
    // 0x13a428: 0x0  nop
    ctx->pc = 0x13a428u;
    // NOP
    // 0x13a42c: 0x0  nop
    ctx->pc = 0x13a42cu;
    // NOP
}
