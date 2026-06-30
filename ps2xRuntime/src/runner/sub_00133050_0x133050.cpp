#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133050
// Address: 0x133050 - 0x133070
void sub_00133050_0x133050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133050_0x133050");
#endif

    ctx->pc = 0x133050u;

    // 0x133050: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x133050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133054: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x133054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133058: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x133058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13305c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13305cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x133060: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x133060u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x133064: 0x804c710  j           func_131C40
    ctx->pc = 0x133064u;
    ctx->pc = 0x133068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133064u;
            // 0x133068: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00131C40_0x131c40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13306Cu;
    // 0x13306c: 0x0  nop
    ctx->pc = 0x13306cu;
    // NOP
}
