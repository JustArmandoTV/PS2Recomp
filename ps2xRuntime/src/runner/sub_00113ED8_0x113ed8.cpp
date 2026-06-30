#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00113ED8
// Address: 0x113ed8 - 0x114798
void sub_00113ED8_0x113ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113ED8_0x113ed8");
#endif

    switch (ctx->pc) {
        case 0x113f10u: goto label_113f10;
        case 0x113f1cu: goto label_113f1c;
        case 0x113f48u: goto label_113f48;
        case 0x113f94u: goto label_113f94;
        case 0x113fbcu: goto label_113fbc;
        case 0x113ffcu: goto label_113ffc;
        case 0x114038u: goto label_114038;
        case 0x11407cu: goto label_11407c;
        case 0x11408cu: goto label_11408c;
        case 0x114094u: goto label_114094;
        case 0x1140a8u: goto label_1140a8;
        case 0x1140b8u: goto label_1140b8;
        case 0x1140d0u: goto label_1140d0;
        case 0x1140e0u: goto label_1140e0;
        case 0x1140e8u: goto label_1140e8;
        case 0x114164u: goto label_114164;
        case 0x114184u: goto label_114184;
        case 0x1141a0u: goto label_1141a0;
        case 0x114208u: goto label_114208;
        case 0x114220u: goto label_114220;
        case 0x114248u: goto label_114248;
        case 0x1142a4u: goto label_1142a4;
        case 0x1142e8u: goto label_1142e8;
        case 0x11430cu: goto label_11430c;
        case 0x114338u: goto label_114338;
        case 0x114348u: goto label_114348;
        case 0x114350u: goto label_114350;
        case 0x114364u: goto label_114364;
        case 0x114374u: goto label_114374;
        case 0x114384u: goto label_114384;
        case 0x11438cu: goto label_11438c;
        case 0x1143fcu: goto label_1143fc;
        case 0x114414u: goto label_114414;
        case 0x114440u: goto label_114440;
        case 0x1144a8u: goto label_1144a8;
        case 0x1144f8u: goto label_1144f8;
        case 0x114538u: goto label_114538;
        case 0x114548u: goto label_114548;
        case 0x114550u: goto label_114550;
        case 0x114564u: goto label_114564;
        case 0x114574u: goto label_114574;
        case 0x114584u: goto label_114584;
        case 0x11458cu: goto label_11458c;
        case 0x114600u: goto label_114600;
        case 0x114618u: goto label_114618;
        case 0x114648u: goto label_114648;
        case 0x1146b0u: goto label_1146b0;
        case 0x1146d0u: goto label_1146d0;
        case 0x114710u: goto label_114710;
        case 0x114720u: goto label_114720;
        case 0x114728u: goto label_114728;
        case 0x11473cu: goto label_11473c;
        case 0x11474cu: goto label_11474c;
        case 0x11475cu: goto label_11475c;
        case 0x114764u: goto label_114764;
        default: break;
    }

    ctx->pc = 0x113ed8u;

    // 0x113ed8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x113ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x113edc: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113ee0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113ee4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x113ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ee8: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113eec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x113eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ef0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113ef4: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x113ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x113ef8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113efc: 0x2691b440  addiu       $s1, $s4, -0x4BC0
    ctx->pc = 0x113efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947904));
    // 0x113f00: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x113f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x113f04: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113f08: 0xc044372  jal         func_110DC8
    ctx->pc = 0x113F08u;
    SET_GPR_U32(ctx, 31, 0x113F10u);
    ctx->pc = 0x113F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113F08u;
            // 0x113f0c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110DC8u;
    if (runtime->hasFunction(0x110DC8u)) {
        auto targetFn = runtime->lookupFunction(0x110DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F10u; }
        if (ctx->pc != 0x113F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110DC8_0x110dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F10u; }
        if (ctx->pc != 0x113F10u) { return; }
    }
    ctx->pc = 0x113F10u;
label_113f10:
    // 0x113f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f14: 0xc044492  jal         func_111248
    ctx->pc = 0x113F14u;
    SET_GPR_U32(ctx, 31, 0x113F1Cu);
    ctx->pc = 0x113F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113F14u;
            // 0x113f18: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F1Cu; }
        if (ctx->pc != 0x113F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F1Cu; }
        if (ctx->pc != 0x113F1Cu) { return; }
    }
    ctx->pc = 0x113F1Cu;
label_113f1c:
    // 0x113f1c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x113f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x113f20: 0x8c62e43c  lw          $v0, -0x1BC4($v1)
    ctx->pc = 0x113f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960188)));
    // 0x113f24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x113F24u;
    {
        const bool branch_taken_0x113f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113f24) {
            ctx->pc = 0x113F40u;
            goto label_113f40;
        }
    }
    ctx->pc = 0x113F2Cu;
    // 0x113f2c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113F2Cu;
    {
        const bool branch_taken_0x113f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x113f2c) {
            ctx->pc = 0x113F40u;
            goto label_113f40;
        }
    }
    ctx->pc = 0x113F34u;
    // 0x113f34: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113f38: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x113F38u;
    {
        const bool branch_taken_0x113f38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x113F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113F38u;
            // 0x113f3c: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f38) {
            ctx->pc = 0x113F50u;
            goto label_113f50;
        }
    }
    ctx->pc = 0x113F40u;
label_113f40:
    // 0x113f40: 0xc04449e  jal         func_111278
    ctx->pc = 0x113F40u;
    SET_GPR_U32(ctx, 31, 0x113F48u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F48u; }
        if (ctx->pc != 0x113F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F48u; }
        if (ctx->pc != 0x113F48u) { return; }
    }
    ctx->pc = 0x113F48u;
label_113f48:
    // 0x113f48: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x113F48u;
    {
        const bool branch_taken_0x113f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113F48u;
            // 0x113f4c: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f48) {
            ctx->pc = 0x1140ECu;
            goto label_1140ec;
        }
    }
    ctx->pc = 0x113F50u;
label_113f50:
    // 0x113f50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113f54: 0x2442c940  addiu       $v0, $v0, -0x36C0
    ctx->pc = 0x113f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953280));
    // 0x113f58: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x113f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x113f5c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x113f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x113f60: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x113f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x113f64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x113f64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x113f68: 0xfe330010  sd          $s3, 0x10($s1)
    ctx->pc = 0x113f68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 19));
    // 0x113f6c: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x113f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x113f70: 0x2463f110  addiu       $v1, $v1, -0xEF0
    ctx->pc = 0x113f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963472));
    // 0x113f74: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x113f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x113f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113f7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113f80: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x113f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x113f84: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x113f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x113f88: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x113f88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x113f8c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x113F8Cu;
    SET_GPR_U32(ctx, 31, 0x113F94u);
    ctx->pc = 0x113F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113F8Cu;
            // 0x113f90: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F94u; }
        if (ctx->pc != 0x113F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113F94u; }
        if (ctx->pc != 0x113F94u) { return; }
    }
    ctx->pc = 0x113F94u;
