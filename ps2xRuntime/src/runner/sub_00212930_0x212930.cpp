#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212930
// Address: 0x212930 - 0x212998
void sub_00212930_0x212930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212930_0x212930");
#endif

    ctx->pc = 0x212930u;

    // 0x212930: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x212930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212934: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x212934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x212938: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x212938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21293c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21293cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212940: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x212940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x212944: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x212944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x212948: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x212948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x21294c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x21294cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x212950: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x212950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x212954: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x212954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212958: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x212958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21295c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21295cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212960: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x212960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x212964: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x212964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212968: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x212968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21296c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x21296cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212970: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x212970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x212974: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x212974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212978: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x212978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21297c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x21297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212980: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x212980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x212984: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x212984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212988: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x212988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x21298c: 0x3e00008  jr          $ra
    ctx->pc = 0x21298Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21298Cu;
            // 0x212990: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212994u;
    // 0x212994: 0x0  nop
    ctx->pc = 0x212994u;
    // NOP
}
