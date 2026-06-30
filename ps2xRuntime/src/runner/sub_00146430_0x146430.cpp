#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00146430
// Address: 0x146430 - 0x146990
void sub_00146430_0x146430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146430_0x146430");
#endif

    switch (ctx->pc) {
        case 0x1464b4u: goto label_1464b4;
        case 0x1464d0u: goto label_1464d0;
        case 0x1466ecu: goto label_1466ec;
        case 0x14673cu: goto label_14673c;
        case 0x1468f8u: goto label_1468f8;
        default: break;
    }

    ctx->pc = 0x146430u;

    // 0x146430: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x146434: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146438: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x146438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14643c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x14643cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x146440: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x146440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x146444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x146444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146448: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x146448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14644c: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x14644cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146450: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x146450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x146454: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x146454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x146458: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x146458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14645c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x146460: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14646c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14646Cu;
    {
        const bool branch_taken_0x14646c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14646Cu;
            // 0x146470: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14646c) {
            ctx->pc = 0x146478u;
            goto label_146478;
        }
    }
    ctx->pc = 0x146474u;
    // 0x146474: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x146474u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_146478:
    // 0x146478: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x146478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14647c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14647cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146480: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x146480u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146484: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146488: 0x1980007f  blez        $t4, . + 4 + (0x7F << 2)
    ctx->pc = 0x146488u;
    {
        const bool branch_taken_0x146488 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x14648Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146488u;
            // 0x14648c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146488) {
            ctx->pc = 0x146688u;
            goto label_146688;
        }
    }
    ctx->pc = 0x146490u;
    // 0x146490: 0x30c30040  andi        $v1, $a2, 0x40
    ctx->pc = 0x146490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x146494: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x146494u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146498: 0x30cb0001  andi        $t3, $a2, 0x1
    ctx->pc = 0x146498u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x14649c: 0x30d70002  andi        $s7, $a2, 0x2
    ctx->pc = 0x14649cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x1464a0: 0x30de0010  andi        $fp, $a2, 0x10
    ctx->pc = 0x1464a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x1464a4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1464a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x1464a8: 0x30ca2000  andi        $t2, $a2, 0x2000
    ctx->pc = 0x1464a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x1464ac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1464acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1464b0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x1464b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_1464b4:
    // 0x1464b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1464b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1464b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1464bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464c0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1464c0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464c4: 0x19a00028  blez        $t5, . + 4 + (0x28 << 2)
    ctx->pc = 0x1464C4u;
    {
        const bool branch_taken_0x1464c4 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x1464C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1464C4u;
            // 0x1464c8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464c4) {
            ctx->pc = 0x146568u;
            goto label_146568;
        }
    }
    ctx->pc = 0x1464CCu;
    // 0x1464cc: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x1464ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1464d0:
    // 0x1464d0: 0x8dc30004  lw          $v1, 0x4($t6)
    ctx->pc = 0x1464d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1464d4: 0x6f4821  addu        $t1, $v1, $t7
    ctx->pc = 0x1464d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1464d8: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x1464d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1464dc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1464dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1464e0: 0x11030015  beq         $t0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1464E0u;
    {
        const bool branch_taken_0x1464e0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1464e0) {
            ctx->pc = 0x146538u;
            goto label_146538;
        }
    }
    ctx->pc = 0x1464E8u;
    // 0x1464e8: 0x11070003  beq         $t0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1464E8u;
    {
        const bool branch_taken_0x1464e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x1464e8) {
            ctx->pc = 0x1464F8u;
            goto label_1464f8;
        }
    }
    ctx->pc = 0x1464F0u;
    // 0x1464f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1464F0u;
    {
        const bool branch_taken_0x1464f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1464f0) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x1464F8u;
