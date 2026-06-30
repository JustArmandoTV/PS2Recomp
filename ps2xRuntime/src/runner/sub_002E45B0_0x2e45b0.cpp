#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E45B0
// Address: 0x2e45b0 - 0x2e45f0
void sub_002E45B0_0x2e45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E45B0_0x2e45b0");
#endif

    ctx->pc = 0x2e45b0u;

    // 0x2e45b0: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x2e45b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e45b4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e45b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e45b8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e45b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e45bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e45bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e45c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e45c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e45c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e45c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e45c8: 0xe4ac0010  swc1        $f12, 0x10($a1)
    ctx->pc = 0x2e45c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2e45cc: 0xe4ad0014  swc1        $f13, 0x14($a1)
    ctx->pc = 0x2e45ccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2e45d0: 0xe4ae0018  swc1        $f14, 0x18($a1)
    ctx->pc = 0x2e45d0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2e45d4: 0xe4af001c  swc1        $f15, 0x1C($a1)
    ctx->pc = 0x2e45d4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x2e45d8: 0x8c64e4a0  lw          $a0, -0x1B60($v1)
    ctx->pc = 0x2e45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960288)));
    // 0x2e45dc: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x2e45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2e45e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e45e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e45e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E45E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E45E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45E4u;
            // 0x2e45e8: 0xaca30080  sw          $v1, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E45ECu;
    // 0x2e45ec: 0x0  nop
    ctx->pc = 0x2e45ecu;
    // NOP
}
