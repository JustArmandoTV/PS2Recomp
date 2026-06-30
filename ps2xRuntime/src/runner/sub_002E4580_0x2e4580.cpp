#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4580
// Address: 0x2e4580 - 0x2e45b0
void sub_002E4580_0x2e4580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4580_0x2e4580");
#endif

    ctx->pc = 0x2e4580u;

    // 0x2e4580: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x2e4580u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e4584: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e4584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e4588: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e4588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e458c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e458cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e4590: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e4590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e4594: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2e4594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e4598: 0xe4ac0020  swc1        $f12, 0x20($a1)
    ctx->pc = 0x2e4598u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x2e459c: 0x8c64e4a8  lw          $a0, -0x1B58($v1)
    ctx->pc = 0x2e459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960296)));
    // 0x2e45a0: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x2e45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2e45a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e45a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e45a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E45A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E45ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E45A8u;
            // 0x2e45ac: 0xaca30080  sw          $v1, 0x80($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E45B0u;
}
