#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F6090
// Address: 0x2f6090 - 0x2f63f0
void sub_002F6090_0x2f6090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6090_0x2f6090");
#endif

    switch (ctx->pc) {
        case 0x2f6090u: goto label_2f6090;
        case 0x2f6094u: goto label_2f6094;
        case 0x2f6098u: goto label_2f6098;
        case 0x2f609cu: goto label_2f609c;
        case 0x2f60a0u: goto label_2f60a0;
        case 0x2f60a4u: goto label_2f60a4;
        case 0x2f60a8u: goto label_2f60a8;
        case 0x2f60acu: goto label_2f60ac;
        case 0x2f60b0u: goto label_2f60b0;
        case 0x2f60b4u: goto label_2f60b4;
        case 0x2f60b8u: goto label_2f60b8;
        case 0x2f60bcu: goto label_2f60bc;
        case 0x2f60c0u: goto label_2f60c0;
        case 0x2f60c4u: goto label_2f60c4;
        case 0x2f60c8u: goto label_2f60c8;
        case 0x2f60ccu: goto label_2f60cc;
        case 0x2f60d0u: goto label_2f60d0;
        case 0x2f60d4u: goto label_2f60d4;
        case 0x2f60d8u: goto label_2f60d8;
        case 0x2f60dcu: goto label_2f60dc;
        case 0x2f60e0u: goto label_2f60e0;
        case 0x2f60e4u: goto label_2f60e4;
        case 0x2f60e8u: goto label_2f60e8;
        case 0x2f60ecu: goto label_2f60ec;
        case 0x2f60f0u: goto label_2f60f0;
        case 0x2f60f4u: goto label_2f60f4;
        case 0x2f60f8u: goto label_2f60f8;
        case 0x2f60fcu: goto label_2f60fc;
        case 0x2f6100u: goto label_2f6100;
        case 0x2f6104u: goto label_2f6104;
        case 0x2f6108u: goto label_2f6108;
        case 0x2f610cu: goto label_2f610c;
        case 0x2f6110u: goto label_2f6110;
        case 0x2f6114u: goto label_2f6114;
        case 0x2f6118u: goto label_2f6118;
        case 0x2f611cu: goto label_2f611c;
        case 0x2f6120u: goto label_2f6120;
        case 0x2f6124u: goto label_2f6124;
        case 0x2f6128u: goto label_2f6128;
        case 0x2f612cu: goto label_2f612c;
        case 0x2f6130u: goto label_2f6130;
        case 0x2f6134u: goto label_2f6134;
        case 0x2f6138u: goto label_2f6138;
        case 0x2f613cu: goto label_2f613c;
        case 0x2f6140u: goto label_2f6140;
        case 0x2f6144u: goto label_2f6144;
        case 0x2f6148u: goto label_2f6148;
        case 0x2f614cu: goto label_2f614c;
        case 0x2f6150u: goto label_2f6150;
        case 0x2f6154u: goto label_2f6154;
        case 0x2f6158u: goto label_2f6158;
        case 0x2f615cu: goto label_2f615c;
        case 0x2f6160u: goto label_2f6160;
        case 0x2f6164u: goto label_2f6164;
        case 0x2f6168u: goto label_2f6168;
        case 0x2f616cu: goto label_2f616c;
        case 0x2f6170u: goto label_2f6170;
        case 0x2f6174u: goto label_2f6174;
        case 0x2f6178u: goto label_2f6178;
        case 0x2f617cu: goto label_2f617c;
        case 0x2f6180u: goto label_2f6180;
        case 0x2f6184u: goto label_2f6184;
        case 0x2f6188u: goto label_2f6188;
        case 0x2f618cu: goto label_2f618c;
        case 0x2f6190u: goto label_2f6190;
        case 0x2f6194u: goto label_2f6194;
        case 0x2f6198u: goto label_2f6198;
        case 0x2f619cu: goto label_2f619c;
        case 0x2f61a0u: goto label_2f61a0;
        case 0x2f61a4u: goto label_2f61a4;
        case 0x2f61a8u: goto label_2f61a8;
        case 0x2f61acu: goto label_2f61ac;
        case 0x2f61b0u: goto label_2f61b0;
        case 0x2f61b4u: goto label_2f61b4;
        case 0x2f61b8u: goto label_2f61b8;
        case 0x2f61bcu: goto label_2f61bc;
        case 0x2f61c0u: goto label_2f61c0;
        case 0x2f61c4u: goto label_2f61c4;
        case 0x2f61c8u: goto label_2f61c8;
        case 0x2f61ccu: goto label_2f61cc;
        case 0x2f61d0u: goto label_2f61d0;
        case 0x2f61d4u: goto label_2f61d4;
        case 0x2f61d8u: goto label_2f61d8;
        case 0x2f61dcu: goto label_2f61dc;
        case 0x2f61e0u: goto label_2f61e0;
        case 0x2f61e4u: goto label_2f61e4;
        case 0x2f61e8u: goto label_2f61e8;
        case 0x2f61ecu: goto label_2f61ec;
        case 0x2f61f0u: goto label_2f61f0;
        case 0x2f61f4u: goto label_2f61f4;
        case 0x2f61f8u: goto label_2f61f8;
        case 0x2f61fcu: goto label_2f61fc;
        case 0x2f6200u: goto label_2f6200;
        case 0x2f6204u: goto label_2f6204;
        case 0x2f6208u: goto label_2f6208;
        case 0x2f620cu: goto label_2f620c;
        case 0x2f6210u: goto label_2f6210;
        case 0x2f6214u: goto label_2f6214;
        case 0x2f6218u: goto label_2f6218;
        case 0x2f621cu: goto label_2f621c;
        case 0x2f6220u: goto label_2f6220;
        case 0x2f6224u: goto label_2f6224;
        case 0x2f6228u: goto label_2f6228;
        case 0x2f622cu: goto label_2f622c;
        case 0x2f6230u: goto label_2f6230;
        case 0x2f6234u: goto label_2f6234;
        case 0x2f6238u: goto label_2f6238;
        case 0x2f623cu: goto label_2f623c;
        case 0x2f6240u: goto label_2f6240;
        case 0x2f6244u: goto label_2f6244;
        case 0x2f6248u: goto label_2f6248;
        case 0x2f624cu: goto label_2f624c;
        case 0x2f6250u: goto label_2f6250;
        case 0x2f6254u: goto label_2f6254;
        case 0x2f6258u: goto label_2f6258;
        case 0x2f625cu: goto label_2f625c;
        case 0x2f6260u: goto label_2f6260;
        case 0x2f6264u: goto label_2f6264;
        case 0x2f6268u: goto label_2f6268;
        case 0x2f626cu: goto label_2f626c;
        case 0x2f6270u: goto label_2f6270;
        case 0x2f6274u: goto label_2f6274;
        case 0x2f6278u: goto label_2f6278;
        case 0x2f627cu: goto label_2f627c;
        case 0x2f6280u: goto label_2f6280;
        case 0x2f6284u: goto label_2f6284;
        case 0x2f6288u: goto label_2f6288;
        case 0x2f628cu: goto label_2f628c;
        case 0x2f6290u: goto label_2f6290;
        case 0x2f6294u: goto label_2f6294;
        case 0x2f6298u: goto label_2f6298;
        case 0x2f629cu: goto label_2f629c;
        case 0x2f62a0u: goto label_2f62a0;
        case 0x2f62a4u: goto label_2f62a4;
        case 0x2f62a8u: goto label_2f62a8;
        case 0x2f62acu: goto label_2f62ac;
        case 0x2f62b0u: goto label_2f62b0;
        case 0x2f62b4u: goto label_2f62b4;
        case 0x2f62b8u: goto label_2f62b8;
        case 0x2f62bcu: goto label_2f62bc;
        case 0x2f62c0u: goto label_2f62c0;
        case 0x2f62c4u: goto label_2f62c4;
        case 0x2f62c8u: goto label_2f62c8;
        case 0x2f62ccu: goto label_2f62cc;
        case 0x2f62d0u: goto label_2f62d0;
        case 0x2f62d4u: goto label_2f62d4;
        case 0x2f62d8u: goto label_2f62d8;
        case 0x2f62dcu: goto label_2f62dc;
        case 0x2f62e0u: goto label_2f62e0;
        case 0x2f62e4u: goto label_2f62e4;
        case 0x2f62e8u: goto label_2f62e8;
        case 0x2f62ecu: goto label_2f62ec;
        case 0x2f62f0u: goto label_2f62f0;
        case 0x2f62f4u: goto label_2f62f4;
        case 0x2f62f8u: goto label_2f62f8;
        case 0x2f62fcu: goto label_2f62fc;
        case 0x2f6300u: goto label_2f6300;
        case 0x2f6304u: goto label_2f6304;
        case 0x2f6308u: goto label_2f6308;
        case 0x2f630cu: goto label_2f630c;
        case 0x2f6310u: goto label_2f6310;
        case 0x2f6314u: goto label_2f6314;
        case 0x2f6318u: goto label_2f6318;
        case 0x2f631cu: goto label_2f631c;
        case 0x2f6320u: goto label_2f6320;
        case 0x2f6324u: goto label_2f6324;
        case 0x2f6328u: goto label_2f6328;
        case 0x2f632cu: goto label_2f632c;
        case 0x2f6330u: goto label_2f6330;
        case 0x2f6334u: goto label_2f6334;
        case 0x2f6338u: goto label_2f6338;
        case 0x2f633cu: goto label_2f633c;
        case 0x2f6340u: goto label_2f6340;
        case 0x2f6344u: goto label_2f6344;
        case 0x2f6348u: goto label_2f6348;
        case 0x2f634cu: goto label_2f634c;
        case 0x2f6350u: goto label_2f6350;
        case 0x2f6354u: goto label_2f6354;
        case 0x2f6358u: goto label_2f6358;
        case 0x2f635cu: goto label_2f635c;
        case 0x2f6360u: goto label_2f6360;
        case 0x2f6364u: goto label_2f6364;
        case 0x2f6368u: goto label_2f6368;
        case 0x2f636cu: goto label_2f636c;
        case 0x2f6370u: goto label_2f6370;
        case 0x2f6374u: goto label_2f6374;
        case 0x2f6378u: goto label_2f6378;
        case 0x2f637cu: goto label_2f637c;
        case 0x2f6380u: goto label_2f6380;
        case 0x2f6384u: goto label_2f6384;
        case 0x2f6388u: goto label_2f6388;
        case 0x2f638cu: goto label_2f638c;
        case 0x2f6390u: goto label_2f6390;
        case 0x2f6394u: goto label_2f6394;
        case 0x2f6398u: goto label_2f6398;
        case 0x2f639cu: goto label_2f639c;
        case 0x2f63a0u: goto label_2f63a0;
        case 0x2f63a4u: goto label_2f63a4;
        case 0x2f63a8u: goto label_2f63a8;
        case 0x2f63acu: goto label_2f63ac;
        case 0x2f63b0u: goto label_2f63b0;
        case 0x2f63b4u: goto label_2f63b4;
        case 0x2f63b8u: goto label_2f63b8;
        case 0x2f63bcu: goto label_2f63bc;
        case 0x2f63c0u: goto label_2f63c0;
        case 0x2f63c4u: goto label_2f63c4;
        case 0x2f63c8u: goto label_2f63c8;
        case 0x2f63ccu: goto label_2f63cc;
        case 0x2f63d0u: goto label_2f63d0;
        case 0x2f63d4u: goto label_2f63d4;
        case 0x2f63d8u: goto label_2f63d8;
        case 0x2f63dcu: goto label_2f63dc;
        case 0x2f63e0u: goto label_2f63e0;
        case 0x2f63e4u: goto label_2f63e4;
        case 0x2f63e8u: goto label_2f63e8;
        case 0x2f63ecu: goto label_2f63ec;
        default: break;
    }

    ctx->pc = 0x2f6090u;

