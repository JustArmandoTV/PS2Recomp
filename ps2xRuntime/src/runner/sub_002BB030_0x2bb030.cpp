#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB030
// Address: 0x2bb030 - 0x2bb220
void sub_002BB030_0x2bb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB030_0x2bb030");
#endif

    switch (ctx->pc) {
        case 0x2bb030u: goto label_2bb030;
        case 0x2bb034u: goto label_2bb034;
        case 0x2bb038u: goto label_2bb038;
        case 0x2bb03cu: goto label_2bb03c;
        case 0x2bb040u: goto label_2bb040;
        case 0x2bb044u: goto label_2bb044;
        case 0x2bb048u: goto label_2bb048;
        case 0x2bb04cu: goto label_2bb04c;
        case 0x2bb050u: goto label_2bb050;
        case 0x2bb054u: goto label_2bb054;
        case 0x2bb058u: goto label_2bb058;
        case 0x2bb05cu: goto label_2bb05c;
        case 0x2bb060u: goto label_2bb060;
        case 0x2bb064u: goto label_2bb064;
        case 0x2bb068u: goto label_2bb068;
        case 0x2bb06cu: goto label_2bb06c;
        case 0x2bb070u: goto label_2bb070;
        case 0x2bb074u: goto label_2bb074;
        case 0x2bb078u: goto label_2bb078;
        case 0x2bb07cu: goto label_2bb07c;
        case 0x2bb080u: goto label_2bb080;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb088u: goto label_2bb088;
        case 0x2bb08cu: goto label_2bb08c;
        case 0x2bb090u: goto label_2bb090;
        case 0x2bb094u: goto label_2bb094;
        case 0x2bb098u: goto label_2bb098;
        case 0x2bb09cu: goto label_2bb09c;
        case 0x2bb0a0u: goto label_2bb0a0;
        case 0x2bb0a4u: goto label_2bb0a4;
        case 0x2bb0a8u: goto label_2bb0a8;
        case 0x2bb0acu: goto label_2bb0ac;
        case 0x2bb0b0u: goto label_2bb0b0;
        case 0x2bb0b4u: goto label_2bb0b4;
        case 0x2bb0b8u: goto label_2bb0b8;
        case 0x2bb0bcu: goto label_2bb0bc;
        case 0x2bb0c0u: goto label_2bb0c0;
        case 0x2bb0c4u: goto label_2bb0c4;
        case 0x2bb0c8u: goto label_2bb0c8;
        case 0x2bb0ccu: goto label_2bb0cc;
        case 0x2bb0d0u: goto label_2bb0d0;
        case 0x2bb0d4u: goto label_2bb0d4;
        case 0x2bb0d8u: goto label_2bb0d8;
        case 0x2bb0dcu: goto label_2bb0dc;
        case 0x2bb0e0u: goto label_2bb0e0;
        case 0x2bb0e4u: goto label_2bb0e4;
        case 0x2bb0e8u: goto label_2bb0e8;
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb0f0u: goto label_2bb0f0;
        case 0x2bb0f4u: goto label_2bb0f4;
        case 0x2bb0f8u: goto label_2bb0f8;
        case 0x2bb0fcu: goto label_2bb0fc;
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb104u: goto label_2bb104;
        case 0x2bb108u: goto label_2bb108;
        case 0x2bb10cu: goto label_2bb10c;
        case 0x2bb110u: goto label_2bb110;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb118u: goto label_2bb118;
        case 0x2bb11cu: goto label_2bb11c;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb124u: goto label_2bb124;
        case 0x2bb128u: goto label_2bb128;
        case 0x2bb12cu: goto label_2bb12c;
        case 0x2bb130u: goto label_2bb130;
        case 0x2bb134u: goto label_2bb134;
        case 0x2bb138u: goto label_2bb138;
        case 0x2bb13cu: goto label_2bb13c;
        case 0x2bb140u: goto label_2bb140;
        case 0x2bb144u: goto label_2bb144;
        case 0x2bb148u: goto label_2bb148;
        case 0x2bb14cu: goto label_2bb14c;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb154u: goto label_2bb154;
        case 0x2bb158u: goto label_2bb158;
        case 0x2bb15cu: goto label_2bb15c;
        case 0x2bb160u: goto label_2bb160;
        case 0x2bb164u: goto label_2bb164;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb16cu: goto label_2bb16c;
        case 0x2bb170u: goto label_2bb170;
        case 0x2bb174u: goto label_2bb174;
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb17cu: goto label_2bb17c;
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        default: break;
    }

    ctx->pc = 0x2bb030u;

