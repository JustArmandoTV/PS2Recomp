#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F8000
// Address: 0x3f8000 - 0x3f8160
void sub_003F8000_0x3f8000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8000_0x3f8000");
#endif

    switch (ctx->pc) {
        case 0x3f8000u: goto label_3f8000;
        case 0x3f8004u: goto label_3f8004;
        case 0x3f8008u: goto label_3f8008;
        case 0x3f800cu: goto label_3f800c;
        case 0x3f8010u: goto label_3f8010;
        case 0x3f8014u: goto label_3f8014;
        case 0x3f8018u: goto label_3f8018;
        case 0x3f801cu: goto label_3f801c;
        case 0x3f8020u: goto label_3f8020;
        case 0x3f8024u: goto label_3f8024;
        case 0x3f8028u: goto label_3f8028;
        case 0x3f802cu: goto label_3f802c;
        case 0x3f8030u: goto label_3f8030;
        case 0x3f8034u: goto label_3f8034;
        case 0x3f8038u: goto label_3f8038;
        case 0x3f803cu: goto label_3f803c;
        case 0x3f8040u: goto label_3f8040;
        case 0x3f8044u: goto label_3f8044;
        case 0x3f8048u: goto label_3f8048;
        case 0x3f804cu: goto label_3f804c;
        case 0x3f8050u: goto label_3f8050;
        case 0x3f8054u: goto label_3f8054;
        case 0x3f8058u: goto label_3f8058;
        case 0x3f805cu: goto label_3f805c;
        case 0x3f8060u: goto label_3f8060;
        case 0x3f8064u: goto label_3f8064;
        case 0x3f8068u: goto label_3f8068;
        case 0x3f806cu: goto label_3f806c;
        case 0x3f8070u: goto label_3f8070;
        case 0x3f8074u: goto label_3f8074;
        case 0x3f8078u: goto label_3f8078;
        case 0x3f807cu: goto label_3f807c;
        case 0x3f8080u: goto label_3f8080;
        case 0x3f8084u: goto label_3f8084;
        case 0x3f8088u: goto label_3f8088;
        case 0x3f808cu: goto label_3f808c;
        case 0x3f8090u: goto label_3f8090;
        case 0x3f8094u: goto label_3f8094;
        case 0x3f8098u: goto label_3f8098;
        case 0x3f809cu: goto label_3f809c;
        case 0x3f80a0u: goto label_3f80a0;
        case 0x3f80a4u: goto label_3f80a4;
        case 0x3f80a8u: goto label_3f80a8;
        case 0x3f80acu: goto label_3f80ac;
        case 0x3f80b0u: goto label_3f80b0;
        case 0x3f80b4u: goto label_3f80b4;
        case 0x3f80b8u: goto label_3f80b8;
        case 0x3f80bcu: goto label_3f80bc;
        case 0x3f80c0u: goto label_3f80c0;
        case 0x3f80c4u: goto label_3f80c4;
        case 0x3f80c8u: goto label_3f80c8;
        case 0x3f80ccu: goto label_3f80cc;
        case 0x3f80d0u: goto label_3f80d0;
        case 0x3f80d4u: goto label_3f80d4;
        case 0x3f80d8u: goto label_3f80d8;
        case 0x3f80dcu: goto label_3f80dc;
        case 0x3f80e0u: goto label_3f80e0;
        case 0x3f80e4u: goto label_3f80e4;
        case 0x3f80e8u: goto label_3f80e8;
        case 0x3f80ecu: goto label_3f80ec;
        case 0x3f80f0u: goto label_3f80f0;
        case 0x3f80f4u: goto label_3f80f4;
        case 0x3f80f8u: goto label_3f80f8;
        case 0x3f80fcu: goto label_3f80fc;
        case 0x3f8100u: goto label_3f8100;
        case 0x3f8104u: goto label_3f8104;
        case 0x3f8108u: goto label_3f8108;
        case 0x3f810cu: goto label_3f810c;
        case 0x3f8110u: goto label_3f8110;
        case 0x3f8114u: goto label_3f8114;
        case 0x3f8118u: goto label_3f8118;
        case 0x3f811cu: goto label_3f811c;
        case 0x3f8120u: goto label_3f8120;
        case 0x3f8124u: goto label_3f8124;
        case 0x3f8128u: goto label_3f8128;
        case 0x3f812cu: goto label_3f812c;
        case 0x3f8130u: goto label_3f8130;
        case 0x3f8134u: goto label_3f8134;
        case 0x3f8138u: goto label_3f8138;
        case 0x3f813cu: goto label_3f813c;
        case 0x3f8140u: goto label_3f8140;
        case 0x3f8144u: goto label_3f8144;
        case 0x3f8148u: goto label_3f8148;
        case 0x3f814cu: goto label_3f814c;
        case 0x3f8150u: goto label_3f8150;
        case 0x3f8154u: goto label_3f8154;
        case 0x3f8158u: goto label_3f8158;
        case 0x3f815cu: goto label_3f815c;
        default: break;
    }

    ctx->pc = 0x3f8000u;

