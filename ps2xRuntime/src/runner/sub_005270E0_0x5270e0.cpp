#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005270E0
// Address: 0x5270e0 - 0x527330
void sub_005270E0_0x5270e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005270E0_0x5270e0");
#endif

    switch (ctx->pc) {
        case 0x5270e0u: goto label_5270e0;
        case 0x5270e4u: goto label_5270e4;
        case 0x5270e8u: goto label_5270e8;
        case 0x5270ecu: goto label_5270ec;
        case 0x5270f0u: goto label_5270f0;
        case 0x5270f4u: goto label_5270f4;
        case 0x5270f8u: goto label_5270f8;
        case 0x5270fcu: goto label_5270fc;
        case 0x527100u: goto label_527100;
        case 0x527104u: goto label_527104;
        case 0x527108u: goto label_527108;
        case 0x52710cu: goto label_52710c;
        case 0x527110u: goto label_527110;
        case 0x527114u: goto label_527114;
        case 0x527118u: goto label_527118;
        case 0x52711cu: goto label_52711c;
        case 0x527120u: goto label_527120;
        case 0x527124u: goto label_527124;
        case 0x527128u: goto label_527128;
        case 0x52712cu: goto label_52712c;
        case 0x527130u: goto label_527130;
        case 0x527134u: goto label_527134;
        case 0x527138u: goto label_527138;
        case 0x52713cu: goto label_52713c;
        case 0x527140u: goto label_527140;
        case 0x527144u: goto label_527144;
        case 0x527148u: goto label_527148;
        case 0x52714cu: goto label_52714c;
        case 0x527150u: goto label_527150;
        case 0x527154u: goto label_527154;
        case 0x527158u: goto label_527158;
        case 0x52715cu: goto label_52715c;
        case 0x527160u: goto label_527160;
        case 0x527164u: goto label_527164;
        case 0x527168u: goto label_527168;
        case 0x52716cu: goto label_52716c;
        case 0x527170u: goto label_527170;
        case 0x527174u: goto label_527174;
        case 0x527178u: goto label_527178;
        case 0x52717cu: goto label_52717c;
        case 0x527180u: goto label_527180;
        case 0x527184u: goto label_527184;
        case 0x527188u: goto label_527188;
        case 0x52718cu: goto label_52718c;
        case 0x527190u: goto label_527190;
        case 0x527194u: goto label_527194;
        case 0x527198u: goto label_527198;
        case 0x52719cu: goto label_52719c;
        case 0x5271a0u: goto label_5271a0;
        case 0x5271a4u: goto label_5271a4;
        case 0x5271a8u: goto label_5271a8;
        case 0x5271acu: goto label_5271ac;
        case 0x5271b0u: goto label_5271b0;
        case 0x5271b4u: goto label_5271b4;
        case 0x5271b8u: goto label_5271b8;
        case 0x5271bcu: goto label_5271bc;
        case 0x5271c0u: goto label_5271c0;
        case 0x5271c4u: goto label_5271c4;
        case 0x5271c8u: goto label_5271c8;
        case 0x5271ccu: goto label_5271cc;
        case 0x5271d0u: goto label_5271d0;
        case 0x5271d4u: goto label_5271d4;
        case 0x5271d8u: goto label_5271d8;
        case 0x5271dcu: goto label_5271dc;
        case 0x5271e0u: goto label_5271e0;
        case 0x5271e4u: goto label_5271e4;
        case 0x5271e8u: goto label_5271e8;
        case 0x5271ecu: goto label_5271ec;
        case 0x5271f0u: goto label_5271f0;
        case 0x5271f4u: goto label_5271f4;
        case 0x5271f8u: goto label_5271f8;
        case 0x5271fcu: goto label_5271fc;
        case 0x527200u: goto label_527200;
        case 0x527204u: goto label_527204;
        case 0x527208u: goto label_527208;
        case 0x52720cu: goto label_52720c;
        case 0x527210u: goto label_527210;
        case 0x527214u: goto label_527214;
        case 0x527218u: goto label_527218;
        case 0x52721cu: goto label_52721c;
        case 0x527220u: goto label_527220;
        case 0x527224u: goto label_527224;
        case 0x527228u: goto label_527228;
        case 0x52722cu: goto label_52722c;
        case 0x527230u: goto label_527230;
        case 0x527234u: goto label_527234;
        case 0x527238u: goto label_527238;
        case 0x52723cu: goto label_52723c;
        case 0x527240u: goto label_527240;
        case 0x527244u: goto label_527244;
        case 0x527248u: goto label_527248;
        case 0x52724cu: goto label_52724c;
        case 0x527250u: goto label_527250;
        case 0x527254u: goto label_527254;
        case 0x527258u: goto label_527258;
        case 0x52725cu: goto label_52725c;
        case 0x527260u: goto label_527260;
        case 0x527264u: goto label_527264;
        case 0x527268u: goto label_527268;
        case 0x52726cu: goto label_52726c;
        case 0x527270u: goto label_527270;
        case 0x527274u: goto label_527274;
        case 0x527278u: goto label_527278;
        case 0x52727cu: goto label_52727c;
        case 0x527280u: goto label_527280;
        case 0x527284u: goto label_527284;
        case 0x527288u: goto label_527288;
        case 0x52728cu: goto label_52728c;
        case 0x527290u: goto label_527290;
        case 0x527294u: goto label_527294;
        case 0x527298u: goto label_527298;
        case 0x52729cu: goto label_52729c;
        case 0x5272a0u: goto label_5272a0;
        case 0x5272a4u: goto label_5272a4;
        case 0x5272a8u: goto label_5272a8;
        case 0x5272acu: goto label_5272ac;
        case 0x5272b0u: goto label_5272b0;
        case 0x5272b4u: goto label_5272b4;
        case 0x5272b8u: goto label_5272b8;
        case 0x5272bcu: goto label_5272bc;
        case 0x5272c0u: goto label_5272c0;
        case 0x5272c4u: goto label_5272c4;
        case 0x5272c8u: goto label_5272c8;
        case 0x5272ccu: goto label_5272cc;
        case 0x5272d0u: goto label_5272d0;
        case 0x5272d4u: goto label_5272d4;
        case 0x5272d8u: goto label_5272d8;
        case 0x5272dcu: goto label_5272dc;
        case 0x5272e0u: goto label_5272e0;
        case 0x5272e4u: goto label_5272e4;
        case 0x5272e8u: goto label_5272e8;
        case 0x5272ecu: goto label_5272ec;
        case 0x5272f0u: goto label_5272f0;
        case 0x5272f4u: goto label_5272f4;
        case 0x5272f8u: goto label_5272f8;
        case 0x5272fcu: goto label_5272fc;
        case 0x527300u: goto label_527300;
        case 0x527304u: goto label_527304;
        case 0x527308u: goto label_527308;
        case 0x52730cu: goto label_52730c;
        case 0x527310u: goto label_527310;
        case 0x527314u: goto label_527314;
        case 0x527318u: goto label_527318;
        case 0x52731cu: goto label_52731c;
        case 0x527320u: goto label_527320;
        case 0x527324u: goto label_527324;
        case 0x527328u: goto label_527328;
        case 0x52732cu: goto label_52732c;
        default: break;
    }

    ctx->pc = 0x5270e0u;

