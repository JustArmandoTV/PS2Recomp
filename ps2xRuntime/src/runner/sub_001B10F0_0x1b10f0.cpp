#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B10F0
// Address: 0x1b10f0 - 0x1b1408
void sub_001B10F0_0x1b10f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B10F0_0x1b10f0");
#endif

    switch (ctx->pc) {
        case 0x1b1120u: goto label_1b1120;
        case 0x1b121cu: goto label_1b121c;
        case 0x1b122cu: goto label_1b122c;
        case 0x1b1330u: goto label_1b1330;
        case 0x1b1338u: goto label_1b1338;
        case 0x1b1368u: goto label_1b1368;
        case 0x1b13b8u: goto label_1b13b8;
        case 0x1b13d8u: goto label_1b13d8;
        default: break;
    }

    ctx->pc = 0x1b10f0u;

    // 0x1b10f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b10f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b10f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b10f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b10f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b10fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b1100: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b1104: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b1104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b1108: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b110c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b110cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b1110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1114: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b1114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b1118: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1B1118u;
    SET_GPR_U32(ctx, 31, 0x1B1120u);
    ctx->pc = 0x1B111Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1118u;
            // 0x1b111c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1120u; }
        if (ctx->pc != 0x1B1120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1120u; }
        if (ctx->pc != 0x1B1120u) { return; }
    }
    ctx->pc = 0x1B1120u;
label_1b1120:
    // 0x1b1120: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x1b1120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1b1124: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x1b1124u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b1128: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1b112c: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x1b112cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1b1130: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1b1130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1b1134: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1b1134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1b1138: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b113c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1b113cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1140: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1b1140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1144: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1b1148: 0x1229023  subu        $s2, $t1, $v0
    ctx->pc = 0x1b1148u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1b114c: 0x8e0a0028  lw          $t2, 0x28($s0)
    ctx->pc = 0x1b114cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b1150: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x1b1150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b1154: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x1b1154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b1158: 0x3096007f  andi        $s6, $a0, 0x7F
    ctx->pc = 0x1b1158u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x1b115c: 0x8e140020  lw          $s4, 0x20($s0)
    ctx->pc = 0x1b115cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b1160: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B1160u;
    {
        const bool branch_taken_0x1b1160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1160u;
            // 0x1b1164: 0x35530100  ori         $s3, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1160) {
            ctx->pc = 0x1B1210u;
            goto label_1b1210;
        }
    }
    ctx->pc = 0x1B1168u;
    // 0x1b1168: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b116c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1b116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1b1170: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b1170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1174: 0xf22023  subu        $a0, $a3, $s2
    ctx->pc = 0x1b1174u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x1b1178: 0x642c0  sll         $t0, $a2, 11
    ctx->pc = 0x1b1178u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x1b117c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b1180: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x1b1180u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b1184: 0x4a902  srl         $s5, $a0, 4
    ctx->pc = 0x1b1184u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1b1188: 0x11270004  beq         $t1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1188u;
    {
        const bool branch_taken_0x1b1188 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x1B118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1188u;
            // 0x1b118c: 0x2489021  addu        $s2, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1188) {
            ctx->pc = 0x1B119Cu;
            goto label_1b119c;
        }
    }
    ctx->pc = 0x1B1190u;
    // 0x1b1190: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1b1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1b1194: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1194u;
    {
        const bool branch_taken_0x1b1194 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B1198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1194u;
            // 0x1b1198: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1194) {
            ctx->pc = 0x1B11A0u;
            goto label_1b11a0;
        }
    }
    ctx->pc = 0x1B119Cu;
label_1b119c:
    // 0x1b119c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b11a0:
    // 0x1b11a0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b11a4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1b11a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b11a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b11ac: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x1b11acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
    // 0x1b11b0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1b11b4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1b11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1b11b8: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1b11b8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b11bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b11bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b11c0: 0x34530100  ori         $s3, $v0, 0x100
    ctx->pc = 0x1b11c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1b11c4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B11C4u;
    {
        const bool branch_taken_0x1b11c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b11c4) {
            ctx->pc = 0x1B11C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11C4u;
            // 0x1b11c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B11CCu;
            goto label_1b11cc;
        }
    }
    ctx->pc = 0x1B11CCu;