label_2f6090:
    // 0x2f6090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f6090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2f6094:
    // 0x2f6094: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f6098:
    // 0x2f6098: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2f609c:
    // 0x2f609c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2f60a0:
    // 0x2f60a0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2f60a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f60a4:
    // 0x2f60a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f60a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2f60a8:
    // 0x2f60a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f60a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f60ac:
    // 0x2f60ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f60acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2f60b0:
    // 0x2f60b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f60b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f60b4:
    // 0x2f60b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f60b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f60b8:
    // 0x2f60b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f60b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f60bc:
    // 0x2f60bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f60bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f60c0:
    // 0x2f60c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f60c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f60c4:
    // 0x2f60c4: 0x8c8400c8  lw          $a0, 0xC8($a0)
    ctx->pc = 0x2f60c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2f60c8:
    // 0x2f60c8: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x2f60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_2f60cc:
    // 0x2f60cc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_2f60d0:
    if (ctx->pc == 0x2F60D0u) {
        ctx->pc = 0x2F60D0u;
            // 0x2f60d0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2F60D4u;
        goto label_2f60d4;
    }
    ctx->pc = 0x2F60CCu;
    {
        const bool branch_taken_0x2f60cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F60D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F60CCu;
            // 0x2f60d0: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60cc) {
            ctx->pc = 0x2F60E4u;
            goto label_2f60e4;
        }
    }
    ctx->pc = 0x2F60D4u;
