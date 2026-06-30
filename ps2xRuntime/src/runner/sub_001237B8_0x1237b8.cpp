#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001237B8
// Address: 0x1237b8 - 0x123ef0
void sub_001237B8_0x1237b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001237B8_0x1237b8");
#endif

    switch (ctx->pc) {
        case 0x1237d8u: goto label_1237d8;
        case 0x1237e4u: goto label_1237e4;
        case 0x12382cu: goto label_12382c;
        case 0x123938u: goto label_123938;
        case 0x1239e4u: goto label_1239e4;
        case 0x123a1cu: goto label_123a1c;
        case 0x123b0cu: goto label_123b0c;
        case 0x123c5cu: goto label_123c5c;
        case 0x123e40u: goto label_123e40;
        default: break;
    }

    ctx->pc = 0x1237b8u;

    // 0x1237b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1237b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1237bc: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x1237bcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1237c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1237c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1237c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1237c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1237c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1237cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1237ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1237d0: 0x5e001c3  bltz        $t7, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x1237D0u;
    {
        const bool branch_taken_0x1237d0 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x1237D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1237D0u;
            // 0x1237d4: 0xffb30018  sd          $s3, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237d0) {
            ctx->pc = 0x123EE0u;
            goto label_123ee0;
        }
    }
    ctx->pc = 0x1237D8u;
label_1237d8:
    // 0x1237d8: 0x5783f  dsra32      $t7, $a1, 0
    ctx->pc = 0x1237d8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1237dc: 0x5e201be  bltzl       $t7, . + 4 + (0x1BE << 2)
    ctx->pc = 0x1237DCu;
    {
        const bool branch_taken_0x1237dc = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x1237dc) {
            ctx->pc = 0x1237E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1237DCu;
            // 0x1237e0: 0x129027  nor         $s2, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 18, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123ED8u;
            goto label_123ed8;
        }
    }
    ctx->pc = 0x1237E4u;
label_1237e4:
    // 0x1237e4: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1237e4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1237e8: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x1237e8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1237ec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1237ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1237f0: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x1237f0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1237f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1237f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1237f8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1237f8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1237fc: 0x1520010a  bnez        $t1, . + 4 + (0x10A << 2)
    ctx->pc = 0x1237FCu;
    {
        const bool branch_taken_0x1237fc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x123800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1237FCu;
            // 0x123800: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237fc) {
            ctx->pc = 0x123C28u;
            goto label_123c28;
        }
    }
    ctx->pc = 0x123804u;
    // 0x123804: 0x145782b  sltu        $t7, $t2, $a1
    ctx->pc = 0x123804u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123808: 0x11e00067  beqz        $t7, . + 4 + (0x67 << 2)
    ctx->pc = 0x123808u;
    {
        const bool branch_taken_0x123808 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12380Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123808u;
            // 0x12380c: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123808) {
            ctx->pc = 0x1239A8u;
            goto label_1239a8;
        }
    }
    ctx->pc = 0x123810u;
    // 0x123810: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x123810u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123814: 0x15e0005c  bnez        $t7, . + 4 + (0x5C << 2)
    ctx->pc = 0x123814u;
    {
        const bool branch_taken_0x123814 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123814u;
            // 0x123818: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123814) {
            ctx->pc = 0x123988u;
            goto label_123988;
        }
    }
    ctx->pc = 0x12381Cu;
    // 0x12381c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12381cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x123820: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x123820u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x123824: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x123824u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123828: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x123828u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12382c:
    // 0x12382c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x12382cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x123830: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x123830u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x123834: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x123834u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x123838: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x123838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12383c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12383cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x123840: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x123840u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x123844: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x123844u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x123848: 0x16d3823  subu        $a3, $t3, $t5
    ctx->pc = 0x123848u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12384c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x12384Cu;
    {
        const bool branch_taken_0x12384c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x123850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12384Cu;
            // 0x123850: 0x56402  srl         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12384c) {
            ctx->pc = 0x123870u;
            goto label_123870;
        }
    }
    ctx->pc = 0x123854u;
    // 0x123854: 0x1677823  subu        $t7, $t3, $a3
    ctx->pc = 0x123854u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x123858: 0xea7004  sllv        $t6, $t2, $a3
    ctx->pc = 0x123858u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x12385c: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x12385cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x123860: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x123860u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x123864: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x123864u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x123868: 0xf8c004  sllv        $t8, $t8, $a3
    ctx->pc = 0x123868u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 7) & 0x1F));
    // 0x12386c: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x12386cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_123870:
    // 0x123870: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x123870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x123874: 0x14c001b  divu        $zero, $t2, $t4
    ctx->pc = 0x123874u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x123878: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x123878u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12387c: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12387Cu;
    {
        const bool branch_taken_0x12387c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x12387c) {
            ctx->pc = 0x123880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12387Cu;
            // 0x123880: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123884u;
            goto label_123884;
        }
    }
    ctx->pc = 0x123884u;
