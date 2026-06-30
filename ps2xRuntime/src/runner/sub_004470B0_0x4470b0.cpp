#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004470B0
// Address: 0x4470b0 - 0x4472b0
void sub_004470B0_0x4470b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004470B0_0x4470b0");
#endif

    switch (ctx->pc) {
        case 0x4470b0u: goto label_4470b0;
        case 0x4470b4u: goto label_4470b4;
        case 0x4470b8u: goto label_4470b8;
        case 0x4470bcu: goto label_4470bc;
        case 0x4470c0u: goto label_4470c0;
        case 0x4470c4u: goto label_4470c4;
        case 0x4470c8u: goto label_4470c8;
        case 0x4470ccu: goto label_4470cc;
        case 0x4470d0u: goto label_4470d0;
        case 0x4470d4u: goto label_4470d4;
        case 0x4470d8u: goto label_4470d8;
        case 0x4470dcu: goto label_4470dc;
        case 0x4470e0u: goto label_4470e0;
        case 0x4470e4u: goto label_4470e4;
        case 0x4470e8u: goto label_4470e8;
        case 0x4470ecu: goto label_4470ec;
        case 0x4470f0u: goto label_4470f0;
        case 0x4470f4u: goto label_4470f4;
        case 0x4470f8u: goto label_4470f8;
        case 0x4470fcu: goto label_4470fc;
        case 0x447100u: goto label_447100;
        case 0x447104u: goto label_447104;
        case 0x447108u: goto label_447108;
        case 0x44710cu: goto label_44710c;
        case 0x447110u: goto label_447110;
        case 0x447114u: goto label_447114;
        case 0x447118u: goto label_447118;
        case 0x44711cu: goto label_44711c;
        case 0x447120u: goto label_447120;
        case 0x447124u: goto label_447124;
        case 0x447128u: goto label_447128;
        case 0x44712cu: goto label_44712c;
        case 0x447130u: goto label_447130;
        case 0x447134u: goto label_447134;
        case 0x447138u: goto label_447138;
        case 0x44713cu: goto label_44713c;
        case 0x447140u: goto label_447140;
        case 0x447144u: goto label_447144;
        case 0x447148u: goto label_447148;
        case 0x44714cu: goto label_44714c;
        case 0x447150u: goto label_447150;
        case 0x447154u: goto label_447154;
        case 0x447158u: goto label_447158;
        case 0x44715cu: goto label_44715c;
        case 0x447160u: goto label_447160;
        case 0x447164u: goto label_447164;
        case 0x447168u: goto label_447168;
        case 0x44716cu: goto label_44716c;
        case 0x447170u: goto label_447170;
        case 0x447174u: goto label_447174;
        case 0x447178u: goto label_447178;
        case 0x44717cu: goto label_44717c;
        case 0x447180u: goto label_447180;
        case 0x447184u: goto label_447184;
        case 0x447188u: goto label_447188;
        case 0x44718cu: goto label_44718c;
        case 0x447190u: goto label_447190;
        case 0x447194u: goto label_447194;
        case 0x447198u: goto label_447198;
        case 0x44719cu: goto label_44719c;
        case 0x4471a0u: goto label_4471a0;
        case 0x4471a4u: goto label_4471a4;
        case 0x4471a8u: goto label_4471a8;
        case 0x4471acu: goto label_4471ac;
        case 0x4471b0u: goto label_4471b0;
        case 0x4471b4u: goto label_4471b4;
        case 0x4471b8u: goto label_4471b8;
        case 0x4471bcu: goto label_4471bc;
        case 0x4471c0u: goto label_4471c0;
        case 0x4471c4u: goto label_4471c4;
        case 0x4471c8u: goto label_4471c8;
        case 0x4471ccu: goto label_4471cc;
        case 0x4471d0u: goto label_4471d0;
        case 0x4471d4u: goto label_4471d4;
        case 0x4471d8u: goto label_4471d8;
        case 0x4471dcu: goto label_4471dc;
        case 0x4471e0u: goto label_4471e0;
        case 0x4471e4u: goto label_4471e4;
        case 0x4471e8u: goto label_4471e8;
        case 0x4471ecu: goto label_4471ec;
        case 0x4471f0u: goto label_4471f0;
        case 0x4471f4u: goto label_4471f4;
        case 0x4471f8u: goto label_4471f8;
        case 0x4471fcu: goto label_4471fc;
        case 0x447200u: goto label_447200;
        case 0x447204u: goto label_447204;
        case 0x447208u: goto label_447208;
        case 0x44720cu: goto label_44720c;
        case 0x447210u: goto label_447210;
        case 0x447214u: goto label_447214;
        case 0x447218u: goto label_447218;
        case 0x44721cu: goto label_44721c;
        case 0x447220u: goto label_447220;
        case 0x447224u: goto label_447224;
        case 0x447228u: goto label_447228;
        case 0x44722cu: goto label_44722c;
        case 0x447230u: goto label_447230;
        case 0x447234u: goto label_447234;
        case 0x447238u: goto label_447238;
        case 0x44723cu: goto label_44723c;
        case 0x447240u: goto label_447240;
        case 0x447244u: goto label_447244;
        case 0x447248u: goto label_447248;
        case 0x44724cu: goto label_44724c;
        case 0x447250u: goto label_447250;
        case 0x447254u: goto label_447254;
        case 0x447258u: goto label_447258;
        case 0x44725cu: goto label_44725c;
        case 0x447260u: goto label_447260;
        case 0x447264u: goto label_447264;
        case 0x447268u: goto label_447268;
        case 0x44726cu: goto label_44726c;
        case 0x447270u: goto label_447270;
        case 0x447274u: goto label_447274;
        case 0x447278u: goto label_447278;
        case 0x44727cu: goto label_44727c;
        case 0x447280u: goto label_447280;
        case 0x447284u: goto label_447284;
        case 0x447288u: goto label_447288;
        case 0x44728cu: goto label_44728c;
        case 0x447290u: goto label_447290;
        case 0x447294u: goto label_447294;
        case 0x447298u: goto label_447298;
        case 0x44729cu: goto label_44729c;
        case 0x4472a0u: goto label_4472a0;
        case 0x4472a4u: goto label_4472a4;
        case 0x4472a8u: goto label_4472a8;
        case 0x4472acu: goto label_4472ac;
        default: break;
    }

    ctx->pc = 0x4470b0u;