label_2f60d4:
    // 0x2f60d4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2f60d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2f60d8:
    // 0x2f60d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2f60dc:
    if (ctx->pc == 0x2F60DCu) {
        ctx->pc = 0x2F60E0u;
        goto label_2f60e0;
    }
    ctx->pc = 0x2F60D8u;
    {
        const bool branch_taken_0x2f60d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f60d8) {
            ctx->pc = 0x2F60E4u;
            goto label_2f60e4;
        }
    }
    ctx->pc = 0x2F60E0u;
label_2f60e0:
    // 0x2f60e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f60e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f60e4:
    // 0x2f60e4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_2f60e8:
    if (ctx->pc == 0x2F60E8u) {
        ctx->pc = 0x2F60ECu;
        goto label_2f60ec;
    }
    ctx->pc = 0x2F60E4u;
    {
        const bool branch_taken_0x2f60e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f60e4) {
            ctx->pc = 0x2F6100u;
            goto label_2f6100;
        }
    }
    ctx->pc = 0x2F60ECu;
label_2f60ec:
    // 0x2f60ec: 0xc075eb4  jal         func_1D7AD0
label_2f60f0:
    if (ctx->pc == 0x2F60F0u) {
        ctx->pc = 0x2F60F4u;
        goto label_2f60f4;
    }
    ctx->pc = 0x2F60ECu;
    SET_GPR_U32(ctx, 31, 0x2F60F4u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F60F4u; }
        if (ctx->pc != 0x2F60F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F60F4u; }
        if (ctx->pc != 0x2F60F4u) { return; }
    }
    ctx->pc = 0x2F60F4u;
label_2f60f4:
    // 0x2f60f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f60f8:
    if (ctx->pc == 0x2F60F8u) {
        ctx->pc = 0x2F60FCu;
        goto label_2f60fc;
    }
    ctx->pc = 0x2F60F4u;
    {
        const bool branch_taken_0x2f60f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f60f4) {
            ctx->pc = 0x2F6100u;
            goto label_2f6100;
        }
    }
    ctx->pc = 0x2F60FCu;
label_2f60fc:
    // 0x2f60fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f60fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6100:
    // 0x2f6100: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_2f6104:
    if (ctx->pc == 0x2F6104u) {
        ctx->pc = 0x2F6108u;
        goto label_2f6108;
    }
    ctx->pc = 0x2F6100u;
    {
        const bool branch_taken_0x2f6100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6100) {
            ctx->pc = 0x2F611Cu;
            goto label_2f611c;
        }
    }
    ctx->pc = 0x2F6108u;