label_5270e0:
    // 0x5270e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5270e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5270e4:
    // 0x5270e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5270e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5270e8:
    // 0x5270e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5270e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5270ec:
    // 0x5270ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5270ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5270f0:
    // 0x5270f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5270f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5270f4:
    // 0x5270f4: 0xc0e9fdc  jal         func_3A7F70
label_5270f8:
    if (ctx->pc == 0x5270F8u) {
        ctx->pc = 0x5270F8u;
            // 0x5270f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5270FCu;
        goto label_5270fc;
    }
    ctx->pc = 0x5270F4u;
    SET_GPR_U32(ctx, 31, 0x5270FCu);
    ctx->pc = 0x5270F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5270F4u;
            // 0x5270f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F70u;
    if (runtime->hasFunction(0x3A7F70u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5270FCu; }
        if (ctx->pc != 0x5270FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F70_0x3a7f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5270FCu; }
        if (ctx->pc != 0x5270FCu) { return; }
    }
    ctx->pc = 0x5270FCu;
label_5270fc:
    // 0x5270fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5270fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_527100:
    // 0x527100: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x527100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_527104:
    // 0x527104: 0x24426430  addiu       $v0, $v0, 0x6430
    ctx->pc = 0x527104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25648));
label_527108:
    // 0x527108: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x527108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52710c:
    // 0x52710c: 0xa6230084  sh          $v1, 0x84($s1)
    ctx->pc = 0x52710cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 132), (uint16_t)GPR_U32(ctx, 3));
