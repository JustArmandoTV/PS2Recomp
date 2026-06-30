#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00547190
// Address: 0x547190 - 0x5472c0
void sub_00547190_0x547190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00547190_0x547190");
#endif

    switch (ctx->pc) {
        case 0x547190u: goto label_547190;
        case 0x547194u: goto label_547194;
        case 0x547198u: goto label_547198;
        case 0x54719cu: goto label_54719c;
        case 0x5471a0u: goto label_5471a0;
        case 0x5471a4u: goto label_5471a4;
        case 0x5471a8u: goto label_5471a8;
        case 0x5471acu: goto label_5471ac;
        case 0x5471b0u: goto label_5471b0;
        case 0x5471b4u: goto label_5471b4;
        case 0x5471b8u: goto label_5471b8;
        case 0x5471bcu: goto label_5471bc;
        case 0x5471c0u: goto label_5471c0;
        case 0x5471c4u: goto label_5471c4;
        case 0x5471c8u: goto label_5471c8;
        case 0x5471ccu: goto label_5471cc;
        case 0x5471d0u: goto label_5471d0;
        case 0x5471d4u: goto label_5471d4;
        case 0x5471d8u: goto label_5471d8;
        case 0x5471dcu: goto label_5471dc;
        case 0x5471e0u: goto label_5471e0;
        case 0x5471e4u: goto label_5471e4;
        case 0x5471e8u: goto label_5471e8;
        case 0x5471ecu: goto label_5471ec;
        case 0x5471f0u: goto label_5471f0;
        case 0x5471f4u: goto label_5471f4;
        case 0x5471f8u: goto label_5471f8;
        case 0x5471fcu: goto label_5471fc;
        case 0x547200u: goto label_547200;
        case 0x547204u: goto label_547204;
        case 0x547208u: goto label_547208;
        case 0x54720cu: goto label_54720c;
        case 0x547210u: goto label_547210;
        case 0x547214u: goto label_547214;
        case 0x547218u: goto label_547218;
        case 0x54721cu: goto label_54721c;
        case 0x547220u: goto label_547220;
        case 0x547224u: goto label_547224;
        case 0x547228u: goto label_547228;
        case 0x54722cu: goto label_54722c;
        case 0x547230u: goto label_547230;
        case 0x547234u: goto label_547234;
        case 0x547238u: goto label_547238;
        case 0x54723cu: goto label_54723c;
        case 0x547240u: goto label_547240;
        case 0x547244u: goto label_547244;
        case 0x547248u: goto label_547248;
        case 0x54724cu: goto label_54724c;
        case 0x547250u: goto label_547250;
        case 0x547254u: goto label_547254;
        case 0x547258u: goto label_547258;
        case 0x54725cu: goto label_54725c;
        case 0x547260u: goto label_547260;
        case 0x547264u: goto label_547264;
        case 0x547268u: goto label_547268;
        case 0x54726cu: goto label_54726c;
        case 0x547270u: goto label_547270;
        case 0x547274u: goto label_547274;
        case 0x547278u: goto label_547278;
        case 0x54727cu: goto label_54727c;
        case 0x547280u: goto label_547280;
        case 0x547284u: goto label_547284;
        case 0x547288u: goto label_547288;
        case 0x54728cu: goto label_54728c;
        case 0x547290u: goto label_547290;
        case 0x547294u: goto label_547294;
        case 0x547298u: goto label_547298;
        case 0x54729cu: goto label_54729c;
        case 0x5472a0u: goto label_5472a0;
        case 0x5472a4u: goto label_5472a4;
        case 0x5472a8u: goto label_5472a8;
        case 0x5472acu: goto label_5472ac;
        case 0x5472b0u: goto label_5472b0;
        case 0x5472b4u: goto label_5472b4;
        case 0x5472b8u: goto label_5472b8;
        case 0x5472bcu: goto label_5472bc;
        default: break;
    }

    ctx->pc = 0x547190u;

label_547190:
    // 0x547190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x547190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_547194:
    // 0x547194: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x547194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_547198:
    // 0x547198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x547198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_54719c:
    // 0x54719c: 0x24427960  addiu       $v0, $v0, 0x7960
    ctx->pc = 0x54719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31072));
label_5471a0:
    // 0x5471a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5471a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5471a4:
    // 0x5471a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5471a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5471a8:
    // 0x5471a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x5471a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_5471ac:
    // 0x5471ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5471acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5471b0:
    // 0x5471b0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x5471b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_5471b4:
    // 0x5471b4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x5471b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_5471b8:
    // 0x5471b8: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x5471b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
