#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00177238
// Address: 0x177238 - 0x1773a8
void sub_00177238_0x177238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177238_0x177238");
#endif

    switch (ctx->pc) {
        case 0x177238u: goto label_177238;
        case 0x17723cu: goto label_17723c;
        case 0x177240u: goto label_177240;
        case 0x177244u: goto label_177244;
        case 0x177248u: goto label_177248;
        case 0x17724cu: goto label_17724c;
        case 0x177250u: goto label_177250;
        case 0x177254u: goto label_177254;
        case 0x177258u: goto label_177258;
        case 0x17725cu: goto label_17725c;
        case 0x177260u: goto label_177260;
        case 0x177264u: goto label_177264;
        case 0x177268u: goto label_177268;
        case 0x17726cu: goto label_17726c;
        case 0x177270u: goto label_177270;
        case 0x177274u: goto label_177274;
        case 0x177278u: goto label_177278;
        case 0x17727cu: goto label_17727c;
        case 0x177280u: goto label_177280;
        case 0x177284u: goto label_177284;
        case 0x177288u: goto label_177288;
        case 0x17728cu: goto label_17728c;
        case 0x177290u: goto label_177290;
        case 0x177294u: goto label_177294;
        case 0x177298u: goto label_177298;
        case 0x17729cu: goto label_17729c;
        case 0x1772a0u: goto label_1772a0;
        case 0x1772a4u: goto label_1772a4;
        case 0x1772a8u: goto label_1772a8;
        case 0x1772acu: goto label_1772ac;
        case 0x1772b0u: goto label_1772b0;
        case 0x1772b4u: goto label_1772b4;
        case 0x1772b8u: goto label_1772b8;
        case 0x1772bcu: goto label_1772bc;
        case 0x1772c0u: goto label_1772c0;
        case 0x1772c4u: goto label_1772c4;
        case 0x1772c8u: goto label_1772c8;
        case 0x1772ccu: goto label_1772cc;
        case 0x1772d0u: goto label_1772d0;
        case 0x1772d4u: goto label_1772d4;
        case 0x1772d8u: goto label_1772d8;
        case 0x1772dcu: goto label_1772dc;
        case 0x1772e0u: goto label_1772e0;
        case 0x1772e4u: goto label_1772e4;
        case 0x1772e8u: goto label_1772e8;
        case 0x1772ecu: goto label_1772ec;
        case 0x1772f0u: goto label_1772f0;
        case 0x1772f4u: goto label_1772f4;
        case 0x1772f8u: goto label_1772f8;
        case 0x1772fcu: goto label_1772fc;
        case 0x177300u: goto label_177300;
        case 0x177304u: goto label_177304;
        case 0x177308u: goto label_177308;
        case 0x17730cu: goto label_17730c;
        case 0x177310u: goto label_177310;
        case 0x177314u: goto label_177314;
        case 0x177318u: goto label_177318;
        case 0x17731cu: goto label_17731c;
        case 0x177320u: goto label_177320;
        case 0x177324u: goto label_177324;
        case 0x177328u: goto label_177328;
        case 0x17732cu: goto label_17732c;
        case 0x177330u: goto label_177330;
        case 0x177334u: goto label_177334;
        case 0x177338u: goto label_177338;
        case 0x17733cu: goto label_17733c;
        case 0x177340u: goto label_177340;
        case 0x177344u: goto label_177344;
        case 0x177348u: goto label_177348;
        case 0x17734cu: goto label_17734c;
        case 0x177350u: goto label_177350;
        case 0x177354u: goto label_177354;
        case 0x177358u: goto label_177358;
        case 0x17735cu: goto label_17735c;
        case 0x177360u: goto label_177360;
        case 0x177364u: goto label_177364;
        case 0x177368u: goto label_177368;
        case 0x17736cu: goto label_17736c;
        case 0x177370u: goto label_177370;
        case 0x177374u: goto label_177374;
        case 0x177378u: goto label_177378;
        case 0x17737cu: goto label_17737c;
        case 0x177380u: goto label_177380;
        case 0x177384u: goto label_177384;
        case 0x177388u: goto label_177388;
        case 0x17738cu: goto label_17738c;
        case 0x177390u: goto label_177390;
        case 0x177394u: goto label_177394;
        case 0x177398u: goto label_177398;
        case 0x17739cu: goto label_17739c;
        case 0x1773a0u: goto label_1773a0;
        case 0x1773a4u: goto label_1773a4;
        default: break;
    }

    ctx->pc = 0x177238u;

