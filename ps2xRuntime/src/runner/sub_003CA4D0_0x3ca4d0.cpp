#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CA4D0
// Address: 0x3ca4d0 - 0x3ca520
void sub_003CA4D0_0x3ca4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA4D0_0x3ca4d0");
#endif

    ctx->pc = 0x3ca4d0u;

    // 0x3ca4d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ca4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3ca4d4: 0x8c4265b0  lw          $v0, 0x65B0($v0)
    ctx->pc = 0x3ca4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26032)));
    // 0x3ca4d8: 0xc4810150  lwc1        $f1, 0x150($a0)
    ctx->pc = 0x3ca4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ca4dc: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x3ca4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x3ca4e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3ca4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca4e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ca4e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ca4e8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x3CA4E8u;
    {
        const bool branch_taken_0x3ca4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ca4e8) {
            ctx->pc = 0x3CA4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA4E8u;
            // 0x3ca4ec: 0xac800150  sw          $zero, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CA50Cu;
            goto label_3ca50c;
        }
    }
    ctx->pc = 0x3CA4F0u;
    // 0x3ca4f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ca4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3ca4f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ca4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca4f8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3ca4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3ca4fc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3ca4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ca500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3ca500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3ca504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3CA504u;
    {
        const bool branch_taken_0x3ca504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CA504u;
            // 0x3ca508: 0xe4800150  swc1        $f0, 0x150($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca504) {
            ctx->pc = 0x3CA510u;
            goto label_3ca510;
        }
    }
    ctx->pc = 0x3CA50Cu;
label_3ca50c:
    // 0x3ca50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca510:
    // 0x3ca510: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CA518u;
    // 0x3ca518: 0x0  nop
    ctx->pc = 0x3ca518u;
    // NOP
    // 0x3ca51c: 0x0  nop
    ctx->pc = 0x3ca51cu;
    // NOP
}