label_2bb030:
    // 0x2bb030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bb034:
    // 0x2bb034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bb038:
    // 0x2bb038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bb03c:
    // 0x2bb03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bb040:
    // 0x2bb040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb044:
    // 0x2bb044: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_2bb048:
    if (ctx->pc == 0x2BB048u) {
        ctx->pc = 0x2BB048u;
            // 0x2bb048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB04Cu;
        goto label_2bb04c;
    }
    ctx->pc = 0x2BB044u;
    {
        const bool branch_taken_0x2bb044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB044u;
            // 0x2bb048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb044) {
            ctx->pc = 0x2BB08Cu;
            goto label_2bb08c;
        }
    }
    ctx->pc = 0x2BB04Cu;
label_2bb04c:
    // 0x2bb04c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb050:
    // 0x2bb050: 0x24422280  addiu       $v0, $v0, 0x2280
    ctx->pc = 0x2bb050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8832));
label_2bb054:
    // 0x2bb054: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2bb054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2bb058:
    // 0x2bb058: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bb058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bb05c:
    // 0x2bb05c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bb060:
    if (ctx->pc == 0x2BB060u) {
        ctx->pc = 0x2BB060u;
            // 0x2bb060: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BB064u;
        goto label_2bb064;
    }
    ctx->pc = 0x2BB05Cu;
    {
        const bool branch_taken_0x2bb05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb05c) {
            ctx->pc = 0x2BB060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB05Cu;
            // 0x2bb060: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB078u;
            goto label_2bb078;
        }
    }
    ctx->pc = 0x2BB064u;
label_2bb064:
    // 0x2bb064: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb068:
    // 0x2bb068: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bb068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bb06c:
    // 0x2bb06c: 0x320f809  jalr        $t9
label_2bb070:
    if (ctx->pc == 0x2BB070u) {
        ctx->pc = 0x2BB070u;
            // 0x2bb070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BB074u;
        goto label_2bb074;
    }
    ctx->pc = 0x2BB06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB074u);
        ctx->pc = 0x2BB070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB06Cu;
            // 0x2bb070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB074u; }
            if (ctx->pc != 0x2BB074u) { return; }
        }
        }
    }
    ctx->pc = 0x2BB074u;
label_2bb074:
    // 0x2bb074: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bb074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bb078:
    // 0x2bb078: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb078u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bb07c:
    // 0x2bb07c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2bb080:
    if (ctx->pc == 0x2BB080u) {
        ctx->pc = 0x2BB080u;
            // 0x2bb080: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB084u;
        goto label_2bb084;
    }
    ctx->pc = 0x2BB07Cu;
    {
        const bool branch_taken_0x2bb07c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BB080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB07Cu;
            // 0x2bb080: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb07c) {
            ctx->pc = 0x2BB08Cu;
            goto label_2bb08c;
        }
    }
    ctx->pc = 0x2BB084u;
label_2bb084:
    // 0x2bb084: 0xc0400a8  jal         func_1002A0
label_2bb088:
    if (ctx->pc == 0x2BB088u) {
        ctx->pc = 0x2BB088u;
            // 0x2bb088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB08Cu;
        goto label_2bb08c;
    }
    ctx->pc = 0x2BB084u;
    SET_GPR_U32(ctx, 31, 0x2BB08Cu);
    ctx->pc = 0x2BB088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB084u;
            // 0x2bb088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB08Cu; }
        if (ctx->pc != 0x2BB08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB08Cu; }
        if (ctx->pc != 0x2BB08Cu) { return; }
    }
    ctx->pc = 0x2BB08Cu;