label_177238:
    // 0x177238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x177238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17723c:
    // 0x17723c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_177240:
    // 0x177240: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x177240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177244:
    // 0x177244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x177244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_177248:
    // 0x177248: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x177248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_17724c:
    // 0x17724c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17724cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_177250:
    // 0x177250: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x177250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_177254:
    // 0x177254: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x177254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_177258:
    // 0x177258: 0x8242006c  lb          $v0, 0x6C($s2)
    ctx->pc = 0x177258u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 108)));
label_17725c:
    // 0x17725c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_177260:
    if (ctx->pc == 0x177260u) {
        ctx->pc = 0x177264u;
        goto label_177264;
    }
    ctx->pc = 0x17725Cu;
    {
        const bool branch_taken_0x17725c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17725c) {
            ctx->pc = 0x177294u;
            goto label_177294;
        }
    }
    ctx->pc = 0x177264u;
label_177264:
    // 0x177264: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x177264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_177268:
    // 0x177268: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_17726c:
    if (ctx->pc == 0x17726Cu) {
        ctx->pc = 0x177270u;
        goto label_177270;
    }
    ctx->pc = 0x177268u;
    {
        const bool branch_taken_0x177268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177268) {
            ctx->pc = 0x177294u;
            goto label_177294;
        }
    }
    ctx->pc = 0x177270u;
label_177270:
    // 0x177270: 0xc05bfde  jal         func_16FF78
label_177274:
    if (ctx->pc == 0x177274u) {
        ctx->pc = 0x177274u;
            // 0x177274: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x177278u;
        goto label_177278;
    }
    ctx->pc = 0x177270u;
    SET_GPR_U32(ctx, 31, 0x177278u);
    ctx->pc = 0x177274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177270u;
            // 0x177274: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FF78u;
    if (runtime->hasFunction(0x16FF78u)) {
        auto targetFn = runtime->lookupFunction(0x16FF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177278u; }
        if (ctx->pc != 0x177278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016FF78_0x16ff78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177278u; }
        if (ctx->pc != 0x177278u) { return; }
    }
    ctx->pc = 0x177278u;
label_177278:
    // 0x177278: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x177278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_17727c:
    // 0x17727c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17727cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_177280:
    // 0x177280: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_177284:
    if (ctx->pc == 0x177284u) {
        ctx->pc = 0x177288u;
        goto label_177288;
    }
    ctx->pc = 0x177280u;
    {
        const bool branch_taken_0x177280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177280) {
            ctx->pc = 0x177294u;
            goto label_177294;
        }
    }
    ctx->pc = 0x177288u;
label_177288:
    // 0x177288: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x177288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17728c:
    // 0x17728c: 0xc05c034  jal         func_1700D0
label_177290:
    if (ctx->pc == 0x177290u) {
        ctx->pc = 0x177290u;
            // 0x177290: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x177294u;
        goto label_177294;
    }
    ctx->pc = 0x17728Cu;
    SET_GPR_U32(ctx, 31, 0x177294u);
    ctx->pc = 0x177290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17728Cu;
            // 0x177290: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1700D0u;
    if (runtime->hasFunction(0x1700D0u)) {
        auto targetFn = runtime->lookupFunction(0x1700D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177294u; }
        if (ctx->pc != 0x177294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001700D0_0x1700d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177294u; }
        if (ctx->pc != 0x177294u) { return; }
    }
    ctx->pc = 0x177294u;
label_177294:
    // 0x177294: 0xc05bbd0  jal         func_16EF40
label_177298:
    if (ctx->pc == 0x177298u) {
        ctx->pc = 0x177298u;
            // 0x177298: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x17729Cu;
        goto label_17729c;
    }
    ctx->pc = 0x177294u;
    SET_GPR_U32(ctx, 31, 0x17729Cu);
    ctx->pc = 0x177298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177294u;
            // 0x177298: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EF40u;
    if (runtime->hasFunction(0x16EF40u)) {
        auto targetFn = runtime->lookupFunction(0x16EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17729Cu; }
        if (ctx->pc != 0x17729Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EF40_0x16ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17729Cu; }
        if (ctx->pc != 0x17729Cu) { return; }
    }
    ctx->pc = 0x17729Cu;
label_17729c:
    // 0x17729c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17729cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1772a0:
    // 0x1772a0: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
label_1772a4:
    if (ctx->pc == 0x1772A4u) {
        ctx->pc = 0x1772A4u;
            // 0x1772a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1772A8u;
        goto label_1772a8;
    }
    ctx->pc = 0x1772A0u;
    {
        const bool branch_taken_0x1772a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1772A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772A0u;
            // 0x1772a4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772a0) {
            ctx->pc = 0x177388u;
            goto label_177388;
        }
    }
    ctx->pc = 0x1772A8u;
