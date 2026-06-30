#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0260
// Address: 0x2c0260 - 0x2c0510
void sub_002C0260_0x2c0260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0260_0x2c0260");
#endif

    switch (ctx->pc) {
        case 0x2c0260u: goto label_2c0260;
        case 0x2c0264u: goto label_2c0264;
        case 0x2c0268u: goto label_2c0268;
        case 0x2c026cu: goto label_2c026c;
        case 0x2c0270u: goto label_2c0270;
        case 0x2c0274u: goto label_2c0274;
        case 0x2c0278u: goto label_2c0278;
        case 0x2c027cu: goto label_2c027c;
        case 0x2c0280u: goto label_2c0280;
        case 0x2c0284u: goto label_2c0284;
        case 0x2c0288u: goto label_2c0288;
        case 0x2c028cu: goto label_2c028c;
        case 0x2c0290u: goto label_2c0290;
        case 0x2c0294u: goto label_2c0294;
        case 0x2c0298u: goto label_2c0298;
        case 0x2c029cu: goto label_2c029c;
        case 0x2c02a0u: goto label_2c02a0;
        case 0x2c02a4u: goto label_2c02a4;
        case 0x2c02a8u: goto label_2c02a8;
        case 0x2c02acu: goto label_2c02ac;
        case 0x2c02b0u: goto label_2c02b0;
        case 0x2c02b4u: goto label_2c02b4;
        case 0x2c02b8u: goto label_2c02b8;
        case 0x2c02bcu: goto label_2c02bc;
        case 0x2c02c0u: goto label_2c02c0;
        case 0x2c02c4u: goto label_2c02c4;
        case 0x2c02c8u: goto label_2c02c8;
        case 0x2c02ccu: goto label_2c02cc;
        case 0x2c02d0u: goto label_2c02d0;
        case 0x2c02d4u: goto label_2c02d4;
        case 0x2c02d8u: goto label_2c02d8;
        case 0x2c02dcu: goto label_2c02dc;
        case 0x2c02e0u: goto label_2c02e0;
        case 0x2c02e4u: goto label_2c02e4;
        case 0x2c02e8u: goto label_2c02e8;
        case 0x2c02ecu: goto label_2c02ec;
        case 0x2c02f0u: goto label_2c02f0;
        case 0x2c02f4u: goto label_2c02f4;
        case 0x2c02f8u: goto label_2c02f8;
        case 0x2c02fcu: goto label_2c02fc;
        case 0x2c0300u: goto label_2c0300;
        case 0x2c0304u: goto label_2c0304;
        case 0x2c0308u: goto label_2c0308;
        case 0x2c030cu: goto label_2c030c;
        case 0x2c0310u: goto label_2c0310;
        case 0x2c0314u: goto label_2c0314;
        case 0x2c0318u: goto label_2c0318;
        case 0x2c031cu: goto label_2c031c;
        case 0x2c0320u: goto label_2c0320;
        case 0x2c0324u: goto label_2c0324;
        case 0x2c0328u: goto label_2c0328;
        case 0x2c032cu: goto label_2c032c;
        case 0x2c0330u: goto label_2c0330;
        case 0x2c0334u: goto label_2c0334;
        case 0x2c0338u: goto label_2c0338;
        case 0x2c033cu: goto label_2c033c;
        case 0x2c0340u: goto label_2c0340;
        case 0x2c0344u: goto label_2c0344;
        case 0x2c0348u: goto label_2c0348;
        case 0x2c034cu: goto label_2c034c;
        case 0x2c0350u: goto label_2c0350;
        case 0x2c0354u: goto label_2c0354;
        case 0x2c0358u: goto label_2c0358;
        case 0x2c035cu: goto label_2c035c;
        case 0x2c0360u: goto label_2c0360;
        case 0x2c0364u: goto label_2c0364;
        case 0x2c0368u: goto label_2c0368;
        case 0x2c036cu: goto label_2c036c;
        case 0x2c0370u: goto label_2c0370;
        case 0x2c0374u: goto label_2c0374;
        case 0x2c0378u: goto label_2c0378;
        case 0x2c037cu: goto label_2c037c;
        case 0x2c0380u: goto label_2c0380;
        case 0x2c0384u: goto label_2c0384;
        case 0x2c0388u: goto label_2c0388;
        case 0x2c038cu: goto label_2c038c;
        case 0x2c0390u: goto label_2c0390;
        case 0x2c0394u: goto label_2c0394;
        case 0x2c0398u: goto label_2c0398;
        case 0x2c039cu: goto label_2c039c;
        case 0x2c03a0u: goto label_2c03a0;
        case 0x2c03a4u: goto label_2c03a4;
        case 0x2c03a8u: goto label_2c03a8;
        case 0x2c03acu: goto label_2c03ac;
        case 0x2c03b0u: goto label_2c03b0;
        case 0x2c03b4u: goto label_2c03b4;
        case 0x2c03b8u: goto label_2c03b8;
        case 0x2c03bcu: goto label_2c03bc;
        case 0x2c03c0u: goto label_2c03c0;
        case 0x2c03c4u: goto label_2c03c4;
        case 0x2c03c8u: goto label_2c03c8;
        case 0x2c03ccu: goto label_2c03cc;
        case 0x2c03d0u: goto label_2c03d0;
        case 0x2c03d4u: goto label_2c03d4;
        case 0x2c03d8u: goto label_2c03d8;
        case 0x2c03dcu: goto label_2c03dc;
        case 0x2c03e0u: goto label_2c03e0;
        case 0x2c03e4u: goto label_2c03e4;
        case 0x2c03e8u: goto label_2c03e8;
        case 0x2c03ecu: goto label_2c03ec;
        case 0x2c03f0u: goto label_2c03f0;
        case 0x2c03f4u: goto label_2c03f4;
        case 0x2c03f8u: goto label_2c03f8;
        case 0x2c03fcu: goto label_2c03fc;
        case 0x2c0400u: goto label_2c0400;
        case 0x2c0404u: goto label_2c0404;
        case 0x2c0408u: goto label_2c0408;
        case 0x2c040cu: goto label_2c040c;
        case 0x2c0410u: goto label_2c0410;
        case 0x2c0414u: goto label_2c0414;
        case 0x2c0418u: goto label_2c0418;
        case 0x2c041cu: goto label_2c041c;
        case 0x2c0420u: goto label_2c0420;
        case 0x2c0424u: goto label_2c0424;
        case 0x2c0428u: goto label_2c0428;
        case 0x2c042cu: goto label_2c042c;
        case 0x2c0430u: goto label_2c0430;
        case 0x2c0434u: goto label_2c0434;
        case 0x2c0438u: goto label_2c0438;
        case 0x2c043cu: goto label_2c043c;
        case 0x2c0440u: goto label_2c0440;
        case 0x2c0444u: goto label_2c0444;
        case 0x2c0448u: goto label_2c0448;
        case 0x2c044cu: goto label_2c044c;
        case 0x2c0450u: goto label_2c0450;
        case 0x2c0454u: goto label_2c0454;
        case 0x2c0458u: goto label_2c0458;
        case 0x2c045cu: goto label_2c045c;
        case 0x2c0460u: goto label_2c0460;
        case 0x2c0464u: goto label_2c0464;
        case 0x2c0468u: goto label_2c0468;
        case 0x2c046cu: goto label_2c046c;
        case 0x2c0470u: goto label_2c0470;
        case 0x2c0474u: goto label_2c0474;
        case 0x2c0478u: goto label_2c0478;
        case 0x2c047cu: goto label_2c047c;
        case 0x2c0480u: goto label_2c0480;
        case 0x2c0484u: goto label_2c0484;
        case 0x2c0488u: goto label_2c0488;
        case 0x2c048cu: goto label_2c048c;
        case 0x2c0490u: goto label_2c0490;
        case 0x2c0494u: goto label_2c0494;
        case 0x2c0498u: goto label_2c0498;
        case 0x2c049cu: goto label_2c049c;
        case 0x2c04a0u: goto label_2c04a0;
        case 0x2c04a4u: goto label_2c04a4;
        case 0x2c04a8u: goto label_2c04a8;
        case 0x2c04acu: goto label_2c04ac;
        case 0x2c04b0u: goto label_2c04b0;
        case 0x2c04b4u: goto label_2c04b4;
        case 0x2c04b8u: goto label_2c04b8;
        case 0x2c04bcu: goto label_2c04bc;
        case 0x2c04c0u: goto label_2c04c0;
        case 0x2c04c4u: goto label_2c04c4;
        case 0x2c04c8u: goto label_2c04c8;
        case 0x2c04ccu: goto label_2c04cc;
        case 0x2c04d0u: goto label_2c04d0;
        case 0x2c04d4u: goto label_2c04d4;
        case 0x2c04d8u: goto label_2c04d8;
        case 0x2c04dcu: goto label_2c04dc;
        case 0x2c04e0u: goto label_2c04e0;
        case 0x2c04e4u: goto label_2c04e4;
        case 0x2c04e8u: goto label_2c04e8;
        case 0x2c04ecu: goto label_2c04ec;
        case 0x2c04f0u: goto label_2c04f0;
        case 0x2c04f4u: goto label_2c04f4;
        case 0x2c04f8u: goto label_2c04f8;
        case 0x2c04fcu: goto label_2c04fc;
        case 0x2c0500u: goto label_2c0500;
        case 0x2c0504u: goto label_2c0504;
        case 0x2c0508u: goto label_2c0508;
        case 0x2c050cu: goto label_2c050c;
        default: break;
    }

    ctx->pc = 0x2c0260u;

