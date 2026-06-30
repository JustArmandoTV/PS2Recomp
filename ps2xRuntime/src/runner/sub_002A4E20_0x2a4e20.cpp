#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4E20
// Address: 0x2a4e20 - 0x2a4e80
void sub_002A4E20_0x2a4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4E20_0x2a4e20");
#endif

    ctx->pc = 0x2a4e20u;

    // 0x2a4e20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2a4e24: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x2a4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x2a4e28: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4e2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a4e30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a4e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4e34: 0x0  nop
    ctx->pc = 0x2a4e34u;
    // NOP
    // 0x2a4e38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a4e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4e3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4E3Cu;
    {
        const bool branch_taken_0x2a4e3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E3Cu;
            // 0x2a4e40: 0xc4620018  lwc1        $f2, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e3c) {
            ctx->pc = 0x2A4E58u;
            goto label_2a4e58;
        }
    }
    ctx->pc = 0x2A4E44u;
    // 0x2a4e44: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a4e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a4e48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a4e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4e4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4E4Cu;
    {
        const bool branch_taken_0x2a4e4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E4Cu;
            // 0x2a4e50: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e4c) {
            ctx->pc = 0x2A4E58u;
            goto label_2a4e58;
        }
    }
    ctx->pc = 0x2A4E54u;
    // 0x2a4e54: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2a4e58:
    // 0x2a4e58: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2a4e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4e60: 0x0  nop
    ctx->pc = 0x2a4e60u;
    // NOP
    // 0x2a4e64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a4e64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4e68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4E68u;
    {
        const bool branch_taken_0x2a4e68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A4E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E68u;
            // 0x2a4e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e68) {
            ctx->pc = 0x2A4E74u;
            goto label_2a4e74;
        }
    }
    ctx->pc = 0x2A4E70u;
    // 0x2a4e70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4e74:
    // 0x2a4e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E74u;
            // 0x2a4e78: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4E7Cu;
    // 0x2a4e7c: 0x0  nop
    ctx->pc = 0x2a4e7cu;
    // NOP
}
