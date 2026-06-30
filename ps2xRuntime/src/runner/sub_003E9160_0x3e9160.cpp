#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E9160
// Address: 0x3e9160 - 0x3e9300
void sub_003E9160_0x3e9160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9160_0x3e9160");
#endif

    switch (ctx->pc) {
        case 0x3e917cu: goto label_3e917c;
        case 0x3e923cu: goto label_3e923c;
        default: break;
    }

    ctx->pc = 0x3e9160u;

    // 0x3e9160: 0x2487000a  addiu       $a3, $a0, 0xA
    ctx->pc = 0x3e9160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x3e9164: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3e9164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3e9168: 0xac870050  sw          $a3, 0x50($a0)
    ctx->pc = 0x3e9168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 7));
    // 0x3e916c: 0x90880009  lbu         $t0, 0x9($a0)
    ctx->pc = 0x3e916cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x3e9170: 0xac88004c  sw          $t0, 0x4C($a0)
    ctx->pc = 0x3e9170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 8));
    // 0x3e9174: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x3e9174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9178: 0x908b0004  lbu         $t3, 0x4($a0)
    ctx->pc = 0x3e9178u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_3e917c:
    // 0x3e917c: 0x316a00ff  andi        $t2, $t3, 0xFF
    ctx->pc = 0x3e917cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x3e9180: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x3e9180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e9184: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3E9184u;
    {
        const bool branch_taken_0x3e9184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9184) {
            ctx->pc = 0x3E91C0u;
            goto label_3e91c0;
        }
    }
    ctx->pc = 0x3E918Cu;
    // 0x3e918c: 0x2563fff8  addiu       $v1, $t3, -0x8
    ctx->pc = 0x3e918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x3e9190: 0x90e80000  lbu         $t0, 0x0($a3)
    ctx->pc = 0x3e9190u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9194: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x3e9194u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e9198: 0x1651806  srlv        $v1, $a1, $t3
    ctx->pc = 0x3e9198u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
    // 0x3e919c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e91a0: 0x34843  sra         $t1, $v1, 1
    ctx->pc = 0x3e91a0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3e91a4: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x3e91a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x3e91a8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x3e91a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x3e91ac: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x3e91acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x3e91b0: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x3e91b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3e91b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e91b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e91b8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x3E91B8u;
    {
        const bool branch_taken_0x3e91b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E91BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E91B8u;
            // 0x3e91bc: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e91b8) {
            ctx->pc = 0x3E917Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e917c;
        }
    }
    ctx->pc = 0x3E91C0u;
label_3e91c0:
    // 0x3e91c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e91c4: 0x5543000b  bnel        $t2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3E91C4u;
    {
        const bool branch_taken_0x3e91c4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e91c4) {
            ctx->pc = 0x3E91C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E91C4u;
            // 0x3e91c8: 0x24090007  addiu       $t1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E91F4u;
            goto label_3e91f4;
        }
    }
    ctx->pc = 0x3E91CCu;
    // 0x3e91cc: 0x54042  srl         $t0, $a1, 1
    ctx->pc = 0x3e91ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x3e91d0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3e91d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e91d4: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3e91d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e91d8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x3e91d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3e91dc: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x3e91dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x3e91e0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x3e91e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x3e91e4: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3e91e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e91e8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e91e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e91ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3E91ECu;
    {
        const bool branch_taken_0x3e91ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E91F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E91ECu;
            // 0x3e91f0: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e91ec) {
            ctx->pc = 0x3E9214u;
            goto label_3e9214;
        }
    }
    ctx->pc = 0x3E91F4u;