label_1464f8:
    // 0x1464f8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1464F8u;
    {
        const bool branch_taken_0x1464f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1464FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1464F8u;
            // 0x1464fc: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464f8) {
            ctx->pc = 0x146508u;
            goto label_146508;
        }
    }
    ctx->pc = 0x146500u;
    // 0x146500: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x146500u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146504: 0x0  nop
    ctx->pc = 0x146504u;
    // NOP
label_146508:
    // 0x146508: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x146508u;
    {
        const bool branch_taken_0x146508 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x146508) {
            ctx->pc = 0x146518u;
            goto label_146518;
        }
    }
    ctx->pc = 0x146510u;
    // 0x146510: 0x8c73000c  lw          $s3, 0xC($v1)
    ctx->pc = 0x146510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x146514: 0x0  nop
    ctx->pc = 0x146514u;
    // NOP
label_146518:
    // 0x146518: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x146518u;
    {
        const bool branch_taken_0x146518 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x146518) {
            ctx->pc = 0x146528u;
            goto label_146528;
        }
    }
    ctx->pc = 0x146520u;
    // 0x146520: 0x8c720014  lw          $s2, 0x14($v1)
    ctx->pc = 0x146520u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x146524: 0x0  nop
    ctx->pc = 0x146524u;
    // NOP
label_146528:
    // 0x146528: 0x1720000b  bnez        $t9, . + 4 + (0xB << 2)
    ctx->pc = 0x146528u;
    {
        const bool branch_taken_0x146528 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x146528) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x146530u;
    // 0x146530: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x146530u;
    {
        const bool branch_taken_0x146530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146530u;
            // 0x146534: 0x8c79001c  lw          $t9, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146530) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x146538u;
label_146538:
    // 0x146538: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x146538u;
    {
        const bool branch_taken_0x146538 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x14653Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146538u;
            // 0x14653c: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146538) {
            ctx->pc = 0x146548u;
            goto label_146548;
        }
    }
    ctx->pc = 0x146540u;
    // 0x146540: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x146540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146544: 0x3114000f  andi        $s4, $t0, 0xF
    ctx->pc = 0x146544u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
label_146548:
    // 0x146548: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x146548u;
    {
        const bool branch_taken_0x146548 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x146548) {
            ctx->pc = 0x146558u;
            goto label_146558;
        }
    }
    ctx->pc = 0x146550u;
    // 0x146550: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x146550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146554: 0x307300f0  andi        $s3, $v1, 0xF0
    ctx->pc = 0x146554u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_146558:
    // 0x146558: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x146558u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14655c: 0x2cd182a  slt         $v1, $s6, $t5
    ctx->pc = 0x14655cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x146560: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x146560u;
    {
        const bool branch_taken_0x146560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146560u;
            // 0x146564: 0x25ce0008  addiu       $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146560) {
            ctx->pc = 0x1464D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1464d0;
        }
    }
    ctx->pc = 0x146568u;
label_146568:
    // 0x146568: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x146568u;
    {
        const bool branch_taken_0x146568 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x146568) {
            ctx->pc = 0x146578u;
            goto label_146578;
        }
    }
    ctx->pc = 0x146570u;
    // 0x146570: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x146570u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146574: 0x0  nop
    ctx->pc = 0x146574u;
    // NOP
label_146578:
    // 0x146578: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x146578u;
    {
        const bool branch_taken_0x146578 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x146578) {
            ctx->pc = 0x146588u;
            goto label_146588;
        }
    }
    ctx->pc = 0x146580u;
    // 0x146580: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x146580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146584: 0x0  nop
    ctx->pc = 0x146584u;
    // NOP
label_146588:
    // 0x146588: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x146588u;
    {
        const bool branch_taken_0x146588 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x146588) {
            ctx->pc = 0x146598u;
            goto label_146598;
        }
    }
    ctx->pc = 0x146590u;
    // 0x146590: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x146590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146594: 0x0  nop
    ctx->pc = 0x146594u;
    // NOP
