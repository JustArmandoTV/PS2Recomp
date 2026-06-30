#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00126228
// Address: 0x126228 - 0x126458
void sub_00126228_0x126228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126228_0x126228");
#endif

    switch (ctx->pc) {
        case 0x1262b0u: goto label_1262b0;
        case 0x12633cu: goto label_12633c;
        case 0x126360u: goto label_126360;
        case 0x12637cu: goto label_12637c;
        case 0x126410u: goto label_126410;
        default: break;
    }

    ctx->pc = 0x126228u;

    // 0x126228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12622c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12622cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126230: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126234: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12623c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12623cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126240: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126244: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x126244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x126248: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x126248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12624c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x12624cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x126250: 0x8cb20010  lw          $s2, 0x10($a1)
    ctx->pc = 0x126250u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x126254: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x126254u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x126258: 0x1f2782a  slt         $t7, $t7, $s2
    ctx->pc = 0x126258u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12625c: 0x15e00074  bnez        $t7, . + 4 + (0x74 << 2)
    ctx->pc = 0x12625Cu;
    {
        const bool branch_taken_0x12625c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12625Cu;
            // 0x126260: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12625c) {
            ctx->pc = 0x126430u;
            goto label_126430;
        }
    }
    ctx->pc = 0x126264u;
    // 0x126264: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x126264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x126268: 0x24a70014  addiu       $a3, $a1, 0x14
    ctx->pc = 0x126268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x12626c: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x12626cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x126270: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x126270u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x126274: 0xef8021  addu        $s0, $a3, $t7
    ctx->pc = 0x126274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x126278: 0x26f2021  addu        $a0, $s3, $t7
    ctx->pc = 0x126278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x12627c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x12627cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x126280: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x126280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126284: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x126284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126288: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x126288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12628c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12628cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x126290: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x126290u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x126294: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x126294u;
    {
        const bool branch_taken_0x126294 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x126294) {
            ctx->pc = 0x126298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126294u;
            // 0x126298: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12629Cu;
            goto label_12629c;
        }
    }
    ctx->pc = 0x12629Cu;
label_12629c:
    // 0x12629c: 0x8812  mflo        $s1
    ctx->pc = 0x12629cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x1262a0: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1262A0u;
    {
        const bool branch_taken_0x1262a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1262A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1262A0u;
            // 0x1262a4: 0xa812  mflo        $s5 (Delay Slot)
        SET_GPR_U64(ctx, 21, ctx->lo);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262a0) {
            ctx->pc = 0x126358u;
            goto label_126358;
        }
    }
    ctx->pc = 0x1262A8u;
    // 0x1262a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1262a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1262ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1262acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1262b0:
    // 0x1262b0: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1262b4: 0x8d0c0000  lw          $t4, 0x0($t0)
    ctx->pc = 0x1262b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1262b8: 0x316fffff  andi        $t7, $t3, 0xFFFF
    ctx->pc = 0x1262b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1262bc: 0xb6c02  srl         $t5, $t3, 16
    ctx->pc = 0x1262bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1262c0: 0x1f17818  mult        $t7, $t7, $s1
    ctx->pc = 0x1262c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1262c4: 0x71b16818  mult1       $t5, $t5, $s1
    ctx->pc = 0x1262c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1262c8: 0x318effff  andi        $t6, $t4, 0xFFFF
    ctx->pc = 0x1262c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x1262cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1262d0: 0xc6402  srl         $t4, $t4, 16
    ctx->pc = 0x1262d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x1262d4: 0x207502b  sltu        $t2, $s0, $a3
    ctx->pc = 0x1262d4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1262d8: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x1262d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x1262dc: 0x31ebffff  andi        $t3, $t7, 0xFFFF
    ctx->pc = 0x1262dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x1262e0: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x1262e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1262e4: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x1262e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1262e8: 0x1af4821  addu        $t1, $t5, $t7
    ctx->pc = 0x1262e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1262ec: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x1262ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1262f0: 0x312fffff  andi        $t7, $t1, 0xFFFF
    ctx->pc = 0x1262f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1262f4: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x1262f4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1262f8: 0xe3403  sra         $a2, $t6, 16
    ctx->pc = 0x1262f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 16));
    // 0x1262fc: 0x18f6023  subu        $t4, $t4, $t7
    ctx->pc = 0x1262fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x126300: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x126300u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x126304: 0x94c02  srl         $t1, $t1, 16
    ctx->pc = 0x126304u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x126308: 0xa50c0002  sh          $t4, 0x2($t0)
    ctx->pc = 0x126308u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x12630c: 0xc3403  sra         $a2, $t4, 16
    ctx->pc = 0x12630cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 16));
    // 0x126310: 0x1140ffe7  beqz        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x126310u;
    {
        const bool branch_taken_0x126310 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x126314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126310u;
            // 0x126314: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126310) {
            ctx->pc = 0x1262B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1262b0;
        }
    }
    ctx->pc = 0x126318u;
    // 0x126318: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x126318u;
    {
        const bool branch_taken_0x126318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126318u;
            // 0x12631c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126318) {
            ctx->pc = 0x126358u;
            goto label_126358;
        }
    }
    ctx->pc = 0x126320u;
    // 0x126320: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x126320u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x126324: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x126324u;
    {
        const bool branch_taken_0x126324 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x126324) {
            ctx->pc = 0x126328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126324u;
            // 0x126328: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126358u;
            goto label_126358;
        }
    }
    ctx->pc = 0x12632Cu;
    // 0x12632c: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x12632cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126330: 0x55e00009  bnel        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x126330u;
    {
        const bool branch_taken_0x126330 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126330) {
            ctx->pc = 0x126334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126330u;
            // 0x126334: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126358u;
            goto label_126358;
        }
    }
    ctx->pc = 0x126338u;
    // 0x126338: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x126338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_12633c:
    // 0x12633c: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x12633cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x126340: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x126340u;
    {
        const bool branch_taken_0x126340 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126340u;
            // 0x126344: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126340) {
            ctx->pc = 0x126354u;
            goto label_126354;
        }
    }
    ctx->pc = 0x126348u;
    // 0x126348: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x126348u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12634c: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12634Cu;
    {
        const bool branch_taken_0x12634c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12634Cu;
            // 0x126350: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12634c) {
            ctx->pc = 0x12633Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12633c;
        }
    }
    ctx->pc = 0x126354u;
