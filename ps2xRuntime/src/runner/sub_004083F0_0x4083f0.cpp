#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004083F0
// Address: 0x4083f0 - 0x408450
void sub_004083F0_0x4083f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004083F0_0x4083f0");
#endif

    switch (ctx->pc) {
        case 0x40840cu: goto label_40840c;
        default: break;
    }

    ctx->pc = 0x4083f0u;

    // 0x4083f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4083f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4083f4: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x4083f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x4083f8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4083f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4083fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4083fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408400: 0x24a572b0  addiu       $a1, $a1, 0x72B0
    ctx->pc = 0x408400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29360));
    // 0x408404: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x408404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x408408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x408408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_40840c:
    // 0x40840c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x40840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408410: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x408410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x408414: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x408414u;
    {
        const bool branch_taken_0x408414 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x408414) {
            ctx->pc = 0x408438u;
            goto label_408438;
        }
    }
    ctx->pc = 0x40841Cu;
    // 0x40841c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x40841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408420: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x408420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x408424: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x408424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x408428: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x408428u;
    {
        const bool branch_taken_0x408428 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408428u;
            // 0x40842c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408428) {
            ctx->pc = 0x408438u;
            goto label_408438;
        }
    }
    ctx->pc = 0x408430u;
    // 0x408430: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x408430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x408434: 0x0  nop
    ctx->pc = 0x408434u;
    // NOP
label_408438:
    // 0x408438: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x408438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x40843c: 0x28c3000e  slti        $v1, $a2, 0xE
    ctx->pc = 0x40843cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x408440: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x408440u;
    {
        const bool branch_taken_0x408440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x408444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408440u;
            // 0x408444: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408440) {
            ctx->pc = 0x40840Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40840c;
        }
    }
    ctx->pc = 0x408448u;
    // 0x408448: 0x3e00008  jr          $ra
    ctx->pc = 0x408448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x408450u;
}