label_113f94:
    // 0x113f94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x113f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x113f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x113f9c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x113f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113fa0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x113fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x113fa4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x113fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x113fa8: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x113FA8u;
    {
        const bool branch_taken_0x113fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FA8u;
            // 0x113fac: 0xae93b440  sw          $s3, -0x4BC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947904), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fa8) {
            ctx->pc = 0x114040u;
            goto label_114040;
        }
    }
    ctx->pc = 0x113FB0u;
    // 0x113fb0: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x113fb0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
    // 0x113fb4: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x113FB4u;
    SET_GPR_U32(ctx, 31, 0x113FBCu);
    ctx->pc = 0x113FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113FB4u;
            // 0x113fb8: 0x8ea4e44c  lw          $a0, -0x1BB4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960204)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113FBCu; }
        if (ctx->pc != 0x113FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113FBCu; }
        if (ctx->pc != 0x113FBCu) { return; }
    }
    ctx->pc = 0x113FBCu;
label_113fbc:
    // 0x113fbc: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x113fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x113fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fc4: 0x8ce3e3b8  lw          $v1, -0x1C48($a3)
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960056)));
    // 0x113fc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x113fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113fcc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113FCCu;
    {
        const bool branch_taken_0x113fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x113FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FCCu;
            // 0x113fd0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fcc) {
            ctx->pc = 0x113FF0u;
            goto label_113ff0;
        }
    }
    ctx->pc = 0x113FD4u;
    // 0x113fd4: 0x8e83b440  lw          $v1, -0x4BC0($s4)
    ctx->pc = 0x113fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947904)));
    // 0x113fd8: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x113fd8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x113fdc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x113fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x113fe0: 0x31023  negu        $v0, $v1
    ctx->pc = 0x113fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x113fe4: 0xace3e3b8  sw          $v1, -0x1C48($a3)
    ctx->pc = 0x113fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960056), GPR_U32(ctx, 3));
    // 0x113fe8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x113FE8u;
    {
        const bool branch_taken_0x113fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113FE8u;
            // 0x113fec: 0xae82b440  sw          $v0, -0x4BC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294947904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fe8) {
            ctx->pc = 0x114030u;
            goto label_114030;
        }
    }
    ctx->pc = 0x113FF0u;
label_113ff0:
    // 0x113ff0: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x113ff0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x113ff4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x113ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x113ff8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_113ffc:
    // 0x113ffc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x113ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x114000: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x114000u;
    {
        const bool branch_taken_0x114000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114000u;
            // 0x114004: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114000) {
            ctx->pc = 0x114030u;
            goto label_114030;
        }
    }
    ctx->pc = 0x114008u;
    // 0x114008: 0x24e3e3b8  addiu       $v1, $a3, -0x1C48
    ctx->pc = 0x114008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960056));
    // 0x11400c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x11400cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114010: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x114010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114014: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x114014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114018: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114018u;
    {
        const bool branch_taken_0x114018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x11401Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114018u;
            // 0x11401c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114018) {
            ctx->pc = 0x113FFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113ffc;
        }
    }
    ctx->pc = 0x114020u;
    // 0x114020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x114020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x114024: 0x21823  negu        $v1, $v0
    ctx->pc = 0x114024u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x114028: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x114028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x11402c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x11402cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_114030:
    // 0x114030: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x114030u;
    SET_GPR_U32(ctx, 31, 0x114038u);
    ctx->pc = 0x114034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114030u;
            // 0x114034: 0x8ea4e44c  lw          $a0, -0x1BB4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960204)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114038u; }
        if (ctx->pc != 0x114038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114038u; }
        if (ctx->pc != 0x114038u) { return; }
    }
    ctx->pc = 0x114038u;
label_114038:
    // 0x114038: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x114038u;
    {
        const bool branch_taken_0x114038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11403Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114038u;
            // 0x11403c: 0x2610c080  addiu       $s0, $s0, -0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114038) {
            ctx->pc = 0x114050u;
            goto label_114050;
        }
    }
    ctx->pc = 0x114040u;
label_114040:
    // 0x114040: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x114040u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x114044: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x114044u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x114048: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x114048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11404c: 0x2610c080  addiu       $s0, $s0, -0x3F80
    ctx->pc = 0x11404cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951040));
label_114050:
    // 0x114050: 0x26c4cb40  addiu       $a0, $s6, -0x34C0
    ctx->pc = 0x114050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294953792));
    // 0x114054: 0x2687b440  addiu       $a3, $s4, -0x4BC0
    ctx->pc = 0x114054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947904));
    // 0x114058: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11405c: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x11405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x114060: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x114060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x114064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114068: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x114068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11406c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11406cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114070: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114074: 0xc044336  jal         func_110CD8
    ctx->pc = 0x114074u;
    SET_GPR_U32(ctx, 31, 0x11407Cu);
    ctx->pc = 0x114078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114074u;
            // 0x114078: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11407Cu; }
        if (ctx->pc != 0x11407Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11407Cu; }
        if (ctx->pc != 0x11407Cu) { return; }
    }
    ctx->pc = 0x11407Cu;
label_11407c:
    // 0x11407c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11407Cu;
    {
        const bool branch_taken_0x11407c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11407Cu;
            // 0x114080: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11407c) {
            ctx->pc = 0x11409Cu;
            goto label_11409c;
        }
    }
    ctx->pc = 0x114084u;
    // 0x114084: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x114084u;
    SET_GPR_U32(ctx, 31, 0x11408Cu);
    ctx->pc = 0x114088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114084u;
            // 0x114088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11408Cu; }
        if (ctx->pc != 0x11408Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11408Cu; }
        if (ctx->pc != 0x11408Cu) { return; }
    }
    ctx->pc = 0x11408Cu;
label_11408c:
    // 0x11408c: 0xc04449e  jal         func_111278
    ctx->pc = 0x11408Cu;
    SET_GPR_U32(ctx, 31, 0x114094u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114094u; }
        if (ctx->pc != 0x114094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114094u; }
        if (ctx->pc != 0x114094u) { return; }
    }
    ctx->pc = 0x114094u;
label_114094:
    // 0x114094: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x114094u;
    {
        const bool branch_taken_0x114094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114094u;
            // 0x114098: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114094) {
            ctx->pc = 0x1140ECu;
            goto label_1140ec;
        }
    }
    ctx->pc = 0x11409Cu;