label_126354:
    // 0x126354: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x126354u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
label_126358:
    // 0x126358: 0xc04a97e  jal         func_12A5F8
    ctx->pc = 0x126358u;
    SET_GPR_U32(ctx, 31, 0x126360u);
    ctx->pc = 0x12635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126358u;
            // 0x12635c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A5F8u;
    if (runtime->hasFunction(0x12A5F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126360u; }
        if (ctx->pc != 0x126360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A5F8_0x12a5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126360u; }
        if (ctx->pc != 0x126360u) { return; }
    }
    ctx->pc = 0x126360u;
label_126360:
    // 0x126360: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x126360u;
    {
        const bool branch_taken_0x126360 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x126364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126360u;
            // 0x126364: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126360) {
            ctx->pc = 0x126430u;
            goto label_126430;
        }
    }
    ctx->pc = 0x126368u;
    // 0x126368: 0x26350001  addiu       $s5, $s1, 0x1
    ctx->pc = 0x126368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12636c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x12636cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x126374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126378: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x126378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12637c:
    // 0x12637c: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x12637cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x126380: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x126380u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x126384: 0x316fffff  andi        $t7, $t3, 0xFFFF
    ctx->pc = 0x126384u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x126388: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x126388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12638c: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x12638cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x126390: 0x31aeffff  andi        $t6, $t5, 0xFFFF
    ctx->pc = 0x126390u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x126394: 0x31ecffff  andi        $t4, $t7, 0xFFFF
    ctx->pc = 0x126394u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x126398: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x126398u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x12639c: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x12639cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1263a0: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x1263a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1263a4: 0x16f4821  addu        $t1, $t3, $t7
    ctx->pc = 0x1263a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1263a8: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x1263a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x1263ac: 0x312fffff  andi        $t7, $t1, 0xFFFF
    ctx->pc = 0x1263acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1263b0: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x1263b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1263b4: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x1263b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1263b8: 0xe3403  sra         $a2, $t6, 16
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 16));
    // 0x1263bc: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x1263bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1263c0: 0x94c02  srl         $t1, $t1, 16
    ctx->pc = 0x1263c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1263c4: 0x1a66021  addu        $t4, $t5, $a2
    ctx->pc = 0x1263c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x1263c8: 0x207782b  sltu        $t7, $s0, $a3
    ctx->pc = 0x1263c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1263cc: 0xa50c0002  sh          $t4, 0x2($t0)
    ctx->pc = 0x1263ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x1263d0: 0xc3403  sra         $a2, $t4, 16
    ctx->pc = 0x1263d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 12), 16));
    // 0x1263d4: 0x11e0ffe9  beqz        $t7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1263D4u;
    {
        const bool branch_taken_0x1263d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263D4u;
            // 0x1263d8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263d4) {
            ctx->pc = 0x12637Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12637c;
        }
    }
    ctx->pc = 0x1263DCu;
    // 0x1263dc: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x1263dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1263e0: 0x26f2021  addu        $a0, $s3, $t7
    ctx->pc = 0x1263e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    // 0x1263e4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1263e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1263e8: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x1263E8u;
    {
        const bool branch_taken_0x1263e8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1263ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263E8u;
            // 0x1263ec: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263e8) {
            ctx->pc = 0x126430u;
            goto label_126430;
        }
    }
    ctx->pc = 0x1263F0u;
    // 0x1263f0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1263f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1263f4: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1263f8: 0x51e0000d  beql        $t7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1263F8u;
    {
        const bool branch_taken_0x1263f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263f8) {
            ctx->pc = 0x1263FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1263F8u;
            // 0x1263fc: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126430u;
            goto label_126430;
        }
    }
    ctx->pc = 0x126400u;
    // 0x126400: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x126400u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126404: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x126404u;
    {
        const bool branch_taken_0x126404 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126404) {
            ctx->pc = 0x126408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126404u;
            // 0x126408: 0xae920010  sw          $s2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126430u;
            goto label_126430;
        }
    }
    ctx->pc = 0x12640Cu;
    // 0x12640c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x12640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_126410:
    // 0x126410: 0x264782b  sltu        $t7, $s3, $a0
    ctx->pc = 0x126410u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x126414: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x126414u;
    {
        const bool branch_taken_0x126414 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126414u;
            // 0x126418: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126414) {
            ctx->pc = 0x126428u;
            goto label_126428;
        }
    }
    ctx->pc = 0x12641Cu;
    // 0x12641c: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x12641cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126420: 0x51e0fffb  beql        $t7, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x126420u;
    {
        const bool branch_taken_0x126420 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x126420) {
            ctx->pc = 0x126424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x126420u;
            // 0x126424: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x126410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_126410;
        }
    }
    ctx->pc = 0x126428u;
label_126428:
    // 0x126428: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x126428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
    // 0x12642c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x12642cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_126430:
    // 0x126430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12643c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12643cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126440: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x126440u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126444: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x126444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126448: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x126448u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12644c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x12644cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x126450: 0x3e00008  jr          $ra
    ctx->pc = 0x126450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126450u;
            // 0x126454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126458u;
}