label_1772a8:
    // 0x1772a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1772a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1772ac:
    // 0x1772ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1772acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1772b0:
    // 0x1772b0: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x1772b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
label_1772b4:
    // 0x1772b4: 0xc05c04c  jal         func_170130
label_1772b8:
    if (ctx->pc == 0x1772B8u) {
        ctx->pc = 0x1772B8u;
            // 0x1772b8: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x1772BCu;
        goto label_1772bc;
    }
    ctx->pc = 0x1772B4u;
    SET_GPR_U32(ctx, 31, 0x1772BCu);
    ctx->pc = 0x1772B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1772B4u;
            // 0x1772b8: 0x26510018  addiu       $s1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772BCu; }
        if (ctx->pc != 0x1772BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170130_0x170130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1772BCu; }
        if (ctx->pc != 0x1772BCu) { return; }
    }
    ctx->pc = 0x1772BCu;
label_1772bc:
    // 0x1772bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1772bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1772c0:
    // 0x1772c0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1772c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1772c4:
    // 0x1772c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1772c8:
    if (ctx->pc == 0x1772C8u) {
        ctx->pc = 0x1772C8u;
            // 0x1772c8: 0xac503f74  sw          $s0, 0x3F74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16244), GPR_U32(ctx, 16));
        ctx->pc = 0x1772CCu;
        goto label_1772cc;
    }
    ctx->pc = 0x1772C4u;
    {
        const bool branch_taken_0x1772c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772C4u;
            // 0x1772c8: 0xac503f74  sw          $s0, 0x3F74($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16244), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772c4) {
            ctx->pc = 0x1772D4u;
            goto label_1772d4;
        }
    }
    ctx->pc = 0x1772CCu;
label_1772cc:
    // 0x1772cc: 0x0  nop
    ctx->pc = 0x1772ccu;
    // NOP
label_1772d0:
    // 0x1772d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1772d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1772d4:
    // 0x1772d4: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x1772d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1772d8:
    // 0x1772d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1772dc:
    if (ctx->pc == 0x1772DCu) {
        ctx->pc = 0x1772E0u;
        goto label_1772e0;
    }
    ctx->pc = 0x1772D8u;
    {
        const bool branch_taken_0x1772d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1772d8) {
            ctx->pc = 0x177304u;
            goto label_177304;
        }
    }
    ctx->pc = 0x1772E0u;
label_1772e0:
    // 0x1772e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1772e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1772e4:
    // 0x1772e4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1772e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1772e8:
    // 0x1772e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1772e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1772ec:
    // 0x1772ec: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1772ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1772f0:
    // 0x1772f0: 0x40f809  jalr        $v0
label_1772f4:
    if (ctx->pc == 0x1772F4u) {
        ctx->pc = 0x1772F4u;
            // 0x1772f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1772F8u;
        goto label_1772f8;
    }
    ctx->pc = 0x1772F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1772F8u);
        ctx->pc = 0x1772F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772F0u;
            // 0x1772f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1772F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1772F8u; }
            if (ctx->pc != 0x1772F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1772F8u;
label_1772f8:
    // 0x1772f8: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x1772f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1772fc:
    // 0x1772fc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_177300:
    if (ctx->pc == 0x177300u) {
        ctx->pc = 0x177300u;
            // 0x177300: 0xae823f78  sw          $v0, 0x3F78($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16248), GPR_U32(ctx, 2));
        ctx->pc = 0x177304u;
        goto label_177304;
    }
    ctx->pc = 0x1772FCu;
    {
        const bool branch_taken_0x1772fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1772FCu;
            // 0x177300: 0xae823f78  sw          $v0, 0x3F78($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772fc) {
            ctx->pc = 0x1772D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1772d0;
        }
    }
    ctx->pc = 0x177304u;
label_177304:
    // 0x177304: 0x56700020  bnel        $s3, $s0, . + 4 + (0x20 << 2)
label_177308:
    if (ctx->pc == 0x177308u) {
        ctx->pc = 0x177308u;
            // 0x177308: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x17730Cu;
        goto label_17730c;
    }
    ctx->pc = 0x177304u;
    {
        const bool branch_taken_0x177304 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x177304) {
            ctx->pc = 0x177308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177304u;
            // 0x177308: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177388u;
            goto label_177388;
        }
    }
    ctx->pc = 0x17730Cu;
