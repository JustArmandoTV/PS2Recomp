#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133240
// Address: 0x133240 - 0x133280
void sub_00133240_0x133240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133240_0x133240");
#endif

    ctx->pc = 0x133240u;

    // 0x133240: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x133240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133244: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x133244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x133248: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x133248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13324c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x13324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133250: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x133250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133254: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x133254u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x133258: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x133258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13325c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x13325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133260: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x133260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133264: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x133264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x133268: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x133268u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x13326c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x13326cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x133270: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x133270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x133274: 0x3e00008  jr          $ra
    ctx->pc = 0x133274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133274u;
            // 0x133278: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13327Cu;
    // 0x13327c: 0x0  nop
    ctx->pc = 0x13327cu;
    // NOP
}