label_1b11cc:
    // 0x1b11cc: 0x2810  mfhi        $a1
    ctx->pc = 0x1b11ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1b11d0: 0x4a20009  bltzl       $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B11D0u;
    {
        const bool branch_taken_0x1b11d0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1b11d0) {
            ctx->pc = 0x1B11D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11D0u;
            // 0x1b11d4: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B11F8u;
            goto label_1b11f8;
        }
    }
    ctx->pc = 0x1B11D8u;
    // 0x1b11d8: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B11D8u;
    {
        const bool branch_taken_0x1b11d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b11d8) {
            ctx->pc = 0x1B11DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11D8u;
            // 0x1b11dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B11E0u;
            goto label_1b11e0;
        }
    }
    ctx->pc = 0x1B11E0u;
label_1b11e0:
    // 0x1b11e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b11e4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b11e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b11e8: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B11E8u;
    {
        const bool branch_taken_0x1b11e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b11e8) {
            ctx->pc = 0x1B11ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11E8u;
            // 0x1b11ec: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B11F0u;
    // 0x1b11f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B11F0u;
    {
        const bool branch_taken_0x1b11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11F0u;
            // 0x1b11f4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11f0) {
            ctx->pc = 0x1B11FCu;
            goto label_1b11fc;
        }
    }
    ctx->pc = 0x1B11F8u;
label_1b11f8:
    // 0x1b11f8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b11fc:
    // 0x1b11fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1200: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1b1200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1b1204: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1B1204u;
    {
        const bool branch_taken_0x1b1204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1204u;
            // 0x1b1208: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1204) {
            ctx->pc = 0x1B12F4u;
            goto label_1b12f4;
        }
    }
    ctx->pc = 0x1B120Cu;
    // 0x1b120c: 0x0  nop
    ctx->pc = 0x1b120cu;
    // NOP
label_1b1210:
    // 0x1b1210: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1b1210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1214: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x1B1214u;
    SET_GPR_U32(ctx, 31, 0x1B121Cu);
    ctx->pc = 0x1B1218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1214u;
            // 0x1b1218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (runtime->hasFunction(0x1B0930u)) {
        auto targetFn = runtime->lookupFunction(0x1B0930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B121Cu; }
        if (ctx->pc != 0x1B121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0930_0x1b0930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B121Cu; }
        if (ctx->pc != 0x1B121Cu) { return; }
    }
    ctx->pc = 0x1B121Cu;
label_1b121c:
    // 0x1b121c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1220: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1224: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x1B1224u;
    SET_GPR_U32(ctx, 31, 0x1B122Cu);
    ctx->pc = 0x1B1228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1224u;
            // 0x1b1228: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (runtime->hasFunction(0x1B0930u)) {
        auto targetFn = runtime->lookupFunction(0x1B0930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B122Cu; }
        if (ctx->pc != 0x1B122Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0930_0x1b0930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B122Cu; }
        if (ctx->pc != 0x1B122Cu) { return; }
    }
    ctx->pc = 0x1B122Cu;
label_1b122c:
    // 0x1b122c: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1b122cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1230: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B1230u;
    {
        const bool branch_taken_0x1b1230 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x1B1234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1230u;
            // 0x1b1234: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1230) {
            ctx->pc = 0x1B12F4u;
            goto label_1b12f4;
        }
    }
    ctx->pc = 0x1B1238u;
    // 0x1b1238: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b123c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1b123cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1240: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1b1240u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1244: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b1244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b1248: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x1b1248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x1b124c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B124Cu;
    {
        const bool branch_taken_0x1b124c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b124c) {
            ctx->pc = 0x1B1250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B124Cu;
            // 0x1b1250: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1254u;
            goto label_1b1254;
        }
    }
    ctx->pc = 0x1B1254u;