label_3f8000:
    // 0x3f8000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f8000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f8004:
    // 0x3f8004: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f8004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f8008:
    // 0x3f8008: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f8008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3f800c:
    // 0x3f800c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f8010:
    // 0x3f8010: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f8010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f8014:
    // 0x3f8014: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3f8014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3f8018:
    // 0x3f8018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f8018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f801c:
    // 0x3f801c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3f801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3f8020:
    // 0x3f8020: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x3f8020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_3f8024:
    // 0x3f8024: 0x50a40035  beql        $a1, $a0, . + 4 + (0x35 << 2)
label_3f8028:
    if (ctx->pc == 0x3F8028u) {
        ctx->pc = 0x3F8028u;
            // 0x3f8028: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3F802Cu;
        goto label_3f802c;
    }
    ctx->pc = 0x3F8024u;
    {
        const bool branch_taken_0x3f8024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f8024) {
            ctx->pc = 0x3F8028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8024u;
            // 0x3f8028: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F80FCu;
            goto label_3f80fc;
        }
    }
    ctx->pc = 0x3F802Cu;
label_3f802c:
    // 0x3f802c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3f802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f8030:
    // 0x3f8030: 0x50a3001c  beql        $a1, $v1, . + 4 + (0x1C << 2)
label_3f8034:
    if (ctx->pc == 0x3F8034u) {
        ctx->pc = 0x3F8034u;
            // 0x3f8034: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3F8038u;
        goto label_3f8038;
    }
    ctx->pc = 0x3F8030u;
    {
        const bool branch_taken_0x3f8030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8030) {
            ctx->pc = 0x3F8034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8030u;
            // 0x3f8034: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F80A4u;
            goto label_3f80a4;
        }
    }
    ctx->pc = 0x3F8038u;
label_3f8038:
    // 0x3f8038: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f8038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f803c:
    // 0x3f803c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3f8040:
    if (ctx->pc == 0x3F8040u) {
        ctx->pc = 0x3F8040u;
            // 0x3f8040: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3F8044u;
        goto label_3f8044;
    }
    ctx->pc = 0x3F803Cu;
    {
        const bool branch_taken_0x3f803c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f803c) {
            ctx->pc = 0x3F8040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F803Cu;
            // 0x3f8040: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F804Cu;
            goto label_3f804c;
        }
    }
    ctx->pc = 0x3F8044u;
label_3f8044:
    // 0x3f8044: 0x10000041  b           . + 4 + (0x41 << 2)
label_3f8048:
    if (ctx->pc == 0x3F8048u) {
        ctx->pc = 0x3F8048u;
            // 0x3f8048: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x3F804Cu;
        goto label_3f804c;
    }
    ctx->pc = 0x3F8044u;
    {
        const bool branch_taken_0x3f8044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8044u;
            // 0x3f8048: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8044) {
            ctx->pc = 0x3F814Cu;
            goto label_3f814c;
        }
    }
    ctx->pc = 0x3F804Cu;
label_3f804c:
    // 0x3f804c: 0xc040180  jal         func_100600
label_3f8050:
    if (ctx->pc == 0x3F8050u) {
        ctx->pc = 0x3F8054u;
        goto label_3f8054;
    }
    ctx->pc = 0x3F804Cu;
    SET_GPR_U32(ctx, 31, 0x3F8054u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8054u; }
        if (ctx->pc != 0x3F8054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8054u; }
        if (ctx->pc != 0x3F8054u) { return; }
    }
    ctx->pc = 0x3F8054u;
label_3f8054:
    // 0x3f8054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f8054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f8058:
    // 0x3f8058: 0x5220003c  beql        $s1, $zero, . + 4 + (0x3C << 2)