label_123884:
    // 0x123884: 0x7812  mflo        $t7
    ctx->pc = 0x123884u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x123888: 0x7010  mfhi        $t6
    ctx->pc = 0x123888u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12388c: 0x4812  mflo        $t1
    ctx->pc = 0x12388cu;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x123890: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x123890u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x123894: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x123894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x123898: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x123898u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12389c: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12389cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1238a0: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1238A0u;
    {
        const bool branch_taken_0x1238a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238a0) {
            ctx->pc = 0x1238A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1238A0u;
            // 0x1238a4: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1238D4u;
            goto label_1238d4;
        }
    }
    ctx->pc = 0x1238A8u;
    // 0x1238a8: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1238a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1238ac: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x1238acu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1238b0: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1238B0u;
    {
        const bool branch_taken_0x1238b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1238B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1238B0u;
            // 0x1238b4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238b0) {
            ctx->pc = 0x1238D0u;
            goto label_1238d0;
        }
    }
    ctx->pc = 0x1238B8u;
    // 0x1238b8: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x1238b8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1238bc: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1238BCu;
    {
        const bool branch_taken_0x1238bc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238bc) {
            ctx->pc = 0x1238C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1238BCu;
            // 0x1238c0: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1238D4u;
            goto label_1238d4;
        }
    }
    ctx->pc = 0x1238C4u;
    // 0x1238c4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1238c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1238c8: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x1238c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x1238cc: 0x0  nop
    ctx->pc = 0x1238ccu;
    // NOP
label_1238d0:
    // 0x1238d0: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x1238d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_1238d4:
    // 0x1238d4: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x1238d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x1238d8: 0x1cc001b  divu        $zero, $t6, $t4
    ctx->pc = 0x1238d8u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1238dc: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1238DCu;
    {
        const bool branch_taken_0x1238dc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1238dc) {
            ctx->pc = 0x1238E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1238DCu;
            // 0x1238e0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1238E4u;
            goto label_1238e4;
        }
    }
    ctx->pc = 0x1238E4u;
label_1238e4:
    // 0x1238e4: 0x7812  mflo        $t7
    ctx->pc = 0x1238e4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1238e8: 0x7010  mfhi        $t6
    ctx->pc = 0x1238e8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1238ec: 0x5812  mflo        $t3
    ctx->pc = 0x1238ecu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x1238f0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1238f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1238f4: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x1238f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1238f8: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x1238f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1238fc: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x1238fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x123900: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x123900u;
    {
        const bool branch_taken_0x123900 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123900u;
            // 0x123904: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123900) {
            ctx->pc = 0x12392Cu;
            goto label_12392c;
        }
    }
    ctx->pc = 0x123908u;
    // 0x123908: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x123908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12390c: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12390cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123910: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123910u;
    {
        const bool branch_taken_0x123910 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123910u;
            // 0x123914: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123910) {
            ctx->pc = 0x123928u;
            goto label_123928;
        }
    }
    ctx->pc = 0x123918u;
    // 0x123918: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x123918u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12391c: 0x256effff  addiu       $t6, $t3, -0x1
    ctx->pc = 0x12391cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x123920: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x123920u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x123924: 0x1cf580b  movn        $t3, $t6, $t7
    ctx->pc = 0x123924u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 14));
label_123928:
    // 0x123928: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x123928u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_12392c:
    // 0x12392c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12392cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123930: 0x1eb4025  or          $t0, $t7, $t3
    ctx->pc = 0x123930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x123934: 0x0  nop
    ctx->pc = 0x123934u;
    // NOP
label_123938:
    // 0x123938: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x123938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12393c: 0x8703c  dsll32      $t6, $t0, 0
    ctx->pc = 0x12393cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) << (32 + 0));
    // 0x123940: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x123940u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x123944: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x123944u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x123948: 0x20f8024  and         $s0, $s0, $t7
    ctx->pc = 0x123948u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 15));
    // 0x12394c: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x12394cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x123950: 0x20e8025  or          $s0, $s0, $t6
    ctx->pc = 0x123950u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 14));
    // 0x123954: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x123954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x123958: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x123958u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12395c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12395cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x123960: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x123960u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x123964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123968: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x123968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12396c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12396cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123970: 0x2782f  dsubu       $t7, $zero, $v0
    ctx->pc = 0x123970u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x123974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123978: 0x1f2100b  movn        $v0, $t7, $s2
    ctx->pc = 0x123978u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x12397c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12397cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123980: 0x3e00008  jr          $ra
    ctx->pc = 0x123980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123980u;
            // 0x123984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123988u;
label_123988:
    // 0x123988: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x123988u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12398c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12398cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x123990: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x123990u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x123994: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x123994u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123998: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x123998u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12399c: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x12399Cu;
    {
        const bool branch_taken_0x12399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1239A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12399Cu;
            // 0x1239a0: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12399c) {
            ctx->pc = 0x12382Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12382c;
        }
    }
    ctx->pc = 0x1239A4u;
    // 0x1239a4: 0x0  nop
    ctx->pc = 0x1239a4u;
    // NOP
label_1239a8:
    // 0x1239a8: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1239A8u;
    {
        const bool branch_taken_0x1239a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1239ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1239A8u;
            // 0x1239ac: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239a8) {
            ctx->pc = 0x1239CCu;
            goto label_1239cc;
        }
    }
    ctx->pc = 0x1239B0u;
    // 0x1239b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1239b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1239b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1239B4u;
    {
        const bool branch_taken_0x1239b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1239b4) {
            ctx->pc = 0x1239B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1239B4u;
            // 0x1239b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1239BCu;
            goto label_1239bc;
        }
    }
    ctx->pc = 0x1239BCu;