label_11409c:
    // 0x11409c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x11409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1140a0: 0xc04449e  jal         func_111278
    ctx->pc = 0x1140A0u;
    SET_GPR_U32(ctx, 31, 0x1140A8u);
    ctx->pc = 0x1140A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1140A0u;
            // 0x1140a4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140A8u; }
        if (ctx->pc != 0x1140A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140A8u; }
        if (ctx->pc != 0x1140A8u) { return; }
    }
    ctx->pc = 0x1140A8u;
label_1140a8:
    // 0x1140a8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1140A8u;
    {
        const bool branch_taken_0x1140a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1140a8) {
            ctx->pc = 0x1140C0u;
            goto label_1140c0;
        }
    }
    ctx->pc = 0x1140B0u;
    // 0x1140b0: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1140B0u;
    SET_GPR_U32(ctx, 31, 0x1140B8u);
    ctx->pc = 0x1140B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1140B0u;
            // 0x1140b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140B8u; }
        if (ctx->pc != 0x1140B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140B8u; }
        if (ctx->pc != 0x1140B8u) { return; }
    }
    ctx->pc = 0x1140B8u;
label_1140b8:
    // 0x1140b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1140B8u;
    {
        const bool branch_taken_0x1140b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1140B8u;
            // 0x1140bc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140b8) {
            ctx->pc = 0x1140ECu;
            goto label_1140ec;
        }
    }
    ctx->pc = 0x1140C0u;
label_1140c0:
    // 0x1140c0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1140C0u;
    {
        const bool branch_taken_0x1140c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1140c0) {
            ctx->pc = 0x1140D8u;
            goto label_1140d8;
        }
    }
    ctx->pc = 0x1140C8u;
    // 0x1140c8: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1140C8u;
    SET_GPR_U32(ctx, 31, 0x1140D0u);
    ctx->pc = 0x1140CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1140C8u;
            // 0x1140cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140D0u; }
        if (ctx->pc != 0x1140D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140D0u; }
        if (ctx->pc != 0x1140D0u) { return; }
    }
    ctx->pc = 0x1140D0u;
label_1140d0:
    // 0x1140d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1140D0u;
    {
        const bool branch_taken_0x1140d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1140D0u;
            // 0x1140d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140d0) {
            ctx->pc = 0x1140ECu;
            goto label_1140ec;
        }
    }
    ctx->pc = 0x1140D8u;
label_1140d8:
    // 0x1140d8: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1140D8u;
    SET_GPR_U32(ctx, 31, 0x1140E0u);
    ctx->pc = 0x1140DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1140D8u;
            // 0x1140dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140E0u; }
        if (ctx->pc != 0x1140E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140E0u; }
        if (ctx->pc != 0x1140E0u) { return; }
    }
    ctx->pc = 0x1140E0u;
label_1140e0:
    // 0x1140e0: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1140E0u;
    SET_GPR_U32(ctx, 31, 0x1140E8u);
    ctx->pc = 0x1140E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1140E0u;
            // 0x1140e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140E8u; }
        if (ctx->pc != 0x1140E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1140E8u; }
        if (ctx->pc != 0x1140E8u) { return; }
    }
    ctx->pc = 0x1140E8u;
label_1140e8:
    // 0x1140e8: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x1140e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1140ec:
    // 0x1140ec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1140ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1140f0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1140f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1140f4: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1140f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1140f8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1140f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1140fc: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1140fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114100: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114104: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114108: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11410c: 0x3e00008  jr          $ra
    ctx->pc = 0x11410Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11410Cu;
            // 0x114110: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114114u;
    // 0x114114: 0x0  nop
    ctx->pc = 0x114114u;
    // NOP
    // 0x114118: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x114118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11411c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114120: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x114120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x114124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x114124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114128: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11412c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x11412cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114130: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114134: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x114134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114138: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11413c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11413cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114140: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114144: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x114144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114148: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x114148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x11414c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x11414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x114150: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114154: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114158: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11415c: 0xc044492  jal         func_111248
    ctx->pc = 0x11415Cu;
    SET_GPR_U32(ctx, 31, 0x114164u);
    ctx->pc = 0x114160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11415Cu;
            // 0x114160: 0xafa80034  sw          $t0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114164u; }
        if (ctx->pc != 0x114164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114164u; }
        if (ctx->pc != 0x114164u) { return; }
    }
    ctx->pc = 0x114164u;
label_114164:
    // 0x114164: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x114164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x114168: 0x2451b440  addiu       $s1, $v0, -0x4BC0
    ctx->pc = 0x114168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947904));
    // 0x11416c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11416cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x114170: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x114170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x114174: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114174u;
    {
        const bool branch_taken_0x114174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114174) {
            ctx->pc = 0x114178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114174u;
            // 0x114178: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114188u;
            goto label_114188;
        }
    }
    ctx->pc = 0x11417Cu;
    // 0x11417c: 0xc0444dc  jal         func_111370
    ctx->pc = 0x11417Cu;
    SET_GPR_U32(ctx, 31, 0x114184u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114184u; }
        if (ctx->pc != 0x114184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114184u; }
        if (ctx->pc != 0x114184u) { return; }
    }
    ctx->pc = 0x114184u;
label_114184:
    // 0x114184: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x114184u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_114188:
    // 0x114188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11418c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x11418cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114190: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x114190u;
    {
        const bool branch_taken_0x114190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114190u;
            // 0x114194: 0xa222000c  sb          $v0, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114190) {
            ctx->pc = 0x1141CCu;
            goto label_1141cc;
        }
    }
    ctx->pc = 0x114198u;
    // 0x114198: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x114198u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x11419c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11419cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1141a0:
    // 0x1141a0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1141a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1141a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1141A4u;
    {
        const bool branch_taken_0x1141a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1141A4u;
            // 0x1141a8: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141a4) {
            ctx->pc = 0x1141D0u;
            goto label_1141d0;
        }
    }
    ctx->pc = 0x1141ACu;
    // 0x1141ac: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x1141acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1141b0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1141b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1141b4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1141b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1141b8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1141b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1141bc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1141BCu;
    {
        const bool branch_taken_0x1141bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1141bc) {
            ctx->pc = 0x1141C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1141BCu;
            // 0x1141c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1141A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1141a0;
        }
    }
    ctx->pc = 0x1141C4u;
    // 0x1141c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1141C4u;
    {
        const bool branch_taken_0x1141c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1141C4u;
            // 0x1141c8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141c4) {
            ctx->pc = 0x1141D4u;
            goto label_1141d4;
        }
    }
    ctx->pc = 0x1141CCu;