label_146598:
    // 0x146598: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x146598u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14659c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14659Cu;
    {
        const bool branch_taken_0x14659c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14659c) {
            ctx->pc = 0x1465A8u;
            goto label_1465a8;
        }
    }
    ctx->pc = 0x1465A4u;
    // 0x1465a4: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1465a4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1465a8:
    // 0x1465a8: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1465A8u;
    {
        const bool branch_taken_0x1465a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1465a8) {
            ctx->pc = 0x1465C8u;
            goto label_1465c8;
        }
    }
    ctx->pc = 0x1465B0u;
    // 0x1465b0: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1465B0u;
    {
        const bool branch_taken_0x1465b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1465b0) {
            ctx->pc = 0x1465C8u;
            goto label_1465c8;
        }
    }
    ctx->pc = 0x1465B8u;
    // 0x1465b8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1465B8u;
    {
        const bool branch_taken_0x1465b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1465b8) {
            ctx->pc = 0x1465C8u;
            goto label_1465c8;
        }
    }
    ctx->pc = 0x1465C0u;
    // 0x1465c0: 0x13200017  beqz        $t9, . + 4 + (0x17 << 2)
    ctx->pc = 0x1465C0u;
    {
        const bool branch_taken_0x1465c0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x1465c0) {
            ctx->pc = 0x146620u;
            goto label_146620;
        }
    }
    ctx->pc = 0x1465C8u;
label_1465c8:
    // 0x1465c8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1465cc: 0x6f4021  addu        $t0, $v1, $t7
    ctx->pc = 0x1465ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1465d0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1465d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1465d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1465D4u;
    {
        const bool branch_taken_0x1465d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1465D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1465D4u;
            // 0x1465d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1465d4) {
            ctx->pc = 0x1465E8u;
            goto label_1465e8;
        }
    }
    ctx->pc = 0x1465DCu;
    // 0x1465dc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1465DCu;
    {
        const bool branch_taken_0x1465dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1465dc) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x1465E4u;
    // 0x1465e4: 0x0  nop
    ctx->pc = 0x1465e4u;
    // NOP
label_1465e8:
    // 0x1465e8: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x1465e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1465ec: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1465ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1465f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1465f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1465f4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1465f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1465f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1465f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1465fc: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x1465fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x146600: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
    ctx->pc = 0x146600u;
    {
        const bool branch_taken_0x146600 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x146604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146600u;
            // 0x146604: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146600) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146608u;
    // 0x146608: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x146608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x14660c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14660cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146610: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146614: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x146614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x146618: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x146618u;
    {
        const bool branch_taken_0x146618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146618u;
            // 0x14661c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146618) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146620u;
label_146620:
    // 0x146620: 0x11400015  beqz        $t2, . + 4 + (0x15 << 2)
    ctx->pc = 0x146620u;
    {
        const bool branch_taken_0x146620 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x146620) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146628u;
    // 0x146628: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x146628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x14662c: 0x6f4021  addu        $t0, $v1, $t7
    ctx->pc = 0x14662cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x146630: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x146634: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146634u;
    {
        const bool branch_taken_0x146634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146634) {
            ctx->pc = 0x146648u;
            goto label_146648;
        }
    }
    ctx->pc = 0x14663Cu;
    // 0x14663c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14663Cu;
    {
        const bool branch_taken_0x14663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14663c) {
            ctx->pc = 0x146678u;
            goto label_146678;
        }
    }
    ctx->pc = 0x146644u;
    // 0x146644: 0x0  nop
    ctx->pc = 0x146644u;
    // NOP
label_146648:
    // 0x146648: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x146648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14664c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x14664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x146650: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x146650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146654: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x146654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x146658: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x146658u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x14665c: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x14665cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x146660: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x146660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x146664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146668: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x146668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x14666c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14666cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146670: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x146670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x146674: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x146674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_146678:
    // 0x146678: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x146678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14667c: 0x2ac182a  slt         $v1, $s5, $t4
    ctx->pc = 0x14667cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x146680: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x146680u;
    {
        const bool branch_taken_0x146680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146680u;
            // 0x146684: 0x25ef0008  addiu       $t7, $t7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146680) {
            ctx->pc = 0x1464B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1464b4;
        }
    }
    ctx->pc = 0x146688u;