label_2f6108:
    // 0x2f6108: 0x8ea400c8  lw          $a0, 0xC8($s5)
    ctx->pc = 0x2f6108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_2f610c:
    // 0x2f610c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f6110:
    // 0x2f6110: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x2f6110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_2f6114:
    // 0x2f6114: 0x548300ac  bnel        $a0, $v1, . + 4 + (0xAC << 2)
label_2f6118:
    if (ctx->pc == 0x2F6118u) {
        ctx->pc = 0x2F6118u;
            // 0x2f6118: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2F611Cu;
        goto label_2f611c;
    }
    ctx->pc = 0x2F6114u;
    {
        const bool branch_taken_0x2f6114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f6114) {
            ctx->pc = 0x2F6118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6114u;
            // 0x2f6118: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F63C8u;
            goto label_2f63c8;
        }
    }
    ctx->pc = 0x2F611Cu;
label_2f611c:
    // 0x2f611c: 0x1a8000a9  blez        $s4, . + 4 + (0xA9 << 2)
label_2f6120:
    if (ctx->pc == 0x2F6120u) {
        ctx->pc = 0x2F6124u;
        goto label_2f6124;
    }
    ctx->pc = 0x2F611Cu;
    {
        const bool branch_taken_0x2f611c = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2f611c) {
            ctx->pc = 0x2F63C4u;
            goto label_2f63c4;
        }
    }
    ctx->pc = 0x2F6124u;
label_2f6124:
    // 0x2f6124: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2f6124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2f6128:
    // 0x2f6128: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x2f6128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2f612c:
    // 0x2f612c: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_2f6130:
    if (ctx->pc == 0x2F6130u) {
        ctx->pc = 0x2F6130u;
            // 0x2f6130: 0x26110338  addiu       $s1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->pc = 0x2F6134u;
        goto label_2f6134;
    }
    ctx->pc = 0x2F612Cu;
    {
        const bool branch_taken_0x2f612c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F612Cu;
            // 0x2f6130: 0x26110338  addiu       $s1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f612c) {
            ctx->pc = 0x2F613Cu;
            goto label_2f613c;
        }
    }
    ctx->pc = 0x2F6134u;
label_2f6134:
    // 0x2f6134: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f6138:
    if (ctx->pc == 0x2F6138u) {
        ctx->pc = 0x2F6138u;
            // 0x2f6138: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F613Cu;
        goto label_2f613c;
    }
    ctx->pc = 0x2F6134u;
    {
        const bool branch_taken_0x2f6134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6134u;
            // 0x2f6138: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6134) {
            ctx->pc = 0x2F6140u;
            goto label_2f6140;
        }
    }
    ctx->pc = 0x2F613Cu;
label_2f613c:
    // 0x2f613c: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x2f613cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f6140:
    // 0x2f6140: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f6140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f6144:
    // 0x2f6144: 0x5263003b  beql        $s3, $v1, . + 4 + (0x3B << 2)
label_2f6148:
    if (ctx->pc == 0x2F6148u) {
        ctx->pc = 0x2F6148u;
            // 0x2f6148: 0x8e020378  lw          $v0, 0x378($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
        ctx->pc = 0x2F614Cu;
        goto label_2f614c;
    }
    ctx->pc = 0x2F6144u;
    {
        const bool branch_taken_0x2f6144 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6144) {
            ctx->pc = 0x2F6148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6144u;
            // 0x2f6148: 0x8e020378  lw          $v0, 0x378($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 888)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6234u;
            goto label_2f6234;
        }
    }
    ctx->pc = 0x2F614Cu;
label_2f614c:
    // 0x2f614c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f6150:
    // 0x2f6150: 0x52630028  beql        $s3, $v1, . + 4 + (0x28 << 2)
label_2f6154:
    if (ctx->pc == 0x2F6154u) {
        ctx->pc = 0x2F6154u;
            // 0x2f6154: 0x8e020358  lw          $v0, 0x358($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 856)));
        ctx->pc = 0x2F6158u;
        goto label_2f6158;
    }
    ctx->pc = 0x2F6150u;
    {
        const bool branch_taken_0x2f6150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6150) {
            ctx->pc = 0x2F6154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6150u;
            // 0x2f6154: 0x8e020358  lw          $v0, 0x358($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 856)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F61F4u;
            goto label_2f61f4;
        }
    }
    ctx->pc = 0x2F6158u;
label_2f6158:
    // 0x2f6158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f615c:
    // 0x2f615c: 0x52630015  beql        $s3, $v1, . + 4 + (0x15 << 2)
label_2f6160:
    if (ctx->pc == 0x2F6160u) {
        ctx->pc = 0x2F6160u;
            // 0x2f6160: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->pc = 0x2F6164u;
        goto label_2f6164;
    }
    ctx->pc = 0x2F615Cu;
    {
        const bool branch_taken_0x2f615c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f615c) {
            ctx->pc = 0x2F6160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F615Cu;
            // 0x2f6160: 0x8e020338  lw          $v0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F61B4u;
            goto label_2f61b4;
        }
    }
    ctx->pc = 0x2F6164u;
