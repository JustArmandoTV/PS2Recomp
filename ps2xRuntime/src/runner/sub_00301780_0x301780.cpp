#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301780
// Address: 0x301780 - 0x3017a0
void sub_00301780_0x301780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301780_0x301780");
#endif

    ctx->pc = 0x301780u;

    // 0x301780: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x301780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x301784: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x301784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301788: 0x0  nop
    ctx->pc = 0x301788u;
    // NOP
    // 0x30178c: 0x80c6250  j           func_318940
    ctx->pc = 0x30178Cu;
    ctx->pc = 0x301790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30178Cu;
            // 0x301790: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00318940_0x318940(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x301794u;
    // 0x301794: 0x0  nop
    ctx->pc = 0x301794u;
    // NOP
    // 0x301798: 0x0  nop
    ctx->pc = 0x301798u;
    // NOP
    // 0x30179c: 0x0  nop
    ctx->pc = 0x30179cu;
    // NOP
}