label_146688:
    // 0x146688: 0x30c32000  andi        $v1, $a2, 0x2000
    ctx->pc = 0x146688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x14668c: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x14668Cu;
    {
        const bool branch_taken_0x14668c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14668c) {
            ctx->pc = 0x146938u;
            goto label_146938;
        }
    }
    ctx->pc = 0x146694u;
    // 0x146694: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x146694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x146698: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x146698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14669c: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x14669cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1466a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1466a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466a4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1466a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1466a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1466a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1466ac: 0x24a8000f  addiu       $t0, $a1, 0xF
    ctx->pc = 0x1466acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1466b0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1466b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1466b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1466b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1466b8: 0x1073024  and         $a2, $t0, $a3
    ctx->pc = 0x1466b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1466bc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1466bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1466c0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1466c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1466c4: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x1466c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1466c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1466c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1466cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1466ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1466d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1466d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1466d4: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x1466d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1466d8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1466d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1466dc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1466dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1466e0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1466e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1466e4: 0xc0552c4  jal         func_154B10
    ctx->pc = 0x1466E4u;
    SET_GPR_U32(ctx, 31, 0x1466ECu);
    ctx->pc = 0x1466E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1466E4u;
            // 0x1466e8: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154B10u;
    if (runtime->hasFunction(0x154B10u)) {
        auto targetFn = runtime->lookupFunction(0x154B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1466ECu; }
        if (ctx->pc != 0x1466ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154B10_0x154b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1466ECu; }
        if (ctx->pc != 0x1466ECu) { return; }
    }
    ctx->pc = 0x1466ECu;
