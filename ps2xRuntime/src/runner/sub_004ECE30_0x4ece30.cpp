#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECE30
// Address: 0x4ece30 - 0x4ece50
void sub_004ECE30_0x4ece30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE30_0x4ece30");
#endif

    ctx->pc = 0x4ece30u;

    // 0x4ece30: 0x8c8201c8  lw          $v0, 0x1C8($a0)
    ctx->pc = 0x4ece30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x4ece34: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x4ece34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4ece38: 0xc48e0018  lwc1        $f14, 0x18($a0)
    ctx->pc = 0x4ece38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x4ece3c: 0xc44d0014  lwc1        $f13, 0x14($v0)
    ctx->pc = 0x4ece3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x4ece40: 0x804cbd8  j           func_132F60
    ctx->pc = 0x4ECE40u;
    ctx->pc = 0x4ECE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECE40u;
            // 0x4ece44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00132F60_0x132f60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4ECE48u;
    // 0x4ece48: 0x0  nop
    ctx->pc = 0x4ece48u;
    // NOP
    // 0x4ece4c: 0x0  nop
    ctx->pc = 0x4ece4cu;
    // NOP
}
