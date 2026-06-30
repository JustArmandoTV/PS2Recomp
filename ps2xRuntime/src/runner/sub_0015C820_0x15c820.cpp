#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C820
// Address: 0x15c820 - 0x15c850
void sub_0015C820_0x15c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C820_0x15c820");
#endif

    ctx->pc = 0x15c820u;

    // 0x15c820: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x15c820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15c824: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x15c824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x15c828: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15c828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15c82c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x15c830: 0x2463cc70  addiu       $v1, $v1, -0x3390
    ctx->pc = 0x15c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954096));
    // 0x15c834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c838: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x15c838u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15c83c: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x15c83cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x15c840: 0xe46e0008  swc1        $f14, 0x8($v1)
    ctx->pc = 0x15c840u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15c844: 0x3e00008  jr          $ra
    ctx->pc = 0x15C844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C844u;
            // 0x15c848: 0xe46f000c  swc1        $f15, 0xC($v1) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C84Cu;
    // 0x15c84c: 0x0  nop
    ctx->pc = 0x15c84cu;
    // NOP
}