label_1239bc:
    // 0x1239bc: 0x1f3001b  divu        $zero, $t7, $s3
    ctx->pc = 0x1239bcu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x1239c0: 0x2812  mflo        $a1
    ctx->pc = 0x1239c0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1239c4: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x1239c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1239c8: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1239c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1239cc:
    // 0x1239cc: 0x15e0008e  bnez        $t7, . + 4 + (0x8E << 2)
    ctx->pc = 0x1239CCu;
    {
        const bool branch_taken_0x1239cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1239D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1239CCu;
            // 0x1239d0: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1239cc) {
            ctx->pc = 0x123C08u;
            goto label_123c08;
        }
    }
    ctx->pc = 0x1239D4u;
    // 0x1239d4: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x1239d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1239d8: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x1239d8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1239dc: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x1239dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1239e0: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x1239e0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_1239e4:
    // 0x1239e4: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1239e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1239e8: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x1239e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x1239ec: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x1239ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x1239f0: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x1239f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1239f4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1239f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1239f8: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x1239f8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1239fc: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1239fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x123a00: 0x16d3823  subu        $a3, $t3, $t5
    ctx->pc = 0x123a00u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x123a04: 0x14e00044  bnez        $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x123A04u;
    {
        const bool branch_taken_0x123a04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123A04u;
            // 0x123a08: 0x1671023  subu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a04) {
            ctx->pc = 0x123B18u;
            goto label_123b18;
        }
    }
    ctx->pc = 0x123A0Cu;
    // 0x123a0c: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x123a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x123a10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x123a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123a14: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x123a18: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x123a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_123a1c:
    // 0x123a1c: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x123a1cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x123a20: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x123a20u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x123a24: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123A24u;
    {
        const bool branch_taken_0x123a24 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a24) {
            ctx->pc = 0x123A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123A24u;
            // 0x123a28: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123A2Cu;
            goto label_123a2c;
        }
    }
    ctx->pc = 0x123A2Cu;
label_123a2c:
    // 0x123a2c: 0x7812  mflo        $t7
    ctx->pc = 0x123a2cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x123a30: 0x7010  mfhi        $t6
    ctx->pc = 0x123a30u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x123a34: 0x5012  mflo        $t2
    ctx->pc = 0x123a34u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x123a38: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x123a38u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x123a3c: 0x1e46018  mult        $t4, $t7, $a0
    ctx->pc = 0x123a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x123a40: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x123a40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x123a44: 0x1cc782b  sltu        $t7, $t6, $t4
    ctx->pc = 0x123a44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x123a48: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x123A48u;
    {
        const bool branch_taken_0x123a48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a48) {
            ctx->pc = 0x123A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123A48u;
            // 0x123a4c: 0x1cc7023  subu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123A7Cu;
            goto label_123a7c;
        }
    }
    ctx->pc = 0x123A50u;
    // 0x123a50: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x123a50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x123a54: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x123a54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123a58: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123A58u;
    {
        const bool branch_taken_0x123a58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123A58u;
            // 0x123a5c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123a58) {
            ctx->pc = 0x123A78u;
            goto label_123a78;
        }
    }
    ctx->pc = 0x123A60u;
    // 0x123a60: 0x1cc782b  sltu        $t7, $t6, $t4
    ctx->pc = 0x123a60u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x123a64: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x123A64u;
    {
        const bool branch_taken_0x123a64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a64) {
            ctx->pc = 0x123A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123A64u;
            // 0x123a68: 0x1cc7023  subu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123A7Cu;
            goto label_123a7c;
        }
    }
    ctx->pc = 0x123A6Cu;
    // 0x123a6c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x123a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x123a70: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x123a70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x123a74: 0x0  nop
    ctx->pc = 0x123a74u;
    // NOP
label_123a78:
    // 0x123a78: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x123a78u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_123a7c:
    // 0x123a7c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123A7Cu;
    {
        const bool branch_taken_0x123a7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a7c) {
            ctx->pc = 0x123A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123A7Cu;
            // 0x123a80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123A84u;
            goto label_123a84;
        }
    }
    ctx->pc = 0x123A84u;
label_123a84:
    // 0x123a84: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x123a84u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x123a88: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x123a88u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x123a8c: 0x7812  mflo        $t7
    ctx->pc = 0x123a8cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x123a90: 0x7010  mfhi        $t6
    ctx->pc = 0x123a90u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x123a94: 0x5812  mflo        $t3
    ctx->pc = 0x123a94u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x123a98: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x123a98u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x123a9c: 0x1e46018  mult        $t4, $t7, $a0
    ctx->pc = 0x123a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x123aa0: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x123aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x123aa4: 0x8c782b  sltu        $t7, $a0, $t4
    ctx->pc = 0x123aa4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x123aa8: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x123AA8u;
    {
        const bool branch_taken_0x123aa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123AA8u;
            // 0x123aac: 0xa7c00  sll         $t7, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123aa8) {
            ctx->pc = 0x123ADCu;
            goto label_123adc;
        }
    }
    ctx->pc = 0x123AB0u;
    // 0x123ab0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x123ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x123ab4: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x123ab4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123ab8: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123AB8u;
    {
        const bool branch_taken_0x123ab8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123AB8u;
            // 0x123abc: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ab8) {
            ctx->pc = 0x123AD8u;
            goto label_123ad8;
        }
    }
    ctx->pc = 0x123AC0u;
    // 0x123ac0: 0x8c782b  sltu        $t7, $a0, $t4
    ctx->pc = 0x123ac0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x123ac4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123AC4u;
    {
        const bool branch_taken_0x123ac4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123AC4u;
            // 0x123ac8: 0xa7c00  sll         $t7, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ac4) {
            ctx->pc = 0x123ADCu;
            goto label_123adc;
        }
    }
    ctx->pc = 0x123ACCu;
    // 0x123acc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x123accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x123ad0: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x123ad0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x123ad4: 0x0  nop
    ctx->pc = 0x123ad4u;
    // NOP