label_2c0260:
    // 0x2c0260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c0264:
    // 0x2c0264: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c0264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c0268:
    // 0x2c0268: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c0268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c026c:
    // 0x2c026c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2c026cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2c0270:
    // 0x2c0270: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c0270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c0274:
    // 0x2c0274: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2c0274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_2c0278:
    // 0x2c0278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c0278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c027c:
    // 0x2c027c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c027cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c0280:
    // 0x2c0280: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c0284:
    // 0x2c0284: 0xc0aeaf4  jal         func_2BABD0
label_2c0288:
    if (ctx->pc == 0x2C0288u) {
        ctx->pc = 0x2C0288u;
            // 0x2c0288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C028Cu;
        goto label_2c028c;
    }
    ctx->pc = 0x2C0284u;
    SET_GPR_U32(ctx, 31, 0x2C028Cu);
    ctx->pc = 0x2C0288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0284u;
            // 0x2c0288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C028Cu; }
        if (ctx->pc != 0x2C028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C028Cu; }
        if (ctx->pc != 0x2C028Cu) { return; }
    }
    ctx->pc = 0x2C028Cu;
label_2c028c:
    // 0x2c028c: 0xc0b01fc  jal         func_2C07F0
label_2c0290:
    if (ctx->pc == 0x2C0290u) {
        ctx->pc = 0x2C0290u;
            // 0x2c0290: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x2C0294u;
        goto label_2c0294;
    }
    ctx->pc = 0x2C028Cu;
    SET_GPR_U32(ctx, 31, 0x2C0294u);
    ctx->pc = 0x2C0290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C028Cu;
            // 0x2c0290: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C07F0u;
    if (runtime->hasFunction(0x2C07F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C07F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0294u; }
        if (ctx->pc != 0x2C0294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C07F0_0x2c07f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0294u; }
        if (ctx->pc != 0x2C0294u) { return; }
    }
    ctx->pc = 0x2C0294u;
