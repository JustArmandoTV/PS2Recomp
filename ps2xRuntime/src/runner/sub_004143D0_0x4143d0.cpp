#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004143D0
// Address: 0x4143d0 - 0x414400
void sub_004143D0_0x4143d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004143D0_0x4143d0");
#endif

    ctx->pc = 0x4143d0u;

    // 0x4143d0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4143d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4143d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4143d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4143d8: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x4143d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4143dc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x4143dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4143e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4143e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4143e4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x4143e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x4143e8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x4143e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x4143ec: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x4143ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x4143f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4143F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4143F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4143F0u;
            // 0x4143f4: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4143F8u;
    // 0x4143f8: 0x0  nop
    ctx->pc = 0x4143f8u;
    // NOP
    // 0x4143fc: 0x0  nop
    ctx->pc = 0x4143fcu;
    // NOP
}