label_2bb08c:
    // 0x2bb08c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb090:
    // 0x2bb090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb094:
    // 0x2bb094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb098:
    // 0x2bb098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb09c:
    // 0x2bb09c: 0x3e00008  jr          $ra
label_2bb0a0:
    if (ctx->pc == 0x2BB0A0u) {
        ctx->pc = 0x2BB0A0u;
            // 0x2bb0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BB0A4u;
        goto label_2bb0a4;
    }
    ctx->pc = 0x2BB09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB09Cu;
            // 0x2bb0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB0A4u;
label_2bb0a4:
    // 0x2bb0a4: 0x0  nop
    ctx->pc = 0x2bb0a4u;
    // NOP
label_2bb0a8:
    // 0x2bb0a8: 0x0  nop
    ctx->pc = 0x2bb0a8u;
    // NOP
label_2bb0ac:
    // 0x2bb0ac: 0x0  nop
    ctx->pc = 0x2bb0acu;
    // NOP
label_2bb0b0:
    // 0x2bb0b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bb0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bb0b4:
    // 0x2bb0b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bb0b8:
    // 0x2bb0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bb0bc:
    // 0x2bb0bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bb0c0:
    // 0x2bb0c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0c4:
    // 0x2bb0c4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2bb0c8:
    if (ctx->pc == 0x2BB0C8u) {
        ctx->pc = 0x2BB0C8u;
            // 0x2bb0c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0CCu;
        goto label_2bb0cc;
    }
    ctx->pc = 0x2BB0C4u;
    {
        const bool branch_taken_0x2bb0c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB0C4u;
            // 0x2bb0c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0c4) {
            ctx->pc = 0x2BB18Cu;
            goto label_2bb18c;
        }
    }
    ctx->pc = 0x2BB0CCu;
label_2bb0cc:
    // 0x2bb0cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb0d0:
    // 0x2bb0d0: 0x24422260  addiu       $v0, $v0, 0x2260
    ctx->pc = 0x2bb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8800));
label_2bb0d4:
    // 0x2bb0d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bb0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bb0d8:
    // 0x2bb0d8: 0x8e250210  lw          $a1, 0x210($s1)
    ctx->pc = 0x2bb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_2bb0dc:
    // 0x2bb0dc: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_2bb0e0:
    if (ctx->pc == 0x2BB0E0u) {
        ctx->pc = 0x2BB0E4u;
        goto label_2bb0e4;
    }
    ctx->pc = 0x2BB0DCu;
    {
        const bool branch_taken_0x2bb0dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb0dc) {
            ctx->pc = 0x2BB120u;
            goto label_2bb120;
        }
    }
    ctx->pc = 0x2BB0E4u;
label_2bb0e4:
    // 0x2bb0e4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2bb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2bb0e8:
    // 0x2bb0e8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2bb0ec:
    if (ctx->pc == 0x2BB0ECu) {
        ctx->pc = 0x2BB0ECu;
            // 0x2bb0ec: 0x8e240210  lw          $a0, 0x210($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
        ctx->pc = 0x2BB0F0u;
        goto label_2bb0f0;
    }
    ctx->pc = 0x2BB0E8u;
    {
        const bool branch_taken_0x2bb0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb0e8) {
            ctx->pc = 0x2BB0ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB0E8u;
            // 0x2bb0ec: 0x8e240210  lw          $a0, 0x210($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB104u;
            goto label_2bb104;
        }
    }
    ctx->pc = 0x2BB0F0u;
label_2bb0f0:
    // 0x2bb0f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bb0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2bb0f4:
    // 0x2bb0f4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2bb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2bb0f8:
    // 0x2bb0f8: 0xc08c6dc  jal         func_231B70
