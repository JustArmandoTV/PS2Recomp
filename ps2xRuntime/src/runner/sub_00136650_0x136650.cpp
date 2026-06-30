#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136650
// Address: 0x136650 - 0x1367b0
void sub_00136650_0x136650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136650_0x136650");
#endif

    switch (ctx->pc) {
        case 0x136680u: goto label_136680;
        default: break;
    }

    ctx->pc = 0x136650u;

    // 0x136650: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136654: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x136654u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136658: 0x2d210002  sltiu       $at, $t1, 0x2
    ctx->pc = 0x136658u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13665c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13665cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136660: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x136660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x136664: 0x0  nop
    ctx->pc = 0x136664u;
    // NOP
    // 0x136668: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13666c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13666Cu;
    {
        const bool branch_taken_0x13666c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13666Cu;
            // 0x136670: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13666c) {
            ctx->pc = 0x1366C0u;
            goto label_1366c0;
        }
    }
    ctx->pc = 0x136674u;
    // 0x136674: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x136674u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136678: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x136678u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x13667c: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x13667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_136680:
    // 0x136680: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x136680u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136684: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x136684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x136688: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13668c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x13668cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136690: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x136690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136694: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136694u;
    {
        const bool branch_taken_0x136694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136694) {
            ctx->pc = 0x1366A8u;
            goto label_1366a8;
        }
    }
    ctx->pc = 0x13669Cu;
    // 0x13669c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13669Cu;
    {
        const bool branch_taken_0x13669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13669Cu;
            // 0x1366a0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13669c) {
            ctx->pc = 0x1366B0u;
            goto label_1366b0;
        }
    }
    ctx->pc = 0x1366A4u;
    // 0x1366a4: 0x0  nop
    ctx->pc = 0x1366a4u;
    // NOP
label_1366a8:
    // 0x1366a8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1366a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366ac: 0x0  nop
    ctx->pc = 0x1366acu;
    // NOP
label_1366b0:
    // 0x1366b0: 0x12a1823  subu        $v1, $t1, $t2
    ctx->pc = 0x1366b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1366b4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1366b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1366b8: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1366B8u;
    {
        const bool branch_taken_0x1366b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1366b8) {
            ctx->pc = 0x1366BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1366B8u;
            // 0x1366bc: 0x1491821  addu        $v1, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136680;
        }
    }
    ctx->pc = 0x1366C0u;
label_1366c0:
    // 0x1366c0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1366c4: 0x143282a  slt         $a1, $t2, $v1
    ctx->pc = 0x1366c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1366c8: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x1366c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1366cc: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1366CCu;
    {
        const bool branch_taken_0x1366cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1366D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366CCu;
            // 0x1366d0: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366cc) {
            ctx->pc = 0x1366F0u;
            goto label_1366f0;
        }
    }
    ctx->pc = 0x1366D4u;
    // 0x1366d4: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x1366d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1366d8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1366d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1366dc: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x1366dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1366e0: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x1366e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1366e4: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x1366e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1366e8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1366E8u;
    {
        const bool branch_taken_0x1366e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1366ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366E8u;
            // 0x1366ec: 0xa4c30004  sh          $v1, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366e8) {
            ctx->pc = 0x13679Cu;
            goto label_13679c;
        }
    }
    ctx->pc = 0x1366F0u;
label_1366f0:
    // 0x1366f0: 0x84680008  lh          $t0, 0x8($v1)
    ctx->pc = 0x1366f0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1366f4: 0x3c044780  lui         $a0, 0x4780
    ctx->pc = 0x1366f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18304 << 16));
    // 0x1366f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1366f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1366fc: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1366fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136700: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x136700u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x136704: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x136704u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136708: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x136708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13670c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13670cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x136710: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x136710u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x136714: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x136714u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136718: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x136718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x13671c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x13671cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x136720: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x136720u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x136724: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x136724u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x136728: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x136728u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13672c: 0x0  nop
    ctx->pc = 0x13672cu;
    // NOP
    // 0x136730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x136730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x136734: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x136734u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x136738: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13673c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x13673cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x136740: 0x0  nop
    ctx->pc = 0x136740u;
    // NOP
    // 0x136744: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x136744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x136748: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x136748u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x13674c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13674cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x136750: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x136750u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x136754: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x136754u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x136758: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x136758u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13675c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x13675cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136760: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x136760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x136764: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x136764u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x136768: 0x70e42018  mult1       $a0, $a3, $a0
    ctx->pc = 0x136768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13676c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x13676cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x136770: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x136770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x136774: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x136774u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x136778: 0x8464000e  lh          $a0, 0xE($v1)
    ctx->pc = 0x136778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x13677c: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x13677cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x136780: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x136780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136784: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136788: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x136788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13678c: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x13678cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x136790: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x136790u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x136794: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136798: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x136798u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
label_13679c:
    // 0x13679c: 0x3e00008  jr          $ra
    ctx->pc = 0x13679Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1367A4u;
    // 0x1367a4: 0x0  nop
    ctx->pc = 0x1367a4u;
    // NOP
    // 0x1367a8: 0x0  nop
    ctx->pc = 0x1367a8u;
    // NOP
    // 0x1367ac: 0x0  nop
    ctx->pc = 0x1367acu;
    // NOP
}
