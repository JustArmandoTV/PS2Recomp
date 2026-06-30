#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379810
// Address: 0x379810 - 0x3798b0
void sub_00379810_0x379810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379810_0x379810");
#endif

    switch (ctx->pc) {
        case 0x379884u: goto label_379884;
        default: break;
    }

    ctx->pc = 0x379810u;

    // 0x379810: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x379810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x379814: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x379814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x379818: 0x8c6652f0  lw          $a2, 0x52F0($v1)
    ctx->pc = 0x379818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21232)));
    // 0x37981c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x37981cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x379820: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x379820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x379824: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x379824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x379828: 0xc46052f4  lwc1        $f0, 0x52F4($v1)
    ctx->pc = 0x379828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 21236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37982c: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x37982cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x379830: 0x3c033eac  lui         $v1, 0x3EAC
    ctx->pc = 0x379830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16044 << 16));
    // 0x379834: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x379834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x379838: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x379838u;
    {
        const bool branch_taken_0x379838 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x37983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379838u;
            // 0x37983c: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379838) {
            ctx->pc = 0x37984Cu;
            goto label_37984c;
        }
    }
    ctx->pc = 0x379840u;
    // 0x379840: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x379840u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379844: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379844u;
    {
        const bool branch_taken_0x379844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379844u;
            // 0x379848: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379844) {
            ctx->pc = 0x379868u;
            goto label_379868;
        }
    }
    ctx->pc = 0x37984Cu;
label_37984c:
    // 0x37984c: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x37984cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x379850: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x379850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x379854: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x379854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x379858: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x379858u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37985c: 0x0  nop
    ctx->pc = 0x37985cu;
    // NOP
    // 0x379860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x379860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x379864: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x379864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_379868:
    // 0x379868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x379868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37986c: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x37986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x379870: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x379870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x379874: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x379874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x379878: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x379878u;
    {
        const bool branch_taken_0x379878 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379878u;
            // 0x37987c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379878) {
            ctx->pc = 0x3798A8u;
            goto label_3798a8;
        }
    }
    ctx->pc = 0x379880u;
    // 0x379880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x379880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379884:
    // 0x379884: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x379884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x379888: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x379888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x37988c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x37988cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x379890: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x379890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x379894: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x379894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x379898: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x379898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x37989c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x37989Cu;
    {
        const bool branch_taken_0x37989c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3798A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37989Cu;
            // 0x3798a0: 0xaca00054  sw          $zero, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37989c) {
            ctx->pc = 0x379884u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_379884;
        }
    }
    ctx->pc = 0x3798A4u;
    // 0x3798a4: 0x0  nop
    ctx->pc = 0x3798a4u;
    // NOP
label_3798a8:
    // 0x3798a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3798A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3798B0u;
}
