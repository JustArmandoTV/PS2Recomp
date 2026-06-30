#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB470
// Address: 0x2db470 - 0x2db4a0
void sub_002DB470_0x2db470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB470_0x2db470");
#endif

    ctx->pc = 0x2db470u;

    // 0x2db470: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2db470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db474: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2db474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2db478: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x2db478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2db47c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2db47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2db480: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x2db480u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2db484: 0xc4860008  lwc1        $f6, 0x8($a0)
    ctx->pc = 0x2db484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2db488: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x2db488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2db48c: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x2db48cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2db490: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2db490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db494: 0x4605305c  madd.s      $f1, $f6, $f5
    ctx->pc = 0x2db494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x2db498: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB498u;
            // 0x2db49c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB4A0u;
}
