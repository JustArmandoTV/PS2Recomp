#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A560
// Address: 0x26a560 - 0x26a5b0
void sub_0026A560_0x26a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A560_0x26a560");
#endif

    ctx->pc = 0x26a560u;

    // 0x26a560: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a564: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x26a564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x26a568: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x26a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a56c: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x26a56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x26a570: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a574: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x26a574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x26a578: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x26a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a57c: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x26a57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x26a580: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x26a580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a584: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x26a584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x26a588: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x26a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a58c: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x26a58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x26a590: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x26a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a594: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x26a594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x26a598: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x26a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x26a59c: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x26a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x26a5a0: 0x90a30024  lbu         $v1, 0x24($a1)
    ctx->pc = 0x26a5a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x26a5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x26A5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A5A4u;
            // 0x26a5a8: 0xa0830064  sb          $v1, 0x64($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A5ACu;
    // 0x26a5ac: 0x0  nop
    ctx->pc = 0x26a5acu;
    // NOP
}