label_2f6164:
    // 0x2f6164: 0x52600003  beql        $s3, $zero, . + 4 + (0x3 << 2)
label_2f6168:
    if (ctx->pc == 0x2F6168u) {
        ctx->pc = 0x2F6168u;
            // 0x2f6168: 0x8e020398  lw          $v0, 0x398($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
        ctx->pc = 0x2F616Cu;
        goto label_2f616c;
    }
    ctx->pc = 0x2F6164u;
    {
        const bool branch_taken_0x2f6164 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6164) {
            ctx->pc = 0x2F6168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6164u;
            // 0x2f6168: 0x8e020398  lw          $v0, 0x398($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 920)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6174u;
            goto label_2f6174;
        }
    }
    ctx->pc = 0x2F616Cu;
label_2f616c:
    // 0x2f616c: 0x10000095  b           . + 4 + (0x95 << 2)
label_2f6170:
    if (ctx->pc == 0x2F6170u) {
        ctx->pc = 0x2F6174u;
        goto label_2f6174;
    }
    ctx->pc = 0x2F616Cu;
    {
        const bool branch_taken_0x2f616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f616c) {
            ctx->pc = 0x2F63C4u;
            goto label_2f63c4;
        }
    }
    ctx->pc = 0x2F6174u;
label_2f6174:
    // 0x2f6174: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f6174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2f6178:
    // 0x2f6178: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x2f6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
label_2f617c:
    // 0x2f617c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f617cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2f6180:
    // 0x2f6180: 0x8e0203a0  lw          $v0, 0x3A0($s0)
    ctx->pc = 0x2f6180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 928)));
label_2f6184:
    // 0x2f6184: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f6184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2f6188:
    // 0x2f6188: 0xc60003a4  lwc1        $f0, 0x3A4($s0)
    ctx->pc = 0x2f6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f618c:
    // 0x2f618c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2f618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2f6190:
    // 0x2f6190: 0x8e0203a8  lw          $v0, 0x3A8($s0)
    ctx->pc = 0x2f6190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_2f6194:
    // 0x2f6194: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2f6194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2f6198:
    // 0x2f6198: 0x8e0203ac  lw          $v0, 0x3AC($s0)
    ctx->pc = 0x2f6198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 940)));
label_2f619c:
    // 0x2f619c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2f619cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2f61a0:
    // 0x2f61a0: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x2f61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_2f61a4:
    // 0x2f61a4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2f61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2f61a8:
    // 0x2f61a8: 0xc60003b4  lwc1        $f0, 0x3B4($s0)
    ctx->pc = 0x2f61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f61ac:
    // 0x2f61ac: 0x10000030  b           . + 4 + (0x30 << 2)
label_2f61b0:
    if (ctx->pc == 0x2F61B0u) {
        ctx->pc = 0x2F61B0u;
            // 0x2f61b0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x2F61B4u;
        goto label_2f61b4;
    }
    ctx->pc = 0x2F61ACu;
    {
        const bool branch_taken_0x2f61ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F61ACu;
            // 0x2f61b0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61ac) {
            ctx->pc = 0x2F6270u;
            goto label_2f6270;
        }
    }
    ctx->pc = 0x2F61B4u;
label_2f61b4:
    // 0x2f61b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2f61b8:
    // 0x2f61b8: 0x8e02033c  lw          $v0, 0x33C($s0)
    ctx->pc = 0x2f61b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
label_2f61bc:
    // 0x2f61bc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f61bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2f61c0:
    // 0x2f61c0: 0x8e020340  lw          $v0, 0x340($s0)
    ctx->pc = 0x2f61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 832)));
label_2f61c4:
    // 0x2f61c4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2f61c8:
    // 0x2f61c8: 0xc6000344  lwc1        $f0, 0x344($s0)
    ctx->pc = 0x2f61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f61cc:
    // 0x2f61cc: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2f61ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2f61d0:
    // 0x2f61d0: 0x8e020348  lw          $v0, 0x348($s0)
    ctx->pc = 0x2f61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 840)));
label_2f61d4:
    // 0x2f61d4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2f61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2f61d8:
    // 0x2f61d8: 0x8e02034c  lw          $v0, 0x34C($s0)
    ctx->pc = 0x2f61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 844)));
label_2f61dc:
    // 0x2f61dc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2f61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2f61e0:
    // 0x2f61e0: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f61e4:
    // 0x2f61e4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2f61e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2f61e8:
    // 0x2f61e8: 0xc6000354  lwc1        $f0, 0x354($s0)
    ctx->pc = 0x2f61e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f61ec:
    // 0x2f61ec: 0x10000020  b           . + 4 + (0x20 << 2)
label_2f61f0:
    if (ctx->pc == 0x2F61F0u) {
        ctx->pc = 0x2F61F0u;
            // 0x2f61f0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x2F61F4u;
        goto label_2f61f4;
    }
    ctx->pc = 0x2F61ECu;
    {
        const bool branch_taken_0x2f61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F61F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F61ECu;
            // 0x2f61f0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61ec) {
            ctx->pc = 0x2F6270u;
            goto label_2f6270;
        }
    }
    ctx->pc = 0x2F61F4u;
label_2f61f4:
    // 0x2f61f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f61f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2f61f8:
    // 0x2f61f8: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x2f61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
