#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5510
// Address: 0x2f5510 - 0x2f57e0
void sub_002F5510_0x2f5510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5510_0x2f5510");
#endif

    switch (ctx->pc) {
        case 0x2f558cu: goto label_2f558c;
        case 0x2f55bcu: goto label_2f55bc;
        case 0x2f5644u: goto label_2f5644;
        default: break;
    }

    ctx->pc = 0x2f5510u;

    // 0x2f5510: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f5514: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f5514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f5518: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2f5518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2f551c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2f5520: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f5524: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2f5524u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5528: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f5528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f552c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f552cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f5530: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f5530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f5534: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f5538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f5538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f553c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5540: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2f5540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f5544: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x2F5544u;
    {
        const bool branch_taken_0x2f5544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5544u;
            // 0x2f5548: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5544) {
            ctx->pc = 0x2F57ACu;
            goto label_2f57ac;
        }
    }
    ctx->pc = 0x2F554Cu;
    // 0x2f554c: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x2f554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5550: 0x947e0000  lhu         $fp, 0x0($v1)
    ctx->pc = 0x2f5550u;
    SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5554: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x2f5554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5558: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x2f5558u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f555c: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x2f555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5560: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x2f5560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2f5564: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2f5568: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2f5568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2f556c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f556cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5570: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5570u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f5574: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f5574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2f5578: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x2f5578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x2f557c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2f557cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2f5580: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2f5580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2f5584: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5584u;
    {
        const bool branch_taken_0x2f5584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5584u;
            // 0x2f5588: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5584) {
            ctx->pc = 0x2F55A8u;
            goto label_2f55a8;
        }
    }
    ctx->pc = 0x2F558Cu;
label_2f558c:
    // 0x2f558c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2f558cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5590: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f5594: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f5594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f5598: 0x0  nop
    ctx->pc = 0x2f5598u;
    // NOP
    // 0x2f559c: 0x0  nop
    ctx->pc = 0x2f559cu;
    // NOP
    // 0x2f55a0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F55A0u;
    {
        const bool branch_taken_0x2f55a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f55a0) {
            ctx->pc = 0x2F558Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f558c;
        }
    }
    ctx->pc = 0x2F55A8u;
label_2f55a8:
    // 0x2f55a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2f55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f55ac: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2f55acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f55b0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2f55b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x2f55b4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2f55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2f55b8: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x2f55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