label_3f805c:
    if (ctx->pc == 0x3F805Cu) {
        ctx->pc = 0x3F805Cu;
            // 0x3f805c: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->pc = 0x3F8060u;
        goto label_3f8060;
    }
    ctx->pc = 0x3F8058u;
    {
        const bool branch_taken_0x3f8058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8058) {
            ctx->pc = 0x3F805Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8058u;
            // 0x3f805c: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F814Cu;
            goto label_3f814c;
        }
    }
    ctx->pc = 0x3F8060u;
label_3f8060:
    // 0x3f8060: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f8060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f8064:
    // 0x3f8064: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x3f8064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_3f8068:
    // 0x3f8068: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x3f8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3f806c:
    // 0x3f806c: 0x34650ea9  ori         $a1, $v1, 0xEA9
    ctx->pc = 0x3f806cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3753);
label_3f8070:
    // 0x3f8070: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3f8070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f8074:
    // 0x3f8074: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f8074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f8078:
    // 0x3f8078: 0x320f809  jalr        $t9
label_3f807c:
    if (ctx->pc == 0x3F807Cu) {
        ctx->pc = 0x3F807Cu;
            // 0x3f807c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3F8080u;
        goto label_3f8080;
    }
    ctx->pc = 0x3F8078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F8080u);
        ctx->pc = 0x3F807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8078u;
            // 0x3f807c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F8080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F8080u; }
            if (ctx->pc != 0x3F8080u) { return; }
        }
        }
    }
    ctx->pc = 0x3F8080u;
label_3f8080:
    // 0x3f8080: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f8080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f8084:
    // 0x3f8084: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3f8084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3f8088:
    // 0x3f8088: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3f8088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3f808c:
    // 0x3f808c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3f808cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3f8090:
    // 0x3f8090: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3f8090u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3f8094:
    // 0x3f8094: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3f8094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3f8098:
    // 0x3f8098: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x3f8098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_3f809c:
    // 0x3f809c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3f80a0:
    if (ctx->pc == 0x3F80A0u) {
        ctx->pc = 0x3F80A4u;
        goto label_3f80a4;
    }
    ctx->pc = 0x3F809Cu;
    {
        const bool branch_taken_0x3f809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f809c) {
            ctx->pc = 0x3F814Cu;
            goto label_3f814c;
        }
    }
    ctx->pc = 0x3F80A4u;
label_3f80a4:
    // 0x3f80a4: 0xc040180  jal         func_100600
label_3f80a8:
    if (ctx->pc == 0x3F80A8u) {
        ctx->pc = 0x3F80ACu;
        goto label_3f80ac;
    }
    ctx->pc = 0x3F80A4u;
    SET_GPR_U32(ctx, 31, 0x3F80ACu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F80ACu; }
        if (ctx->pc != 0x3F80ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F80ACu; }
        if (ctx->pc != 0x3F80ACu) { return; }
    }
    ctx->pc = 0x3F80ACu;
label_3f80ac:
    // 0x3f80ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f80acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f80b0:
    // 0x3f80b0: 0x52200026  beql        $s1, $zero, . + 4 + (0x26 << 2)
label_3f80b4:
    if (ctx->pc == 0x3F80B4u) {
        ctx->pc = 0x3F80B4u;
            // 0x3f80b4: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->pc = 0x3F80B8u;
        goto label_3f80b8;
    }
    ctx->pc = 0x3F80B0u;
    {
        const bool branch_taken_0x3f80b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f80b0) {
            ctx->pc = 0x3F80B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F80B0u;
            // 0x3f80b4: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F814Cu;
            goto label_3f814c;
        }
    }
    ctx->pc = 0x3F80B8u;
label_3f80b8:
    // 0x3f80b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f80bc:
    // 0x3f80bc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x3f80bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_3f80c0:
    // 0x3f80c0: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x3f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3f80c4:
    // 0x3f80c4: 0x346513a9  ori         $a1, $v1, 0x13A9
    ctx->pc = 0x3f80c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5033);
label_3f80c8:
    // 0x3f80c8: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3f80c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f80cc:
    // 0x3f80cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f80ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f80d0:
    // 0x3f80d0: 0x320f809  jalr        $t9