label_5471bc:
    // 0x5471bc: 0xc04a576  jal         func_1295D8
label_5471c0:
    if (ctx->pc == 0x5471C0u) {
        ctx->pc = 0x5471C0u;
            // 0x5471c0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->pc = 0x5471C4u;
        goto label_5471c4;
    }
    ctx->pc = 0x5471BCu;
    SET_GPR_U32(ctx, 31, 0x5471C4u);
    ctx->pc = 0x5471C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5471BCu;
            // 0x5471c0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5471C4u; }
        if (ctx->pc != 0x5471C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5471C4u; }
        if (ctx->pc != 0x5471C4u) { return; }
    }
    ctx->pc = 0x5471C4u;
label_5471c4:
    // 0x5471c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5471c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5471c8:
    // 0x5471c8: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x5471c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
label_5471cc:
    // 0x5471cc: 0x24427920  addiu       $v0, $v0, 0x7920
    ctx->pc = 0x5471ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31008));
label_5471d0:
    // 0x5471d0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x5471d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_5471d4:
    // 0x5471d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5471d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_5471d8:
    // 0x5471d8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x5471d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_5471dc:
    // 0x5471dc: 0x8c46de48  lw          $a2, -0x21B8($v0)
    ctx->pc = 0x5471dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958664)));
label_5471e0:
    // 0x5471e0: 0xc043be4  jal         func_10EF90
label_5471e4:
    if (ctx->pc == 0x5471E4u) {
        ctx->pc = 0x5471E4u;
            // 0x5471e4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x5471E8u;
        goto label_5471e8;
    }
    ctx->pc = 0x5471E0u;
    SET_GPR_U32(ctx, 31, 0x5471E8u);
    ctx->pc = 0x5471E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5471E0u;
            // 0x5471e4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5471E8u; }
        if (ctx->pc != 0x5471E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5471E8u; }
        if (ctx->pc != 0x5471E8u) { return; }
    }
    ctx->pc = 0x5471E8u;
label_5471e8:
    // 0x5471e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5471e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5471ec:
    // 0x5471ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5471ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5471f0:
    // 0x5471f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5471f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5471f4:
    // 0x5471f4: 0x3e00008  jr          $ra
label_5471f8:
    if (ctx->pc == 0x5471F8u) {
        ctx->pc = 0x5471F8u;
            // 0x5471f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5471FCu;
        goto label_5471fc;
    }
    ctx->pc = 0x5471F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5471F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5471F4u;
            // 0x5471f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5471FCu;
label_5471fc:
    // 0x5471fc: 0x0  nop
    ctx->pc = 0x5471fcu;
    // NOP
label_547200:
    // 0x547200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x547200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_547204:
    // 0x547204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x547204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_547208:
    // 0x547208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x547208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_54720c:
    // 0x54720c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x54720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_547210:
    // 0x547210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x547210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_547214:
    // 0x547214: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x547214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_547218:
    // 0x547218: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x547218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_54721c:
    // 0x54721c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_547220:
    if (ctx->pc == 0x547220u) {
        ctx->pc = 0x547220u;
            // 0x547220: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547224u;
        goto label_547224;
    }
    ctx->pc = 0x54721Cu;
    {
        const bool branch_taken_0x54721c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x547220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54721Cu;
            // 0x547220: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x54721c) {
            ctx->pc = 0x547234u;
            goto label_547234;
        }
    }
    ctx->pc = 0x547224u;
label_547224:
    // 0x547224: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x547224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_547228:
    // 0x547228: 0xc0fe48c  jal         func_3F9230
label_54722c:
    if (ctx->pc == 0x54722Cu) {
        ctx->pc = 0x54722Cu;
            // 0x54722c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x547230u;
        goto label_547230;
    }
    ctx->pc = 0x547228u;
    SET_GPR_U32(ctx, 31, 0x547230u);
    ctx->pc = 0x54722Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547228u;
            // 0x54722c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547230u; }
        if (ctx->pc != 0x547230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547230u; }
        if (ctx->pc != 0x547230u) { return; }
    }
    ctx->pc = 0x547230u;