label_17730c:
    // 0x17730c: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_177310:
    if (ctx->pc == 0x177310u) {
        ctx->pc = 0x177310u;
            // 0x177310: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x177314u;
        goto label_177314;
    }
    ctx->pc = 0x17730Cu;
    {
        const bool branch_taken_0x17730c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x177310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17730Cu;
            // 0x177310: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17730c) {
            ctx->pc = 0x177380u;
            goto label_177380;
        }
    }
    ctx->pc = 0x177314u;
label_177314:
    // 0x177314: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x177314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177318:
    // 0x177318: 0x26500018  addiu       $s0, $s2, 0x18
    ctx->pc = 0x177318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_17731c:
    // 0x17731c: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x17731cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
label_177320:
    // 0x177320: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x177320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_177324:
    // 0x177324: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_177328:
    // 0x177328: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x177328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17732c:
    // 0x17732c: 0x8e863f78  lw          $a2, 0x3F78($s4)
    ctx->pc = 0x17732cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16248)));
label_177330:
    // 0x177330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177334:
    // 0x177334: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x177334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_177338:
    // 0x177338: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x177338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_17733c:
    // 0x17733c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x17733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_177340:
    // 0x177340: 0x40f809  jalr        $v0
label_177344:
    if (ctx->pc == 0x177344u) {
        ctx->pc = 0x177344u;
            // 0x177344: 0x2263023  subu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->pc = 0x177348u;
        goto label_177348;
    }
    ctx->pc = 0x177340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177348u);
        ctx->pc = 0x177344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177340u;
            // 0x177344: 0x2263023  subu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177348u; }
            if (ctx->pc != 0x177348u) { return; }
        }
        }
    }
    ctx->pc = 0x177348u;
label_177348:
    // 0x177348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17734c:
    // 0x17734c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17734cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_177350:
    // 0x177350: 0xc04a576  jal         func_1295D8
label_177354:
    if (ctx->pc == 0x177354u) {
        ctx->pc = 0x177354u;
            // 0x177354: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x177358u;
        goto label_177358;
    }
    ctx->pc = 0x177350u;
    SET_GPR_U32(ctx, 31, 0x177358u);
    ctx->pc = 0x177354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177350u;
            // 0x177354: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177358u; }
        if (ctx->pc != 0x177358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177358u; }
        if (ctx->pc != 0x177358u) { return; }
    }
    ctx->pc = 0x177358u;
label_177358:
    // 0x177358: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x177358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17735c:
    // 0x17735c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177360:
    // 0x177360: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x177360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_177364:
    // 0x177364: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x177364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_177368:
    // 0x177368: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x177368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17736c:
    // 0x17736c: 0x40f809  jalr        $v0
label_177370:
    if (ctx->pc == 0x177370u) {
        ctx->pc = 0x177370u;
            // 0x177370: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x177374u;
        goto label_177374;
    }
    ctx->pc = 0x17736Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177374u);
        ctx->pc = 0x177370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17736Cu;
            // 0x177370: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177374u; }
            if (ctx->pc != 0x177374u) { return; }
        }
        }
    }
    ctx->pc = 0x177374u;
label_177374:
    // 0x177374: 0x5660ffec  bnel        $s3, $zero, . + 4 + (-0x14 << 2)
label_177378:
    if (ctx->pc == 0x177378u) {
        ctx->pc = 0x177378u;
            // 0x177378: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x17737Cu;
        goto label_17737c;
    }
    ctx->pc = 0x177374u;
    {
        const bool branch_taken_0x177374 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x177374) {
            ctx->pc = 0x177378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x177374u;
            // 0x177378: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x177328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177328;
        }
    }
    ctx->pc = 0x17737Cu;
label_17737c:
    // 0x17737c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_177380:
    // 0x177380: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x177380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_177384:
    // 0x177384: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x177384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_177388:
    // 0x177388: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x177388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17738c:
    // 0x17738c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17738cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_177390:
    // 0x177390: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x177390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_177394:
    // 0x177394: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x177394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_177398:
    // 0x177398: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x177398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_17739c:
    // 0x17739c: 0x3e00008  jr          $ra
label_1773a0:
    if (ctx->pc == 0x1773A0u) {
        ctx->pc = 0x1773A0u;
            // 0x1773a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1773A4u;
        goto label_1773a4;
    }
    ctx->pc = 0x17739Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1773A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17739Cu;
            // 0x1773a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1773A4u;
label_1773a4:
    // 0x1773a4: 0x0  nop
    ctx->pc = 0x1773a4u;
    // NOP
}
