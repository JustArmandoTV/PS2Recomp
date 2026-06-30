#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5B20
// Address: 0x4a5b20 - 0x4a5b40
void sub_004A5B20_0x4a5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5B20_0x4a5b20");
#endif

    ctx->pc = 0x4a5b20u;

    // 0x4a5b20: 0xe48c0dbc  swc1        $f12, 0xDBC($a0)
    ctx->pc = 0x4a5b20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3516), bits); }
    // 0x4a5b24: 0xe48c0694  swc1        $f12, 0x694($a0)
    ctx->pc = 0x4a5b24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1684), bits); }
    // 0x4a5b28: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x4a5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x4a5b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A5B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5B2Cu;
            // 0x4a5b30: 0xe46c002c  swc1        $f12, 0x2C($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5B34u;
    // 0x4a5b34: 0x0  nop
    ctx->pc = 0x4a5b34u;
    // NOP
    // 0x4a5b38: 0x0  nop
    ctx->pc = 0x4a5b38u;
    // NOP
    // 0x4a5b3c: 0x0  nop
    ctx->pc = 0x4a5b3cu;
    // NOP
}