label_2bb0fc:
    if (ctx->pc == 0x2BB0FCu) {
        ctx->pc = 0x2BB0FCu;
            // 0x2bb0fc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x2BB100u;
        goto label_2bb100;
    }
    ctx->pc = 0x2BB0F8u;
    SET_GPR_U32(ctx, 31, 0x2BB100u);
    ctx->pc = 0x2BB0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB0F8u;
            // 0x2bb0fc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231B70u;
    if (runtime->hasFunction(0x231B70u)) {
        auto targetFn = runtime->lookupFunction(0x231B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB100u; }
        if (ctx->pc != 0x2BB100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231B70_0x231b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB100u; }
        if (ctx->pc != 0x2BB100u) { return; }
    }
    ctx->pc = 0x2BB100u;
label_2bb100:
    // 0x2bb100: 0x8e240210  lw          $a0, 0x210($s1)
    ctx->pc = 0x2bb100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
label_2bb104:
    // 0x2bb104: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bb108:
    if (ctx->pc == 0x2BB108u) {
        ctx->pc = 0x2BB108u;
            // 0x2bb108: 0xae200210  sw          $zero, 0x210($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
        ctx->pc = 0x2BB10Cu;
        goto label_2bb10c;
    }
    ctx->pc = 0x2BB104u;
    {
        const bool branch_taken_0x2bb104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb104) {
            ctx->pc = 0x2BB108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB104u;
            // 0x2bb108: 0xae200210  sw          $zero, 0x210($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB120u;
            goto label_2bb120;
        }
    }
    ctx->pc = 0x2BB10Cu;
label_2bb10c:
    // 0x2bb10c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb110:
    // 0x2bb110: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bb110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bb114:
    // 0x2bb114: 0x320f809  jalr        $t9
label_2bb118:
    if (ctx->pc == 0x2BB118u) {
        ctx->pc = 0x2BB118u;
            // 0x2bb118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BB11Cu;
        goto label_2bb11c;
    }
    ctx->pc = 0x2BB114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB11Cu);
        ctx->pc = 0x2BB118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB114u;
            // 0x2bb118: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BB11Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BB11Cu; }
            if (ctx->pc != 0x2BB11Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BB11Cu;
label_2bb11c:
    // 0x2bb11c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x2bb11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_2bb120:
    // 0x2bb120: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_2bb124:
    if (ctx->pc == 0x2BB124u) {
        ctx->pc = 0x2BB124u;
            // 0x2bb124: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BB128u;
        goto label_2bb128;
    }
    ctx->pc = 0x2BB120u;
    {
        const bool branch_taken_0x2bb120 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb120) {
            ctx->pc = 0x2BB124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB120u;
            // 0x2bb124: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB168u;
            goto label_2bb168;
        }
    }
    ctx->pc = 0x2BB128u;
label_2bb128:
    // 0x2bb128: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb12c:
    // 0x2bb12c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x2bb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_2bb130:
    // 0x2bb130: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bb130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bb134:
    // 0x2bb134: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2bb134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2bb138:
    // 0x2bb138: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2bb13c:
    if (ctx->pc == 0x2BB13Cu) {
        ctx->pc = 0x2BB13Cu;
            // 0x2bb13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB140u;
        goto label_2bb140;
    }
    ctx->pc = 0x2BB138u;
    {
        const bool branch_taken_0x2bb138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb138) {
            ctx->pc = 0x2BB13Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB138u;
            // 0x2bb13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB15Cu;
            goto label_2bb15c;
        }
    }
    ctx->pc = 0x2BB140u;
label_2bb140:
    // 0x2bb140: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2bb144:
    // 0x2bb144: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2bb144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_2bb148:
    // 0x2bb148: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x2bb148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_2bb14c:
    // 0x2bb14c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2bb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2bb150:
    // 0x2bb150: 0xc08c3f4  jal         func_230FD0
