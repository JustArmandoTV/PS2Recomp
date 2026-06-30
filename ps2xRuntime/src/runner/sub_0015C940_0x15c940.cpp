#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C940
// Address: 0x15c940 - 0x15c980
void sub_0015C940_0x15c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C940_0x15c940");
#endif

    ctx->pc = 0x15c940u;

    // 0x15c940: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x15c940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15c944: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x15c948: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c94c: 0x240401fa  addiu       $a0, $zero, 0x1FA
    ctx->pc = 0x15c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 506));
    // 0x15c950: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15c954: 0x24a557c0  addiu       $a1, $a1, 0x57C0
    ctx->pc = 0x15c954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22464));
    // 0x15c958: 0x244257e0  addiu       $v0, $v0, 0x57E0
    ctx->pc = 0x15c958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22496));
    // 0x15c95c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c960: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15c960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c964: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c968: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15c968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15c96c: 0x80573a0  j           func_15CE80
    ctx->pc = 0x15C96Cu;
    ctx->pc = 0x15C970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C96Cu;
            // 0x15c970: 0xe44057c8  swc1        $f0, 0x57C8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 22472), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015CE80_0x15ce80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15C974u;
    // 0x15c974: 0x0  nop
    ctx->pc = 0x15c974u;
    // NOP
    // 0x15c978: 0x0  nop
    ctx->pc = 0x15c978u;
    // NOP
    // 0x15c97c: 0x0  nop
    ctx->pc = 0x15c97cu;
    // NOP
}
