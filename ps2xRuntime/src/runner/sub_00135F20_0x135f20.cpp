#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135F20
// Address: 0x135f20 - 0x135fa0
void sub_00135F20_0x135f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F20_0x135f20");
#endif

    switch (ctx->pc) {
        case 0x135f30u: goto label_135f30;
        default: break;
    }

    ctx->pc = 0x135f20u;

    // 0x135f20: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x135f20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x135f24: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x135F24u;
    {
        const bool branch_taken_0x135f24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x135F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F24u;
            // 0x135f28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f24) {
            ctx->pc = 0x135F70u;
            goto label_135f70;
        }
    }
    ctx->pc = 0x135F2Cu;
    // 0x135f2c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x135f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_135f30:
    // 0x135f30: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x135f30u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x135f34: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x135f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x135f38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135f3c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x135f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f40: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x135f40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135f44: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x135F44u;
    {
        const bool branch_taken_0x135f44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135f44) {
            ctx->pc = 0x135F58u;
            goto label_135f58;
        }
    }
    ctx->pc = 0x135F4Cu;
    // 0x135f4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135F4Cu;
    {
        const bool branch_taken_0x135f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F4Cu;
            // 0x135f50: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f4c) {
            ctx->pc = 0x135F60u;
            goto label_135f60;
        }
    }
    ctx->pc = 0x135F54u;
    // 0x135f54: 0x0  nop
    ctx->pc = 0x135f54u;
    // NOP
label_135f58:
    // 0x135f58: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x135f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f5c: 0x0  nop
    ctx->pc = 0x135f5cu;
    // NOP
label_135f60:
    // 0x135f60: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x135f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x135f64: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x135f64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x135f68: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x135F68u;
    {
        const bool branch_taken_0x135f68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f68) {
            ctx->pc = 0x135F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135F68u;
            // 0x135f6c: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135f30;
        }
    }
    ctx->pc = 0x135F70u;
label_135f70:
    // 0x135f70: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x135f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x135f74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x135f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x135f78: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x135f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f7c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x135f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x135f80: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x135f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f84: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x135f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x135f88: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x135f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x135F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F8Cu;
            // 0x135f90: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135F94u;
    // 0x135f94: 0x0  nop
    ctx->pc = 0x135f94u;
    // NOP
    // 0x135f98: 0x0  nop
    ctx->pc = 0x135f98u;
    // NOP
    // 0x135f9c: 0x0  nop
    ctx->pc = 0x135f9cu;
    // NOP
}