label_2bb154:
    if (ctx->pc == 0x2BB154u) {
        ctx->pc = 0x2BB154u;
            // 0x2bb154: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB158u;
        goto label_2bb158;
    }
    ctx->pc = 0x2BB150u;
    SET_GPR_U32(ctx, 31, 0x2BB158u);
    ctx->pc = 0x2BB154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB150u;
            // 0x2bb154: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB158u; }
        if (ctx->pc != 0x2BB158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB158u; }
        if (ctx->pc != 0x2BB158u) { return; }
    }
    ctx->pc = 0x2BB158u;
label_2bb158:
    // 0x2bb158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb15c:
    // 0x2bb15c: 0xc088f7c  jal         func_223DF0
label_2bb160:
    if (ctx->pc == 0x2BB160u) {
        ctx->pc = 0x2BB160u;
            // 0x2bb160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB164u;
        goto label_2bb164;
    }
    ctx->pc = 0x2BB15Cu;
    SET_GPR_U32(ctx, 31, 0x2BB164u);
    ctx->pc = 0x2BB160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB15Cu;
            // 0x2bb160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223DF0u;
    if (runtime->hasFunction(0x223DF0u)) {
        auto targetFn = runtime->lookupFunction(0x223DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB164u; }
        if (ctx->pc != 0x2BB164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223DF0_0x223df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB164u; }
        if (ctx->pc != 0x2BB164u) { return; }
    }
    ctx->pc = 0x2BB164u;
label_2bb164:
    // 0x2bb164: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bb164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bb168:
    // 0x2bb168: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bb16c:
    // 0x2bb16c: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2bb170:
    if (ctx->pc == 0x2BB170u) {
        ctx->pc = 0x2BB170u;
            // 0x2bb170: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB174u;
        goto label_2bb174;
    }
    ctx->pc = 0x2BB16Cu;
    {
        const bool branch_taken_0x2bb16c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb16c) {
            ctx->pc = 0x2BB170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB16Cu;
            // 0x2bb170: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB190u;
            goto label_2bb190;
        }
    }
    ctx->pc = 0x2BB174u;
label_2bb174:
    // 0x2bb174: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bb174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2bb178:
    // 0x2bb178: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2bb178u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2bb17c:
    // 0x2bb17c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2bb17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2bb180:
    // 0x2bb180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb184:
    // 0x2bb184: 0xc0a7ab4  jal         func_29EAD0
label_2bb188:
    if (ctx->pc == 0x2BB188u) {
        ctx->pc = 0x2BB188u;
            // 0x2bb188: 0x2407002b  addiu       $a3, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x2BB18Cu;
        goto label_2bb18c;
    }
    ctx->pc = 0x2BB184u;
    SET_GPR_U32(ctx, 31, 0x2BB18Cu);
    ctx->pc = 0x2BB188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB184u;
            // 0x2bb188: 0x2407002b  addiu       $a3, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB18Cu; }
        if (ctx->pc != 0x2BB18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB18Cu; }
        if (ctx->pc != 0x2BB18Cu) { return; }
    }
    ctx->pc = 0x2BB18Cu;
label_2bb18c:
    // 0x2bb18c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb190:
    // 0x2bb190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb194:
    // 0x2bb194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb198:
    // 0x2bb198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb19c:
    // 0x2bb19c: 0x3e00008  jr          $ra
label_2bb1a0:
    if (ctx->pc == 0x2BB1A0u) {
        ctx->pc = 0x2BB1A0u;
            // 0x2bb1a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2BB1A4u;
        goto label_2bb1a4;
    }
    ctx->pc = 0x2BB19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB19Cu;
            // 0x2bb1a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB1A4u;
label_2bb1a4:
    // 0x2bb1a4: 0x0  nop
    ctx->pc = 0x2bb1a4u;
    // NOP
label_2bb1a8:
    // 0x2bb1a8: 0x0  nop
    ctx->pc = 0x2bb1a8u;
    // NOP
label_2bb1ac:
    // 0x2bb1ac: 0x0  nop
    ctx->pc = 0x2bb1acu;
    // NOP
