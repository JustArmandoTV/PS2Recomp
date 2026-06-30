#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133020
// Address: 0x133020 - 0x133050
void sub_00133020_0x133020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133020_0x133020");
#endif

    ctx->pc = 0x133020u;

    // 0x133020: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x133020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133024: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x133024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133028: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x133028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13302c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x13302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133030: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x133030u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x133034: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x133034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x133038: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x133038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13303c: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x13303cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x133040: 0x3e00008  jr          $ra
    ctx->pc = 0x133040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133040u;
            // 0x133044: 0x4604281c  madd.s      $f0, $f5, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133048u;
    // 0x133048: 0x0  nop
    ctx->pc = 0x133048u;
    // NOP
    // 0x13304c: 0x0  nop
    ctx->pc = 0x13304cu;
    // NOP
}