label_123ad8:
    // 0x123ad8: 0xa7c00  sll         $t7, $t2, 16
    ctx->pc = 0x123ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_123adc:
    // 0x123adc: 0x8cc023  subu        $t8, $a0, $t4
    ctx->pc = 0x123adcu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x123ae0: 0x1260ff95  beqz        $s3, . + 4 + (-0x6B << 2)
    ctx->pc = 0x123AE0u;
    {
        const bool branch_taken_0x123ae0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123AE0u;
            // 0x123ae4: 0x1eb4025  or          $t0, $t7, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ae0) {
            ctx->pc = 0x123938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123938;
        }
    }
    ctx->pc = 0x123AE8u;
    // 0x123ae8: 0xf87806  srlv        $t7, $t8, $a3
    ctx->pc = 0x123ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 7) & 0x1F));
    // 0x123aec: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x123aecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123af0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x123af0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x123af4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x123af4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x123af8: 0x32ec824  and         $t9, $t9, $t6
    ctx->pc = 0x123af8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) & GPR_U64(ctx, 14));
    // 0x123afc: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x123afcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x123b00: 0x32fc825  or          $t9, $t9, $t7
    ctx->pc = 0x123b00u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 15));
    // 0x123b04: 0x19c83c  dsll32      $t9, $t9, 0
    ctx->pc = 0x123b04u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 0));
    // 0x123b08: 0x19c83e  dsrl32      $t9, $t9, 0
    ctx->pc = 0x123b08u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) >> (32 + 0));
label_123b0c:
    // 0x123b0c: 0x1000ff8a  b           . + 4 + (-0x76 << 2)
    ctx->pc = 0x123B0Cu;
    {
        const bool branch_taken_0x123b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123B0Cu;
            // 0x123b10: 0xfc190000  sd          $t9, 0x0($zero) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 0), 0), GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b0c) {
            ctx->pc = 0x123938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123938;
        }
    }
    ctx->pc = 0x123B14u;
    // 0x123b14: 0x0  nop
    ctx->pc = 0x123b14u;
    // NOP
label_123b18:
    // 0x123b18: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x123b18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x123b1c: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x123b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x123b20: 0x4a6006  srlv        $t4, $t2, $v0
    ctx->pc = 0x123b20u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x123b24: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x123b24u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x123b28: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x123b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x123b2c: 0x587006  srlv        $t6, $t8, $v0
    ctx->pc = 0x123b2cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
    // 0x123b30: 0xea7804  sllv        $t7, $t2, $a3
    ctx->pc = 0x123b30u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x123b34: 0x1ee5025  or          $t2, $t7, $t6
    ctx->pc = 0x123b34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x123b38: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123B38u;
    {
        const bool branch_taken_0x123b38 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b38) {
            ctx->pc = 0x123B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123B38u;
            // 0x123b3c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123B40u;
            goto label_123b40;
        }
    }
    ctx->pc = 0x123B40u;
label_123b40:
    // 0x123b40: 0xa7402  srl         $t6, $t2, 16
    ctx->pc = 0x123b40u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x123b44: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x123b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b48: 0xf8c004  sllv        $t8, $t8, $a3
    ctx->pc = 0x123b48u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 7) & 0x1F));
    // 0x123b4c: 0x6012  mflo        $t4
    ctx->pc = 0x123b4cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x123b50: 0x6810  mfhi        $t5
    ctx->pc = 0x123b50u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x123b54: 0x3012  mflo        $a2
    ctx->pc = 0x123b54u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x123b58: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x123b58u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x123b5c: 0x1844818  mult        $t1, $t4, $a0
    ctx->pc = 0x123b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x123b60: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x123b60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x123b64: 0x1c9782b  sltu        $t7, $t6, $t1
    ctx->pc = 0x123b64u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123b68: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x123B68u;
    {
        const bool branch_taken_0x123b68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123B68u;
            // 0x123b6c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b68) {
            ctx->pc = 0x123B98u;
            goto label_123b98;
        }
    }
    ctx->pc = 0x123B70u;
    // 0x123b70: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x123b70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x123b74: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x123b74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123b78: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123B78u;
    {
        const bool branch_taken_0x123b78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123B78u;
            // 0x123b7c: 0x2586ffff  addiu       $a2, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b78) {
            ctx->pc = 0x123B98u;
            goto label_123b98;
        }
    }
    ctx->pc = 0x123B80u;
    // 0x123b80: 0x1c9782b  sltu        $t7, $t6, $t1
    ctx->pc = 0x123b80u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123b84: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x123B84u;
    {
        const bool branch_taken_0x123b84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123b84) {
            ctx->pc = 0x123B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123B84u;
            // 0x123b88: 0x1c97023  subu        $t6, $t6, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123B9Cu;
            goto label_123b9c;
        }
    }
    ctx->pc = 0x123B8Cu;
    // 0x123b8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x123b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x123b90: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x123b90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x123b94: 0x0  nop
    ctx->pc = 0x123b94u;
    // NOP