label_1141cc:
    // 0x1141cc: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1141ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_1141d0:
    // 0x1141d0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1141d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1141d4:
    // 0x1141d4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1141D4u;
    {
        const bool branch_taken_0x1141d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1141d4) {
            ctx->pc = 0x1141D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1141D4u;
            // 0x1141d8: 0xa220040b  sb          $zero, 0x40B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1141DCu;
            goto label_1141dc;
        }
    }
    ctx->pc = 0x1141DCu;
label_1141dc:
    // 0x1141dc: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1141DCu;
    {
        const bool branch_taken_0x1141dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1141DCu;
            // 0x1141e0: 0x2fc20401  sltiu       $v0, $fp, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141dc) {
            ctx->pc = 0x114218u;
            goto label_114218;
        }
    }
    ctx->pc = 0x1141E4u;
    // 0x1141e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1141E4u;
    {
        const bool branch_taken_0x1141e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1141E4u;
            // 0x1141e8: 0x24024601  addiu       $v0, $zero, 0x4601 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141e4) {
            ctx->pc = 0x114218u;
            goto label_114218;
        }
    }
    ctx->pc = 0x1141ECu;
    // 0x1141ec: 0x16a2000e  bne         $s5, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1141ECu;
    {
        const bool branch_taken_0x1141ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1141ec) {
            ctx->pc = 0x114228u;
            goto label_114228;
        }
    }
    ctx->pc = 0x1141F4u;
    // 0x1141f4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1141f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1141f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1141F8u;
    {
        const bool branch_taken_0x1141f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1141f8) {
            ctx->pc = 0x1141FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1141F8u;
            // 0x1141fc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114210u;
            goto label_114210;
        }
    }
    ctx->pc = 0x114200u;
    // 0x114200: 0xc04449e  jal         func_111278
    ctx->pc = 0x114200u;
    SET_GPR_U32(ctx, 31, 0x114208u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114208u; }
        if (ctx->pc != 0x114208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114208u; }
        if (ctx->pc != 0x114208u) { return; }
    }
    ctx->pc = 0x114208u;
label_114208:
    // 0x114208: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x114208u;
    {
        const bool branch_taken_0x114208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11420Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114208u;
            // 0x11420c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114208) {
            ctx->pc = 0x114390u;
            goto label_114390;
        }
    }
    ctx->pc = 0x114210u;
label_114210:
    // 0x114210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114210u;
    {
        const bool branch_taken_0x114210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114210) {
            ctx->pc = 0x114228u;
            goto label_114228;
        }
    }
    ctx->pc = 0x114218u;
label_114218:
    // 0x114218: 0xc04449e  jal         func_111278
    ctx->pc = 0x114218u;
    SET_GPR_U32(ctx, 31, 0x114220u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114220u; }
        if (ctx->pc != 0x114220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114220u; }
        if (ctx->pc != 0x114220u) { return; }
    }
    ctx->pc = 0x114220u;
label_114220:
    // 0x114220: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x114220u;
    {
        const bool branch_taken_0x114220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114220u;
            // 0x114224: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114220) {
            ctx->pc = 0x114390u;
            goto label_114390;
        }
    }
    ctx->pc = 0x114228u;
label_114228:
    // 0x114228: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x114228u;
    {
        const bool branch_taken_0x114228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114228u;
            // 0x11422c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114228) {
            ctx->pc = 0x114270u;
            goto label_114270;
        }
    }
    ctx->pc = 0x114230u;
    // 0x114230: 0x2626040c  addiu       $a2, $s1, 0x40C
    ctx->pc = 0x114230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1036));
    // 0x114234: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x114238: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114238u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11423c: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x11423cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x114240: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x114244: 0x0  nop
    ctx->pc = 0x114244u;
    // NOP
label_114248:
    // 0x114248: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x114248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x11424c: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x11424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114250: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114250u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114254: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114258: 0xb0102b  sltu        $v0, $a1, $s0
    ctx->pc = 0x114258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x11425c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11425cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114260: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x114260u;
    {
        const bool branch_taken_0x114260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114260) {
            ctx->pc = 0x114248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114248;
        }
    }
    ctx->pc = 0x114268u;
    // 0x114268: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114268u;
    {
        const bool branch_taken_0x114268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114268u;
            // 0x11426c: 0xae300810  sw          $s0, 0x810($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114268) {
            ctx->pc = 0x114284u;
            goto label_114284;
        }
    }
    ctx->pc = 0x114270u;
label_114270:
    // 0x114270: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x114270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x114274: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114274u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114278: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x114278u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x11427c: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x11427cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x114280: 0xae300810  sw          $s0, 0x810($s1)
    ctx->pc = 0x114280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 16));
label_114284:
    // 0x114284: 0x24e3f128  addiu       $v1, $a3, -0xED8
    ctx->pc = 0x114284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963496));
    // 0x114288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11428c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x11428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x114290: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114294: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114298: 0xae35080c  sw          $s5, 0x80C($s1)
    ctx->pc = 0x114298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 21));
    // 0x11429c: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11429Cu;
    SET_GPR_U32(ctx, 31, 0x1142A4u);
    ctx->pc = 0x1142A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11429Cu;
            // 0x1142a0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1142A4u; }
        if (ctx->pc != 0x1142A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1142A4u; }
        if (ctx->pc != 0x1142A4u) { return; }
    }
    ctx->pc = 0x1142A4u;
label_1142a4:
    // 0x1142a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1142a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142a8: 0xae3e0818  sw          $fp, 0x818($s1)
    ctx->pc = 0x1142a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 30));
    // 0x1142ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1142acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1142b0: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1142b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1142b4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1142b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1142b8: 0x24034601  addiu       $v1, $zero, 0x4601
    ctx->pc = 0x1142b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17921));
    // 0x1142bc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1142bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1142c0: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x1142c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x1142c4: 0x16a3000a  bne         $s5, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1142C4u;
    {
        const bool branch_taken_0x1142c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x1142C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1142C4u;
            // 0x1142c8: 0xae220814  sw          $v0, 0x814($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142c4) {
            ctx->pc = 0x1142F0u;
            goto label_1142f0;
        }
    }
    ctx->pc = 0x1142CCu;
    // 0x1142cc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1142ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1142d0: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x1142d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1142d4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1142d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1142d8: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1142d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1142dc: 0x2812  mflo        $a1
    ctx->pc = 0x1142dcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1142e0: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1142E0u;
    SET_GPR_U32(ctx, 31, 0x1142E8u);
    ctx->pc = 0x1142E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1142E0u;
            // 0x1142e4: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1142E8u; }
        if (ctx->pc != 0x1142E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1142E8u; }
        if (ctx->pc != 0x1142E8u) { return; }
    }
    ctx->pc = 0x1142E8u;