label_3e91f4:
    // 0x3e91f4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3e91f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e91f8: 0x12a4023  subu        $t0, $t1, $t2
    ctx->pc = 0x3e91f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x3e91fc: 0x1052804  sllv        $a1, $a1, $t0
    ctx->pc = 0x3e91fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e9200: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3e9200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e9204: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3e9204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3e9208: 0x15490002  bne         $t2, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E9208u;
    {
        const bool branch_taken_0x3e9208 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 9));
        ctx->pc = 0x3E920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9208u;
            // 0x3e920c: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9208) {
            ctx->pc = 0x3E9214u;
            goto label_3e9214;
        }
    }
    ctx->pc = 0x3E9210u;
    // 0x3e9210: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e9210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3e9214:
    // 0x3e9214: 0x908b0005  lbu         $t3, 0x5($a0)
    ctx->pc = 0x3e9214u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3e9218: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x3e9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3e921c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E921Cu;
    {
        const bool branch_taken_0x3e921c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3E9220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E921Cu;
            // 0x3e9220: 0x30830007  andi        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e921c) {
            ctx->pc = 0x3E9230u;
            goto label_3e9230;
        }
    }
    ctx->pc = 0x3E9224u;
    // 0x3e9224: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9224u;
    {
        const bool branch_taken_0x3e9224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9224) {
            ctx->pc = 0x3E9228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9224u;
            // 0x3e9228: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E9234u;
            goto label_3e9234;
        }
    }
    ctx->pc = 0x3E922Cu;
    // 0x3e922c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x3e922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_3e9230:
    // 0x3e9230: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e9230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e9234:
    // 0x3e9234: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e9238: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x3e9238u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e923c:
    // 0x3e923c: 0x316900ff  andi        $t1, $t3, 0xFF
    ctx->pc = 0x3e923cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x3e9240: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x3e9240u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3e9244: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E9244u;
    {
        const bool branch_taken_0x3e9244 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9244) {
            ctx->pc = 0x3E92A0u;
            goto label_3e92a0;
        }
    }
    ctx->pc = 0x3E924Cu;
    // 0x3e924c: 0x2564fff8  addiu       $a0, $t3, -0x8
    ctx->pc = 0x3e924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x3e9250: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3E9250u;
    {
        const bool branch_taken_0x3e9250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9250u;
            // 0x3e9254: 0x308b00ff  andi        $t3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9250) {
            ctx->pc = 0x3E9288u;
            goto label_3e9288;
        }
    }
    ctx->pc = 0x3E9258u;
    // 0x3e9258: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x3e9258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x3e925c: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3e925cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e9260: 0x862006  srlv        $a0, $a2, $a0
    ctx->pc = 0x3e9260u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3e9264: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3e9264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3e9268: 0x644007  srav        $t0, $a0, $v1
    ctx->pc = 0x3e9268u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e926c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x3e926cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x3e9270: 0x1442004  sllv        $a0, $a0, $t2
    ctx->pc = 0x3e9270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x3e9274: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x3e9274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x3e9278: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x3e9278u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e927c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e927cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e9280: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x3E9280u;
    {
        const bool branch_taken_0x3e9280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9280u;
            // 0x3e9284: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9280) {
            ctx->pc = 0x3E923Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e923c;
        }
    }
    ctx->pc = 0x3E9288u;
label_3e9288:
    // 0x3e9288: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x3e9288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x3e928c: 0x862006  srlv        $a0, $a2, $a0
    ctx->pc = 0x3e928cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3e9290: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x3e9290u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e9294: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x3E9294u;
    {
        const bool branch_taken_0x3e9294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9294u;
            // 0x3e9298: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9294) {
            ctx->pc = 0x3E923Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e923c;
        }
    }
    ctx->pc = 0x3E929Cu;
    // 0x3e929c: 0x0  nop
    ctx->pc = 0x3e929cu;
    // NOP
label_3e92a0:
    // 0x3e92a0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E92A0u;
    {
        const bool branch_taken_0x3e92a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e92a0) {
            ctx->pc = 0x3E92A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E92A0u;
            // 0x3e92a4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E92E4u;
            goto label_3e92e4;
        }
    }
    ctx->pc = 0x3E92A8u;
    // 0x3e92a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e92a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e92ac: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x3e92acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e92b0: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x3e92b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3e92b4: 0x1063004  sllv        $a2, $a2, $t0
    ctx->pc = 0x3e92b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x3e92b8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3e92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3e92bc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3e92bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3e92c0: 0x89082a  slt         $at, $a0, $t1
    ctx->pc = 0x3e92c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3e92c4: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e92c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e92c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e92c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e92cc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3e92ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3e92d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E92D0u;
    {
        const bool branch_taken_0x3e92d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E92D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E92D0u;
            // 0x3e92d4: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e92d0) {
            ctx->pc = 0x3E92F0u;
            goto label_3e92f0;
        }
    }
    ctx->pc = 0x3E92D8u;
    // 0x3e92d8: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x3e92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x3e92dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E92DCu;
    {
        const bool branch_taken_0x3e92dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E92E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E92DCu;
            // 0x3e92e0: 0xa0e30001  sb          $v1, 0x1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e92dc) {
            ctx->pc = 0x3E92F0u;
            goto label_3e92f0;
        }
    }
    ctx->pc = 0x3E92E4u;
label_3e92e4:
    // 0x3e92e4: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x3e92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3e92e8: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x3e92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e92ec: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3e92ecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_3e92f0:
    // 0x3e92f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E92F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E92F8u;
    // 0x3e92f8: 0x0  nop
    ctx->pc = 0x3e92f8u;
    // NOP
    // 0x3e92fc: 0x0  nop
    ctx->pc = 0x3e92fcu;
    // NOP
}
