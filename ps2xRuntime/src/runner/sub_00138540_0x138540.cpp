#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138540
// Address: 0x138540 - 0x1385c0
void sub_00138540_0x138540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138540_0x138540");
#endif

    switch (ctx->pc) {
        case 0x138550u: goto label_138550;
        default: break;
    }

    ctx->pc = 0x138540u;

    // 0x138540: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x138540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138544: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x138544u;
    {
        const bool branch_taken_0x138544 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x138548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138544u;
            // 0x138548: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138544) {
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x13854Cu;
    // 0x13854c: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x13854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_138550:
    // 0x138550: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x138550u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x138554: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x138554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x138558: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x138558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13855c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13855cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138560: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x138560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x138564: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x138564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138568: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x138568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13856c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x13856Cu;
    {
        const bool branch_taken_0x13856c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13856c) {
            ctx->pc = 0x138580u;
            goto label_138580;
        }
    }
    ctx->pc = 0x138574u;
    // 0x138574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138574u;
    {
        const bool branch_taken_0x138574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138574u;
            // 0x138578: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138574) {
            ctx->pc = 0x138588u;
            goto label_138588;
        }
    }
    ctx->pc = 0x13857Cu;
    // 0x13857c: 0x0  nop
    ctx->pc = 0x13857cu;
    // NOP
label_138580:
    // 0x138580: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x138580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138584: 0x0  nop
    ctx->pc = 0x138584u;
    // NOP
label_138588:
    // 0x138588: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x138588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x13858c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13858cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138590: 0x5020ffef  beql        $at, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x138590u;
    {
        const bool branch_taken_0x138590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138590) {
            ctx->pc = 0x138594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138590u;
            // 0x138594: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x138550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_138550;
        }
    }
    ctx->pc = 0x138598u;
label_138598:
    // 0x138598: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x138598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x13859c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x13859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1385a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1385a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1385a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1385a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1385a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1385a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385ac: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1385acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1385b0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1385b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1385B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1385B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385B4u;
            // 0x1385b8: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1385BCu;
    // 0x1385bc: 0x0  nop
    ctx->pc = 0x1385bcu;
    // NOP
}