label_4470b0:
    // 0x4470b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4470b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4470b4:
    // 0x4470b4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4470b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4470b8:
    // 0x4470b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4470b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4470bc:
    // 0x4470bc: 0x3e00008  jr          $ra
label_4470c0:
    if (ctx->pc == 0x4470C0u) {
        ctx->pc = 0x4470C0u;
            // 0x4470c0: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->pc = 0x4470C4u;
        goto label_4470c4;
    }
    ctx->pc = 0x4470BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4470C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4470BCu;
            // 0x4470c0: 0xac60e3c0  sw          $zero, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4470C4u;
label_4470c4:
    // 0x4470c4: 0x0  nop
    ctx->pc = 0x4470c4u;
    // NOP
label_4470c8:
    // 0x4470c8: 0x0  nop
    ctx->pc = 0x4470c8u;
    // NOP
label_4470cc:
    // 0x4470cc: 0x0  nop
    ctx->pc = 0x4470ccu;
    // NOP
label_4470d0:
    // 0x4470d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4470d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4470d4:
    // 0x4470d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4470d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4470d8:
    // 0x4470d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4470d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4470dc:
    // 0x4470dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4470dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4470e0:
    // 0x4470e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4470e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4470e4:
    // 0x4470e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4470e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4470e8:
    // 0x4470e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4470e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4470ec:
    // 0x4470ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4470ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4470f0:
    // 0x4470f0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4470f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4470f4:
    // 0x4470f4: 0x10a30046  beq         $a1, $v1, . + 4 + (0x46 << 2)
label_4470f8:
    if (ctx->pc == 0x4470F8u) {
        ctx->pc = 0x4470F8u;
            // 0x4470f8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4470FCu;
        goto label_4470fc;
    }
    ctx->pc = 0x4470F4u;
    {
        const bool branch_taken_0x4470f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4470F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4470F4u;
            // 0x4470f8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4470f4) {
            ctx->pc = 0x447210u;
            goto label_447210;
        }
    }
    ctx->pc = 0x4470FCu;
label_4470fc:
    // 0x4470fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4470fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_447100:
    // 0x447100: 0x50a30040  beql        $a1, $v1, . + 4 + (0x40 << 2)
