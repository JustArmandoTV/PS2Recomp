#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299970
// Address: 0x299970 - 0x299a40
void sub_00299970_0x299970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299970_0x299970");
#endif

    ctx->pc = 0x299970u;

    // 0x299970: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x299970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299974: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x299974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299978: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x299978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29997c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x29997cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x299980: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x299980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x299984: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x299984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x299988: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29998c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x29998cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x299990: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x299990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299994: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x299994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299998: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x299998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29999c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x29999cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2999a0: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x2999a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2999a4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2999a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2999a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2999a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2999ac: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x2999acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2999b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2999b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2999b4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2999b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2999b8: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2999b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999bc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2999bcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2999c0: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x2999c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2999c4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2999c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2999c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2999c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2999cc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x2999ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x2999d0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2999d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2999d4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2999d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2999d8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2999d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999dc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2999dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x2999e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2999e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2999e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2999e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2999e8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2999e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2999ec: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2999ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2999f0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2999f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2999f4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2999f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2999f8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2999f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2999fc: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x2999fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x299a00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299a04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a08: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x299a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x299a0c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x299a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x299a10: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x299a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299a14: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x299a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a18: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x299a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a1c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x299a1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x299a20: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x299a20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x299a24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x299a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299a28: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x299a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x299a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x299A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A2Cu;
            // 0x299a30: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299A34u;
    // 0x299a34: 0x0  nop
    ctx->pc = 0x299a34u;
    // NOP
    // 0x299a38: 0x0  nop
    ctx->pc = 0x299a38u;
    // NOP
    // 0x299a3c: 0x0  nop
    ctx->pc = 0x299a3cu;
    // NOP
}