label_2c0294:
    // 0x2c0294: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0298:
    // 0x2c0298: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c029c:
    // 0x2c029c: 0x24631870  addiu       $v1, $v1, 0x1870
    ctx->pc = 0x2c029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6256));
label_2c02a0:
    // 0x2c02a0: 0x244218a8  addiu       $v0, $v0, 0x18A8
    ctx->pc = 0x2c02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6312));
label_2c02a4:
    // 0x2c02a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c02a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c02a8:
    // 0x2c02a8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c02a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c02ac:
    // 0x2c02ac: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c02acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2c02b0:
    // 0x2c02b0: 0xc0b01f4  jal         func_2C07D0
label_2c02b4:
    if (ctx->pc == 0x2C02B4u) {
        ctx->pc = 0x2C02B4u;
            // 0x2c02b4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x2C02B8u;
        goto label_2c02b8;
    }
    ctx->pc = 0x2C02B0u;
    SET_GPR_U32(ctx, 31, 0x2C02B8u);
    ctx->pc = 0x2C02B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02B0u;
            // 0x2c02b4: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C07D0u;
    if (runtime->hasFunction(0x2C07D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C07D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02B8u; }
        if (ctx->pc != 0x2C02B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C07D0_0x2c07d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02B8u; }
        if (ctx->pc != 0x2C02B8u) { return; }
    }
    ctx->pc = 0x2C02B8u;
label_2c02b8:
    // 0x2c02b8: 0xc0b01f4  jal         func_2C07D0
label_2c02bc:
    if (ctx->pc == 0x2C02BCu) {
        ctx->pc = 0x2C02BCu;
            // 0x2c02bc: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x2C02C0u;
        goto label_2c02c0;
    }
    ctx->pc = 0x2C02B8u;
    SET_GPR_U32(ctx, 31, 0x2C02C0u);
    ctx->pc = 0x2C02BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02B8u;
            // 0x2c02bc: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C07D0u;
    if (runtime->hasFunction(0x2C07D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C07D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02C0u; }
        if (ctx->pc != 0x2C02C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C07D0_0x2c07d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02C0u; }
        if (ctx->pc != 0x2C02C0u) { return; }
    }
    ctx->pc = 0x2C02C0u;
label_2c02c0:
    // 0x2c02c0: 0xc0b01e4  jal         func_2C0790
label_2c02c4:
    if (ctx->pc == 0x2C02C4u) {
        ctx->pc = 0x2C02C4u;
            // 0x2c02c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x2C02C8u;
        goto label_2c02c8;
    }
    ctx->pc = 0x2C02C0u;
    SET_GPR_U32(ctx, 31, 0x2C02C8u);
    ctx->pc = 0x2C02C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02C0u;
            // 0x2c02c4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0790u;
    if (runtime->hasFunction(0x2C0790u)) {
        auto targetFn = runtime->lookupFunction(0x2C0790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02C8u; }
        if (ctx->pc != 0x2C02C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0790_0x2c0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02C8u; }
        if (ctx->pc != 0x2C02C8u) { return; }
    }
    ctx->pc = 0x2C02C8u;