label_447104:
    if (ctx->pc == 0x447104u) {
        ctx->pc = 0x447104u;
            // 0x447104: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x447108u;
        goto label_447108;
    }
    ctx->pc = 0x447100u;
    {
        const bool branch_taken_0x447100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x447100) {
            ctx->pc = 0x447104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x447100u;
            // 0x447104: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x447204u;
            goto label_447204;
        }
    }
    ctx->pc = 0x447108u;
label_447108:
    // 0x447108: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x447108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44710c:
    // 0x44710c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_447110:
    if (ctx->pc == 0x447110u) {
        ctx->pc = 0x447114u;
        goto label_447114;
    }
    ctx->pc = 0x44710Cu;
    {
        const bool branch_taken_0x44710c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44710c) {
            ctx->pc = 0x44711Cu;
            goto label_44711c;
        }
    }
    ctx->pc = 0x447114u;
label_447114:
    // 0x447114: 0x1000005e  b           . + 4 + (0x5E << 2)
label_447118:
    if (ctx->pc == 0x447118u) {
        ctx->pc = 0x44711Cu;
        goto label_44711c;
    }
    ctx->pc = 0x447114u;
    {
        const bool branch_taken_0x447114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x447114) {
            ctx->pc = 0x447290u;
            goto label_447290;
        }
    }
    ctx->pc = 0x44711Cu;
label_44711c:
    // 0x44711c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44711cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_447120:
    // 0x447120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x447120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_447124:
    // 0x447124: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x447124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_447128:
    // 0x447128: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x447128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_44712c:
    // 0x44712c: 0x10640058  beq         $v1, $a0, . + 4 + (0x58 << 2)
label_447130:
    if (ctx->pc == 0x447130u) {
        ctx->pc = 0x447134u;
        goto label_447134;
    }
    ctx->pc = 0x44712Cu;
    {
        const bool branch_taken_0x44712c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x44712c) {
            ctx->pc = 0x447290u;
            goto label_447290;
        }
    }
    ctx->pc = 0x447134u;
label_447134:
    // 0x447134: 0x3c024178  lui         $v0, 0x4178
    ctx->pc = 0x447134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16760 << 16));
label_447138:
    // 0x447138: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x447138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_44713c:
    // 0x44713c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x44713cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_447140:
    // 0x447140: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x447140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_447144:
    // 0x447144: 0x3c024108  lui         $v0, 0x4108
    ctx->pc = 0x447144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16648 << 16));
label_447148:
    // 0x447148: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x447148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_44714c:
    // 0x44714c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x44714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_447150:
    // 0x447150: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x447150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_447154:
    // 0x447154: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x447154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_447158:
    // 0x447158: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x447158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_44715c:
    // 0x44715c: 0xc0a7a88  jal         func_29EA20
label_447160:
    if (ctx->pc == 0x447160u) {
        ctx->pc = 0x447160u;
            // 0x447160: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x447164u;
        goto label_447164;
    }
    ctx->pc = 0x44715Cu;
    SET_GPR_U32(ctx, 31, 0x447164u);
    ctx->pc = 0x447160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44715Cu;
            // 0x447160: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447164u; }
        if (ctx->pc != 0x447164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447164u; }
        if (ctx->pc != 0x447164u) { return; }
    }
    ctx->pc = 0x447164u;
label_447164:
    // 0x447164: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x447164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_447168:
    // 0x447168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x447168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44716c:
    // 0x44716c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_447170:
    if (ctx->pc == 0x447170u) {
        ctx->pc = 0x447170u;
            // 0x447170: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x447174u;
        goto label_447174;
    }
    ctx->pc = 0x44716Cu;
    {
        const bool branch_taken_0x44716c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x447170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44716Cu;
            // 0x447170: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44716c) {
            ctx->pc = 0x44718Cu;
            goto label_44718c;
        }
    }
    ctx->pc = 0x447174u;
label_447174:
    // 0x447174: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x447174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_447178:
    // 0x447178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x447178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44717c:
    // 0x44717c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x44717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_447180:
    // 0x447180: 0xc0804bc  jal         func_2012F0
