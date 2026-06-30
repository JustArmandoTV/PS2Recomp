#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6E20
// Address: 0x2b6e20 - 0x2b6e60
void sub_002B6E20_0x2b6e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6E20_0x2b6e20");
#endif

    ctx->pc = 0x2b6e20u;

    // 0x2b6e20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b6e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b6e24: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x2b6e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x2b6e28: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x2b6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
    // 0x2b6e2c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2b6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2b6e30: 0xc4608320  lwc1        $f0, -0x7CE0($v1)
    ctx->pc = 0x2b6e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294935328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6e34: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2b6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2b6e38: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2b6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2b6e3c: 0xc4418318  lwc1        $f1, -0x7CE8($v0)
    ctx->pc = 0x2b6e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6e40: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b6e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b6e44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b6e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e48: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b6e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b6e4c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2b6e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b6e50: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E50u;
            // 0x2b6e54: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6E58u;
    // 0x2b6e58: 0x0  nop
    ctx->pc = 0x2b6e58u;
    // NOP
    // 0x2b6e5c: 0x0  nop
    ctx->pc = 0x2b6e5cu;
    // NOP
}