label_2f55bc:
    // 0x2f55bc: 0x82a4000d  lb          $a0, 0xD($s5)
    ctx->pc = 0x2f55bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 13)));
    // 0x2f55c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f55c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f55c4: 0x5483001c  bnel        $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F55C4u;
    {
        const bool branch_taken_0x2f55c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f55c4) {
            ctx->pc = 0x2F55C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F55C4u;
            // 0x2f55c8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5638u;
            goto label_2f5638;
        }
    }
    ctx->pc = 0x2F55CCu;
    // 0x2f55cc: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x2f55ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f55d0: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x2f55d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f55d4: 0x1420004c  bnez        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x2F55D4u;
    {
        const bool branch_taken_0x2f55d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f55d4) {
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F55DCu;
    // 0x2f55dc: 0x86a30006  lh          $v1, 0x6($s5)
    ctx->pc = 0x2f55dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x2f55e0: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x2f55e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f55e4: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F55E4u;
    {
        const bool branch_taken_0x2f55e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f55e4) {
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F55ECu;
    // 0x2f55ec: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x2f55ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2f55f0: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x2f55f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f55f4: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F55F4u;
    {
        const bool branch_taken_0x2f55f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f55f4) {
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F55FCu;
    // 0x2f55fc: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x2f55fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2f5600: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x2f5600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2f5604: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x2F5604u;
    {
        const bool branch_taken_0x2f5604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5604) {
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F560Cu;
    // 0x2f560c: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x2f560cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2f5610: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x2f5610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f5614: 0x1420003c  bnez        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x2F5614u;
    {
        const bool branch_taken_0x2f5614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5614) {
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F561Cu;
    // 0x2f561c: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x2f561cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x2f5620: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x2f5620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2f5624: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x2F5624u;
    {
        const bool branch_taken_0x2f5624 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5624) {
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F562Cu;
    // 0x2f562c: 0x92a3000c  lbu         $v1, 0xC($s5)
    ctx->pc = 0x2f562cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2f5630: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2F5630u;
    {
        const bool branch_taken_0x2f5630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5630u;
            // 0x2f5634: 0xa3a300bd  sb          $v1, 0xBD($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 189), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5630) {
            ctx->pc = 0x2F5718u;
            goto label_2f5718;
        }
    }
    ctx->pc = 0x2F5638u;
label_2f5638:
    // 0x2f5638: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f5638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f563c: 0xc04cb9c  jal         func_132E70
    ctx->pc = 0x2F563Cu;
    SET_GPR_U32(ctx, 31, 0x2F5644u);
    ctx->pc = 0x2F5640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F563Cu;
            // 0x2f5640: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5644u; }
        if (ctx->pc != 0x2F5644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5644u; }
        if (ctx->pc != 0x2F5644u) { return; }
    }
    ctx->pc = 0x2F5644u;
label_2f5644:
    // 0x2f5644: 0x86630040  lh          $v1, 0x40($s3)
    ctx->pc = 0x2f5644u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2f5648: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2f5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f564c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f564cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5650: 0x0  nop
    ctx->pc = 0x2f5650u;
    // NOP
    // 0x2f5654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5658: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f5658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f565c: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x2F565Cu;
    {
        const bool branch_taken_0x2f565c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f565c) {
            ctx->pc = 0x2F5660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F565Cu;
            // 0x2f5660: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F5664u;
    // 0x2f5664: 0x86630046  lh          $v1, 0x46($s3)
    ctx->pc = 0x2f5664u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x2f5668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f566c: 0x0  nop
    ctx->pc = 0x2f566cu;
    // NOP
    // 0x2f5670: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5674: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f5674u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5678: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2F5678u;
    {
        const bool branch_taken_0x2f5678 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5678) {
            ctx->pc = 0x2F5704u;
            goto label_2f5704;
        }
    }
    ctx->pc = 0x2F5680u;
    // 0x2f5680: 0x86630042  lh          $v1, 0x42($s3)
    ctx->pc = 0x2f5680u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
    // 0x2f5684: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2f5684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f5688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f568c: 0x0  nop
    ctx->pc = 0x2f568cu;
    // NOP
    // 0x2f5690: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5694: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f5694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f5698: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2F5698u;
    {
        const bool branch_taken_0x2f5698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f5698) {
            ctx->pc = 0x2F5704u;
            goto label_2f5704;
        }
    }
    ctx->pc = 0x2F56A0u;
    // 0x2f56a0: 0x86630048  lh          $v1, 0x48($s3)
    ctx->pc = 0x2f56a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2f56a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f56a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f56a8: 0x0  nop
    ctx->pc = 0x2f56a8u;
    // NOP
    // 0x2f56ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f56acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f56b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f56b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f56b4: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2F56B4u;
    {
        const bool branch_taken_0x2f56b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f56b4) {
            ctx->pc = 0x2F5704u;
            goto label_2f5704;
        }
    }
    ctx->pc = 0x2F56BCu;
    // 0x2f56bc: 0x86630044  lh          $v1, 0x44($s3)
    ctx->pc = 0x2f56bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2f56c0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2f56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f56c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f56c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f56c8: 0x0  nop
    ctx->pc = 0x2f56c8u;
    // NOP
    // 0x2f56cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f56ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f56d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f56d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f56d4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2F56D4u;
    {
        const bool branch_taken_0x2f56d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f56d4) {
            ctx->pc = 0x2F5704u;
            goto label_2f5704;
        }
    }
    ctx->pc = 0x2F56DCu;
    // 0x2f56dc: 0x8663004a  lh          $v1, 0x4A($s3)
    ctx->pc = 0x2f56dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 74)));
    // 0x2f56e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f56e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f56e4: 0x0  nop
    ctx->pc = 0x2f56e4u;
    // NOP
    // 0x2f56e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f56e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f56ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2f56ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f56f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2F56F0u;
    {
        const bool branch_taken_0x2f56f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f56f0) {
            ctx->pc = 0x2F5704u;
            goto label_2f5704;
        }
    }
    ctx->pc = 0x2F56F8u;
    // 0x2f56f8: 0x92a3000c  lbu         $v1, 0xC($s5)
    ctx->pc = 0x2f56f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2f56fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F56FCu;
    {
        const bool branch_taken_0x2f56fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F56FCu;
            // 0x2f5700: 0xa3a300bd  sb          $v1, 0xBD($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 189), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56fc) {
            ctx->pc = 0x2F5718u;
            goto label_2f5718;
        }
    }
    ctx->pc = 0x2F5704u;