label_527110:
    // 0x527110: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x527110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_527114:
    // 0x527114: 0xa6220086  sh          $v0, 0x86($s1)
    ctx->pc = 0x527114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 2));
label_527118:
    // 0x527118: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x527118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_52711c:
    // 0x52711c: 0xa6230088  sh          $v1, 0x88($s1)
    ctx->pc = 0x52711cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 3));
label_527120:
    // 0x527120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x527120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_527124:
    // 0x527124: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x527124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_527128:
    // 0x527128: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
label_52712c:
    if (ctx->pc == 0x52712Cu) {
        ctx->pc = 0x52712Cu;
            // 0x52712c: 0x86230084  lh          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x527130u;
        goto label_527130;
    }
    ctx->pc = 0x527128u;
    {
        const bool branch_taken_0x527128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x527128) {
            ctx->pc = 0x52712Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527128u;
            // 0x52712c: 0x86230084  lh          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52719Cu;
            goto label_52719c;
        }
    }
    ctx->pc = 0x527130u;
label_527130:
    // 0x527130: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x527130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_527134:
    // 0x527134: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_527138:
    if (ctx->pc == 0x527138u) {
        ctx->pc = 0x52713Cu;
        goto label_52713c;
    }
    ctx->pc = 0x527134u;
    {
        const bool branch_taken_0x527134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x527134) {
            ctx->pc = 0x527198u;
            goto label_527198;
        }
    }
    ctx->pc = 0x52713Cu;
label_52713c:
    // 0x52713c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x52713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_527140:
    // 0x527140: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_527144:
    if (ctx->pc == 0x527144u) {
        ctx->pc = 0x527144u;
            // 0x527144: 0x8e030080  lw          $v1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x527148u;
        goto label_527148;
    }
    ctx->pc = 0x527140u;
    {
        const bool branch_taken_0x527140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x527140) {
            ctx->pc = 0x527144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527140u;
            // 0x527144: 0x8e030080  lw          $v1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527174u;
            goto label_527174;
        }
    }
    ctx->pc = 0x527148u;
label_527148:
    // 0x527148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x527148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_52714c:
    // 0x52714c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_527150:
    if (ctx->pc == 0x527150u) {
        ctx->pc = 0x527150u;
            // 0x527150: 0x8e030080  lw          $v1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->pc = 0x527154u;
        goto label_527154;
    }
    ctx->pc = 0x52714Cu;
    {
        const bool branch_taken_0x52714c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x52714c) {
            ctx->pc = 0x527150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52714Cu;
            // 0x527150: 0x8e030080  lw          $v1, 0x80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52715Cu;
            goto label_52715c;
        }
    }
    ctx->pc = 0x527154u;
label_527154:
    // 0x527154: 0x1000001c  b           . + 4 + (0x1C << 2)
label_527158:
    if (ctx->pc == 0x527158u) {
        ctx->pc = 0x527158u;
            // 0x527158: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52715Cu;
        goto label_52715c;
    }
    ctx->pc = 0x527154u;
    {
        const bool branch_taken_0x527154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x527158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527154u;
            // 0x527158: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527154) {
            ctx->pc = 0x5271C8u;
            goto label_5271c8;
        }
    }
    ctx->pc = 0x52715Cu;
label_52715c:
    // 0x52715c: 0x86220084  lh          $v0, 0x84($s1)
    ctx->pc = 0x52715cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
label_527160:
    // 0x527160: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x527160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_527164:
    // 0x527164: 0xa6220080  sh          $v0, 0x80($s1)
    ctx->pc = 0x527164u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
label_527168:
    // 0x527168: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x527168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_52716c:
    // 0x52716c: 0x10000015  b           . + 4 + (0x15 << 2)
label_527170:
    if (ctx->pc == 0x527170u) {
        ctx->pc = 0x527170u;
            // 0x527170: 0xa6220082  sh          $v0, 0x82($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x527174u;
        goto label_527174;
    }
    ctx->pc = 0x52716Cu;
    {
        const bool branch_taken_0x52716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x527170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52716Cu;
            // 0x527170: 0xa6220082  sh          $v0, 0x82($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52716c) {
            ctx->pc = 0x5271C4u;
            goto label_5271c4;
        }
    }
    ctx->pc = 0x527174u;
label_527174:
    // 0x527174: 0x86220084  lh          $v0, 0x84($s1)
    ctx->pc = 0x527174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