label_447184:
    if (ctx->pc == 0x447184u) {
        ctx->pc = 0x447184u;
            // 0x447184: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x447188u;
        goto label_447188;
    }
    ctx->pc = 0x447180u;
    SET_GPR_U32(ctx, 31, 0x447188u);
    ctx->pc = 0x447184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447180u;
            // 0x447184: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447188u; }
        if (ctx->pc != 0x447188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447188u; }
        if (ctx->pc != 0x447188u) { return; }
    }
    ctx->pc = 0x447188u;
label_447188:
    // 0x447188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x447188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44718c:
    // 0x44718c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x44718cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_447190:
    // 0x447190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x447190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447194:
    // 0x447194: 0x2406d556  addiu       $a2, $zero, -0x2AAA
    ctx->pc = 0x447194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294956374));
label_447198:
    // 0x447198: 0xc04ca18  jal         func_132860
label_44719c:
    if (ctx->pc == 0x44719Cu) {
        ctx->pc = 0x44719Cu;
            // 0x44719c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4471A0u;
        goto label_4471a0;
    }
    ctx->pc = 0x447198u;
    SET_GPR_U32(ctx, 31, 0x4471A0u);
    ctx->pc = 0x44719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447198u;
            // 0x44719c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4471A0u; }
        if (ctx->pc != 0x4471A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4471A0u; }
        if (ctx->pc != 0x4471A0u) { return; }
    }
    ctx->pc = 0x4471A0u;
label_4471a0:
    // 0x4471a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4471a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4471a4:
    // 0x4471a4: 0x266400a0  addiu       $a0, $s3, 0xA0
    ctx->pc = 0x4471a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_4471a8:
    // 0x4471a8: 0x24a5d610  addiu       $a1, $a1, -0x29F0
    ctx->pc = 0x4471a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956560));
label_4471ac:
    // 0x4471ac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x4471acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4471b0:
    // 0x4471b0: 0xc0d37ec  jal         func_34DFB0
label_4471b4:
    if (ctx->pc == 0x4471B4u) {
        ctx->pc = 0x4471B4u;
            // 0x4471b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4471B8u;
        goto label_4471b8;
    }
    ctx->pc = 0x4471B0u;
    SET_GPR_U32(ctx, 31, 0x4471B8u);
    ctx->pc = 0x4471B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4471B0u;
            // 0x4471b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4471B8u; }
        if (ctx->pc != 0x4471B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4471B8u; }
        if (ctx->pc != 0x4471B8u) { return; }
    }
    ctx->pc = 0x4471B8u;
label_4471b8:
    // 0x4471b8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4471b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4471bc:
    // 0x4471bc: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
label_4471c0:
    if (ctx->pc == 0x4471C0u) {
        ctx->pc = 0x4471C4u;
        goto label_4471c4;
    }
    ctx->pc = 0x4471BCu;
    {
        const bool branch_taken_0x4471bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4471bc) {
            ctx->pc = 0x447290u;
            goto label_447290;
        }
    }
    ctx->pc = 0x4471C4u;
label_4471c4:
    // 0x4471c4: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x4471c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4471c8:
    // 0x4471c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4471c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4471cc:
    // 0x4471cc: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x4471ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_4471d0:
    // 0x4471d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4471d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4471d4:
    // 0x4471d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4471d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4471d8:
    // 0x4471d8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_4471dc:
    if (ctx->pc == 0x4471DCu) {
        ctx->pc = 0x4471E0u;
        goto label_4471e0;
    }
    ctx->pc = 0x4471D8u;
    {
        const bool branch_taken_0x4471d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4471d8) {
            ctx->pc = 0x447290u;
            goto label_447290;
        }
    }
    ctx->pc = 0x4471E0u;
label_4471e0:
    // 0x4471e0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_4471e4:
    if (ctx->pc == 0x4471E4u) {
        ctx->pc = 0x4471E8u;
        goto label_4471e8;
    }
    ctx->pc = 0x4471E0u;
    {
        const bool branch_taken_0x4471e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4471e0) {
            ctx->pc = 0x447290u;
            goto label_447290;
        }
    }
    ctx->pc = 0x4471E8u;
label_4471e8:
    // 0x4471e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4471e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4471ec:
    // 0x4471ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4471ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4471f0:
    // 0x4471f0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4471f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4471f4:
    // 0x4471f4: 0x320f809  jalr        $t9