label_1142e8:
    // 0x1142e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1142E8u;
    {
        const bool branch_taken_0x1142e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1142E8u;
            // 0x1142ec: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e8) {
            ctx->pc = 0x1142F8u;
            goto label_1142f8;
        }
    }
    ctx->pc = 0x1142F0u;
label_1142f0:
    // 0x1142f0: 0x24110017  addiu       $s1, $zero, 0x17
    ctx->pc = 0x1142f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1142f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1142f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1142f8:
    // 0x1142f8: 0x2405081c  addiu       $a1, $zero, 0x81C
    ctx->pc = 0x1142f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x1142fc: 0x2450b440  addiu       $s0, $v0, -0x4BC0
    ctx->pc = 0x1142fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947904));
    // 0x114300: 0x26d2c080  addiu       $s2, $s6, -0x3F80
    ctx->pc = 0x114300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951040));
    // 0x114304: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x114304u;
    SET_GPR_U32(ctx, 31, 0x11430Cu);
    ctx->pc = 0x114308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114304u;
            // 0x114308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11430Cu; }
        if (ctx->pc != 0x11430Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11430Cu; }
        if (ctx->pc != 0x11430Cu) { return; }
    }
    ctx->pc = 0x11430Cu;
label_11430c:
    // 0x11430c: 0x26e4cb40  addiu       $a0, $s7, -0x34C0
    ctx->pc = 0x11430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953792));
    // 0x114310: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x114310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114314: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x114314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114318: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11431c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11431cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114324: 0x2408081c  addiu       $t0, $zero, 0x81C
    ctx->pc = 0x114324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2076));
    // 0x114328: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x114328u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11432c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11432cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114330: 0xc044336  jal         func_110CD8
    ctx->pc = 0x114330u;
    SET_GPR_U32(ctx, 31, 0x114338u);
    ctx->pc = 0x114334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114330u;
            // 0x114334: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114338u; }
        if (ctx->pc != 0x114338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114338u; }
        if (ctx->pc != 0x114338u) { return; }
    }
    ctx->pc = 0x114338u;
label_114338:
    // 0x114338: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114338u;
    {
        const bool branch_taken_0x114338 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114338u;
            // 0x11433c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114338) {
            ctx->pc = 0x114358u;
            goto label_114358;
        }
    }
    ctx->pc = 0x114340u;
    // 0x114340: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x114340u;
    SET_GPR_U32(ctx, 31, 0x114348u);
    ctx->pc = 0x114344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114340u;
            // 0x114344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114348u; }
        if (ctx->pc != 0x114348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114348u; }
        if (ctx->pc != 0x114348u) { return; }
    }
    ctx->pc = 0x114348u;
label_114348:
    // 0x114348: 0xc04449e  jal         func_111278
    ctx->pc = 0x114348u;
    SET_GPR_U32(ctx, 31, 0x114350u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114350u; }
        if (ctx->pc != 0x114350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114350u; }
        if (ctx->pc != 0x114350u) { return; }
    }
    ctx->pc = 0x114350u;
label_114350:
    // 0x114350: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114350u;
    {
        const bool branch_taken_0x114350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114350u;
            // 0x114354: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114350) {
            ctx->pc = 0x114390u;
            goto label_114390;
        }
    }
    ctx->pc = 0x114358u;
label_114358:
    // 0x114358: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x114358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x11435c: 0xc04449e  jal         func_111278
    ctx->pc = 0x11435Cu;
    SET_GPR_U32(ctx, 31, 0x114364u);
    ctx->pc = 0x114360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11435Cu;
            // 0x114360: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114364u; }
        if (ctx->pc != 0x114364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114364u; }
        if (ctx->pc != 0x114364u) { return; }
    }
    ctx->pc = 0x114364u;
label_114364:
    // 0x114364: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114364u;
    {
        const bool branch_taken_0x114364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114364) {
            ctx->pc = 0x11437Cu;
            goto label_11437c;
        }
    }
    ctx->pc = 0x11436Cu;
    // 0x11436c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x11436Cu;
    SET_GPR_U32(ctx, 31, 0x114374u);
    ctx->pc = 0x114370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11436Cu;
            // 0x114370: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114374u; }
        if (ctx->pc != 0x114374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114374u; }
        if (ctx->pc != 0x114374u) { return; }
    }
    ctx->pc = 0x114374u;
label_114374:
    // 0x114374: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114374u;
    {
        const bool branch_taken_0x114374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114374u;
            // 0x114378: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114374) {
            ctx->pc = 0x114390u;
            goto label_114390;
        }
    }
    ctx->pc = 0x11437Cu;
label_11437c:
    // 0x11437c: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x11437Cu;
    SET_GPR_U32(ctx, 31, 0x114384u);
    ctx->pc = 0x114380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11437Cu;
            // 0x114380: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114384u; }
        if (ctx->pc != 0x114384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114384u; }
        if (ctx->pc != 0x114384u) { return; }
    }
    ctx->pc = 0x114384u;
label_114384:
    // 0x114384: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x114384u;
    SET_GPR_U32(ctx, 31, 0x11438Cu);
    ctx->pc = 0x114388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114384u;
            // 0x114388: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11438Cu; }
        if (ctx->pc != 0x11438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11438Cu; }
        if (ctx->pc != 0x11438Cu) { return; }
    }
    ctx->pc = 0x11438Cu;
label_11438c:
    // 0x11438c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114390:
    // 0x114390: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x114390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x114394: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x114394u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114398: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x114398u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11439c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11439cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1143a0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1143a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1143a4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1143a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1143a8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1143a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1143ac: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1143acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1143b0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1143b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1143b4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1143b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1143b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1143B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1143BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1143B8u;
            // 0x1143bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1143C0u;
    // 0x1143c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1143c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1143c4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1143c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1143c8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1143c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1143cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1143ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143d0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1143d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1143d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1143d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143d8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1143d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1143dc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1143dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1143e0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1143e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1143e4: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x1143e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x1143e8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1143e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1143ec: 0x26d2b440  addiu       $s2, $s6, -0x4BC0
    ctx->pc = 0x1143ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947904));
    // 0x1143f0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1143f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1143f4: 0xc044492  jal         func_111248
    ctx->pc = 0x1143F4u;
    SET_GPR_U32(ctx, 31, 0x1143FCu);
    ctx->pc = 0x1143F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1143F4u;
            // 0x1143f8: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143FCu; }
        if (ctx->pc != 0x1143FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1143FCu; }
        if (ctx->pc != 0x1143FCu) { return; }
    }
    ctx->pc = 0x1143FCu;