label_2c02c8:
    // 0x2c02c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c02cc:
    // 0x2c02cc: 0xc0aeac0  jal         func_2BAB00
label_2c02d0:
    if (ctx->pc == 0x2C02D0u) {
        ctx->pc = 0x2C02D0u;
            // 0x2c02d0: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x2C02D4u;
        goto label_2c02d4;
    }
    ctx->pc = 0x2C02CCu;
    SET_GPR_U32(ctx, 31, 0x2C02D4u);
    ctx->pc = 0x2C02D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02CCu;
            // 0x2c02d0: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02D4u; }
        if (ctx->pc != 0x2C02D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02D4u; }
        if (ctx->pc != 0x2C02D4u) { return; }
    }
    ctx->pc = 0x2C02D4u;
label_2c02d4:
    // 0x2c02d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c02d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c02d8:
    // 0x2c02d8: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
label_2c02dc:
    if (ctx->pc == 0x2C02DCu) {
        ctx->pc = 0x2C02E0u;
        goto label_2c02e0;
    }
    ctx->pc = 0x2C02D8u;
    {
        const bool branch_taken_0x2c02d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c02d8) {
            ctx->pc = 0x2C0350u;
            goto label_2c0350;
        }
    }
    ctx->pc = 0x2C02E0u;
label_2c02e0:
    // 0x2c02e0: 0x1311c0  sll         $v0, $s3, 7
    ctx->pc = 0x2c02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
label_2c02e4:
    // 0x2c02e4: 0xc040138  jal         func_1004E0
label_2c02e8:
    if (ctx->pc == 0x2C02E8u) {
        ctx->pc = 0x2C02E8u;
            // 0x2c02e8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x2C02ECu;
        goto label_2c02ec;
    }
    ctx->pc = 0x2C02E4u;
    SET_GPR_U32(ctx, 31, 0x2C02ECu);
    ctx->pc = 0x2C02E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C02E4u;
            // 0x2c02e8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02ECu; }
        if (ctx->pc != 0x2C02ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C02ECu; }
        if (ctx->pc != 0x2C02ECu) { return; }
    }
    ctx->pc = 0x2C02ECu;
label_2c02ec:
    // 0x2c02ec: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c02ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c02f0:
    // 0x2c02f0: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c02f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_2c02f4:
    // 0x2c02f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c02f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c02f8:
    // 0x2c02f8: 0x24a506e0  addiu       $a1, $a1, 0x6E0
    ctx->pc = 0x2c02f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
label_2c02fc:
    // 0x2c02fc: 0x24c60670  addiu       $a2, $a2, 0x670
    ctx->pc = 0x2c02fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1648));
label_2c0300:
    // 0x2c0300: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2c0300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2c0304:
    // 0x2c0304: 0xc040840  jal         func_102100
label_2c0308:
    if (ctx->pc == 0x2C0308u) {
        ctx->pc = 0x2C0308u;
            // 0x2c0308: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C030Cu;
        goto label_2c030c;
    }
    ctx->pc = 0x2C0304u;
    SET_GPR_U32(ctx, 31, 0x2C030Cu);
    ctx->pc = 0x2C0308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0304u;
            // 0x2c0308: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C030Cu; }
        if (ctx->pc != 0x2C030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C030Cu; }
        if (ctx->pc != 0x2C030Cu) { return; }
    }
    ctx->pc = 0x2C030Cu;
label_2c030c:
    // 0x2c030c: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2c030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_2c0310:
    // 0x2c0310: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c0310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c0314:
    // 0x2c0314: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2c0314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2c0318:
    // 0x2c0318: 0xc0b0198  jal         func_2C0660
label_2c031c:
    if (ctx->pc == 0x2C031Cu) {
        ctx->pc = 0x2C031Cu;
            // 0x2c031c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C0320u;
        goto label_2c0320;
    }
    ctx->pc = 0x2C0318u;
    SET_GPR_U32(ctx, 31, 0x2C0320u);
    ctx->pc = 0x2C031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0318u;
            // 0x2c031c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0660u;
    if (runtime->hasFunction(0x2C0660u)) {
        auto targetFn = runtime->lookupFunction(0x2C0660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0320u; }
        if (ctx->pc != 0x2C0320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0660_0x2c0660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0320u; }
        if (ctx->pc != 0x2C0320u) { return; }
    }
    ctx->pc = 0x2C0320u;
label_2c0320:
    // 0x2c0320: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c0320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2c0324:
    // 0x2c0324: 0xc0b0198  jal         func_2C0660