label_2f61fc:
    // 0x2f61fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f61fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2f6200:
    // 0x2f6200: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f6200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
label_2f6204:
    // 0x2f6204: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f6204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2f6208:
    // 0x2f6208: 0xc6000364  lwc1        $f0, 0x364($s0)
    ctx->pc = 0x2f6208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f620c:
    // 0x2f620c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2f620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2f6210:
    // 0x2f6210: 0x8e020368  lw          $v0, 0x368($s0)
    ctx->pc = 0x2f6210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_2f6214:
    // 0x2f6214: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2f6214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2f6218:
    // 0x2f6218: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2f6218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2f621c:
    // 0x2f621c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2f621cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2f6220:
    // 0x2f6220: 0x8e020370  lw          $v0, 0x370($s0)
    ctx->pc = 0x2f6220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 880)));
label_2f6224:
    // 0x2f6224: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2f6224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2f6228:
    // 0x2f6228: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x2f6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f622c:
    // 0x2f622c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2f6230:
    if (ctx->pc == 0x2F6230u) {
        ctx->pc = 0x2F6230u;
            // 0x2f6230: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x2F6234u;
        goto label_2f6234;
    }
    ctx->pc = 0x2F622Cu;
    {
        const bool branch_taken_0x2f622c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F622Cu;
            // 0x2f6230: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f622c) {
            ctx->pc = 0x2F6270u;
            goto label_2f6270;
        }
    }
    ctx->pc = 0x2F6234u;
label_2f6234:
    // 0x2f6234: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f6234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2f6238:
    // 0x2f6238: 0x8e02037c  lw          $v0, 0x37C($s0)
    ctx->pc = 0x2f6238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
label_2f623c:
    // 0x2f623c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f623cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2f6240:
    // 0x2f6240: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x2f6240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_2f6244:
    // 0x2f6244: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2f6244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2f6248:
    // 0x2f6248: 0xc6000384  lwc1        $f0, 0x384($s0)
    ctx->pc = 0x2f6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f624c:
    // 0x2f624c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2f624cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2f6250:
    // 0x2f6250: 0x8e020388  lw          $v0, 0x388($s0)
    ctx->pc = 0x2f6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_2f6254:
    // 0x2f6254: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2f6254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2f6258:
    // 0x2f6258: 0x8e02038c  lw          $v0, 0x38C($s0)
    ctx->pc = 0x2f6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_2f625c:
    // 0x2f625c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2f625cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_2f6260:
    // 0x2f6260: 0x8e020390  lw          $v0, 0x390($s0)
    ctx->pc = 0x2f6260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_2f6264:
    // 0x2f6264: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2f6264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2f6268:
    // 0x2f6268: 0xc6000394  lwc1        $f0, 0x394($s0)
    ctx->pc = 0x2f6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f626c:
    // 0x2f626c: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2f626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2f6270:
    // 0x2f6270: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2f6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2f6274:
    // 0x2f6274: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x2f6274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2f6278:
    // 0x2f6278: 0xc040180  jal         func_100600
label_2f627c:
    if (ctx->pc == 0x2F627Cu) {
        ctx->pc = 0x2F627Cu;
            // 0x2f627c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2F6280u;
        goto label_2f6280;
    }
    ctx->pc = 0x2F6278u;
    SET_GPR_U32(ctx, 31, 0x2F6280u);
    ctx->pc = 0x2F627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6278u;
            // 0x2f627c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6280u; }
        if (ctx->pc != 0x2F6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6280u; }
        if (ctx->pc != 0x2F6280u) { return; }
    }
    ctx->pc = 0x2F6280u;
label_2f6280:
    // 0x2f6280: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2f6284:
    if (ctx->pc == 0x2F6284u) {
        ctx->pc = 0x2F6284u;
            // 0x2f6284: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6288u;
        goto label_2f6288;
    }
    ctx->pc = 0x2F6280u;
    {
        const bool branch_taken_0x2f6280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6280u;
            // 0x2f6284: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6280) {
            ctx->pc = 0x2F62DCu;
            goto label_2f62dc;
        }
    }
    ctx->pc = 0x2F6288u;
label_2f6288:
    // 0x2f6288: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x2f6288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_2f628c:
    // 0x2f628c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f628cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_2f6290:
    // 0x2f6290: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2f6290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f6294:
    // 0x2f6294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f6294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f6298:
    // 0x2f6298: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f629c:
    // 0x2f629c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f629cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f62a0:
    // 0x2f62a0: 0x806911aa  lb          $t1, 0x11AA($v1)
    ctx->pc = 0x2f62a0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_2f62a4:
    // 0x2f62a4: 0x3445ab10  ori         $a1, $v0, 0xAB10
    ctx->pc = 0x2f62a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43792);
label_2f62a8:
    // 0x2f62a8: 0x8c6a0d98  lw          $t2, 0xD98($v1)
    ctx->pc = 0x2f62a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_2f62ac:
    // 0x2f62ac: 0x24081081  addiu       $t0, $zero, 0x1081
    ctx->pc = 0x2f62acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
label_2f62b0:
    // 0x2f62b0: 0xc0b9404  jal         func_2E5010