label_527178:
    // 0x527178: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x527178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_52717c:
    // 0x52717c: 0xa6220080  sh          $v0, 0x80($s1)
    ctx->pc = 0x52717cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
label_527180:
    // 0x527180: 0x86230086  lh          $v1, 0x86($s1)
    ctx->pc = 0x527180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 134)));
label_527184:
    // 0x527184: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x527184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_527188:
    // 0x527188: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x527188u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_52718c:
    // 0x52718c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x52718cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_527190:
    // 0x527190: 0x1000000c  b           . + 4 + (0xC << 2)
label_527194:
    if (ctx->pc == 0x527194u) {
        ctx->pc = 0x527194u;
            // 0x527194: 0xa6220082  sh          $v0, 0x82($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x527198u;
        goto label_527198;
    }
    ctx->pc = 0x527190u;
    {
        const bool branch_taken_0x527190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x527194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527190u;
            // 0x527194: 0xa6220082  sh          $v0, 0x82($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x527190) {
            ctx->pc = 0x5271C4u;
            goto label_5271c4;
        }
    }
    ctx->pc = 0x527198u;
label_527198:
    // 0x527198: 0x86230084  lh          $v1, 0x84($s1)
    ctx->pc = 0x527198u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
label_52719c:
    // 0x52719c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x52719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_5271a0:
    // 0x5271a0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x5271a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_5271a4:
    // 0x5271a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x5271a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5271a8:
    // 0x5271a8: 0xa6220080  sh          $v0, 0x80($s1)
    ctx->pc = 0x5271a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
label_5271ac:
    // 0x5271ac: 0x86230086  lh          $v1, 0x86($s1)
    ctx->pc = 0x5271acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 134)));
label_5271b0:
    // 0x5271b0: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x5271b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_5271b4:
    // 0x5271b4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x5271b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_5271b8:
    // 0x5271b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x5271b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5271bc:
    // 0x5271bc: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x5271bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_5271c0:
    // 0x5271c0: 0xa6220082  sh          $v0, 0x82($s1)
    ctx->pc = 0x5271c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 2));
label_5271c4:
    // 0x5271c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5271c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5271c8:
    // 0x5271c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5271c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5271cc:
    // 0x5271cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5271ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5271d0:
    // 0x5271d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5271d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5271d4:
    // 0x5271d4: 0x3e00008  jr          $ra
label_5271d8:
    if (ctx->pc == 0x5271D8u) {
        ctx->pc = 0x5271D8u;
            // 0x5271d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5271DCu;
        goto label_5271dc;
    }
    ctx->pc = 0x5271D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5271D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5271D4u;
            // 0x5271d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5271DCu;
label_5271dc:
    // 0x5271dc: 0x0  nop
    ctx->pc = 0x5271dcu;
    // NOP
label_5271e0:
    // 0x5271e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5271e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5271e4:
    // 0x5271e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5271e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_5271e8:
    // 0x5271e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5271e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5271ec:
    // 0x5271ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5271ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5271f0:
    // 0x5271f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5271f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5271f4:
    // 0x5271f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5271f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5271f8:
    // 0x5271f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5271f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5271fc:
    // 0x5271fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5271fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527200:
    // 0x527200: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x527200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_527204:
    // 0x527204: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x527204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_527208:
    // 0x527208: 0xc0506ac  jal         func_141AB0
label_52720c:
    if (ctx->pc == 0x52720Cu) {
        ctx->pc = 0x52720Cu;
            // 0x52720c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527210u;
        goto label_527210;
    }
    ctx->pc = 0x527208u;
    SET_GPR_U32(ctx, 31, 0x527210u);
    ctx->pc = 0x52720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527208u;
            // 0x52720c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527210u; }
        if (ctx->pc != 0x527210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527210u; }
        if (ctx->pc != 0x527210u) { return; }
    }
    ctx->pc = 0x527210u;
label_527210:
    // 0x527210: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x527210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_527214:
    // 0x527214: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x527214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_527218:
    // 0x527218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x527218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52721c:
    // 0x52721c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x52721cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_527220:
    // 0x527220: 0x320f809  jalr        $t9
label_527224:
    if (ctx->pc == 0x527224u) {
        ctx->pc = 0x527224u;
            // 0x527224: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527228u;
        goto label_527228;
    }
    ctx->pc = 0x527220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x527228u);
        ctx->pc = 0x527224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527220u;
            // 0x527224: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x527228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x527228u; }
            if (ctx->pc != 0x527228u) { return; }
        }
        }
    }
    ctx->pc = 0x527228u;