label_1143fc:
    // 0x1143fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1143fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x114400: 0x8c43e43c  lw          $v1, -0x1BC4($v0)
    ctx->pc = 0x114400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960188)));
    // 0x114404: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114404u;
    {
        const bool branch_taken_0x114404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114404) {
            ctx->pc = 0x114408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114404u;
            // 0x114408: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114418u;
            goto label_114418;
        }
    }
    ctx->pc = 0x11440Cu;
    // 0x11440c: 0xc0444dc  jal         func_111370
    ctx->pc = 0x11440Cu;
    SET_GPR_U32(ctx, 31, 0x114414u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114414u; }
        if (ctx->pc != 0x114414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114414u; }
        if (ctx->pc != 0x114414u) { return; }
    }
    ctx->pc = 0x114414u;
label_114414:
    // 0x114414: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x114414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_114418:
    // 0x114418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11441c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x11441cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114420: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x114420u;
    {
        const bool branch_taken_0x114420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114420u;
            // 0x114424: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114420) {
            ctx->pc = 0x11446Cu;
            goto label_11446c;
        }
    }
    ctx->pc = 0x114428u;
    // 0x114428: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x114428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x11442c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x11442cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114430: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x114430u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x114434: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x114434u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x114438: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11443c: 0x0  nop
    ctx->pc = 0x11443cu;
    // NOP
label_114440:
    // 0x114440: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114444: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114444u;
    {
        const bool branch_taken_0x114444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114444u;
            // 0x114448: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114444) {
            ctx->pc = 0x11447Cu;
            goto label_11447c;
        }
    }
    ctx->pc = 0x11444Cu;
    // 0x11444c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x11444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x114450: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114454: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x114454u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x114458: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11445c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11445Cu;
    {
        const bool branch_taken_0x11445c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11445c) {
            ctx->pc = 0x114460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11445Cu;
            // 0x114460: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114440;
        }
    }
    ctx->pc = 0x114464u;
    // 0x114464: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114464u;
    {
        const bool branch_taken_0x114464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114464u;
            // 0x114468: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114464) {
            ctx->pc = 0x114480u;
            goto label_114480;
        }
    }
    ctx->pc = 0x11446Cu;
label_11446c:
    // 0x11446c: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x11446cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x114470: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114474: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x114474u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x114478: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x114478u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
label_11447c:
    // 0x11447c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_114480:
    // 0x114480: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114480u;
    {
        const bool branch_taken_0x114480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114480) {
            ctx->pc = 0x114484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114480u;
            // 0x114484: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114488u;
            goto label_114488;
        }
    }
    ctx->pc = 0x114488u;
label_114488:
    // 0x114488: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x114488u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11448c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11448cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114490: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114494: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x114494u;
    {
        const bool branch_taken_0x114494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114494u;
            // 0x114498: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114494) {
            ctx->pc = 0x1144CCu;
            goto label_1144cc;
        }
    }
    ctx->pc = 0x11449Cu;
    // 0x11449c: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x11449cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x1144a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1144a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1144a4: 0x0  nop
    ctx->pc = 0x1144a4u;
    // NOP
label_1144a8:
    // 0x1144a8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1144a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1144ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1144ACu;
    {
        const bool branch_taken_0x1144ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1144ACu;
            // 0x1144b0: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144ac) {
            ctx->pc = 0x1144CCu;
            goto label_1144cc;
        }
    }
    ctx->pc = 0x1144B4u;
    // 0x1144b4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1144b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1144b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1144b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1144bc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1144bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1144c0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1144c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1144c4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1144C4u;
    {
        const bool branch_taken_0x1144c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1144c4) {
            ctx->pc = 0x1144C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1144C4u;
            // 0x1144c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1144A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1144a8;
        }
    }
    ctx->pc = 0x1144CCu;
label_1144cc:
    // 0x1144cc: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1144ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1144d0: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1144D0u;
    {
        const bool branch_taken_0x1144d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1144d0) {
            ctx->pc = 0x1144D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1144D0u;
            // 0x1144d4: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1144D8u;
            goto label_1144d8;
        }
    }
    ctx->pc = 0x1144D8u;
label_1144d8:
    // 0x1144d8: 0x24e2f140  addiu       $v0, $a3, -0xEC0
    ctx->pc = 0x1144d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963520));
    // 0x1144dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1144dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1144e0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1144e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1144e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1144e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1144e8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1144e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1144ec: 0x2690c080  addiu       $s0, $s4, -0x3F80
    ctx->pc = 0x1144ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
    // 0x1144f0: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x1144F0u;
    SET_GPR_U32(ctx, 31, 0x1144F8u);
    ctx->pc = 0x1144F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1144F0u;
            // 0x1144f4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144F8u; }
        if (ctx->pc != 0x1144F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1144F8u; }
        if (ctx->pc != 0x1144F8u) { return; }
    }
    ctx->pc = 0x1144F8u;
label_1144f8:
    // 0x1144f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1144f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144fc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1144fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x114500: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114504: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x114504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x114508: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x114508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11450c: 0x26a4cb40  addiu       $a0, $s5, -0x34C0
    ctx->pc = 0x11450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953792));
    // 0x114510: 0x26c7b440  addiu       $a3, $s6, -0x4BC0
    ctx->pc = 0x114510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947904));
    // 0x114514: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x114514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x114518: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11451c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114520: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114524: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x114524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x114528: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x114528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11452c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11452cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114530: 0xc044336  jal         func_110CD8
    ctx->pc = 0x114530u;
    SET_GPR_U32(ctx, 31, 0x114538u);
    ctx->pc = 0x114534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114530u;
            // 0x114534: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114538u; }
        if (ctx->pc != 0x114538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114538u; }
        if (ctx->pc != 0x114538u) { return; }
    }
    ctx->pc = 0x114538u;
label_114538:
    // 0x114538: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114538u;
    {
        const bool branch_taken_0x114538 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114538u;
            // 0x11453c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114538) {
            ctx->pc = 0x114558u;
            goto label_114558;
        }
    }
    ctx->pc = 0x114540u;
    // 0x114540: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x114540u;
    SET_GPR_U32(ctx, 31, 0x114548u);
    ctx->pc = 0x114544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114540u;
            // 0x114544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114548u; }
        if (ctx->pc != 0x114548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114548u; }
        if (ctx->pc != 0x114548u) { return; }
    }
    ctx->pc = 0x114548u;
label_114548:
    // 0x114548: 0xc04449e  jal         func_111278
    ctx->pc = 0x114548u;
    SET_GPR_U32(ctx, 31, 0x114550u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114550u; }
        if (ctx->pc != 0x114550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114550u; }
        if (ctx->pc != 0x114550u) { return; }
    }
    ctx->pc = 0x114550u;
