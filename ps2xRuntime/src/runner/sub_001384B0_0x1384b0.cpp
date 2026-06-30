#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001384B0
// Address: 0x1384b0 - 0x138540
void sub_001384B0_0x1384b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001384B0_0x1384b0");
#endif

    switch (ctx->pc) {
        case 0x1384e0u: goto label_1384e0;
        default: break;
    }

    ctx->pc = 0x1384b0u;

    // 0x1384b0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1384b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1384b4: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x1384b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1384b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1384b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1384bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1384bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1384c0: 0x0  nop
    ctx->pc = 0x1384c0u;
    // NOP
    // 0x1384c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1384c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1384c8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1384C8u;
    {
        const bool branch_taken_0x1384c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1384CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1384C8u;
            // 0x1384cc: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384c8) {
            ctx->pc = 0x138520u;
            goto label_138520;
        }
    }
    ctx->pc = 0x1384D0u;
    // 0x1384d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1384d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1384d4: 0x0  nop
    ctx->pc = 0x1384d4u;
    // NOP
    // 0x1384d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1384d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1384dc: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x1384dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1384e0:
    // 0x1384e0: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1384e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1384e4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1384e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1384e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1384e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1384ec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1384ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1384f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1384f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1384f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1384F4u;
    {
        const bool branch_taken_0x1384f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1384f4) {
            ctx->pc = 0x138508u;
            goto label_138508;
        }
    }
    ctx->pc = 0x1384FCu;
    // 0x1384fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1384FCu;
    {
        const bool branch_taken_0x1384fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1384FCu;
            // 0x138500: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384fc) {
            ctx->pc = 0x138510u;
            goto label_138510;
        }
    }
    ctx->pc = 0x138504u;
    // 0x138504: 0x0  nop
    ctx->pc = 0x138504u;
    // NOP
label_138508:
    // 0x138508: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x138508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13850c: 0x0  nop
    ctx->pc = 0x13850cu;
    // NOP
label_138510:
    // 0x138510: 0xa81823  subu        $v1, $a1, $t0
    ctx->pc = 0x138510u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x138514: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x138514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138518: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x138518u;
    {
        const bool branch_taken_0x138518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138518) {
            ctx->pc = 0x13851Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138518u;
            // 0x13851c: 0x1051821  addu        $v1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1384E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1384e0;
        }
    }
    ctx->pc = 0x138520u;
label_138520:
    // 0x138520: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x138520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x138524: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x138524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x138528: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x138528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13852c: 0x3e00008  jr          $ra
    ctx->pc = 0x13852Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13852Cu;
            // 0x138530: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138534u;
    // 0x138534: 0x0  nop
    ctx->pc = 0x138534u;
    // NOP
    // 0x138538: 0x0  nop
    ctx->pc = 0x138538u;
    // NOP
    // 0x13853c: 0x0  nop
    ctx->pc = 0x13853cu;
    // NOP
}