label_527228:
    // 0x527228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x527228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52722c:
    // 0x52722c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x52722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_527230:
    // 0x527230: 0xc0ea33c  jal         func_3A8CF0
label_527234:
    if (ctx->pc == 0x527234u) {
        ctx->pc = 0x527234u;
            // 0x527234: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527238u;
        goto label_527238;
    }
    ctx->pc = 0x527230u;
    SET_GPR_U32(ctx, 31, 0x527238u);
    ctx->pc = 0x527234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527230u;
            // 0x527234: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A8CF0u;
    if (runtime->hasFunction(0x3A8CF0u)) {
        auto targetFn = runtime->lookupFunction(0x3A8CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527238u; }
        if (ctx->pc != 0x527238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A8CF0_0x3a8cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527238u; }
        if (ctx->pc != 0x527238u) { return; }
    }
    ctx->pc = 0x527238u;
label_527238:
    // 0x527238: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x527238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_52723c:
    // 0x52723c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x52723cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_527240:
    // 0x527240: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x527240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_527244:
    // 0x527244: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x527244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_527248:
    // 0x527248: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_52724c:
    if (ctx->pc == 0x52724Cu) {
        ctx->pc = 0x52724Cu;
            // 0x52724c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x527250u;
        goto label_527250;
    }
    ctx->pc = 0x527248u;
    {
        const bool branch_taken_0x527248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x527248) {
            ctx->pc = 0x52724Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527248u;
            // 0x52724c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x527218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_527218;
        }
    }
    ctx->pc = 0x527250u;
label_527250:
    // 0x527250: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x527250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_527254:
    // 0x527254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x527254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_527258:
    // 0x527258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52725c:
    // 0x52725c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52725cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527260:
    // 0x527260: 0x3e00008  jr          $ra
label_527264:
    if (ctx->pc == 0x527264u) {
        ctx->pc = 0x527264u;
            // 0x527264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x527268u;
        goto label_527268;
    }
    ctx->pc = 0x527260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x527264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527260u;
            // 0x527264: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x527268u;
label_527268:
    // 0x527268: 0x0  nop
    ctx->pc = 0x527268u;
    // NOP
label_52726c:
    // 0x52726c: 0x0  nop
    ctx->pc = 0x52726cu;
    // NOP
label_527270:
    // 0x527270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x527270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_527274:
    // 0x527274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x527274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_527278:
    // 0x527278: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x527278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52727c:
    // 0x52727c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_527280:
    // 0x527280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x527280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_527284:
    // 0x527284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x527284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_527288:
    // 0x527288: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x527288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52728c:
    // 0x52728c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x52728cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_527290:
    // 0x527290: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x527290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_527294:
    // 0x527294: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x527294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_527298:
    // 0x527298: 0x320f809  jalr        $t9
label_52729c:
    if (ctx->pc == 0x52729Cu) {
        ctx->pc = 0x52729Cu;
            // 0x52729c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5272A0u;
        goto label_5272a0;
    }
    ctx->pc = 0x527298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5272A0u);
        ctx->pc = 0x52729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527298u;
            // 0x52729c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5272A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5272A0u; }
            if (ctx->pc != 0x5272A0u) { return; }
        }
        }
    }
    ctx->pc = 0x5272A0u;
label_5272a0:
    // 0x5272a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5272a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5272a4:
    // 0x5272a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5272a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5272a8:
    // 0x5272a8: 0xc0eae00  jal         func_3AB800
label_5272ac:
    if (ctx->pc == 0x5272ACu) {
        ctx->pc = 0x5272ACu;
            // 0x5272ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5272B0u;
        goto label_5272b0;
    }
    ctx->pc = 0x5272A8u;
    SET_GPR_U32(ctx, 31, 0x5272B0u);
    ctx->pc = 0x5272ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5272A8u;
            // 0x5272ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AB800u;
    if (runtime->hasFunction(0x3AB800u)) {
        auto targetFn = runtime->lookupFunction(0x3AB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5272B0u; }
        if (ctx->pc != 0x5272B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AB800_0x3ab800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5272B0u; }
        if (ctx->pc != 0x5272B0u) { return; }
    }
    ctx->pc = 0x5272B0u;
label_5272b0:
    // 0x5272b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5272b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5272b4:
    // 0x5272b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5272b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5272b8:
    // 0x5272b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5272b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5272bc:
    // 0x5272bc: 0x3e00008  jr          $ra