label_123b98:
    // 0x123b98: 0x1c97023  subu        $t6, $t6, $t1
    ctx->pc = 0x123b98u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
label_123b9c:
    // 0x123b9c: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x123b9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x123ba0: 0x1c8001b  divu        $zero, $t6, $t0
    ctx->pc = 0x123ba0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x123ba4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123BA4u;
    {
        const bool branch_taken_0x123ba4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x123ba4) {
            ctx->pc = 0x123BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123BA4u;
            // 0x123ba8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123BACu;
            goto label_123bac;
        }
    }
    ctx->pc = 0x123BACu;
label_123bac:
    // 0x123bac: 0x7812  mflo        $t7
    ctx->pc = 0x123bacu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x123bb0: 0x7010  mfhi        $t6
    ctx->pc = 0x123bb0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x123bb4: 0x1012  mflo        $v0
    ctx->pc = 0x123bb4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x123bb8: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x123bbc: 0x1e34818  mult        $t1, $t7, $v1
    ctx->pc = 0x123bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x123bc0: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x123bc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x123bc4: 0x189782b  sltu        $t7, $t4, $t1
    ctx->pc = 0x123bc4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123bc8: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x123BC8u;
    {
        const bool branch_taken_0x123bc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123BC8u;
            // 0x123bcc: 0x67c00  sll         $t7, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bc8) {
            ctx->pc = 0x123BFCu;
            goto label_123bfc;
        }
    }
    ctx->pc = 0x123BD0u;
    // 0x123bd0: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x123bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x123bd4: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x123bd4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123bd8: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123BD8u;
    {
        const bool branch_taken_0x123bd8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123BD8u;
            // 0x123bdc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123bd8) {
            ctx->pc = 0x123BF8u;
            goto label_123bf8;
        }
    }
    ctx->pc = 0x123BE0u;
    // 0x123be0: 0x189782b  sltu        $t7, $t4, $t1
    ctx->pc = 0x123be0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123be4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123BE4u;
    {
        const bool branch_taken_0x123be4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123BE4u;
            // 0x123be8: 0x67c00  sll         $t7, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123be4) {
            ctx->pc = 0x123BFCu;
            goto label_123bfc;
        }
    }
    ctx->pc = 0x123BECu;
    // 0x123bec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x123becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x123bf0: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x123bf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x123bf4: 0x0  nop
    ctx->pc = 0x123bf4u;
    // NOP
label_123bf8:
    // 0x123bf8: 0x67c00  sll         $t7, $a2, 16
    ctx->pc = 0x123bf8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_123bfc:
    // 0x123bfc: 0x1895023  subu        $t2, $t4, $t1
    ctx->pc = 0x123bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x123c00: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x123C00u;
    {
        const bool branch_taken_0x123c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C00u;
            // 0x123c04: 0x1e24825  or          $t1, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c00) {
            ctx->pc = 0x123A1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123a1c;
        }
    }
    ctx->pc = 0x123C08u;
label_123c08:
    // 0x123c08: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x123c08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x123c0c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x123c0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x123c10: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x123c10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x123c14: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x123c14u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123c18: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x123c18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c1c: 0x1000ff71  b           . + 4 + (-0x8F << 2)
    ctx->pc = 0x123C1Cu;
    {
        const bool branch_taken_0x123c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C1Cu;
            // 0x123c20: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c1c) {
            ctx->pc = 0x1239E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1239e4;
        }
    }
    ctx->pc = 0x123C24u;
    // 0x123c24: 0x0  nop
    ctx->pc = 0x123c24u;
    // NOP
label_123c28:
    // 0x123c28: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x123c28u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123c2c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x123C2Cu;
    {
        const bool branch_taken_0x123c2c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C2Cu;
            // 0x123c30: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c2c) {
            ctx->pc = 0x123C40u;
            goto label_123c40;
        }
    }
    ctx->pc = 0x123C34u;
    // 0x123c34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123c34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c38: 0x1000ff3f  b           . + 4 + (-0xC1 << 2)
    ctx->pc = 0x123C38u;
    {
        const bool branch_taken_0x123c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C38u;
            // 0x123c3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c38) {
            ctx->pc = 0x123938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123938;
        }
    }
    ctx->pc = 0x123C40u;