label_1466ec:
    // 0x1466ec: 0x8e260038  lw          $a2, 0x38($s1)
    ctx->pc = 0x1466ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1466f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1466f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1466f4: 0x18c00090  blez        $a2, . + 4 + (0x90 << 2)
    ctx->pc = 0x1466F4u;
    {
        const bool branch_taken_0x1466f4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1466F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1466F4u;
            // 0x1466f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1466f4) {
            ctx->pc = 0x146938u;
            goto label_146938;
        }
    }
    ctx->pc = 0x1466FCu;
    // 0x1466fc: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1466fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x146700: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x146700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x146704: 0x14200072  bnez        $at, . + 4 + (0x72 << 2)
    ctx->pc = 0x146704u;
    {
        const bool branch_taken_0x146704 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x146708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146704u;
            // 0x146708: 0x24c4fff8  addiu       $a0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146704) {
            ctx->pc = 0x1468D0u;
            goto label_1468d0;
        }
    }
    ctx->pc = 0x14670Cu;
    // 0x14670c: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14670Cu;
    {
        const bool branch_taken_0x14670c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x146710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14670Cu;
            // 0x146710: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14670c) {
            ctx->pc = 0x14672Cu;
            goto label_14672c;
        }
    }
    ctx->pc = 0x146714u;
    // 0x146714: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x146714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x146718: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x146718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x14671c: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x14671cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x146720: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x146720u;
    {
        const bool branch_taken_0x146720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146720) {
            ctx->pc = 0x14672Cu;
            goto label_14672c;
        }
    }
    ctx->pc = 0x146728u;
    // 0x146728: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14672c:
    // 0x14672c: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x14672Cu;
    {
        const bool branch_taken_0x14672c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14672c) {
            ctx->pc = 0x1468D0u;
            goto label_1468d0;
        }
    }
    ctx->pc = 0x146734u;
    // 0x146734: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x146734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x146738: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x146738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_14673c:
    // 0x14673c: 0x8ccc0004  lw          $t4, 0x4($a2)
    ctx->pc = 0x14673cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x146740: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x146740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x146744: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x146744u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x146748: 0xa4382a  slt         $a3, $a1, $a0
    ctx->pc = 0x146748u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14674c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x14674cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x146750: 0xc58c0  sll         $t3, $t4, 3
    ctx->pc = 0x146750u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x146754: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x146754u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x146758: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x14675c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x14675cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x146760: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x146760u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x146764: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x146764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x146768: 0x256b000f  addiu       $t3, $t3, 0xF
    ctx->pc = 0x146768u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x14676c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x14676cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x146770: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x146770u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x146774: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x146774u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x146778: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x14677c: 0x16a6821  addu        $t5, $t3, $t2
    ctx->pc = 0x14677cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x146780: 0x2502000f  addiu       $v0, $t0, 0xF
    ctx->pc = 0x146780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x146784: 0x435824  and         $t3, $v0, $v1
    ctx->pc = 0x146784u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x146788: 0x8cca002c  lw          $t2, 0x2C($a2)
    ctx->pc = 0x146788u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x14678c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x14678cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x146790: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x146790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x146794: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x146794u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x146798: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x146798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x14679c: 0x252c000f  addiu       $t4, $t1, 0xF
    ctx->pc = 0x14679cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x1467a0: 0x8cc80040  lw          $t0, 0x40($a2)
    ctx->pc = 0x1467a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1467a4: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1467a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1467a8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1467a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1467ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1467acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1467b0: 0x1835024  and         $t2, $t4, $v1
    ctx->pc = 0x1467b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x1467b4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1467b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1467b8: 0x1aa5021  addu        $t2, $t5, $t2
    ctx->pc = 0x1467b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x1467bc: 0x2529000f  addiu       $t1, $t1, 0xF
    ctx->pc = 0x1467bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x1467c0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1467c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1467c4: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x1467c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x1467c8: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x1467c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1467cc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1467ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1467d0: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x1467d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1467d4: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1467d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1467d8: 0x1495821  addu        $t3, $t2, $t1
    ctx->pc = 0x1467d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1467dc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1467dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1467e0: 0x8cc90054  lw          $t1, 0x54($a2)
    ctx->pc = 0x1467e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x1467e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1467e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1467e8: 0x8cc80048  lw          $t0, 0x48($a2)
    ctx->pc = 0x1467e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x1467ec: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1467f0: 0x435024  and         $t2, $v0, $v1
    ctx->pc = 0x1467f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1467f4: 0x16a5821  addu        $t3, $t3, $t2
    ctx->pc = 0x1467f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1467f8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1467f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1467fc: 0x250a000f  addiu       $t2, $t0, 0xF
    ctx->pc = 0x1467fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x146800: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x146800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x146804: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x146804u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x146808: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x146808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x14680c: 0x1434824  and         $t1, $t2, $v1
    ctx->pc = 0x14680cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x146810: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x146810u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x146814: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x146818: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x146818u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x14681c: 0x8ccb0068  lw          $t3, 0x68($a2)
    ctx->pc = 0x14681cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x146820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146824: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x146824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x146828: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x146828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x14682c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x14682cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x146830: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x146830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x146834: 0x8cc90070  lw          $t1, 0x70($a2)
    ctx->pc = 0x146834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x146838: 0xb50c0  sll         $t2, $t3, 3
    ctx->pc = 0x146838u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x14683c: 0x1026021  addu        $t4, $t0, $v0
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x146840: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x146840u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x146844: 0x8cc20084  lw          $v0, 0x84($a2)
    ctx->pc = 0x146844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x146848: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x146848u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x14684c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x14684cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x146850: 0x254a000f  addiu       $t2, $t2, 0xF
    ctx->pc = 0x146850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15));
    // 0x146854: 0x2529000f  addiu       $t1, $t1, 0xF
    ctx->pc = 0x146854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x146858: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x146858u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x14685c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146860: 0x8cc8007c  lw          $t0, 0x7C($a2)
    ctx->pc = 0x146860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x146864: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x146864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x146868: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x146868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x14686c: 0x1496021  addu        $t4, $t2, $t1
    ctx->pc = 0x14686cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x146870: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x146870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x146874: 0x435024  and         $t2, $v0, $v1
    ctx->pc = 0x146874u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x146878: 0x8cc90090  lw          $t1, 0x90($a2)
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x14687c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x14687cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x146880: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x146880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x146884: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x146884u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x146888: 0x8cc20098  lw          $v0, 0x98($a2)
    ctx->pc = 0x146888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x14688c: 0x250b000f  addiu       $t3, $t0, 0xF
    ctx->pc = 0x14688cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x146890: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x146890u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x146894: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x146894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x146898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14689c: 0x1634824  and         $t1, $t3, $v1
    ctx->pc = 0x14689cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1468a0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1468a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1468a4: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x1468a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1468a8: 0x2508000f  addiu       $t0, $t0, 0xF
    ctx->pc = 0x1468a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x1468ac: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1468acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1468b0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1468b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1468b4: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x1468b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x1468b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1468b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1468bc: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1468bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1468c0: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1468c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1468c4: 0x14e0ff9d  bnez        $a3, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1468C4u;
    {
        const bool branch_taken_0x1468c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1468C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1468C4u;
            // 0x1468c8: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1468c4) {
            ctx->pc = 0x14673Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14673c;
        }
    }
    ctx->pc = 0x1468CCu;
    // 0x1468cc: 0x0  nop
    ctx->pc = 0x1468ccu;
    // NOP
