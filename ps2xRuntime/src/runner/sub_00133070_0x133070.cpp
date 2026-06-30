#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133070
// Address: 0x133070 - 0x1330b0
void sub_00133070_0x133070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133070_0x133070");
#endif

    ctx->pc = 0x133070u;

    // 0x133070: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x133070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133074: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x133074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133078: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x133078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13307c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x13307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133080: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x133080u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x133084: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x133084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133088: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x133088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13308c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x13308cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x133090: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x133090u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x133094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x133094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133098: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x133098u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13309c: 0x804c710  j           func_131C40
    ctx->pc = 0x13309Cu;
    ctx->pc = 0x1330A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13309Cu;
            // 0x1330a0: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00131C40_0x131c40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1330A4u;
    // 0x1330a4: 0x0  nop
    ctx->pc = 0x1330a4u;
    // NOP
    // 0x1330a8: 0x0  nop
    ctx->pc = 0x1330a8u;
    // NOP
    // 0x1330ac: 0x0  nop
    ctx->pc = 0x1330acu;
    // NOP
}