label_2c0328:
    if (ctx->pc == 0x2C0328u) {
        ctx->pc = 0x2C0328u;
            // 0x2c0328: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C032Cu;
        goto label_2c032c;
    }
    ctx->pc = 0x2C0324u;
    SET_GPR_U32(ctx, 31, 0x2C032Cu);
    ctx->pc = 0x2C0328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0324u;
            // 0x2c0328: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0660u;
    if (runtime->hasFunction(0x2C0660u)) {
        auto targetFn = runtime->lookupFunction(0x2C0660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C032Cu; }
        if (ctx->pc != 0x2C032Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0660_0x2c0660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C032Cu; }
        if (ctx->pc != 0x2C032Cu) { return; }
    }
    ctx->pc = 0x2C032Cu;
label_2c032c:
    // 0x2c032c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c032cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c0330:
    // 0x2c0330: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2c0330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_2c0334:
    // 0x2c0334: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2c0334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2c0338:
    // 0x2c0338: 0xc0b0190  jal         func_2C0640
label_2c033c:
    if (ctx->pc == 0x2C033Cu) {
        ctx->pc = 0x2C033Cu;
            // 0x2c033c: 0xafb2005c  sw          $s2, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
        ctx->pc = 0x2C0340u;
        goto label_2c0340;
    }
    ctx->pc = 0x2C0338u;
    SET_GPR_U32(ctx, 31, 0x2C0340u);
    ctx->pc = 0x2C033Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0338u;
            // 0x2c033c: 0xafb2005c  sw          $s2, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C0640u;
    if (runtime->hasFunction(0x2C0640u)) {
        auto targetFn = runtime->lookupFunction(0x2C0640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0340u; }
        if (ctx->pc != 0x2C0340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C0640_0x2c0640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0340u; }
        if (ctx->pc != 0x2C0340u) { return; }
    }
    ctx->pc = 0x2C0340u;
label_2c0340:
    // 0x2c0340: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c0340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c0344:
    // 0x2c0344: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x2c0344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_2c0348:
    // 0x2c0348: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2c034c:
    if (ctx->pc == 0x2C034Cu) {
        ctx->pc = 0x2C034Cu;
            // 0x2c034c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x2C0350u;
        goto label_2c0350;
    }
    ctx->pc = 0x2C0348u;
    {
        const bool branch_taken_0x2c0348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0348u;
            // 0x2c034c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0348) {
            ctx->pc = 0x2C0330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c0330;
        }
    }
    ctx->pc = 0x2C0350u;
label_2c0350:
    // 0x2c0350: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c0350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c0354:
    // 0x2c0354: 0x2442a870  addiu       $v0, $v0, -0x5790
    ctx->pc = 0x2c0354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944880));
label_2c0358:
    // 0x2c0358: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c0358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c035c:
    // 0x2c035c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c0360:
    // 0x2c0360: 0x2442a8a8  addiu       $v0, $v0, -0x5758
    ctx->pc = 0x2c0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944936));
label_2c0364:
    // 0x2c0364: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2c0364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_2c0368:
    // 0x2c0368: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2c0368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_2c036c:
    // 0x2c036c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c036cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c0370:
    // 0x2c0370: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c0370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2c0374:
    // 0x2c0374: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x2c0374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_2c0378:
    // 0x2c0378: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c0378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c037c:
    // 0x2c037c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c037cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c0380:
    // 0x2c0380: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c0380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c0384:
    // 0x2c0384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0388:
    // 0x2c0388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c038c:
    // 0x2c038c: 0x3e00008  jr          $ra
label_2c0390:
    if (ctx->pc == 0x2C0390u) {
        ctx->pc = 0x2C0390u;
            // 0x2c0390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C0394u;
        goto label_2c0394;
    }
    ctx->pc = 0x2C038Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C038Cu;
            // 0x2c0390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0394u;
label_2c0394:
    // 0x2c0394: 0x0  nop
    ctx->pc = 0x2c0394u;
    // NOP
label_2c0398:
    // 0x2c0398: 0x0  nop
    ctx->pc = 0x2c0398u;
    // NOP
label_2c039c:
    // 0x2c039c: 0x0  nop
    ctx->pc = 0x2c039cu;
    // NOP
label_2c03a0:
    // 0x2c03a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c03a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c03a4:
    // 0x2c03a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c03a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c03a8:
    // 0x2c03a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c03a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c03ac:
    // 0x2c03ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c03acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c03b0:
    // 0x2c03b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c03b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c03b4:
    // 0x2c03b4: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_2c03b8:
    if (ctx->pc == 0x2C03B8u) {
        ctx->pc = 0x2C03B8u;
            // 0x2c03b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C03BCu;
        goto label_2c03bc;
    }
    ctx->pc = 0x2C03B4u;
    {
        const bool branch_taken_0x2c03b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C03B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03B4u;
            // 0x2c03b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03b4) {
            ctx->pc = 0x2C04F4u;
            goto label_2c04f4;
        }
    }
    ctx->pc = 0x2C03BCu;
label_2c03bc:
    // 0x2c03bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c03c0:
    // 0x2c03c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c03c4:
    // 0x2c03c4: 0x24631870  addiu       $v1, $v1, 0x1870
    ctx->pc = 0x2c03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6256));