label_4471f8:
    if (ctx->pc == 0x4471F8u) {
        ctx->pc = 0x4471F8u;
            // 0x4471f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4471FCu;
        goto label_4471fc;
    }
    ctx->pc = 0x4471F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4471FCu);
        ctx->pc = 0x4471F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4471F4u;
            // 0x4471f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4471FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4471FCu; }
            if (ctx->pc != 0x4471FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4471FCu;
label_4471fc:
    // 0x4471fc: 0x10000024  b           . + 4 + (0x24 << 2)
label_447200:
    if (ctx->pc == 0x447200u) {
        ctx->pc = 0x447204u;
        goto label_447204;
    }
    ctx->pc = 0x4471FCu;
    {
        const bool branch_taken_0x4471fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4471fc) {
            ctx->pc = 0x447290u;
            goto label_447290;
        }
    }
    ctx->pc = 0x447204u;
label_447204:
    // 0x447204: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x447204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_447208:
    // 0x447208: 0x320f809  jalr        $t9
label_44720c:
    if (ctx->pc == 0x44720Cu) {
        ctx->pc = 0x447210u;
        goto label_447210;
    }
    ctx->pc = 0x447208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x447210u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x447210u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x447210u; }
            if (ctx->pc != 0x447210u) { return; }
        }
        }
    }
    ctx->pc = 0x447210u;
label_447210:
    // 0x447210: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x447210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_447214:
    // 0x447214: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_447218:
    if (ctx->pc == 0x447218u) {
        ctx->pc = 0x44721Cu;
        goto label_44721c;
    }
    ctx->pc = 0x447214u;
    {
        const bool branch_taken_0x447214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x447214) {
            ctx->pc = 0x447290u;
            goto label_447290;
        }
    }
    ctx->pc = 0x44721Cu;
label_44721c:
    // 0x44721c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44721cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447220:
    // 0x447220: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x447220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_447224:
    // 0x447224: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x447224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_447228:
    // 0x447228: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x447228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_44722c:
    // 0x44722c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x44722cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_447230:
    // 0x447230: 0xc111d7c  jal         func_4475F0
label_447234:
    if (ctx->pc == 0x447234u) {
        ctx->pc = 0x447234u;
            // 0x447234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447238u;
        goto label_447238;
    }
    ctx->pc = 0x447230u;
    SET_GPR_U32(ctx, 31, 0x447238u);
    ctx->pc = 0x447234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447230u;
            // 0x447234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4475F0u;
    if (runtime->hasFunction(0x4475F0u)) {
        auto targetFn = runtime->lookupFunction(0x4475F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447238u; }
        if (ctx->pc != 0x447238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004475F0_0x4475f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447238u; }
        if (ctx->pc != 0x447238u) { return; }
    }
    ctx->pc = 0x447238u;
label_447238:
    // 0x447238: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x447238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44723c:
    // 0x44723c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_447240:
    if (ctx->pc == 0x447240u) {
        ctx->pc = 0x447244u;
        goto label_447244;
    }
    ctx->pc = 0x44723Cu;
    {
        const bool branch_taken_0x44723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x44723c) {
            ctx->pc = 0x447270u;
            goto label_447270;
        }
    }
    ctx->pc = 0x447244u;
label_447244:
    // 0x447244: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_447248:
    if (ctx->pc == 0x447248u) {
        ctx->pc = 0x44724Cu;
        goto label_44724c;
    }
    ctx->pc = 0x447244u;
    {
        const bool branch_taken_0x447244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x447244) {
            ctx->pc = 0x447258u;
            goto label_447258;
        }
    }
    ctx->pc = 0x44724Cu;
label_44724c:
    // 0x44724c: 0x1000000c  b           . + 4 + (0xC << 2)
label_447250:
    if (ctx->pc == 0x447250u) {
        ctx->pc = 0x447254u;
        goto label_447254;
    }
    ctx->pc = 0x44724Cu;
    {
        const bool branch_taken_0x44724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44724c) {
            ctx->pc = 0x447280u;
            goto label_447280;
        }
    }
    ctx->pc = 0x447254u;
label_447254:
    // 0x447254: 0x0  nop
    ctx->pc = 0x447254u;
    // NOP
label_447258:
    // 0x447258: 0xc112098  jal         func_448260
