#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005179B0
// Address: 0x5179b0 - 0x5179f0
void sub_005179B0_0x5179b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005179B0_0x5179b0");
#endif

    ctx->pc = 0x5179b0u;

    // 0x5179b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5179b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5179b4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x5179B4u;
    {
        const bool branch_taken_0x5179b4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x5179b4) {
            ctx->pc = 0x5179E8u;
            goto label_5179e8;
        }
    }
    ctx->pc = 0x5179BCu;
    // 0x5179bc: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x5179bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x5179c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x5179C0u;
    {
        const bool branch_taken_0x5179c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5179c0) {
            ctx->pc = 0x5179D0u;
            goto label_5179d0;
        }
    }
    ctx->pc = 0x5179C8u;
    // 0x5179c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x5179C8u;
    {
        const bool branch_taken_0x5179c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5179c8) {
            ctx->pc = 0x5179E8u;
            goto label_5179e8;
        }
    }
    ctx->pc = 0x5179D0u;
label_5179d0:
    // 0x5179d0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5179d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x5179d4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5179d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x5179d8: 0xc480015c  lwc1        $f0, 0x15C($a0)
    ctx->pc = 0x5179d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5179dc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5179dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5179e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5179e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x5179e4: 0xe480015c  swc1        $f0, 0x15C($a0)
    ctx->pc = 0x5179e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 348), bits); }
label_5179e8:
    // 0x5179e8: 0x3e00008  jr          $ra
    ctx->pc = 0x5179E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5179F0u;
}