label_2bb1b0:
    // 0x2bb1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bb1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bb1b4:
    // 0x2bb1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bb1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bb1b8:
    // 0x2bb1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bb1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bb1bc:
    // 0x2bb1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bb1c0:
    // 0x2bb1c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1c4:
    // 0x2bb1c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2bb1c8:
    if (ctx->pc == 0x2BB1C8u) {
        ctx->pc = 0x2BB1C8u;
            // 0x2bb1c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1CCu;
        goto label_2bb1cc;
    }
    ctx->pc = 0x2BB1C4u;
    {
        const bool branch_taken_0x2bb1c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB1C4u;
            // 0x2bb1c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb1c4) {
            ctx->pc = 0x2BB208u;
            goto label_2bb208;
        }
    }
    ctx->pc = 0x2BB1CCu;
label_2bb1cc:
    // 0x2bb1cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bb1d0:
    // 0x2bb1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1d4:
    // 0x2bb1d4: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x2bb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_2bb1d8:
    // 0x2bb1d8: 0xc0869fc  jal         func_21A7F0
label_2bb1dc:
    if (ctx->pc == 0x2BB1DCu) {
        ctx->pc = 0x2BB1DCu;
            // 0x2bb1dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BB1E0u;
        goto label_2bb1e0;
    }
    ctx->pc = 0x2BB1D8u;
    SET_GPR_U32(ctx, 31, 0x2BB1E0u);
    ctx->pc = 0x2BB1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB1D8u;
            // 0x2bb1dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A7F0u;
    if (runtime->hasFunction(0x21A7F0u)) {
        auto targetFn = runtime->lookupFunction(0x21A7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB1E0u; }
        if (ctx->pc != 0x2BB1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A7F0_0x21a7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB1E0u; }
        if (ctx->pc != 0x2BB1E0u) { return; }
    }
    ctx->pc = 0x2BB1E0u;
label_2bb1e0:
    // 0x2bb1e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bb1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bb1e4:
    // 0x2bb1e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb1e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bb1e8:
    // 0x2bb1e8: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2bb1ec:
    if (ctx->pc == 0x2BB1ECu) {
        ctx->pc = 0x2BB1ECu;
            // 0x2bb1ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BB1F0u;
        goto label_2bb1f0;
    }
    ctx->pc = 0x2BB1E8u;
    {
        const bool branch_taken_0x2bb1e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb1e8) {
            ctx->pc = 0x2BB1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB1E8u;
            // 0x2bb1ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB20Cu;
            goto label_2bb20c;
        }
    }
    ctx->pc = 0x2BB1F0u;
label_2bb1f0:
    // 0x2bb1f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2bb1f4:
    // 0x2bb1f4: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2bb1f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2bb1f8:
    // 0x2bb1f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2bb1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2bb1fc:
    // 0x2bb1fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb200:
    // 0x2bb200: 0xc0a7ab4  jal         func_29EAD0
label_2bb204:
    if (ctx->pc == 0x2BB204u) {
        ctx->pc = 0x2BB204u;
            // 0x2bb204: 0x24070027  addiu       $a3, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x2BB208u;
        goto label_2bb208;
    }
    ctx->pc = 0x2BB200u;
    SET_GPR_U32(ctx, 31, 0x2BB208u);
    ctx->pc = 0x2BB204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB200u;
            // 0x2bb204: 0x24070027  addiu       $a3, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB208u; }
        if (ctx->pc != 0x2BB208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB208u; }
        if (ctx->pc != 0x2BB208u) { return; }
    }
    ctx->pc = 0x2BB208u;
label_2bb208:
    // 0x2bb208: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bb208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb20c:
    // 0x2bb20c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bb20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb210:
    // 0x2bb210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb214:
    // 0x2bb214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb218:
    // 0x2bb218: 0x3e00008  jr          $ra
label_2bb21c:
    if (ctx->pc == 0x2BB21Cu) {
        ctx->pc = 0x2BB21Cu;
            // 0x2bb21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BB220u;
        goto label_fallthrough_0x2bb218;
    }
    ctx->pc = 0x2BB218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB218u;
            // 0x2bb21c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bb218:
    ctx->pc = 0x2BB220u;
}