label_44725c:
    if (ctx->pc == 0x44725Cu) {
        ctx->pc = 0x44725Cu;
            // 0x44725c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447260u;
        goto label_447260;
    }
    ctx->pc = 0x447258u;
    SET_GPR_U32(ctx, 31, 0x447260u);
    ctx->pc = 0x44725Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447258u;
            // 0x44725c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x448260u;
    if (runtime->hasFunction(0x448260u)) {
        auto targetFn = runtime->lookupFunction(0x448260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447260u; }
        if (ctx->pc != 0x447260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00448260_0x448260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447260u; }
        if (ctx->pc != 0x447260u) { return; }
    }
    ctx->pc = 0x447260u;
label_447260:
    // 0x447260: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x447260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_447264:
    // 0x447264: 0xc111d78  jal         func_4475E0
label_447268:
    if (ctx->pc == 0x447268u) {
        ctx->pc = 0x447268u;
            // 0x447268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44726Cu;
        goto label_44726c;
    }
    ctx->pc = 0x447264u;
    SET_GPR_U32(ctx, 31, 0x44726Cu);
    ctx->pc = 0x447268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447264u;
            // 0x447268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4475E0u;
    if (runtime->hasFunction(0x4475E0u)) {
        auto targetFn = runtime->lookupFunction(0x4475E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44726Cu; }
        if (ctx->pc != 0x44726Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004475E0_0x4475e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44726Cu; }
        if (ctx->pc != 0x44726Cu) { return; }
    }
    ctx->pc = 0x44726Cu;
label_44726c:
    // 0x44726c: 0x0  nop
    ctx->pc = 0x44726cu;
    // NOP
label_447270:
    // 0x447270: 0xc111cac  jal         func_4472B0
label_447274:
    if (ctx->pc == 0x447274u) {
        ctx->pc = 0x447274u;
            // 0x447274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x447278u;
        goto label_447278;
    }
    ctx->pc = 0x447270u;
    SET_GPR_U32(ctx, 31, 0x447278u);
    ctx->pc = 0x447274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447270u;
            // 0x447274: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4472B0u;
    if (runtime->hasFunction(0x4472B0u)) {
        auto targetFn = runtime->lookupFunction(0x4472B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447278u; }
        if (ctx->pc != 0x447278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004472B0_0x4472b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447278u; }
        if (ctx->pc != 0x447278u) { return; }
    }
    ctx->pc = 0x447278u;
label_447278:
    // 0x447278: 0xc11212c  jal         func_4484B0
label_44727c:
    if (ctx->pc == 0x44727Cu) {
        ctx->pc = 0x44727Cu;
            // 0x44727c: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->pc = 0x447280u;
        goto label_447280;
    }
    ctx->pc = 0x447278u;
    SET_GPR_U32(ctx, 31, 0x447280u);
    ctx->pc = 0x44727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x447278u;
            // 0x44727c: 0x26840070  addiu       $a0, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4484B0u;
    if (runtime->hasFunction(0x4484B0u)) {
        auto targetFn = runtime->lookupFunction(0x4484B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447280u; }
        if (ctx->pc != 0x447280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004484B0_0x4484b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x447280u; }
        if (ctx->pc != 0x447280u) { return; }
    }
    ctx->pc = 0x447280u;
label_447280:
    // 0x447280: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x447280u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_447284:
    // 0x447284: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x447284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_447288:
    // 0x447288: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_44728c:
    if (ctx->pc == 0x44728Cu) {
        ctx->pc = 0x44728Cu;
            // 0x44728c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x447290u;
        goto label_447290;
    }
    ctx->pc = 0x447288u;
    {
        const bool branch_taken_0x447288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x447288u;
            // 0x44728c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447288) {
            ctx->pc = 0x447224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_447224;
        }
    }
    ctx->pc = 0x447290u;
label_447290:
    // 0x447290: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x447290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_447294:
    // 0x447294: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x447294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_447298:
    // 0x447298: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x447298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44729c:
    // 0x44729c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44729cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4472a0:
    // 0x4472a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4472a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4472a4:
    // 0x4472a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4472a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4472a8:
    // 0x4472a8: 0x3e00008  jr          $ra
label_4472ac:
    if (ctx->pc == 0x4472ACu) {
        ctx->pc = 0x4472ACu;
            // 0x4472ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4472B0u;
        goto label_fallthrough_0x4472a8;
    }
    ctx->pc = 0x4472A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4472ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4472A8u;
            // 0x4472ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4472a8:
    ctx->pc = 0x4472B0u;
}