label_1468d0:
    // 0x1468d0: 0x8e290038  lw          $t1, 0x38($s1)
    ctx->pc = 0x1468d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1468d4: 0xa9082a  slt         $at, $a1, $t1
    ctx->pc = 0x1468d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1468d8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1468D8u;
    {
        const bool branch_taken_0x1468d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1468d8) {
            ctx->pc = 0x146938u;
            goto label_146938;
        }
    }
    ctx->pc = 0x1468E0u;
    // 0x1468e0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1468e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1468e4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1468e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1468e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1468e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1468ec: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x1468ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1468f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1468f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1468f4: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1468f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1468f8:
    // 0x1468f8: 0x8d480004  lw          $t0, 0x4($t2)
    ctx->pc = 0x1468f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1468fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1468fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146900: 0x8d44000c  lw          $a0, 0xC($t2)
    ctx->pc = 0x146900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x146904: 0xa9182a  slt         $v1, $a1, $t1
    ctx->pc = 0x146904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x146908: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x146908u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x14690c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x14690cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x146910: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x146910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x146914: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x146914u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x146918: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x146918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x14691c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x146920: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x146920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x146924: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x146924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x146928: 0x254a0014  addiu       $t2, $t2, 0x14
    ctx->pc = 0x146928u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x14692c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x14692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x146930: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x146930u;
    {
        const bool branch_taken_0x146930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146930u;
            // 0x146934: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146930) {
            ctx->pc = 0x1468F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1468f8;
        }
    }
    ctx->pc = 0x146938u;
label_146938:
    // 0x146938: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146938u;
    {
        const bool branch_taken_0x146938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14693Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146938u;
            // 0x14693c: 0x24420060  addiu       $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146938) {
            ctx->pc = 0x146960u;
            goto label_146960;
        }
    }
    ctx->pc = 0x146940u;
    // 0x146940: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x146940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x146944: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x146944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146948: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x146948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x14694c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x14694cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x146950: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x146950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x146954: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x146954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x146958: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x146958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14695c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_146960:
    // 0x146960: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x146960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x146964: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x146964u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x146968: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x146968u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14696c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14696cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x146970: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x146970u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146974: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x146974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x146978: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x146978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14697c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14697cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146988: 0x3e00008  jr          $ra
    ctx->pc = 0x146988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146988u;
            // 0x14698c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146990u;
}
