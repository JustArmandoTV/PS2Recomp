#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510F30
// Address: 0x510f30 - 0x510fe0
void sub_00510F30_0x510f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510F30_0x510f30");
#endif

    ctx->pc = 0x510f30u;

    // 0x510f30: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x510f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x510f34: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x510f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x510f38: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x510f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x510f3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x510f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x510f40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x510f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x510f44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x510f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x510f48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x510f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x510f4c: 0x806400c1  lb          $a0, 0xC1($v1)
    ctx->pc = 0x510f4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 193)));
    // 0x510f50: 0x10880015  beq         $a0, $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x510F50u;
    {
        const bool branch_taken_0x510f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x510F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510F50u;
            // 0x510f54: 0x24660090  addiu       $a2, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510f50) {
            ctx->pc = 0x510FA8u;
            goto label_510fa8;
        }
    }
    ctx->pc = 0x510F58u;
    // 0x510f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x510f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x510f5c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x510F5Cu;
    {
        const bool branch_taken_0x510f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x510f5c) {
            ctx->pc = 0x510F80u;
            goto label_510f80;
        }
    }
    ctx->pc = 0x510F64u;
    // 0x510f64: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x510F64u;
    {
        const bool branch_taken_0x510f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x510f64) {
            ctx->pc = 0x510F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510F64u;
            // 0x510f68: 0xe4cc002c  swc1        $f12, 0x2C($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x510F74u;
            goto label_510f74;
        }
    }
    ctx->pc = 0x510F6Cu;
    // 0x510f6c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x510F6Cu;
    {
        const bool branch_taken_0x510f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x510f6c) {
            ctx->pc = 0x510FCCu;
            goto label_510fcc;
        }
    }
    ctx->pc = 0x510F74u;
label_510f74:
    // 0x510f74: 0xa0c50030  sb          $a1, 0x30($a2)
    ctx->pc = 0x510f74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x510f78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x510F78u;
    {
        const bool branch_taken_0x510f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510F78u;
            // 0x510f7c: 0xa0c70031  sb          $a3, 0x31($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 49), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510f78) {
            ctx->pc = 0x510FCCu;
            goto label_510fcc;
        }
    }
    ctx->pc = 0x510F80u;
label_510f80:
    // 0x510f80: 0x50e80006  beql        $a3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x510F80u;
    {
        const bool branch_taken_0x510f80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x510f80) {
            ctx->pc = 0x510F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x510F80u;
            // 0x510f84: 0xe4cc002c  swc1        $f12, 0x2C($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x510F9Cu;
            goto label_510f9c;
        }
    }
    ctx->pc = 0x510F88u;
    // 0x510f88: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x510f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x510f8c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x510f8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x510f90: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x510F90u;
    {
        const bool branch_taken_0x510f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x510f90) {
            ctx->pc = 0x510FCCu;
            goto label_510fcc;
        }
    }
    ctx->pc = 0x510F98u;
    // 0x510f98: 0xe4cc002c  swc1        $f12, 0x2C($a2)
    ctx->pc = 0x510f98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_510f9c:
    // 0x510f9c: 0xa0c50030  sb          $a1, 0x30($a2)
    ctx->pc = 0x510f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x510fa0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x510FA0u;
    {
        const bool branch_taken_0x510fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x510FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510FA0u;
            // 0x510fa4: 0xa0c70031  sb          $a3, 0x31($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 49), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x510fa0) {
            ctx->pc = 0x510FCCu;
            goto label_510fcc;
        }
    }
    ctx->pc = 0x510FA8u;
label_510fa8:
    // 0x510fa8: 0x14e80008  bne         $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x510FA8u;
    {
        const bool branch_taken_0x510fa8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x510fa8) {
            ctx->pc = 0x510FCCu;
            goto label_510fcc;
        }
    }
    ctx->pc = 0x510FB0u;
    // 0x510fb0: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x510fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x510fb4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x510fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x510fb8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x510FB8u;
    {
        const bool branch_taken_0x510fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x510fb8) {
            ctx->pc = 0x510FCCu;
            goto label_510fcc;
        }
    }
    ctx->pc = 0x510FC0u;
    // 0x510fc0: 0xe4cc002c  swc1        $f12, 0x2C($a2)
    ctx->pc = 0x510fc0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
    // 0x510fc4: 0xa0c50030  sb          $a1, 0x30($a2)
    ctx->pc = 0x510fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x510fc8: 0xa0c70031  sb          $a3, 0x31($a2)
    ctx->pc = 0x510fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 49), (uint8_t)GPR_U32(ctx, 7));
label_510fcc:
    // 0x510fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x510FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x510FD4u;
    // 0x510fd4: 0x0  nop
    ctx->pc = 0x510fd4u;
    // NOP
    // 0x510fd8: 0x0  nop
    ctx->pc = 0x510fd8u;
    // NOP
    // 0x510fdc: 0x0  nop
    ctx->pc = 0x510fdcu;
    // NOP
}