label_2f62b4:
    if (ctx->pc == 0x2F62B4u) {
        ctx->pc = 0x2F62B4u;
            // 0x2f62b4: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F62B8u;
        goto label_2f62b8;
    }
    ctx->pc = 0x2F62B0u;
    SET_GPR_U32(ctx, 31, 0x2F62B8u);
    ctx->pc = 0x2F62B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F62B0u;
            // 0x2f62b4: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F62B8u; }
        if (ctx->pc != 0x2F62B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F62B8u; }
        if (ctx->pc != 0x2F62B8u) { return; }
    }
    ctx->pc = 0x2F62B8u;
label_2f62b8:
    // 0x2f62b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2f62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2f62bc:
    // 0x2f62bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f62c0:
    // 0x2f62c0: 0x24634100  addiu       $v1, $v1, 0x4100
    ctx->pc = 0x2f62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16640));
label_2f62c4:
    // 0x2f62c4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2f62c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2f62c8:
    // 0x2f62c8: 0xae5300e0  sw          $s3, 0xE0($s2)
    ctx->pc = 0x2f62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 19));
label_2f62cc:
    // 0x2f62cc: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x2f62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_2f62d0:
    // 0x2f62d0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x2f62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_2f62d4:
    // 0x2f62d4: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x2f62d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_2f62d8:
    // 0x2f62d8: 0xae4200dc  sw          $v0, 0xDC($s2)
    ctx->pc = 0x2f62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
label_2f62dc:
    // 0x2f62dc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2f62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2f62e0:
    // 0x2f62e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2f62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2f62e4:
    // 0x2f62e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2f62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f62e8:
    // 0x2f62e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f62e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f62ec:
    // 0x2f62ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f62ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f62f0:
    // 0x2f62f0: 0x320f809  jalr        $t9
label_2f62f4:
    if (ctx->pc == 0x2F62F4u) {
        ctx->pc = 0x2F62F8u;
        goto label_2f62f8;
    }
    ctx->pc = 0x2F62F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F62F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F62F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F62F8u; }
            if (ctx->pc != 0x2F62F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F62F8u;
label_2f62f8:
    // 0x2f62f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f62f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f62fc:
    // 0x2f62fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f62fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f6300:
    // 0x2f6300: 0x5223000f  beql        $s1, $v1, . + 4 + (0xF << 2)
label_2f6304:
    if (ctx->pc == 0x2F6304u) {
        ctx->pc = 0x2F6304u;
            // 0x2f6304: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2F6308u;
        goto label_2f6308;
    }
    ctx->pc = 0x2F6300u;
    {
        const bool branch_taken_0x2f6300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6300) {
            ctx->pc = 0x2F6304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6300u;
            // 0x2f6304: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F6340u;
            goto label_2f6340;
        }
    }
    ctx->pc = 0x2F6308u;
label_2f6308:
    // 0x2f6308: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f6308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f630c:
    // 0x2f630c: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
label_2f6310:
    if (ctx->pc == 0x2F6310u) {
        ctx->pc = 0x2F6314u;
        goto label_2f6314;
    }
    ctx->pc = 0x2F630Cu;
    {
        const bool branch_taken_0x2f630c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f630c) {
            ctx->pc = 0x2F633Cu;
            goto label_2f633c;
        }
    }
    ctx->pc = 0x2F6314u;
label_2f6314:
    // 0x2f6314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f6318:
    // 0x2f6318: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
label_2f631c:
    if (ctx->pc == 0x2F631Cu) {
        ctx->pc = 0x2F6320u;
        goto label_2f6320;
    }
    ctx->pc = 0x2F6318u;
    {
        const bool branch_taken_0x2f6318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6318) {
            ctx->pc = 0x2F633Cu;
            goto label_2f633c;
        }
    }
    ctx->pc = 0x2F6320u;
label_2f6320:
    // 0x2f6320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6324:
    // 0x2f6324: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
label_2f6328:
    if (ctx->pc == 0x2F6328u) {
        ctx->pc = 0x2F632Cu;
        goto label_2f632c;
    }
    ctx->pc = 0x2F6324u;
    {
        const bool branch_taken_0x2f6324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6324) {
            ctx->pc = 0x2F633Cu;
            goto label_2f633c;
        }
    }
    ctx->pc = 0x2F632Cu;
label_2f632c:
    // 0x2f632c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2f6330:
    if (ctx->pc == 0x2F6330u) {
        ctx->pc = 0x2F6334u;
        goto label_2f6334;
    }
    ctx->pc = 0x2F632Cu;
    {
        const bool branch_taken_0x2f632c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f632c) {
            ctx->pc = 0x2F633Cu;
            goto label_2f633c;
        }
    }
    ctx->pc = 0x2F6334u;
label_2f6334:
    // 0x2f6334: 0x10000023  b           . + 4 + (0x23 << 2)
label_2f6338:
    if (ctx->pc == 0x2F6338u) {
        ctx->pc = 0x2F633Cu;
        goto label_2f633c;
    }
    ctx->pc = 0x2F6334u;
    {
        const bool branch_taken_0x2f6334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6334) {
            ctx->pc = 0x2F63C4u;
            goto label_2f63c4;
        }
    }
    ctx->pc = 0x2F633Cu;
label_2f633c:
    // 0x2f633c: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x2f633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_2f6340:
    // 0x2f6340: 0xc040180  jal         func_100600