label_3f80d4:
    if (ctx->pc == 0x3F80D4u) {
        ctx->pc = 0x3F80D4u;
            // 0x3f80d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3F80D8u;
        goto label_3f80d8;
    }
    ctx->pc = 0x3F80D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F80D8u);
        ctx->pc = 0x3F80D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F80D0u;
            // 0x3f80d4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F80D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F80D8u; }
            if (ctx->pc != 0x3F80D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F80D8u;
label_3f80d8:
    // 0x3f80d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f80dc:
    // 0x3f80dc: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3f80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3f80e0:
    // 0x3f80e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3f80e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3f80e4:
    // 0x3f80e4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3f80e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3f80e8:
    // 0x3f80e8: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3f80e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3f80ec:
    // 0x3f80ec: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3f80ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3f80f0:
    // 0x3f80f0: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x3f80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_3f80f4:
    // 0x3f80f4: 0x10000015  b           . + 4 + (0x15 << 2)
label_3f80f8:
    if (ctx->pc == 0x3F80F8u) {
        ctx->pc = 0x3F80FCu;
        goto label_3f80fc;
    }
    ctx->pc = 0x3F80F4u;
    {
        const bool branch_taken_0x3f80f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f80f4) {
            ctx->pc = 0x3F814Cu;
            goto label_3f814c;
        }
    }
    ctx->pc = 0x3F80FCu;
label_3f80fc:
    // 0x3f80fc: 0xc040180  jal         func_100600
label_3f8100:
    if (ctx->pc == 0x3F8100u) {
        ctx->pc = 0x3F8104u;
        goto label_3f8104;
    }
    ctx->pc = 0x3F80FCu;
    SET_GPR_U32(ctx, 31, 0x3F8104u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8104u; }
        if (ctx->pc != 0x3F8104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8104u; }
        if (ctx->pc != 0x3F8104u) { return; }
    }
    ctx->pc = 0x3F8104u;
label_3f8104:
    // 0x3f8104: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f8104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f8108:
    // 0x3f8108: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
label_3f810c:
    if (ctx->pc == 0x3F810Cu) {
        ctx->pc = 0x3F810Cu;
            // 0x3f810c: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->pc = 0x3F8110u;
        goto label_3f8110;
    }
    ctx->pc = 0x3F8108u;
    {
        const bool branch_taken_0x3f8108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8108) {
            ctx->pc = 0x3F810Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8108u;
            // 0x3f810c: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F814Cu;
            goto label_3f814c;
        }
    }
    ctx->pc = 0x3F8110u;
label_3f8110:
    // 0x3f8110: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3f8110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3f8114:
    // 0x3f8114: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x3f8114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_3f8118:
    // 0x3f8118: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x3f8118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3f811c:
    // 0x3f811c: 0x346516a9  ori         $a1, $v1, 0x16A9
    ctx->pc = 0x3f811cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5801);
label_3f8120:
    // 0x3f8120: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x3f8120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f8124:
    // 0x3f8124: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f8124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f8128:
    // 0x3f8128: 0x320f809  jalr        $t9
label_3f812c:
    if (ctx->pc == 0x3F812Cu) {
        ctx->pc = 0x3F812Cu;
            // 0x3f812c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3F8130u;
        goto label_3f8130;
    }
    ctx->pc = 0x3F8128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F8130u);
        ctx->pc = 0x3F812Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8128u;
            // 0x3f812c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F8130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F8130u; }
            if (ctx->pc != 0x3F8130u) { return; }
        }
        }
    }
    ctx->pc = 0x3F8130u;
label_3f8130:
    // 0x3f8130: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f8130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3f8134:
    // 0x3f8134: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3f8134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3f8138:
    // 0x3f8138: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3f8138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3f813c:
    // 0x3f813c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3f813cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3f8140:
    // 0x3f8140: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3f8140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3f8144:
    // 0x3f8144: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3f8144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3f8148:
    // 0x3f8148: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x3f8148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_3f814c:
    // 0x3f814c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f814cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3f8150:
    // 0x3f8150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f8150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f8154:
    // 0x3f8154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f8154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f8158:
    // 0x3f8158: 0x3e00008  jr          $ra
label_3f815c:
    if (ctx->pc == 0x3F815Cu) {
        ctx->pc = 0x3F815Cu;
            // 0x3f815c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3F8160u;
        goto label_fallthrough_0x3f8158;
    }
    ctx->pc = 0x3F8158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8158u;
            // 0x3f815c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f8158:
    ctx->pc = 0x3F8160u;
}