label_123c40:
    // 0x123c40: 0x1e9782b  sltu        $t7, $t7, $t1
    ctx->pc = 0x123c40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123c44: 0x15e0009c  bnez        $t7, . + 4 + (0x9C << 2)
    ctx->pc = 0x123C44u;
    {
        const bool branch_taken_0x123c44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C44u;
            // 0x123c48: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c44) {
            ctx->pc = 0x123EB8u;
            goto label_123eb8;
        }
    }
    ctx->pc = 0x123C4Cu;
    // 0x123c4c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x123c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x123c50: 0x2d2e0100  sltiu       $t6, $t1, 0x100
    ctx->pc = 0x123c50u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x123c54: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x123c54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c58: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x123c58u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_123c5c:
    // 0x123c5c: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x123c5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x123c60: 0x1897806  srlv        $t7, $t1, $t4
    ctx->pc = 0x123c60u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x123c64: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x123c64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x123c68: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x123c68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x123c6c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x123c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x123c70: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x123c70u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x123c74: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x123c74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x123c78: 0x16d3823  subu        $a3, $t3, $t5
    ctx->pc = 0x123c78u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x123c7c: 0x14e0001c  bnez        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x123C7Cu;
    {
        const bool branch_taken_0x123c7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C7Cu;
            // 0x123c80: 0x1671023  subu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c7c) {
            ctx->pc = 0x123CF0u;
            goto label_123cf0;
        }
    }
    ctx->pc = 0x123C84u;
    // 0x123c84: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x123c84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x123c88: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123C88u;
    {
        const bool branch_taken_0x123c88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C88u;
            // 0x123c8c: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c88) {
            ctx->pc = 0x123CA0u;
            goto label_123ca0;
        }
    }
    ctx->pc = 0x123C90u;
    // 0x123c90: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x123c90u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x123c94: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123C94u;
    {
        const bool branch_taken_0x123c94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C94u;
            // 0x123c98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c94) {
            ctx->pc = 0x123CB4u;
            goto label_123cb4;
        }
    }
    ctx->pc = 0x123C9Cu;
    // 0x123c9c: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x123c9cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_123ca0:
    // 0x123ca0: 0x1497023  subu        $t6, $t2, $t1
    ctx->pc = 0x123ca0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x123ca4: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x123ca4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123ca8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x123ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123cac: 0x1cf5023  subu        $t2, $t6, $t7
    ctx->pc = 0x123cacu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x123cb0: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x123cb0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_123cb4:
    // 0x123cb4: 0x1260ff20  beqz        $s3, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x123CB4u;
    {
        const bool branch_taken_0x123cb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CB4u;
            // 0x123cb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123cb4) {
            ctx->pc = 0x123938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123938;
        }
    }
    ctx->pc = 0x123CBCu;
    // 0x123cbc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x123cbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123cc0: 0x18703c  dsll32      $t6, $t8, 0
    ctx->pc = 0x123cc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) << (32 + 0));
    // 0x123cc4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x123cc4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x123cc8: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x123cc8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x123ccc: 0x32fc824  and         $t9, $t9, $t7
    ctx->pc = 0x123cccu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x123cd0: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x123cd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x123cd4: 0x32ec825  or          $t9, $t9, $t6
    ctx->pc = 0x123cd4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 14));
    // 0x123cd8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x123cd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x123cdc: 0x19c83c  dsll32      $t9, $t9, 0
    ctx->pc = 0x123cdcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 0));
    // 0x123ce0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x123ce0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x123ce4: 0x19c83e  dsrl32      $t9, $t9, 0
    ctx->pc = 0x123ce4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x123ce8: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x123CE8u;
    {
        const bool branch_taken_0x123ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123CE8u;
            // 0x123cec: 0x32fc825  or          $t9, $t9, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ce8) {
            ctx->pc = 0x123B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123b0c;
        }
    }
    ctx->pc = 0x123CF0u;
label_123cf0:
    // 0x123cf0: 0xe97004  sllv        $t6, $t1, $a3
    ctx->pc = 0x123cf0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x123cf4: 0x457806  srlv        $t7, $a1, $v0
    ctx->pc = 0x123cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x123cf8: 0x4a6006  srlv        $t4, $t2, $v0
    ctx->pc = 0x123cf8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x123cfc: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x123cfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x123d00: 0xea6804  sllv        $t5, $t2, $a3
    ctx->pc = 0x123d00u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x123d04: 0x95c02  srl         $t3, $t1, 16
    ctx->pc = 0x123d04u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x123d08: 0x3124ffff  andi        $a0, $t1, 0xFFFF
    ctx->pc = 0x123d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x123d0c: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x123d0cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x123d10: 0x587806  srlv        $t7, $t8, $v0
    ctx->pc = 0x123d10u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
    // 0x123d14: 0x1af5025  or          $t2, $t5, $t7
    ctx->pc = 0x123d14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x123d18: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123D18u;
    {
        const bool branch_taken_0x123d18 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d18) {
            ctx->pc = 0x123D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123D18u;
            // 0x123d1c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123D20u;
            goto label_123d20;
        }
    }
    ctx->pc = 0x123D20u;
