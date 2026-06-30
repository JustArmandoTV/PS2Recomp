#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E44E0
// Address: 0x2e44e0 - 0x2e4520
void sub_002E44E0_0x2e44e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E44E0_0x2e44e0");
#endif

    ctx->pc = 0x2e44e0u;

    // 0x2e44e0: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x2e44e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e44e4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e44e8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e44e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e44ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e44f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e44f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e44f4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e44f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e44f8: 0xe4ac0030  swc1        $f12, 0x30($a1)
    ctx->pc = 0x2e44f8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2e44fc: 0xe4ad0034  swc1        $f13, 0x34($a1)
    ctx->pc = 0x2e44fcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2e4500: 0xe4ae0038  swc1        $f14, 0x38($a1)
    ctx->pc = 0x2e4500u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x2e4504: 0x8c64e4b8  lw          $a0, -0x1B48($v1)
    ctx->pc = 0x2e4504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960312)));
    // 0x2e4508: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x2e4508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2e450c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e4510: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4510u;
            // 0x2e4514: 0xaca30080  sw          $v1, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4518u;
    // 0x2e4518: 0x0  nop
    ctx->pc = 0x2e4518u;
    // NOP
    // 0x2e451c: 0x0  nop
    ctx->pc = 0x2e451cu;
    // NOP
}
