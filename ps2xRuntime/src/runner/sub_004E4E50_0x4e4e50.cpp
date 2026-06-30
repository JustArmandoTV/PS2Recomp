#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4E50
// Address: 0x4e4e50 - 0x4e4e80
void sub_004E4E50_0x4e4e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E50_0x4e4e50");
#endif

    ctx->pc = 0x4e4e50u;

    // 0x4e4e50: 0x8c8600d8  lw          $a2, 0xD8($a0)
    ctx->pc = 0x4e4e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x4e4e54: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e4e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x4e4e58: 0x24a58294  addiu       $a1, $a1, -0x7D6C
    ctx->pc = 0x4e4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935188));
    // 0x4e4e5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4e4e60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4e4e60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x4e4e64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e4e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4e4e68: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4e4e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e4e6c: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x4e4e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
    // 0x4e4e70: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4E70u;
            // 0x4e4e74: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4E78u;
    // 0x4e4e78: 0x0  nop
    ctx->pc = 0x4e4e78u;
    // NOP
    // 0x4e4e7c: 0x0  nop
    ctx->pc = 0x4e4e7cu;
    // NOP
}