label_123d20:
    // 0x123d20: 0xa6c02  srl         $t5, $t2, 16
    ctx->pc = 0x123d20u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x123d24: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x123d24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x123d28: 0x6012  mflo        $t4
    ctx->pc = 0x123d28u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x123d2c: 0x7010  mfhi        $t6
    ctx->pc = 0x123d2cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x123d30: 0x4012  mflo        $t0
    ctx->pc = 0x123d30u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x123d34: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x123d34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x123d38: 0x1843018  mult        $a2, $t4, $a0
    ctx->pc = 0x123d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x123d3c: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x123d3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x123d40: 0x1c6782b  sltu        $t7, $t6, $a2
    ctx->pc = 0x123d40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x123d44: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x123D44u;
    {
        const bool branch_taken_0x123d44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D44u;
            // 0x123d48: 0xf8c004  sllv        $t8, $t8, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d44) {
            ctx->pc = 0x123D70u;
            goto label_123d70;
        }
    }
    ctx->pc = 0x123D4Cu;
    // 0x123d4c: 0x1c97021  addu        $t6, $t6, $t1
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x123d50: 0x1c9782b  sltu        $t7, $t6, $t1
    ctx->pc = 0x123d50u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123d54: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x123D54u;
    {
        const bool branch_taken_0x123d54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123D54u;
            // 0x123d58: 0x2588ffff  addiu       $t0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d54) {
            ctx->pc = 0x123D70u;
            goto label_123d70;
        }
    }
    ctx->pc = 0x123D5Cu;
    // 0x123d5c: 0x1c6782b  sltu        $t7, $t6, $a2
    ctx->pc = 0x123d5cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x123d60: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x123D60u;
    {
        const bool branch_taken_0x123d60 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d60) {
            ctx->pc = 0x123D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123D60u;
            // 0x123d64: 0x1c67023  subu        $t6, $t6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123D74u;
            goto label_123d74;
        }
    }
    ctx->pc = 0x123D68u;
    // 0x123d68: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x123d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x123d6c: 0x1c97021  addu        $t6, $t6, $t1
    ctx->pc = 0x123d6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
label_123d70:
    // 0x123d70: 0x1c67023  subu        $t6, $t6, $a2
    ctx->pc = 0x123d70u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_123d74:
    // 0x123d74: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x123d74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x123d78: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x123d78u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x123d7c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x123D7Cu;
    {
        const bool branch_taken_0x123d7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d7c) {
            ctx->pc = 0x123D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123D7Cu;
            // 0x123d80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x123D84u;
            goto label_123d84;
        }
    }
    ctx->pc = 0x123D84u;
label_123d84:
    // 0x123d84: 0x7812  mflo        $t7
    ctx->pc = 0x123d84u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x123d88: 0x7010  mfhi        $t6
    ctx->pc = 0x123d88u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x123d8c: 0x6012  mflo        $t4
    ctx->pc = 0x123d8cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x123d90: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x123d90u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x123d94: 0x1e43018  mult        $a2, $t7, $a0
    ctx->pc = 0x123d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x123d98: 0x1cd1825  or          $v1, $t6, $t5
    ctx->pc = 0x123d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x123d9c: 0x66782b  sltu        $t7, $v1, $a2
    ctx->pc = 0x123d9cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x123da0: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x123DA0u;
    {
        const bool branch_taken_0x123da0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DA0u;
            // 0x123da4: 0x87c00  sll         $t7, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123da0) {
            ctx->pc = 0x123DD4u;
            goto label_123dd4;
        }
    }
    ctx->pc = 0x123DA8u;
    // 0x123da8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x123da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x123dac: 0x69782b  sltu        $t7, $v1, $t1
    ctx->pc = 0x123dacu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123db0: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x123DB0u;
    {
        const bool branch_taken_0x123db0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DB0u;
            // 0x123db4: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123db0) {
            ctx->pc = 0x123DD0u;
            goto label_123dd0;
        }
    }
    ctx->pc = 0x123DB8u;
    // 0x123db8: 0x66782b  sltu        $t7, $v1, $a2
    ctx->pc = 0x123db8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x123dbc: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x123DBCu;
    {
        const bool branch_taken_0x123dbc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123DBCu;
            // 0x123dc0: 0x87c00  sll         $t7, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dbc) {
            ctx->pc = 0x123DD4u;
            goto label_123dd4;
        }
    }
    ctx->pc = 0x123DC4u;
    // 0x123dc4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x123dc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x123dc8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x123dcc: 0x0  nop
    ctx->pc = 0x123dccu;
    // NOP
label_123dd0:
    // 0x123dd0: 0x87c00  sll         $t7, $t0, 16
    ctx->pc = 0x123dd0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_123dd4:
    // 0x123dd4: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x123dd4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x123dd8: 0x1ec4025  or          $t0, $t7, $t4
    ctx->pc = 0x123dd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x123ddc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x123ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x123de0: 0x310fffff  andi        $t7, $t0, 0xFFFF
    ctx->pc = 0x123de0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x123de4: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x123de4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x123de8: 0x1ee8818  mult        $s1, $t7, $t6
    ctx->pc = 0x123de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x123dec: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x123decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x123df0: 0x86c02  srl         $t5, $t0, 16
    ctx->pc = 0x123df0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x123df4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x123df4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123df8: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x123df8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x123dfc: 0x117c02  srl         $t7, $s1, 16
    ctx->pc = 0x123dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x123e00: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x123e00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x123e04: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x123e04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x123e08: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x123e08u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x123e0c: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x123E0Cu;
    {
        const bool branch_taken_0x123e0c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E0Cu;
            // 0x123e10: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e0c) {
            ctx->pc = 0x123E1Cu;
            goto label_123e1c;
        }
    }
    ctx->pc = 0x123E14u;
    // 0x123e14: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x123e14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x123e18: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x123e18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_123e1c:
    // 0x123e1c: 0xb7c02  srl         $t7, $t3, 16
    ctx->pc = 0x123e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x123e20: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x123e20u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x123e24: 0x18f2021  addu        $a0, $t4, $t7
    ctx->pc = 0x123e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x123e28: 0x322effff  andi        $t6, $s1, 0xFFFF
    ctx->pc = 0x123e28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x123e2c: 0x144782b  sltu        $t7, $t2, $a0
    ctx->pc = 0x123e2cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x123e30: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x123E30u;
    {
        const bool branch_taken_0x123e30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x123E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E30u;
            // 0x123e34: 0x1ae5821  addu        $t3, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e30) {
            ctx->pc = 0x123E9Cu;
            goto label_123e9c;
        }
    }
    ctx->pc = 0x123E38u;
    // 0x123e38: 0x108a0016  beq         $a0, $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x123E38u;
    {
        const bool branch_taken_0x123e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x123E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E38u;
            // 0x123e3c: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e38) {
            ctx->pc = 0x123E94u;
            goto label_123e94;
        }
    }
    ctx->pc = 0x123E40u;
