#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055B880
// Address: 0x55b880 - 0x55b8c0
void sub_0055B880_0x55b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055B880_0x55b880");
#endif

    ctx->pc = 0x55b880u;

    // 0x55b880: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x55b880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x55b884: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x55b884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x55b888: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x55b888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x55b88c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x55b890: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x55b890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x55b894: 0xc4419d38  lwc1        $f1, -0x62C8($v0)
    ctx->pc = 0x55b894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x55b898: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x55b898u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x55b89c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x55b8a0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x55b8a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x55b8a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x55b8a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x55b8a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x55b8a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x55b8ac: 0xc4409d48  lwc1        $f0, -0x62B8($v0)
    ctx->pc = 0x55b8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x55b8b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x55b8b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x55b8b4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x55b8b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x55b8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x55B8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55B8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55B8B8u;
            // 0x55b8bc: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55B8C0u;
}