label_2c03c8:
    // 0x2c03c8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c03cc:
    // 0x2c03cc: 0x244218a8  addiu       $v0, $v0, 0x18A8
    ctx->pc = 0x2c03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6312));
label_2c03d0:
    // 0x2c03d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c03d4:
    // 0x2c03d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c03d8:
    // 0x2c03d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c03dc:
    // 0x2c03dc: 0xc0407c0  jal         func_101F00
label_2c03e0:
    if (ctx->pc == 0x2C03E0u) {
        ctx->pc = 0x2C03E0u;
            // 0x2c03e0: 0x24a50670  addiu       $a1, $a1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1648));
        ctx->pc = 0x2C03E4u;
        goto label_2c03e4;
    }
    ctx->pc = 0x2C03DCu;
    SET_GPR_U32(ctx, 31, 0x2C03E4u);
    ctx->pc = 0x2C03E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03DCu;
            // 0x2c03e0: 0x24a50670  addiu       $a1, $a1, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03E4u; }
        if (ctx->pc != 0x2C03E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C03E4u; }
        if (ctx->pc != 0x2C03E4u) { return; }
    }
    ctx->pc = 0x2C03E4u;
label_2c03e4:
    // 0x2c03e4: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x2c03e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c03e8:
    // 0x2c03e8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2c03ec:
    if (ctx->pc == 0x2C03ECu) {
        ctx->pc = 0x2C03ECu;
            // 0x2c03ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C03F0u;
        goto label_2c03f0;
    }
    ctx->pc = 0x2C03E8u;
    {
        const bool branch_taken_0x2c03e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c03e8) {
            ctx->pc = 0x2C03ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03E8u;
            // 0x2c03ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0408u;
            goto label_2c0408;
        }
    }
    ctx->pc = 0x2C03F0u;
label_2c03f0:
    // 0x2c03f0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c03f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c03f4:
    // 0x2c03f4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2c03f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c03f8:
    // 0x2c03f8: 0x24a533e0  addiu       $a1, $a1, 0x33E0
    ctx->pc = 0x2c03f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
label_2c03fc:
    // 0x2c03fc: 0xc0407e8  jal         func_101FA0
label_2c0400:
    if (ctx->pc == 0x2C0400u) {
        ctx->pc = 0x2C0400u;
            // 0x2c0400: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2C0404u;
        goto label_2c0404;
    }
    ctx->pc = 0x2C03FCu;
    SET_GPR_U32(ctx, 31, 0x2C0404u);
    ctx->pc = 0x2C0400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C03FCu;
            // 0x2c0400: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0404u; }
        if (ctx->pc != 0x2C0404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0404u; }
        if (ctx->pc != 0x2C0404u) { return; }
    }
    ctx->pc = 0x2C0404u;
label_2c0404:
    // 0x2c0404: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c0404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c0408:
    // 0x2c0408: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c040c:
    if (ctx->pc == 0x2C040Cu) {
        ctx->pc = 0x2C040Cu;
            // 0x2c040c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C0410u;
        goto label_2c0410;
    }
    ctx->pc = 0x2C0408u;
    {
        const bool branch_taken_0x2c0408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0408) {
            ctx->pc = 0x2C040Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0408u;
            // 0x2c040c: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0438u;
            goto label_2c0438;
        }
    }
    ctx->pc = 0x2C0410u;
label_2c0410:
    // 0x2c0410: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c0414:
    if (ctx->pc == 0x2C0414u) {
        ctx->pc = 0x2C0418u;
        goto label_2c0418;
    }
    ctx->pc = 0x2C0410u;
    {
        const bool branch_taken_0x2c0410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0410) {
            ctx->pc = 0x2C0434u;
            goto label_2c0434;
        }
    }
    ctx->pc = 0x2C0418u;
label_2c0418:
    // 0x2c0418: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c041c:
    if (ctx->pc == 0x2C041Cu) {
        ctx->pc = 0x2C0420u;
        goto label_2c0420;
    }
    ctx->pc = 0x2C0418u;
    {
        const bool branch_taken_0x2c0418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0418) {
            ctx->pc = 0x2C0434u;
            goto label_2c0434;
        }
    }
    ctx->pc = 0x2C0420u;
label_2c0420:
    // 0x2c0420: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c0420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c0424:
    // 0x2c0424: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c0428:
    if (ctx->pc == 0x2C0428u) {
        ctx->pc = 0x2C042Cu;
        goto label_2c042c;
    }
    ctx->pc = 0x2C0424u;
    {
        const bool branch_taken_0x2c0424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0424) {
            ctx->pc = 0x2C0434u;
            goto label_2c0434;
        }
    }
    ctx->pc = 0x2C042Cu;
label_2c042c:
    // 0x2c042c: 0xc0400a8  jal         func_1002A0
