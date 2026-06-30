#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A0770
// Address: 0x3a0770 - 0x3a07d0
void sub_003A0770_0x3a0770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0770_0x3a0770");
#endif

    ctx->pc = 0x3a0770u;

    // 0x3a0770: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a0770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a0774: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3a0774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3a0778: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x3a0778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3a077c: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x3a077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0780: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x3a0780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a0784: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a0784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3a0788: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a0788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a078c: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x3a078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x3a0790: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3a0790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3a0794: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x3a0794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0798: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3a0798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a079c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a079cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a07a0: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x3a07a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3a07a4: 0x8c426498  lw          $v0, 0x6498($v0)
    ctx->pc = 0x3a07a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25752)));
    // 0x3a07a8: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x3a07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a07ac: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3a07acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x3a07b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3a07b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a07b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3a07b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a07b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3A07B8u;
    {
        const bool branch_taken_0x3a07b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A07BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A07B8u;
            // 0x3a07bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a07b8) {
            ctx->pc = 0x3A07C4u;
            goto label_3a07c4;
        }
    }
    ctx->pc = 0x3A07C0u;
    // 0x3a07c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a07c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a07c4:
    // 0x3a07c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A07C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A07C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A07C4u;
            // 0x3a07c8: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A07CCu;
    // 0x3a07cc: 0x0  nop
    ctx->pc = 0x3a07ccu;
    // NOP
}