label_1b1254:
    // 0x1b1254: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1b1254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b1258: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1b1258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1b125c: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x1b125cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b1260: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1b1260u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b1264: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x1b1264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1b1268: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x1b1268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1b126c: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x1b126cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1b1270: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x1b1270u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b1274: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1b1274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1b1278: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1b127c: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x1b127cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b1280: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1b1280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1b1284: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x1b1284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x1b1288: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1b1288u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1b128c: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x1b128cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1b1290: 0x3010  mfhi        $a2
    ctx->pc = 0x1b1290u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1b1294: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x1b1294u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b1298: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1b1298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1b129c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1b129cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1b12a0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1b12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1b12a4: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x1b12a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1b12a8: 0x3810  mfhi        $a3
    ctx->pc = 0x1b12a8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1b12ac: 0xac001a  div         $zero, $a1, $t4
    ctx->pc = 0x1b12acu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b12b0: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x1b12b4: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b12b8: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x1b12b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
    // 0x1b12bc: 0x6580a  movz        $t3, $zero, $a2
    ctx->pc = 0x1b12bcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x1b12c0: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x1b12c4: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x1b12c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x1b12c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1b12c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b12cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B12CCu;
    {
        const bool branch_taken_0x1b12cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B12D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12CCu;
            // 0x1b12d0: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12cc) {
            ctx->pc = 0x1B12E8u;
            goto label_1b12e8;
        }
    }
    ctx->pc = 0x1B12D4u;
    // 0x1b12d4: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x1b12d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1b12d8: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B12D8u;
    {
        const bool branch_taken_0x1b12d8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12d8) {
            ctx->pc = 0x1B12DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12D8u;
            // 0x1b12dc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B12E0u;
            goto label_1b12e0;
        }
    }
    ctx->pc = 0x1B12E0u;
label_1b12e0:
    // 0x1b12e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B12E0u;
    {
        const bool branch_taken_0x1b12e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b12e0) {
            ctx->pc = 0x1B12E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12E0u;
            // 0x1b12e4: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B12F8u;
            goto label_1b12f8;
        }
    }
    ctx->pc = 0x1B12E8u;
label_1b12e8:
    // 0x1b12e8: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1b12ec: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x1b12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x1b12f0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1b12f4:
    // 0x1b12f4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1b12f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1b12f8:
    // 0x1b12f8: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B12F8u;
    {
        const bool branch_taken_0x1b12f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12f8) {
            ctx->pc = 0x1B12FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12F8u;
            // 0x1b12fc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1334u;
            goto label_1b1334;
        }
    }
    ctx->pc = 0x1B1300u;
    // 0x1b1300: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1b1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b1304: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1304u;
    {
        const bool branch_taken_0x1b1304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1304u;
            // 0x1b1308: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1304) {
            ctx->pc = 0x1B1330u;
            goto label_1b1330;
        }
    }
    ctx->pc = 0x1B130Cu;
    // 0x1b130c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b130cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1310: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1b1310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1b1314: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1b1314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x1b1318: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b1318u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1b131c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1b131cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b1320: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b1320u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1b1324: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1b1324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1b1328: 0xc06c260  jal         func_1B0980
    ctx->pc = 0x1B1328u;
    SET_GPR_U32(ctx, 31, 0x1B1330u);
    ctx->pc = 0x1B132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1328u;
            // 0x1b132c: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0980u;
    if (runtime->hasFunction(0x1B0980u)) {
        auto targetFn = runtime->lookupFunction(0x1B0980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1330u; }
        if (ctx->pc != 0x1B1330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0980_0x1b0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1330u; }
        if (ctx->pc != 0x1B1330u) { return; }
    }
    ctx->pc = 0x1B1330u;