label_2c0430:
    if (ctx->pc == 0x2C0430u) {
        ctx->pc = 0x2C0434u;
        goto label_2c0434;
    }
    ctx->pc = 0x2C042Cu;
    SET_GPR_U32(ctx, 31, 0x2C0434u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0434u; }
        if (ctx->pc != 0x2C0434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0434u; }
        if (ctx->pc != 0x2C0434u) { return; }
    }
    ctx->pc = 0x2C0434u;
label_2c0434:
    // 0x2c0434: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c0434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c0438:
    // 0x2c0438: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c043c:
    if (ctx->pc == 0x2C043Cu) {
        ctx->pc = 0x2C043Cu;
            // 0x2c043c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C0440u;
        goto label_2c0440;
    }
    ctx->pc = 0x2C0438u;
    {
        const bool branch_taken_0x2c0438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0438) {
            ctx->pc = 0x2C043Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0438u;
            // 0x2c043c: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C0468u;
            goto label_2c0468;
        }
    }
    ctx->pc = 0x2C0440u;
label_2c0440:
    // 0x2c0440: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c0444:
    if (ctx->pc == 0x2C0444u) {
        ctx->pc = 0x2C0448u;
        goto label_2c0448;
    }
    ctx->pc = 0x2C0440u;
    {
        const bool branch_taken_0x2c0440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0440) {
            ctx->pc = 0x2C0464u;
            goto label_2c0464;
        }
    }
    ctx->pc = 0x2C0448u;
label_2c0448:
    // 0x2c0448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c044c:
    if (ctx->pc == 0x2C044Cu) {
        ctx->pc = 0x2C0450u;
        goto label_2c0450;
    }
    ctx->pc = 0x2C0448u;
    {
        const bool branch_taken_0x2c0448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0448) {
            ctx->pc = 0x2C0464u;
            goto label_2c0464;
        }
    }
    ctx->pc = 0x2C0450u;
label_2c0450:
    // 0x2c0450: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c0450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c0454:
    // 0x2c0454: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c0458:
    if (ctx->pc == 0x2C0458u) {
        ctx->pc = 0x2C045Cu;
        goto label_2c045c;
    }
    ctx->pc = 0x2C0454u;
    {
        const bool branch_taken_0x2c0454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0454) {
            ctx->pc = 0x2C0464u;
            goto label_2c0464;
        }
    }
    ctx->pc = 0x2C045Cu;
label_2c045c:
    // 0x2c045c: 0xc0400a8  jal         func_1002A0
label_2c0460:
    if (ctx->pc == 0x2C0460u) {
        ctx->pc = 0x2C0464u;
        goto label_2c0464;
    }
    ctx->pc = 0x2C045Cu;
    SET_GPR_U32(ctx, 31, 0x2C0464u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0464u; }
        if (ctx->pc != 0x2C0464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0464u; }
        if (ctx->pc != 0x2C0464u) { return; }
    }
    ctx->pc = 0x2C0464u;
label_2c0464:
    // 0x2c0464: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c0464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c0468:
    // 0x2c0468: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c046c:
    if (ctx->pc == 0x2C046Cu) {
        ctx->pc = 0x2C0470u;
        goto label_2c0470;
    }
    ctx->pc = 0x2C0468u;
    {
        const bool branch_taken_0x2c0468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0468) {
            ctx->pc = 0x2C0484u;
            goto label_2c0484;
        }
    }
    ctx->pc = 0x2C0470u;
label_2c0470:
    // 0x2c0470: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c0470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c0474:
    // 0x2c0474: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c0474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c0478:
    // 0x2c0478: 0x24631858  addiu       $v1, $v1, 0x1858
    ctx->pc = 0x2c0478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6232));
label_2c047c:
    // 0x2c047c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c047cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c0480:
    // 0x2c0480: 0xac400d68  sw          $zero, 0xD68($v0)
    ctx->pc = 0x2c0480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3432), GPR_U32(ctx, 0));
label_2c0484:
    // 0x2c0484: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c0488:
    if (ctx->pc == 0x2C0488u) {
        ctx->pc = 0x2C0488u;
            // 0x2c0488: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C048Cu;
        goto label_2c048c;
    }
    ctx->pc = 0x2C0484u;
    {
        const bool branch_taken_0x2c0484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0484) {
            ctx->pc = 0x2C0488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0484u;
            // 0x2c0488: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C04E0u;
            goto label_2c04e0;
        }
    }
    ctx->pc = 0x2C048Cu;
label_2c048c:
    // 0x2c048c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c0490:
    // 0x2c0490: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c0490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c0494:
    // 0x2c0494: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c0494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c0498:
    // 0x2c0498: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c0498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c049c:
    // 0x2c049c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c04a0:
    if (ctx->pc == 0x2C04A0u) {
        ctx->pc = 0x2C04A0u;
            // 0x2c04a0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C04A4u;
        goto label_2c04a4;
    }
    ctx->pc = 0x2C049Cu;
    {
        const bool branch_taken_0x2c049c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c049c) {
            ctx->pc = 0x2C04A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C049Cu;
            // 0x2c04a0: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C04B8u;
            goto label_2c04b8;
        }
    }
    ctx->pc = 0x2C04A4u;
