#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A4E10
// Address: 0x3a4e10 - 0x3a4e30
void sub_003A4E10_0x3a4e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4E10_0x3a4e10");
#endif

    ctx->pc = 0x3a4e10u;

    // 0x3a4e10: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a4e14: 0xe46c64c8  swc1        $f12, 0x64C8($v1)
    ctx->pc = 0x3a4e14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25800), bits); }
    // 0x3a4e18: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a4e1c: 0xe46d64cc  swc1        $f13, 0x64CC($v1)
    ctx->pc = 0x3a4e1cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25804), bits); }
    // 0x3a4e20: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a4e24: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4E24u;
            // 0x3a4e28: 0xe46e64d0  swc1        $f14, 0x64D0($v1) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 25808), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4E2Cu;
    // 0x3a4e2c: 0x0  nop
    ctx->pc = 0x3a4e2cu;
    // NOP
}