label_114550:
    // 0x114550: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114550u;
    {
        const bool branch_taken_0x114550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114550u;
            // 0x114554: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114550) {
            ctx->pc = 0x114590u;
            goto label_114590;
        }
    }
    ctx->pc = 0x114558u;
label_114558:
    // 0x114558: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x114558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11455c: 0xc04449e  jal         func_111278
    ctx->pc = 0x11455Cu;
    SET_GPR_U32(ctx, 31, 0x114564u);
    ctx->pc = 0x114560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11455Cu;
            // 0x114560: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114564u; }
        if (ctx->pc != 0x114564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114564u; }
        if (ctx->pc != 0x114564u) { return; }
    }
    ctx->pc = 0x114564u;
label_114564:
    // 0x114564: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114564u;
    {
        const bool branch_taken_0x114564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114564) {
            ctx->pc = 0x11457Cu;
            goto label_11457c;
        }
    }
    ctx->pc = 0x11456Cu;
    // 0x11456c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x11456Cu;
    SET_GPR_U32(ctx, 31, 0x114574u);
    ctx->pc = 0x114570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11456Cu;
            // 0x114570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114574u; }
        if (ctx->pc != 0x114574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114574u; }
        if (ctx->pc != 0x114574u) { return; }
    }
    ctx->pc = 0x114574u;
label_114574:
    // 0x114574: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114574u;
    {
        const bool branch_taken_0x114574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114574u;
            // 0x114578: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114574) {
            ctx->pc = 0x114590u;
            goto label_114590;
        }
    }
    ctx->pc = 0x11457Cu;
label_11457c:
    // 0x11457c: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x11457Cu;
    SET_GPR_U32(ctx, 31, 0x114584u);
    ctx->pc = 0x114580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11457Cu;
            // 0x114580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114584u; }
        if (ctx->pc != 0x114584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114584u; }
        if (ctx->pc != 0x114584u) { return; }
    }
    ctx->pc = 0x114584u;
label_114584:
    // 0x114584: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x114584u;
    SET_GPR_U32(ctx, 31, 0x11458Cu);
    ctx->pc = 0x114588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114584u;
            // 0x114588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11458Cu; }
        if (ctx->pc != 0x11458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11458Cu; }
        if (ctx->pc != 0x11458Cu) { return; }
    }
    ctx->pc = 0x11458Cu;
label_11458c:
    // 0x11458c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114590:
    // 0x114590: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x114590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114594: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114594u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114598: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114598u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11459c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11459cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1145a0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1145a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1145a4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1145a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1145a8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1145a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1145ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1145acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1145b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1145B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1145B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1145B0u;
            // 0x1145b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1145B8u;
    // 0x1145b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1145b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1145bc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1145bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1145c0: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1145c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1145c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1145c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1145c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1145cc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1145ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145d0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1145d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1145d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1145d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145d8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1145d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1145dc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1145dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1145e0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1145e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1145e4: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x1145e4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x1145e8: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1145e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1145ec: 0x27d2b440  addiu       $s2, $fp, -0x4BC0
    ctx->pc = 0x1145ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947904));
    // 0x1145f0: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1145f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1145f4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1145f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1145f8: 0xc044492  jal         func_111248
    ctx->pc = 0x1145F8u;
    SET_GPR_U32(ctx, 31, 0x114600u);
    ctx->pc = 0x1145FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1145F8u;
            // 0x1145fc: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111248u;
    if (runtime->hasFunction(0x111248u)) {
        auto targetFn = runtime->lookupFunction(0x111248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114600u; }
        if (ctx->pc != 0x114600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111248_0x111248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114600u; }
        if (ctx->pc != 0x114600u) { return; }
    }
    ctx->pc = 0x114600u;
label_114600:
    // 0x114600: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x114600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x114604: 0x8c62e43c  lw          $v0, -0x1BC4($v1)
    ctx->pc = 0x114604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960188)));
    // 0x114608: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114608u;
    {
        const bool branch_taken_0x114608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114608) {
            ctx->pc = 0x11460Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114608u;
            // 0x11460c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11461Cu;
            goto label_11461c;
        }
    }
    ctx->pc = 0x114610u;
    // 0x114610: 0xc0444dc  jal         func_111370
    ctx->pc = 0x114610u;
    SET_GPR_U32(ctx, 31, 0x114618u);
    ctx->pc = 0x111370u;
    if (runtime->hasFunction(0x111370u)) {
        auto targetFn = runtime->lookupFunction(0x111370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114618u; }
        if (ctx->pc != 0x114618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111370_0x111370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114618u; }
        if (ctx->pc != 0x114618u) { return; }
    }
    ctx->pc = 0x114618u;
label_114618:
    // 0x114618: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x114618u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_11461c:
    // 0x11461c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11461cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114620: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114624: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x114624u;
    {
        const bool branch_taken_0x114624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114624u;
            // 0x114628: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114624) {
            ctx->pc = 0x114674u;
            goto label_114674;
        }
    }
    ctx->pc = 0x11462Cu;
    // 0x11462c: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x11462cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114630: 0x3c160063  lui         $s6, 0x63
    ctx->pc = 0x114630u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)99 << 16));
    // 0x114634: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114638: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x114638u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x11463c: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x11463cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x114640: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114644: 0x0  nop
    ctx->pc = 0x114644u;
    // NOP
label_114648:
    // 0x114648: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11464c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11464Cu;
    {
        const bool branch_taken_0x11464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11464Cu;
            // 0x114650: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11464c) {
            ctx->pc = 0x114688u;
            goto label_114688;
        }
    }
    ctx->pc = 0x114654u;
    // 0x114654: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x114654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x114658: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11465c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x11465cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x114660: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114664: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114664u;
    {
        const bool branch_taken_0x114664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114664) {
            ctx->pc = 0x114668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x114664u;
            // 0x114668: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114648;
        }
    }
    ctx->pc = 0x11466Cu;
    // 0x11466c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11466Cu;
    {
        const bool branch_taken_0x11466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11466Cu;
            // 0x114670: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11466c) {
            ctx->pc = 0x11468Cu;
            goto label_11468c;
        }
    }
    ctx->pc = 0x114674u;
label_114674:
    // 0x114674: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x114674u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x114678: 0x3c160063  lui         $s6, 0x63
    ctx->pc = 0x114678u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)99 << 16));
    // 0x11467c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x11467cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114680: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x114684: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x114684u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
label_114688:
    // 0x114688: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x114688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_11468c:
    // 0x11468c: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x11468Cu;
    {
        const bool branch_taken_0x11468c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11468c) {
            ctx->pc = 0x114690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11468Cu;
            // 0x114690: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x114694u;
            goto label_114694;
        }
    }
    ctx->pc = 0x114694u;