label_5272c0:
    if (ctx->pc == 0x5272C0u) {
        ctx->pc = 0x5272C0u;
            // 0x5272c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5272C4u;
        goto label_5272c4;
    }
    ctx->pc = 0x5272BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5272C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5272BCu;
            // 0x5272c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5272C4u;
label_5272c4:
    // 0x5272c4: 0x0  nop
    ctx->pc = 0x5272c4u;
    // NOP
label_5272c8:
    // 0x5272c8: 0x0  nop
    ctx->pc = 0x5272c8u;
    // NOP
label_5272cc:
    // 0x5272cc: 0x0  nop
    ctx->pc = 0x5272ccu;
    // NOP
label_5272d0:
    // 0x5272d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5272d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5272d4:
    // 0x5272d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5272d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5272d8:
    // 0x5272d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5272d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5272dc:
    // 0x5272dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5272dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5272e0:
    // 0x5272e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5272e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5272e4:
    // 0x5272e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_5272e8:
    if (ctx->pc == 0x5272E8u) {
        ctx->pc = 0x5272E8u;
            // 0x5272e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5272ECu;
        goto label_5272ec;
    }
    ctx->pc = 0x5272E4u;
    {
        const bool branch_taken_0x5272e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5272E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5272E4u;
            // 0x5272e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5272e4) {
            ctx->pc = 0x527318u;
            goto label_527318;
        }
    }
    ctx->pc = 0x5272ECu;
label_5272ec:
    // 0x5272ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5272ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5272f0:
    // 0x5272f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5272f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5272f4:
    // 0x5272f4: 0x24426450  addiu       $v0, $v0, 0x6450
    ctx->pc = 0x5272f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25680));
label_5272f8:
    // 0x5272f8: 0xc0eb0f0  jal         func_3AC3C0
label_5272fc:
    if (ctx->pc == 0x5272FCu) {
        ctx->pc = 0x5272FCu;
            // 0x5272fc: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
        ctx->pc = 0x527300u;
        goto label_527300;
    }
    ctx->pc = 0x5272F8u;
    SET_GPR_U32(ctx, 31, 0x527300u);
    ctx->pc = 0x5272FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5272F8u;
            // 0x5272fc: 0xae220128  sw          $v0, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AC3C0u;
    if (runtime->hasFunction(0x3AC3C0u)) {
        auto targetFn = runtime->lookupFunction(0x3AC3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527300u; }
        if (ctx->pc != 0x527300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AC3C0_0x3ac3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527300u; }
        if (ctx->pc != 0x527300u) { return; }
    }
    ctx->pc = 0x527300u;
label_527300:
    // 0x527300: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x527300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_527304:
    // 0x527304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x527304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_527308:
    // 0x527308: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52730c:
    if (ctx->pc == 0x52730Cu) {
        ctx->pc = 0x52730Cu;
            // 0x52730c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527310u;
        goto label_527310;
    }
    ctx->pc = 0x527308u;
    {
        const bool branch_taken_0x527308 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x527308) {
            ctx->pc = 0x52730Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x527308u;
            // 0x52730c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52731Cu;
            goto label_52731c;
        }
    }
    ctx->pc = 0x527310u;
label_527310:
    // 0x527310: 0xc0400a8  jal         func_1002A0
label_527314:
    if (ctx->pc == 0x527314u) {
        ctx->pc = 0x527314u;
            // 0x527314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x527318u;
        goto label_527318;
    }
    ctx->pc = 0x527310u;
    SET_GPR_U32(ctx, 31, 0x527318u);
    ctx->pc = 0x527314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x527310u;
            // 0x527314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527318u; }
        if (ctx->pc != 0x527318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x527318u; }
        if (ctx->pc != 0x527318u) { return; }
    }
    ctx->pc = 0x527318u;
label_527318:
    // 0x527318: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x527318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52731c:
    // 0x52731c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52731cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_527320:
    // 0x527320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x527320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_527324:
    // 0x527324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x527324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_527328:
    // 0x527328: 0x3e00008  jr          $ra
label_52732c:
    if (ctx->pc == 0x52732Cu) {
        ctx->pc = 0x52732Cu;
            // 0x52732c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x527330u;
        goto label_fallthrough_0x527328;
    }
    ctx->pc = 0x527328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x527328u;
            // 0x52732c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x527328:
    ctx->pc = 0x527330u;
}
