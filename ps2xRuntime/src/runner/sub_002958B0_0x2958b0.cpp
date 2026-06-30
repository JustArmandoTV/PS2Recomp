#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002958B0
// Address: 0x2958b0 - 0x295990
void sub_002958B0_0x2958b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002958B0_0x2958b0");
#endif

    ctx->pc = 0x2958b0u;

    // 0x2958b0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2958b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2958b4: 0x0  nop
    ctx->pc = 0x2958b4u;
    // NOP
    // 0x2958b8: 0x46036836  c.le.s      $f13, $f3
    ctx->pc = 0x2958b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2958bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2958BCu;
    {
        const bool branch_taken_0x2958bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2958C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958BCu;
            // 0x2958c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958bc) {
            ctx->pc = 0x2958D0u;
            goto label_2958d0;
        }
    }
    ctx->pc = 0x2958C4u;
    // 0x2958c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2958C4u;
    {
        const bool branch_taken_0x2958c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2958c4) {
            ctx->pc = 0x295980u;
            goto label_295980;
        }
    }
    ctx->pc = 0x2958CCu;
    // 0x2958cc: 0x0  nop
    ctx->pc = 0x2958ccu;
    // NOP
label_2958d0:
    // 0x2958d0: 0x46036036  c.le.s      $f12, $f3
    ctx->pc = 0x2958d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2958d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2958D4u;
    {
        const bool branch_taken_0x2958d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2958D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2958D4u;
            // 0x2958d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2958d4) {
            ctx->pc = 0x2958E8u;
            goto label_2958e8;
        }
    }
    ctx->pc = 0x2958DCu;
    // 0x2958dc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2958DCu;
    {
        const bool branch_taken_0x2958dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2958dc) {
            ctx->pc = 0x295980u;
            goto label_295980;
        }
    }
    ctx->pc = 0x2958E4u;
    // 0x2958e4: 0x0  nop
    ctx->pc = 0x2958e4u;
    // NOP
label_2958e8:
    // 0x2958e8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2958e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x2958ec: 0x460c6802  mul.s       $f0, $f13, $f12
    ctx->pc = 0x2958ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x2958f0: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x2958f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2958f4: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x2958f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
    // 0x2958f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2958f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2958fc: 0x34430a92  ori         $v1, $v0, 0xA92
    ctx->pc = 0x2958fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x295900: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295904: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x295904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x295908: 0x46006082  mul.s       $f2, $f12, $f0
    ctx->pc = 0x295908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x29590c: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x29590cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x295910: 0xe4830028  swc1        $f3, 0x28($a0)
    ctx->pc = 0x295910u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x295914: 0xe483002c  swc1        $f3, 0x2C($a0)
    ctx->pc = 0x295914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x295918: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x295918u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x29591c: 0xe4830034  swc1        $f3, 0x34($a0)
    ctx->pc = 0x29591cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x295920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x295924: 0xe4830038  swc1        $f3, 0x38($a0)
    ctx->pc = 0x295924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x295928: 0xe483003c  swc1        $f3, 0x3C($a0)
    ctx->pc = 0x295928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x29592c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x29592cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x295930: 0xe4830040  swc1        $f3, 0x40($a0)
    ctx->pc = 0x295930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x295934: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x295934u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x295938: 0xe4830044  swc1        $f3, 0x44($a0)
    ctx->pc = 0x295938u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x29593c: 0xe4830048  swc1        $f3, 0x48($a0)
    ctx->pc = 0x29593cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x295940: 0xe483004c  swc1        $f3, 0x4C($a0)
    ctx->pc = 0x295940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x295944: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x295944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x295948: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x295948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x29594c: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x29594cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x295950: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x295950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x295954: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x295954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x295958: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x295958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x29595c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x29595cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x295960: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x295960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x295964: 0xe483001c  swc1        $f3, 0x1C($a0)
    ctx->pc = 0x295964u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x295968: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x295968u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x29596c: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x29596cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x295970: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x295970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x295974: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x295974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x295978: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x295978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29597c: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x29597cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_295980:
    // 0x295980: 0x3e00008  jr          $ra
    ctx->pc = 0x295980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295988u;
    // 0x295988: 0x0  nop
    ctx->pc = 0x295988u;
    // NOP
    // 0x29598c: 0x0  nop
    ctx->pc = 0x29598cu;
    // NOP
}