label_547230:
    // 0x547230: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x547230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_547234:
    // 0x547234: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x547234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_547238:
    // 0x547238: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x547238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_54723c:
    // 0x54723c: 0x8c507378  lw          $s0, 0x7378($v0)
    ctx->pc = 0x54723cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_547240:
    // 0x547240: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x547240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_547244:
    // 0x547244: 0x320f809  jalr        $t9
label_547248:
    if (ctx->pc == 0x547248u) {
        ctx->pc = 0x547248u;
            // 0x547248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x54724Cu;
        goto label_54724c;
    }
    ctx->pc = 0x547244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x54724Cu);
        ctx->pc = 0x547248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547244u;
            // 0x547248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x54724Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x54724Cu; }
            if (ctx->pc != 0x54724Cu) { return; }
        }
        }
    }
    ctx->pc = 0x54724Cu;
label_54724c:
    // 0x54724c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x54724cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_547250:
    // 0x547250: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x547250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_547254:
    // 0x547254: 0xc0fe54c  jal         func_3F9530
label_547258:
    if (ctx->pc == 0x547258u) {
        ctx->pc = 0x547258u;
            // 0x547258: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x54725Cu;
        goto label_54725c;
    }
    ctx->pc = 0x547254u;
    SET_GPR_U32(ctx, 31, 0x54725Cu);
    ctx->pc = 0x547258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547254u;
            // 0x547258: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54725Cu; }
        if (ctx->pc != 0x54725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54725Cu; }
        if (ctx->pc != 0x54725Cu) { return; }
    }
    ctx->pc = 0x54725Cu;
label_54725c:
    // 0x54725c: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x54725cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_547260:
    // 0x547260: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x547260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_547264:
    // 0x547264: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x547264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_547268:
    // 0x547268: 0x320f809  jalr        $t9
label_54726c:
    if (ctx->pc == 0x54726Cu) {
        ctx->pc = 0x54726Cu;
            // 0x54726c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547270u;
        goto label_547270;
    }
    ctx->pc = 0x547268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x547270u);
        ctx->pc = 0x54726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547268u;
            // 0x54726c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x547270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x547270u; }
            if (ctx->pc != 0x547270u) { return; }
        }
        }
    }
    ctx->pc = 0x547270u;
label_547270:
    // 0x547270: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x547270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_547274:
    // 0x547274: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x547274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_547278:
    // 0x547278: 0xc04a508  jal         func_129420
label_54727c:
    if (ctx->pc == 0x54727Cu) {
        ctx->pc = 0x54727Cu;
            // 0x54727c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x547280u;
        goto label_547280;
    }
    ctx->pc = 0x547278u;
    SET_GPR_U32(ctx, 31, 0x547280u);
    ctx->pc = 0x54727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x547278u;
            // 0x54727c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547280u; }
        if (ctx->pc != 0x547280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x547280u; }
        if (ctx->pc != 0x547280u) { return; }
    }
    ctx->pc = 0x547280u;
label_547280:
    // 0x547280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x547280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_547284:
    // 0x547284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x547284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_547288:
    // 0x547288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x547288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_54728c:
    // 0x54728c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x54728cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_547290:
    // 0x547290: 0x3e00008  jr          $ra
label_547294:
    if (ctx->pc == 0x547294u) {
        ctx->pc = 0x547294u;
            // 0x547294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x547298u;
        goto label_547298;
    }
    ctx->pc = 0x547290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x547294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x547290u;
            // 0x547294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x547298u;
label_547298:
    // 0x547298: 0x0  nop
    ctx->pc = 0x547298u;
    // NOP
label_54729c:
    // 0x54729c: 0x0  nop
    ctx->pc = 0x54729cu;
    // NOP
label_5472a0:
    // 0x5472a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5472a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5472a4:
    // 0x5472a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x5472a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_5472a8:
    // 0x5472a8: 0x3200008  jr          $t9
label_5472ac:
    if (ctx->pc == 0x5472ACu) {
        ctx->pc = 0x5472B0u;
        goto label_5472b0;
    }
    ctx->pc = 0x5472A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5472B0u;
label_5472b0:
    // 0x5472b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5472b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5472b4:
    // 0x5472b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x5472b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_5472b8:
    // 0x5472b8: 0x3200008  jr          $t9
label_5472bc:
    if (ctx->pc == 0x5472BCu) {
        ctx->pc = 0x5472C0u;
        goto label_fallthrough_0x5472b8;
    }
    ctx->pc = 0x5472B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x5472b8:
    ctx->pc = 0x5472C0u;
}