label_123e40:
    // 0x123e40: 0x1260febd  beqz        $s3, . + 4 + (-0x143 << 2)
    ctx->pc = 0x123E40u;
    {
        const bool branch_taken_0x123e40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E40u;
            // 0x123e44: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e40) {
            ctx->pc = 0x123938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123938;
        }
    }
    ctx->pc = 0x123E48u;
    // 0x123e48: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x123e48u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x123e4c: 0x646023  subu        $t4, $v1, $a0
    ctx->pc = 0x123e4cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x123e50: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x123e50u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123e54: 0xed6806  srlv        $t5, $t5, $a3
    ctx->pc = 0x123e54u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 7) & 0x1F));
    // 0x123e58: 0x18e5023  subu        $t2, $t4, $t6
    ctx->pc = 0x123e58u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x123e5c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x123e5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123e60: 0x4a7804  sllv        $t7, $t2, $v0
    ctx->pc = 0x123e60u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x123e64: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x123e64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x123e68: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x123e68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x123e6c: 0x32ec824  and         $t9, $t9, $t6
    ctx->pc = 0x123e6cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) & GPR_U64(ctx, 14));
    // 0x123e70: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x123e70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x123e74: 0xea7006  srlv        $t6, $t2, $a3
    ctx->pc = 0x123e74u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x123e78: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x123e78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x123e7c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x123e7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x123e80: 0x32fc825  or          $t9, $t9, $t7
    ctx->pc = 0x123e80u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 15));
    // 0x123e84: 0x19c83c  dsll32      $t9, $t9, 0
    ctx->pc = 0x123e84u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 0));
    // 0x123e88: 0x19c83e  dsrl32      $t9, $t9, 0
    ctx->pc = 0x123e88u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) >> (32 + 0));
    // 0x123e8c: 0x1000ff1f  b           . + 4 + (-0xE1 << 2)
    ctx->pc = 0x123E8Cu;
    {
        const bool branch_taken_0x123e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123E8Cu;
            // 0x123e90: 0x32ec825  or          $t9, $t9, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e8c) {
            ctx->pc = 0x123B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123b0c;
        }
    }
    ctx->pc = 0x123E94u;
label_123e94:
    // 0x123e94: 0x11e0ffea  beqz        $t7, . + 4 + (-0x16 << 2)
    ctx->pc = 0x123E94u;
    {
        const bool branch_taken_0x123e94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e94) {
            ctx->pc = 0x123E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123e40;
        }
    }
    ctx->pc = 0x123E9Cu;
label_123e9c:
    // 0x123e9c: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x123e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x123ea0: 0x897023  subu        $t6, $a0, $t1
    ctx->pc = 0x123ea0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x123ea4: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x123ea4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x123ea8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x123ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x123eac: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x123eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x123eb0: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x123EB0u;
    {
        const bool branch_taken_0x123eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123EB0u;
            // 0x123eb4: 0x1a0582d  daddu       $t3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123eb0) {
            ctx->pc = 0x123E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123e40;
        }
    }
    ctx->pc = 0x123EB8u;
label_123eb8:
    // 0x123eb8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x123eb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x123ebc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x123ebcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x123ec0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x123ec0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x123ec4: 0x1e9782b  sltu        $t7, $t7, $t1
    ctx->pc = 0x123ec4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x123ec8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x123ec8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ecc: 0x1000ff63  b           . + 4 + (-0x9D << 2)
    ctx->pc = 0x123ECCu;
    {
        const bool branch_taken_0x123ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123ECCu;
            // 0x123ed0: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ecc) {
            ctx->pc = 0x123C5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c5c;
        }
    }
    ctx->pc = 0x123ED4u;
    // 0x123ed4: 0x0  nop
    ctx->pc = 0x123ed4u;
    // NOP
label_123ed8:
    // 0x123ed8: 0x1000fe42  b           . + 4 + (-0x1BE << 2)
    ctx->pc = 0x123ED8u;
    {
        const bool branch_taken_0x123ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123ED8u;
            // 0x123edc: 0x5282f  dsubu       $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ed8) {
            ctx->pc = 0x1237E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1237e4;
        }
    }
    ctx->pc = 0x123EE0u;
label_123ee0:
    // 0x123ee0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x123ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123ee4: 0x1000fe3c  b           . + 4 + (-0x1C4 << 2)
    ctx->pc = 0x123EE4u;
    {
        const bool branch_taken_0x123ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123EE4u;
            // 0x123ee8: 0x4202f  dsubu       $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ee4) {
            ctx->pc = 0x1237D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1237d8;
        }
    }
    ctx->pc = 0x123EECu;
    // 0x123eec: 0x0  nop
    ctx->pc = 0x123eecu;
    // NOP
}