label_1b1330:
    // 0x1b1330: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b1330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1b1334:
    // 0x1b1334: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1b1334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1b1338:
    // 0x1b1338: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1338u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1b133c: 0x0  nop
    ctx->pc = 0x1b133cu;
    // NOP
    // 0x1b1340: 0x0  nop
    ctx->pc = 0x1b1340u;
    // NOP
    // 0x1b1344: 0x0  nop
    ctx->pc = 0x1b1344u;
    // NOP
    // 0x1b1348: 0x0  nop
    ctx->pc = 0x1b1348u;
    // NOP
    // 0x1b134c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B134Cu;
    {
        const bool branch_taken_0x1b134c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B134Cu;
            // 0x1b1350: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b134c) {
            ctx->pc = 0x1B1338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1338;
        }
    }
    ctx->pc = 0x1B1354u;
    // 0x1b1354: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b1354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1358: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1b1358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1b135c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1b135cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1b1360: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1b1360u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22)); // MMIO: 0x10000000
    // 0x1b1364: 0x0  nop
    ctx->pc = 0x1b1364u;
    // NOP
label_1b1368:
    // 0x1b1368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1368u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1b136c: 0x0  nop
    ctx->pc = 0x1b136cu;
    // NOP
    // 0x1b1370: 0x0  nop
    ctx->pc = 0x1b1370u;
    // NOP
    // 0x1b1374: 0x0  nop
    ctx->pc = 0x1b1374u;
    // NOP
    // 0x1b1378: 0x0  nop
    ctx->pc = 0x1b1378u;
    // NOP
    // 0x1b137c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B137Cu;
    {
        const bool branch_taken_0x1b137c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B137Cu;
            // 0x1b1380: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b137c) {
            ctx->pc = 0x1B1368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b1368;
        }
    }
    ctx->pc = 0x1B1384u;
    // 0x1b1384: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b1384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b1388: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1b1388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1b138c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1b138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1b1390: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x1b1390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x1b1394: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1b1394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x1b1398: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1b1398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1b139c: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1b139cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x1b13a0: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x1b13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x1b13a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b13a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b13a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B13A8u;
    {
        const bool branch_taken_0x1b13a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13a8) {
            ctx->pc = 0x1B13ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13A8u;
            // 0x1b13ac: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B13BCu;
            goto label_1b13bc;
        }
    }
    ctx->pc = 0x1B13B0u;
    // 0x1b13b0: 0xc06c27a  jal         func_1B09E8
    ctx->pc = 0x1B13B0u;
    SET_GPR_U32(ctx, 31, 0x1B13B8u);
    ctx->pc = 0x1B13B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13B0u;
            // 0x1b13b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B09E8u;
    if (runtime->hasFunction(0x1B09E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B09E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13B8u; }
        if (ctx->pc != 0x1B13B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B09E8_0x1b09e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13B8u; }
        if (ctx->pc != 0x1B13B8u) { return; }
    }
    ctx->pc = 0x1B13B8u;
label_1b13b8:
    // 0x1b13b8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1b13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1b13bc:
    // 0x1b13bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b13c0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1b13c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1b13c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b13c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b13c8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x1b13cc: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x1b13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1b13d0: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x1B13D0u;
    SET_GPR_U32(ctx, 31, 0x1B13D8u);
    ctx->pc = 0x1B13D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13D0u;
            // 0x1b13d4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13D8u; }
        if (ctx->pc != 0x1B13D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B13D8u; }
        if (ctx->pc != 0x1B13D8u) { return; }
    }
    ctx->pc = 0x1B13D8u;
label_1b13d8:
    // 0x1b13d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b13dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b13dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b13e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b13e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b13e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b13e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b13e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b13e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b13ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b13ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b13f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b13f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b13f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b13f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b13f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b13f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b13fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B13FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13FCu;
            // 0x1b1400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1404u;
    // 0x1b1404: 0x0  nop
    ctx->pc = 0x1b1404u;
    // NOP
}