label_2f5704:
    // 0x2f5704: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x2f5704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_2f5708:
    // 0x2f5708: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2f5708u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2f570c: 0x29e182b  sltu        $v1, $s4, $fp
    ctx->pc = 0x2f570cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2f5710: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2F5710u;
    {
        const bool branch_taken_0x2f5710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5710u;
            // 0x2f5714: 0x26b5001c  addiu       $s5, $s5, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5710) {
            ctx->pc = 0x2F55BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f55bc;
        }
    }
    ctx->pc = 0x2F5718u;
label_2f5718:
    // 0x2f5718: 0x93a500bd  lbu         $a1, 0xBD($sp)
    ctx->pc = 0x2f5718u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 189)));
    // 0x2f571c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2f571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2f5720: 0x28a40081  slti        $a0, $a1, 0x81
    ctx->pc = 0x2f5720u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2f5724: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2f5724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f5728: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2f5728u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2f572c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f572cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f5730: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2f5730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2f5734: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f5734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f5738: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2f5738u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f573c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2f573cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f5740: 0x28a40061  slti        $a0, $a1, 0x61
    ctx->pc = 0x2f5740u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2f5744: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2f5744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2f5748: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f5748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f574c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f574cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f5750: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f5750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f5754: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x2f5754u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f5758: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2f5758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f575c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F575Cu;
    {
        const bool branch_taken_0x2f575c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f575c) {
            ctx->pc = 0x2F5760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F575Cu;
            // 0x2f5760: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F576Cu;
            goto label_2f576c;
        }
    }
    ctx->pc = 0x2F5764u;
    // 0x2f5764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5764u;
    {
        const bool branch_taken_0x2f5764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5764u;
            // 0x2f5768: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5764) {
            ctx->pc = 0x2F5770u;
            goto label_2f5770;
        }
    }
    ctx->pc = 0x2F576Cu;
label_2f576c:
    // 0x2f576c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2f576cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2f5770:
    // 0x2f5770: 0xa3a300bc  sb          $v1, 0xBC($sp)
    ctx->pc = 0x2f5770u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 188), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f5774: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x2f5774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2f5778: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5778u;
    {
        const bool branch_taken_0x2f5778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f5778) {
            ctx->pc = 0x2F577Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5778u;
            // 0x2f577c: 0x2483ffff  addiu       $v1, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5790u;
            goto label_2f5790;
        }
    }
    ctx->pc = 0x2F5780u;
    // 0x2f5780: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2f5780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2f5784: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x2f5784u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2f5788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5788u;
    {
        const bool branch_taken_0x2f5788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F578Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5788u;
            // 0x2f578c: 0xa3a300be  sb          $v1, 0xBE($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 190), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5788) {
            ctx->pc = 0x2F5794u;
            goto label_2f5794;
        }
    }
    ctx->pc = 0x2F5790u;
label_2f5790:
    // 0x2f5790: 0xa3a300be  sb          $v1, 0xBE($sp)
    ctx->pc = 0x2f5790u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 190), (uint8_t)GPR_U32(ctx, 3));
label_2f5794:
    // 0x2f5794: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5794u;
    {
        const bool branch_taken_0x2f5794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5794) {
            ctx->pc = 0x2F5798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5794u;
            // 0x2f5798: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F57B0u;
            goto label_2f57b0;
        }
    }
    ctx->pc = 0x2F579Cu;
    // 0x2f579c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2f579cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f57a0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2f57a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2f57a4: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2f57a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2f57a8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2f57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2f57ac:
    // 0x2f57ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f57acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f57b0:
    // 0x2f57b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2f57b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f57b4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2f57b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f57b8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f57b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f57bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f57bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f57c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f57c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f57c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f57c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f57c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f57c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f57cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f57ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f57d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f57d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f57d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F57D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F57D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57D4u;
            // 0x2f57d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F57DCu;
    // 0x2f57dc: 0x0  nop
    ctx->pc = 0x2f57dcu;
    // NOP
}