label_2c04a4:
    // 0x2c04a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c04a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c04a8:
    // 0x2c04a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c04a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c04ac:
    // 0x2c04ac: 0x320f809  jalr        $t9
label_2c04b0:
    if (ctx->pc == 0x2C04B0u) {
        ctx->pc = 0x2C04B0u;
            // 0x2c04b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C04B4u;
        goto label_2c04b4;
    }
    ctx->pc = 0x2C04ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C04B4u);
        ctx->pc = 0x2C04B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04ACu;
            // 0x2c04b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C04B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C04B4u; }
            if (ctx->pc != 0x2C04B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C04B4u;
label_2c04b4:
    // 0x2c04b4: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c04b8:
    // 0x2c04b8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c04bc:
    if (ctx->pc == 0x2C04BCu) {
        ctx->pc = 0x2C04BCu;
            // 0x2c04bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C04C0u;
        goto label_2c04c0;
    }
    ctx->pc = 0x2C04B8u;
    {
        const bool branch_taken_0x2c04b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c04b8) {
            ctx->pc = 0x2C04BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04B8u;
            // 0x2c04bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C04D4u;
            goto label_2c04d4;
        }
    }
    ctx->pc = 0x2C04C0u;
label_2c04c0:
    // 0x2c04c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c04c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c04c4:
    // 0x2c04c4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c04c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c04c8:
    // 0x2c04c8: 0x320f809  jalr        $t9
label_2c04cc:
    if (ctx->pc == 0x2C04CCu) {
        ctx->pc = 0x2C04CCu;
            // 0x2c04cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C04D0u;
        goto label_2c04d0;
    }
    ctx->pc = 0x2C04C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C04D0u);
        ctx->pc = 0x2C04CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04C8u;
            // 0x2c04cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C04D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C04D0u; }
            if (ctx->pc != 0x2C04D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C04D0u;
label_2c04d0:
    // 0x2c04d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c04d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c04d4:
    // 0x2c04d4: 0xc075bf8  jal         func_1D6FE0
label_2c04d8:
    if (ctx->pc == 0x2C04D8u) {
        ctx->pc = 0x2C04D8u;
            // 0x2c04d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C04DCu;
        goto label_2c04dc;
    }
    ctx->pc = 0x2C04D4u;
    SET_GPR_U32(ctx, 31, 0x2C04DCu);
    ctx->pc = 0x2C04D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04D4u;
            // 0x2c04d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04DCu; }
        if (ctx->pc != 0x2C04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04DCu; }
        if (ctx->pc != 0x2C04DCu) { return; }
    }
    ctx->pc = 0x2C04DCu;
label_2c04dc:
    // 0x2c04dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c04dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c04e0:
    // 0x2c04e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c04e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c04e4:
    // 0x2c04e4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c04e8:
    if (ctx->pc == 0x2C04E8u) {
        ctx->pc = 0x2C04E8u;
            // 0x2c04e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C04ECu;
        goto label_2c04ec;
    }
    ctx->pc = 0x2C04E4u;
    {
        const bool branch_taken_0x2c04e4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c04e4) {
            ctx->pc = 0x2C04E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04E4u;
            // 0x2c04e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C04F8u;
            goto label_2c04f8;
        }
    }
    ctx->pc = 0x2C04ECu;
label_2c04ec:
    // 0x2c04ec: 0xc0400a8  jal         func_1002A0
label_2c04f0:
    if (ctx->pc == 0x2C04F0u) {
        ctx->pc = 0x2C04F0u;
            // 0x2c04f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C04F4u;
        goto label_2c04f4;
    }
    ctx->pc = 0x2C04ECu;
    SET_GPR_U32(ctx, 31, 0x2C04F4u);
    ctx->pc = 0x2C04F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C04ECu;
            // 0x2c04f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04F4u; }
        if (ctx->pc != 0x2C04F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C04F4u; }
        if (ctx->pc != 0x2C04F4u) { return; }
    }
    ctx->pc = 0x2C04F4u;
label_2c04f4:
    // 0x2c04f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c04f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c04f8:
    // 0x2c04f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c04f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c04fc:
    // 0x2c04fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c04fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c0500:
    // 0x2c0500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c0504:
    // 0x2c0504: 0x3e00008  jr          $ra
label_2c0508:
    if (ctx->pc == 0x2C0508u) {
        ctx->pc = 0x2C0508u;
            // 0x2c0508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C050Cu;
        goto label_2c050c;
    }
    ctx->pc = 0x2C0504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0504u;
            // 0x2c0508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C050Cu;
label_2c050c:
    // 0x2c050c: 0x0  nop
    ctx->pc = 0x2c050cu;
    // NOP
}
