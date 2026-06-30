#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136550
// Address: 0x136550 - 0x136650
void sub_00136550_0x136550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136550_0x136550");
#endif

    switch (ctx->pc) {
        case 0x136580u: goto label_136580;
        default: break;
    }

    ctx->pc = 0x136550u;

    // 0x136550: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x136554: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x136554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136558: 0x2d210002  sltiu       $at, $t1, 0x2
    ctx->pc = 0x136558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13655c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x13655cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136560: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x136560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x136564: 0x0  nop
    ctx->pc = 0x136564u;
    // NOP
    // 0x136568: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13656c: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x13656Cu;
    {
        const bool branch_taken_0x13656c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13656Cu;
            // 0x136570: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13656c) {
            ctx->pc = 0x1365C0u;
            goto label_1365c0;
        }
    }
    ctx->pc = 0x136574u;
    // 0x136574: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x136574u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x136578: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x136578u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x13657c: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x13657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_136580:
    // 0x136580: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x136580u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136584: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x136584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x136588: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x136588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13658c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x13658cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136590: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x136590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x136594: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x136594u;
    {
        const bool branch_taken_0x136594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136594) {
            ctx->pc = 0x1365A8u;
            goto label_1365a8;
        }
    }
    ctx->pc = 0x13659Cu;
    // 0x13659c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13659Cu;
    {
        const bool branch_taken_0x13659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13659Cu;
            // 0x1365a0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13659c) {
            ctx->pc = 0x1365B0u;
            goto label_1365b0;
        }
    }
    ctx->pc = 0x1365A4u;
    // 0x1365a4: 0x0  nop
    ctx->pc = 0x1365a4u;
    // NOP
label_1365a8:
    // 0x1365a8: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1365a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365ac: 0x0  nop
    ctx->pc = 0x1365acu;
    // NOP
label_1365b0:
    // 0x1365b0: 0x12a1823  subu        $v1, $t1, $t2
    ctx->pc = 0x1365b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1365b4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1365b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1365b8: 0x5020fff1  beql        $at, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1365B8u;
    {
        const bool branch_taken_0x1365b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1365b8) {
            ctx->pc = 0x1365BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1365B8u;
            // 0x1365bc: 0x1491821  addu        $v1, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136580;
        }
    }
    ctx->pc = 0x1365C0u;
label_1365c0:
    // 0x1365c0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1365c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1365c4: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x1365c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1365c8: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x1365c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1365cc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1365CCu;
    {
        const bool branch_taken_0x1365cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1365D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1365CCu;
            // 0x1365d0: 0x854021  addu        $t0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365cc) {
            ctx->pc = 0x1365E0u;
            goto label_1365e0;
        }
    }
    ctx->pc = 0x1365D4u;
    // 0x1365d4: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x1365d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1365d8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1365D8u;
    {
        const bool branch_taken_0x1365d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1365DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1365D8u;
            // 0x1365dc: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1365d8) {
            ctx->pc = 0x136644u;
            goto label_136644;
        }
    }
    ctx->pc = 0x1365E0u;
label_1365e0:
    // 0x1365e0: 0x85050004  lh          $a1, 0x4($t0)
    ctx->pc = 0x1365e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1365e4: 0x3c034780  lui         $v1, 0x4780
    ctx->pc = 0x1365e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18304 << 16));
    // 0x1365e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1365e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1365ec: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x1365ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1365f0: 0x85070006  lh          $a3, 0x6($t0)
    ctx->pc = 0x1365f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x1365f4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1365f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1365f8: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x1365f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1365fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1365fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x136600: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x136600u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136604: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x136604u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x136608: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x136608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x13660c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13660cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x136610: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x136610u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x136614: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x136614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x136618: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x136618u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13661c: 0x0  nop
    ctx->pc = 0x13661cu;
    // NOP
    // 0x136620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x136620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x136624: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x136624u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x136628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x136628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13662c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13662cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x136630: 0x0  nop
    ctx->pc = 0x136630u;
    // NOP
    // 0x136634: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x136634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x136638: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x136638u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x13663c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x13663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x136640: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x136640u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_136644:
    // 0x136644: 0x3e00008  jr          $ra
    ctx->pc = 0x136644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13664Cu;
    // 0x13664c: 0x0  nop
    ctx->pc = 0x13664cu;
    // NOP
}
