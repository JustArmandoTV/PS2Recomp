#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A220
// Address: 0x13a220 - 0x13a250
void sub_0013A220_0x13a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A220_0x13a220");
#endif

    ctx->pc = 0x13a220u;

    // 0x13a220: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13a220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13a224: 0xe44c54c8  swc1        $f12, 0x54C8($v0)
    ctx->pc = 0x13a224u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21704), bits); }
    // 0x13a228: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13a22c: 0xe44d54cc  swc1        $f13, 0x54CC($v0)
    ctx->pc = 0x13a22cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21708), bits); }
    // 0x13a230: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13a230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13a234: 0xe44e54d0  swc1        $f14, 0x54D0($v0)
    ctx->pc = 0x13a234u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21712), bits); }
    // 0x13a238: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13a238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13a23c: 0x8057224  j           func_15C890
    ctx->pc = 0x13A23Cu;
    ctx->pc = 0x13A240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A23Cu;
            // 0x13a240: 0xc44f54d4  lwc1        $f15, 0x54D4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C890u;
    if (runtime->hasFunction(0x15C890u)) {
        auto targetFn = runtime->lookupFunction(0x15C890u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015C890_0x15c890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13A244u;
    // 0x13a244: 0x0  nop
    ctx->pc = 0x13a244u;
    // NOP
    // 0x13a248: 0x0  nop
    ctx->pc = 0x13a248u;
    // NOP
    // 0x13a24c: 0x0  nop
    ctx->pc = 0x13a24cu;
    // NOP
}