label_114694:
    // 0x114694: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x114694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x114698: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x114698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11469c: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x11469cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1146a0: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x1146a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x1146a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1146a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146a8: 0xc043e7e  jal         func_10F9F8
    ctx->pc = 0x1146A8u;
    SET_GPR_U32(ctx, 31, 0x1146B0u);
    ctx->pc = 0x1146ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1146A8u;
            // 0x1146ac: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F9F8u;
    if (runtime->hasFunction(0x10F9F8u)) {
        auto targetFn = runtime->lookupFunction(0x10F9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1146B0u; }
        if (ctx->pc != 0x1146B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F9F8_0x10f9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1146B0u; }
        if (ctx->pc != 0x1146B0u) { return; }
    }
    ctx->pc = 0x1146B0u;
label_1146b0:
    // 0x1146b0: 0x2690c080  addiu       $s0, $s4, -0x3F80
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951040));
    // 0x1146b4: 0x26c3f158  addiu       $v1, $s6, -0xEA8
    ctx->pc = 0x1146b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294963544));
    // 0x1146b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1146b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1146bc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1146bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1146c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1146c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1146c4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1146c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1146c8: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x1146C8u;
    SET_GPR_U32(ctx, 31, 0x1146D0u);
    ctx->pc = 0x1146CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1146C8u;
            // 0x1146cc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1146D0u; }
        if (ctx->pc != 0x1146D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1146D0u; }
        if (ctx->pc != 0x1146D0u) { return; }
    }
    ctx->pc = 0x1146D0u;
label_1146d0:
    // 0x1146d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1146d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146d4: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1146d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1146d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1146d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1146dc: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1146dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1146e0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1146e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1146e4: 0x26e4cb40  addiu       $a0, $s7, -0x34C0
    ctx->pc = 0x1146e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953792));
    // 0x1146e8: 0x27c7b440  addiu       $a3, $fp, -0x4BC0
    ctx->pc = 0x1146e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294947904));
    // 0x1146ec: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1146ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1146f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1146f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1146f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1146f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1146f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1146fc: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1146fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x114700: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x114700u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114704: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114708: 0xc044336  jal         func_110CD8
    ctx->pc = 0x114708u;
    SET_GPR_U32(ctx, 31, 0x114710u);
    ctx->pc = 0x11470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114708u;
            // 0x11470c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CD8u;
    if (runtime->hasFunction(0x110CD8u)) {
        auto targetFn = runtime->lookupFunction(0x110CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114710u; }
        if (ctx->pc != 0x114710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110CD8_0x110cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114710u; }
        if (ctx->pc != 0x114710u) { return; }
    }
    ctx->pc = 0x114710u;
label_114710:
    // 0x114710: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114710u;
    {
        const bool branch_taken_0x114710 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114710u;
            // 0x114714: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114710) {
            ctx->pc = 0x114730u;
            goto label_114730;
        }
    }
    ctx->pc = 0x114718u;
    // 0x114718: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x114718u;
    SET_GPR_U32(ctx, 31, 0x114720u);
    ctx->pc = 0x11471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114718u;
            // 0x11471c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114720u; }
        if (ctx->pc != 0x114720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114720u; }
        if (ctx->pc != 0x114720u) { return; }
    }
    ctx->pc = 0x114720u;
label_114720:
    // 0x114720: 0xc04449e  jal         func_111278
    ctx->pc = 0x114720u;
    SET_GPR_U32(ctx, 31, 0x114728u);
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114728u; }
        if (ctx->pc != 0x114728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114728u; }
        if (ctx->pc != 0x114728u) { return; }
    }
    ctx->pc = 0x114728u;
label_114728:
    // 0x114728: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114728u;
    {
        const bool branch_taken_0x114728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114728u;
            // 0x11472c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114728) {
            ctx->pc = 0x114768u;
            goto label_114768;
        }
    }
    ctx->pc = 0x114730u;
label_114730:
    // 0x114730: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x114730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x114734: 0xc04449e  jal         func_111278
    ctx->pc = 0x114734u;
    SET_GPR_U32(ctx, 31, 0x11473Cu);
    ctx->pc = 0x114738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114734u;
            // 0x114738: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111278u;
    if (runtime->hasFunction(0x111278u)) {
        auto targetFn = runtime->lookupFunction(0x111278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11473Cu; }
        if (ctx->pc != 0x11473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111278_0x111278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11473Cu; }
        if (ctx->pc != 0x11473Cu) { return; }
    }
    ctx->pc = 0x11473Cu;
label_11473c:
    // 0x11473c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11473Cu;
    {
        const bool branch_taken_0x11473c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11473c) {
            ctx->pc = 0x114754u;
            goto label_114754;
        }
    }
    ctx->pc = 0x114744u;
    // 0x114744: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x114744u;
    SET_GPR_U32(ctx, 31, 0x11474Cu);
    ctx->pc = 0x114748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114744u;
            // 0x114748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11474Cu; }
        if (ctx->pc != 0x11474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11474Cu; }
        if (ctx->pc != 0x11474Cu) { return; }
    }
    ctx->pc = 0x11474Cu;
label_11474c:
    // 0x11474c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11474Cu;
    {
        const bool branch_taken_0x11474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11474Cu;
            // 0x114750: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11474c) {
            ctx->pc = 0x114768u;
            goto label_114768;
        }
    }
    ctx->pc = 0x114754u;
label_114754:
    // 0x114754: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x114754u;
    SET_GPR_U32(ctx, 31, 0x11475Cu);
    ctx->pc = 0x114758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x114754u;
            // 0x114758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11475Cu; }
        if (ctx->pc != 0x11475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11475Cu; }
        if (ctx->pc != 0x11475Cu) { return; }
    }
    ctx->pc = 0x11475Cu;
label_11475c:
    // 0x11475c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x11475Cu;
    SET_GPR_U32(ctx, 31, 0x114764u);
    ctx->pc = 0x114760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11475Cu;
            // 0x114760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114764u; }
        if (ctx->pc != 0x114764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x114764u; }
        if (ctx->pc != 0x114764u) { return; }
    }
    ctx->pc = 0x114764u;
label_114764:
    // 0x114764: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114768:
    // 0x114768: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x114768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11476c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x11476cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114770: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x114770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114774: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114774u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114778: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114778u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11477c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11477cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114780: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114784: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114788: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11478c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11478cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114790: 0x3e00008  jr          $ra
    ctx->pc = 0x114790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x114790u;
            // 0x114794: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x114798u;
}