label_2f6344:
    if (ctx->pc == 0x2F6344u) {
        ctx->pc = 0x2F6344u;
            // 0x2f6344: 0x261204b8  addiu       $s2, $s0, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1208));
        ctx->pc = 0x2F6348u;
        goto label_2f6348;
    }
    ctx->pc = 0x2F6340u;
    SET_GPR_U32(ctx, 31, 0x2F6348u);
    ctx->pc = 0x2F6344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6340u;
            // 0x2f6344: 0x261204b8  addiu       $s2, $s0, 0x4B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6348u; }
        if (ctx->pc != 0x2F6348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6348u; }
        if (ctx->pc != 0x2F6348u) { return; }
    }
    ctx->pc = 0x2F6348u;
label_2f6348:
    // 0x2f6348: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2f634c:
    if (ctx->pc == 0x2F634Cu) {
        ctx->pc = 0x2F634Cu;
            // 0x2f634c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F6350u;
        goto label_2f6350;
    }
    ctx->pc = 0x2F6348u;
    {
        const bool branch_taken_0x2f6348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F634Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6348u;
            // 0x2f634c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6348) {
            ctx->pc = 0x2F63C4u;
            goto label_2f63c4;
        }
    }
    ctx->pc = 0x2F6350u;
label_2f6350:
    // 0x2f6350: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x2f6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_2f6354:
    // 0x2f6354: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2f6354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_2f6358:
    // 0x2f6358: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f6358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f635c:
    // 0x2f635c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f635cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f6360:
    // 0x2f6360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f6364:
    // 0x2f6364: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f6364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f6368:
    // 0x2f6368: 0x806911aa  lb          $t1, 0x11AA($v1)
    ctx->pc = 0x2f6368u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_2f636c:
    // 0x2f636c: 0x3445ab10  ori         $a1, $v0, 0xAB10
    ctx->pc = 0x2f636cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43792);
label_2f6370:
    // 0x2f6370: 0x8c6a0d98  lw          $t2, 0xD98($v1)
    ctx->pc = 0x2f6370u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_2f6374:
    // 0x2f6374: 0x24081081  addiu       $t0, $zero, 0x1081
    ctx->pc = 0x2f6374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4225));
label_2f6378:
    // 0x2f6378: 0xc0b9404  jal         func_2E5010
label_2f637c:
    if (ctx->pc == 0x2F637Cu) {
        ctx->pc = 0x2F637Cu;
            // 0x2f637c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F6380u;
        goto label_2f6380;
    }
    ctx->pc = 0x2F6378u;
    SET_GPR_U32(ctx, 31, 0x2F6380u);
    ctx->pc = 0x2F637Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6378u;
            // 0x2f637c: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6380u; }
        if (ctx->pc != 0x2F6380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6380u; }
        if (ctx->pc != 0x2F6380u) { return; }
    }
    ctx->pc = 0x2F6380u;
label_2f6380:
    // 0x2f6380: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2f6380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_2f6384:
    // 0x2f6384: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f6384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2f6388:
    // 0x2f6388: 0x248483a0  addiu       $a0, $a0, -0x7C60
    ctx->pc = 0x2f6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935456));
label_2f638c:
    // 0x2f638c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2f638cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2f6390:
    // 0x2f6390: 0xae1100e0  sw          $s1, 0xE0($s0)
    ctx->pc = 0x2f6390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 17));
label_2f6394:
    // 0x2f6394: 0xae1600e4  sw          $s6, 0xE4($s0)
    ctx->pc = 0x2f6394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 22));
label_2f6398:
    // 0x2f6398: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x2f6398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_2f639c:
    // 0x2f639c: 0xae0300ec  sw          $v1, 0xEC($s0)
    ctx->pc = 0x2f639cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
label_2f63a0:
    // 0x2f63a0: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2f63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2f63a4:
    // 0x2f63a4: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x2f63a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
label_2f63a8:
    // 0x2f63a8: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x2f63a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
label_2f63ac:
    // 0x2f63ac: 0xae0300fc  sw          $v1, 0xFC($s0)
    ctx->pc = 0x2f63acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 3));
label_2f63b0:
    // 0x2f63b0: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2f63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_2f63b4:
    // 0x2f63b4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2f63b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2f63b8:
    // 0x2f63b8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x2f63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_2f63bc:
    // 0x2f63bc: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2f63bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2f63c0:
    // 0x2f63c0: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x2f63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_2f63c4:
    // 0x2f63c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f63c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f63c8:
    // 0x2f63c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f63c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f63cc:
    // 0x2f63cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f63ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f63d0:
    // 0x2f63d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f63d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f63d4:
    // 0x2f63d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f63d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f63d8:
    // 0x2f63d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f63d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f63dc:
    // 0x2f63dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f63dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f63e0:
    // 0x2f63e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f63e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f63e4:
    // 0x2f63e4: 0x3e00008  jr          $ra
label_2f63e8:
    if (ctx->pc == 0x2F63E8u) {
        ctx->pc = 0x2F63E8u;
            // 0x2f63e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F63ECu;
        goto label_2f63ec;
    }
    ctx->pc = 0x2F63E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F63E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F63E4u;
            // 0x2f63e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F63ECu;
label_2f63ec:
    // 0x2f63ec: 0x0  nop
    ctx->pc = 0x2f63ecu;
    // NOP
}
