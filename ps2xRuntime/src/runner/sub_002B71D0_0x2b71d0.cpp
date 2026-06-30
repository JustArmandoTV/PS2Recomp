#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B71D0
// Address: 0x2b71d0 - 0x2b7be0
void sub_002B71D0_0x2b71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B71D0_0x2b71d0");
#endif

    switch (ctx->pc) {
        case 0x2b721cu: goto label_2b721c;
        case 0x2b7270u: goto label_2b7270;
        case 0x2b7280u: goto label_2b7280;
        case 0x2b7290u: goto label_2b7290;
        case 0x2b729cu: goto label_2b729c;
        case 0x2b72d8u: goto label_2b72d8;
        case 0x2b72ecu: goto label_2b72ec;
        case 0x2b7300u: goto label_2b7300;
        case 0x2b7314u: goto label_2b7314;
        case 0x2b7328u: goto label_2b7328;
        case 0x2b7330u: goto label_2b7330;
        case 0x2b7338u: goto label_2b7338;
        case 0x2b7368u: goto label_2b7368;
        case 0x2b737cu: goto label_2b737c;
        case 0x2b7394u: goto label_2b7394;
        case 0x2b73d0u: goto label_2b73d0;
        case 0x2b73e4u: goto label_2b73e4;
        case 0x2b73f8u: goto label_2b73f8;
        case 0x2b740cu: goto label_2b740c;
        case 0x2b7420u: goto label_2b7420;
        case 0x2b7428u: goto label_2b7428;
        case 0x2b7430u: goto label_2b7430;
        case 0x2b7458u: goto label_2b7458;
        case 0x2b746cu: goto label_2b746c;
        case 0x2b7484u: goto label_2b7484;
        case 0x2b749cu: goto label_2b749c;
        case 0x2b74a4u: goto label_2b74a4;
        case 0x2b74acu: goto label_2b74ac;
        case 0x2b74c4u: goto label_2b74c4;
        case 0x2b74ccu: goto label_2b74cc;
        case 0x2b74dcu: goto label_2b74dc;
        case 0x2b74f4u: goto label_2b74f4;
        case 0x2b74fcu: goto label_2b74fc;
        case 0x2b7504u: goto label_2b7504;
        case 0x2b751cu: goto label_2b751c;
        case 0x2b7524u: goto label_2b7524;
        case 0x2b7534u: goto label_2b7534;
        case 0x2b7540u: goto label_2b7540;
        case 0x2b756cu: goto label_2b756c;
        case 0x2b75acu: goto label_2b75ac;
        case 0x2b75b8u: goto label_2b75b8;
        case 0x2b75ccu: goto label_2b75cc;
        case 0x2b75d8u: goto label_2b75d8;
        case 0x2b75ecu: goto label_2b75ec;
        case 0x2b7608u: goto label_2b7608;
        case 0x2b7618u: goto label_2b7618;
        case 0x2b7628u: goto label_2b7628;
        case 0x2b7638u: goto label_2b7638;
        case 0x2b7648u: goto label_2b7648;
        case 0x2b7658u: goto label_2b7658;
        case 0x2b7668u: goto label_2b7668;
        case 0x2b7678u: goto label_2b7678;
        case 0x2b7690u: goto label_2b7690;
        case 0x2b76a0u: goto label_2b76a0;
        case 0x2b76b0u: goto label_2b76b0;
        case 0x2b76d4u: goto label_2b76d4;
        case 0x2b7708u: goto label_2b7708;
        case 0x2b771cu: goto label_2b771c;
        case 0x2b7730u: goto label_2b7730;
        case 0x2b7744u: goto label_2b7744;
        case 0x2b7760u: goto label_2b7760;
        case 0x2b777cu: goto label_2b777c;
        case 0x2b7798u: goto label_2b7798;
        case 0x2b77d4u: goto label_2b77d4;
        case 0x2b78c8u: goto label_2b78c8;
        case 0x2b7960u: goto label_2b7960;
        case 0x2b797cu: goto label_2b797c;
        case 0x2b79a0u: goto label_2b79a0;
        case 0x2b79a8u: goto label_2b79a8;
        case 0x2b79b0u: goto label_2b79b0;
        case 0x2b79b8u: goto label_2b79b8;
        case 0x2b79c0u: goto label_2b79c0;
        case 0x2b79c8u: goto label_2b79c8;
        case 0x2b79d0u: goto label_2b79d0;
        case 0x2b79d8u: goto label_2b79d8;
        case 0x2b79e0u: goto label_2b79e0;
        case 0x2b79f0u: goto label_2b79f0;
        case 0x2b7a00u: goto label_2b7a00;
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a20u: goto label_2b7a20;
        case 0x2b7a30u: goto label_2b7a30;
        case 0x2b7a40u: goto label_2b7a40;
        case 0x2b7a50u: goto label_2b7a50;
        case 0x2b7a60u: goto label_2b7a60;
        case 0x2b7a70u: goto label_2b7a70;
        case 0x2b7a80u: goto label_2b7a80;
        case 0x2b7a90u: goto label_2b7a90;
        case 0x2b7aa0u: goto label_2b7aa0;
        case 0x2b7ab0u: goto label_2b7ab0;
        case 0x2b7ac0u: goto label_2b7ac0;
        case 0x2b7ad0u: goto label_2b7ad0;
        case 0x2b7ae0u: goto label_2b7ae0;
        case 0x2b7b00u: goto label_2b7b00;
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b48u: goto label_2b7b48;
        case 0x2b7b70u: goto label_2b7b70;
        case 0x2b7b94u: goto label_2b7b94;
        default: break;
    }

    ctx->pc = 0x2b71d0u;

    // 0x2b71d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b71d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b71d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b71d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b71dc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2b71dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2b71e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b71e4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b71e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b71e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b71e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b71ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b71ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b71f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b71f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b71f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2b71f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b71f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b71f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b71fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b71fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7200: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b7200u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b7204: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x2b7204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2b7208: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b7208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b720c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b720cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b7210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7214: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2B7214u;
    SET_GPR_U32(ctx, 31, 0x2B721Cu);
    ctx->pc = 0x2B7218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7214u;
            // 0x2b7218: 0x34458704  ori         $a1, $v0, 0x8704 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34564);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B721Cu; }
        if (ctx->pc != 0x2B721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B721Cu; }
        if (ctx->pc != 0x2B721Cu) { return; }
    }
    ctx->pc = 0x2B721Cu;
label_2b721c:
    // 0x2b721c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b721cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b7220: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b7220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b7224: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2b7224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2b7228: 0x2442cf40  addiu       $v0, $v0, -0x30C0
    ctx->pc = 0x2b7228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954816));
    // 0x2b722c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b722cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b7230: 0x26640440  addiu       $a0, $s3, 0x440
    ctx->pc = 0x2b7230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
    // 0x2b7234: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b7238: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2b7238u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2b723c: 0x2463cf68  addiu       $v1, $v1, -0x3098
    ctx->pc = 0x2b723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954856));
    // 0x2b7240: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b7240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b7244: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2b7244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2b7248: 0xc440c590  lwc1        $f0, -0x3A70($v0)
    ctx->pc = 0x2b7248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b724c: 0xae60053c  sw          $zero, 0x53C($s3)
    ctx->pc = 0x2b724cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1340), GPR_U32(ctx, 0));
    // 0x2b7250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7254: 0xae600540  sw          $zero, 0x540($s3)
    ctx->pc = 0x2b7254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1344), GPR_U32(ctx, 0));
    // 0x2b7258: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x2b7258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2b725c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b725cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7260: 0xe6600544  swc1        $f0, 0x544($s3)
    ctx->pc = 0x2b7260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1348), bits); }
    // 0x2b7264: 0xae620548  sw          $v0, 0x548($s3)
    ctx->pc = 0x2b7264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1352), GPR_U32(ctx, 2));
    // 0x2b7268: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7268u;
    SET_GPR_U32(ctx, 31, 0x2B7270u);
    ctx->pc = 0x2B726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7268u;
            // 0x2b726c: 0xae62054c  sw          $v0, 0x54C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7270u; }
        if (ctx->pc != 0x2B7270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7270u; }
        if (ctx->pc != 0x2B7270u) { return; }
    }
    ctx->pc = 0x2B7270u;
label_2b7270:
    // 0x2b7270: 0x26640494  addiu       $a0, $s3, 0x494
    ctx->pc = 0x2b7270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1172));
    // 0x2b7274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7278: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7278u;
    SET_GPR_U32(ctx, 31, 0x2B7280u);
    ctx->pc = 0x2B727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7278u;
            // 0x2b727c: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7280u; }
        if (ctx->pc != 0x2B7280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7280u; }
        if (ctx->pc != 0x2B7280u) { return; }
    }
    ctx->pc = 0x2B7280u;
label_2b7280:
    // 0x2b7280: 0x266404e8  addiu       $a0, $s3, 0x4E8
    ctx->pc = 0x2b7280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1256));
    // 0x2b7284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7288: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7288u;
    SET_GPR_U32(ctx, 31, 0x2B7290u);
    ctx->pc = 0x2B728Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7288u;
            // 0x2b728c: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7290u; }
        if (ctx->pc != 0x2B7290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7290u; }
        if (ctx->pc != 0x2B7290u) { return; }
    }
    ctx->pc = 0x2B7290u;
label_2b7290:
    // 0x2b7290: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x2b7290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
    // 0x2b7294: 0xc075368  jal         func_1D4DA0
    ctx->pc = 0x2B7294u;
    SET_GPR_U32(ctx, 31, 0x2B729Cu);
    ctx->pc = 0x2B7298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7294u;
            // 0x2b7298: 0xae600550  sw          $zero, 0x550($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DA0u;
    if (runtime->hasFunction(0x1D4DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B729Cu; }
        if (ctx->pc != 0x2B729Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DA0_0x1d4da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B729Cu; }
        if (ctx->pc != 0x2B729Cu) { return; }
    }
    ctx->pc = 0x2B729Cu;
label_2b729c:
    // 0x2b729c: 0xae7305e0  sw          $s3, 0x5E0($s3)
    ctx->pc = 0x2b729cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1504), GPR_U32(ctx, 19));
    // 0x2b72a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b72a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b72a4: 0xae600630  sw          $zero, 0x630($s3)
    ctx->pc = 0x2b72a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1584), GPR_U32(ctx, 0));
    // 0x2b72a8: 0x26700580  addiu       $s0, $s3, 0x580
    ctx->pc = 0x2b72a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
    // 0x2b72ac: 0xae600634  sw          $zero, 0x634($s3)
    ctx->pc = 0x2b72acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1588), GPR_U32(ctx, 0));
    // 0x2b72b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b72b4: 0xae600638  sw          $zero, 0x638($s3)
    ctx->pc = 0x2b72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1592), GPR_U32(ctx, 0));
    // 0x2b72b8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2b72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2b72bc: 0xa6600640  sh          $zero, 0x640($s3)
    ctx->pc = 0x2b72bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1600), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b72c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b72c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b72c4: 0xa6600642  sh          $zero, 0x642($s3)
    ctx->pc = 0x2b72c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1602), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b72c8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2b72c8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2b72cc: 0xa6620644  sh          $v0, 0x644($s3)
    ctx->pc = 0x2b72ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1604), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b72d0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B72D0u;
    SET_GPR_U32(ctx, 31, 0x2B72D8u);
    ctx->pc = 0x2B72D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B72D0u;
            // 0x2b72d4: 0xa6600646  sh          $zero, 0x646($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1606), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B72D8u; }
        if (ctx->pc != 0x2B72D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B72D8u; }
        if (ctx->pc != 0x2B72D8u) { return; }
    }
    ctx->pc = 0x2B72D8u;
label_2b72d8:
    // 0x2b72d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b72d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b72dc: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2b72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2b72e0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b72e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b72e4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B72E4u;
    SET_GPR_U32(ctx, 31, 0x2B72ECu);
    ctx->pc = 0x2B72E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B72E4u;
            // 0x2b72e8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B72ECu; }
        if (ctx->pc != 0x2B72ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B72ECu; }
        if (ctx->pc != 0x2B72ECu) { return; }
    }
    ctx->pc = 0x2B72ECu;
label_2b72ec:
    // 0x2b72ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b72ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b72f0: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2b72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b72f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b72f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b72f8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B72F8u;
    SET_GPR_U32(ctx, 31, 0x2B7300u);
    ctx->pc = 0x2B72FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B72F8u;
            // 0x2b72fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7300u; }
        if (ctx->pc != 0x2B7300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7300u; }
        if (ctx->pc != 0x2B7300u) { return; }
    }
    ctx->pc = 0x2B7300u;
label_2b7300:
    // 0x2b7300: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7304: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2b7304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2b7308: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7308u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b730c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B730Cu;
    SET_GPR_U32(ctx, 31, 0x2B7314u);
    ctx->pc = 0x2B7310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B730Cu;
            // 0x2b7310: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7314u; }
        if (ctx->pc != 0x2B7314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7314u; }
        if (ctx->pc != 0x2B7314u) { return; }
    }
    ctx->pc = 0x2B7314u;
label_2b7314:
    // 0x2b7314: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2b7314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x2b7318: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2b7318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2b731c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2b731cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2b7320: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7320u;
    SET_GPR_U32(ctx, 31, 0x2B7328u);
    ctx->pc = 0x2B7324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7320u;
            // 0x2b7324: 0xa2000108  sb          $zero, 0x108($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7328u; }
        if (ctx->pc != 0x2B7328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7328u; }
        if (ctx->pc != 0x2B7328u) { return; }
    }
    ctx->pc = 0x2B7328u;
label_2b7328:
    // 0x2b7328: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7328u;
    SET_GPR_U32(ctx, 31, 0x2B7330u);
    ctx->pc = 0x2B732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7328u;
            // 0x2b732c: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7330u; }
        if (ctx->pc != 0x2B7330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7330u; }
        if (ctx->pc != 0x2B7330u) { return; }
    }
    ctx->pc = 0x2B7330u;
label_2b7330:
    // 0x2b7330: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7330u;
    SET_GPR_U32(ctx, 31, 0x2B7338u);
    ctx->pc = 0x2B7334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7330u;
            // 0x2b7334: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7338u; }
        if (ctx->pc != 0x2B7338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7338u; }
        if (ctx->pc != 0x2B7338u) { return; }
    }
    ctx->pc = 0x2B7338u;
label_2b7338:
    // 0x2b7338: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b7338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b733c: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x2b733cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x2b7340: 0xc4541360  lwc1        $f20, 0x1360($v0)
    ctx->pc = 0x2b7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b7344: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b7344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b734c: 0xe6140110  swc1        $f20, 0x110($s0)
    ctx->pc = 0x2b734cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x2b7350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7354: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x2b7354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x2b7358: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x2b7358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x2b735c: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2b735cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x2b7360: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B7360u;
    SET_GPR_U32(ctx, 31, 0x2B7368u);
    ctx->pc = 0x2B7364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7360u;
            // 0x2b7364: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7368u; }
        if (ctx->pc != 0x2B7368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7368u; }
        if (ctx->pc != 0x2B7368u) { return; }
    }
    ctx->pc = 0x2B7368u;
label_2b7368:
    // 0x2b7368: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b736c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2b736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b7370: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7370u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7374: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7374u;
    SET_GPR_U32(ctx, 31, 0x2B737Cu);
    ctx->pc = 0x2B7378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7374u;
            // 0x2b7378: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B737Cu; }
        if (ctx->pc != 0x2B737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B737Cu; }
        if (ctx->pc != 0x2B737Cu) { return; }
    }
    ctx->pc = 0x2B737Cu;
label_2b737c:
    // 0x2b737c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b737cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7380: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2b7380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2b7384: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7388: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b7388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b738c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B738Cu;
    SET_GPR_U32(ctx, 31, 0x2B7394u);
    ctx->pc = 0x2B7390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B738Cu;
            // 0x2b7390: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7394u; }
        if (ctx->pc != 0x2B7394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7394u; }
        if (ctx->pc != 0x2B7394u) { return; }
    }
    ctx->pc = 0x2B7394u;
label_2b7394:
    // 0x2b7394: 0xae730710  sw          $s3, 0x710($s3)
    ctx->pc = 0x2b7394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1808), GPR_U32(ctx, 19));
    // 0x2b7398: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b739c: 0xae600760  sw          $zero, 0x760($s3)
    ctx->pc = 0x2b739cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1888), GPR_U32(ctx, 0));
    // 0x2b73a0: 0x267006b0  addiu       $s0, $s3, 0x6B0
    ctx->pc = 0x2b73a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1712));
    // 0x2b73a4: 0xae600764  sw          $zero, 0x764($s3)
    ctx->pc = 0x2b73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1892), GPR_U32(ctx, 0));
    // 0x2b73a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b73ac: 0xae600768  sw          $zero, 0x768($s3)
    ctx->pc = 0x2b73acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1896), GPR_U32(ctx, 0));
    // 0x2b73b0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2b73b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2b73b4: 0xa6600770  sh          $zero, 0x770($s3)
    ctx->pc = 0x2b73b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1904), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b73b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b73b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b73bc: 0xa6600772  sh          $zero, 0x772($s3)
    ctx->pc = 0x2b73bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1906), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b73c0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2b73c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2b73c4: 0xa6620774  sh          $v0, 0x774($s3)
    ctx->pc = 0x2b73c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1908), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b73c8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B73C8u;
    SET_GPR_U32(ctx, 31, 0x2B73D0u);
    ctx->pc = 0x2B73CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B73C8u;
            // 0x2b73cc: 0xa6600776  sh          $zero, 0x776($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1910), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73D0u; }
        if (ctx->pc != 0x2B73D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73D0u; }
        if (ctx->pc != 0x2B73D0u) { return; }
    }
    ctx->pc = 0x2B73D0u;
label_2b73d0:
    // 0x2b73d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b73d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b73d4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2b73d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2b73d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b73d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b73dc: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B73DCu;
    SET_GPR_U32(ctx, 31, 0x2B73E4u);
    ctx->pc = 0x2B73E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B73DCu;
            // 0x2b73e0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73E4u; }
        if (ctx->pc != 0x2B73E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73E4u; }
        if (ctx->pc != 0x2B73E4u) { return; }
    }
    ctx->pc = 0x2B73E4u;
label_2b73e4:
    // 0x2b73e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b73e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b73e8: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2b73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b73ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b73ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b73f0: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B73F0u;
    SET_GPR_U32(ctx, 31, 0x2B73F8u);
    ctx->pc = 0x2B73F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B73F0u;
            // 0x2b73f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73F8u; }
        if (ctx->pc != 0x2B73F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73F8u; }
        if (ctx->pc != 0x2B73F8u) { return; }
    }
    ctx->pc = 0x2B73F8u;
label_2b73f8:
    // 0x2b73f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b73f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b73fc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x2b73fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2b7400: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7400u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7404: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7404u;
    SET_GPR_U32(ctx, 31, 0x2B740Cu);
    ctx->pc = 0x2B7408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7404u;
            // 0x2b7408: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B740Cu; }
        if (ctx->pc != 0x2B740Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B740Cu; }
        if (ctx->pc != 0x2B740Cu) { return; }
    }
    ctx->pc = 0x2B740Cu;
label_2b740c:
    // 0x2b740c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x2b740cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x2b7410: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2b7410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2b7414: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2b7414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2b7418: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7418u;
    SET_GPR_U32(ctx, 31, 0x2B7420u);
    ctx->pc = 0x2B741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7418u;
            // 0x2b741c: 0xa2000108  sb          $zero, 0x108($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7420u; }
        if (ctx->pc != 0x2B7420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7420u; }
        if (ctx->pc != 0x2B7420u) { return; }
    }
    ctx->pc = 0x2B7420u;
label_2b7420:
    // 0x2b7420: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7420u;
    SET_GPR_U32(ctx, 31, 0x2B7428u);
    ctx->pc = 0x2B7424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7420u;
            // 0x2b7424: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7428u; }
        if (ctx->pc != 0x2B7428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7428u; }
        if (ctx->pc != 0x2B7428u) { return; }
    }
    ctx->pc = 0x2B7428u;
label_2b7428:
    // 0x2b7428: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7428u;
    SET_GPR_U32(ctx, 31, 0x2B7430u);
    ctx->pc = 0x2B742Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7428u;
            // 0x2b742c: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7430u; }
        if (ctx->pc != 0x2B7430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7430u; }
        if (ctx->pc != 0x2B7430u) { return; }
    }
    ctx->pc = 0x2B7430u;
label_2b7430:
    // 0x2b7430: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x2b7430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x2b7434: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b7434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7438: 0xe6140110  swc1        $f20, 0x110($s0)
    ctx->pc = 0x2b7438u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x2b743c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7440: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x2b7440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x2b7444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7448: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x2b7448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x2b744c: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x2b744cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x2b7450: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B7450u;
    SET_GPR_U32(ctx, 31, 0x2B7458u);
    ctx->pc = 0x2B7454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7450u;
            // 0x2b7454: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7458u; }
        if (ctx->pc != 0x2B7458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7458u; }
        if (ctx->pc != 0x2B7458u) { return; }
    }
    ctx->pc = 0x2B7458u;
label_2b7458:
    // 0x2b7458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b745c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2b745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b7460: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7460u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7464: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7464u;
    SET_GPR_U32(ctx, 31, 0x2B746Cu);
    ctx->pc = 0x2B7468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7464u;
            // 0x2b7468: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B746Cu; }
        if (ctx->pc != 0x2B746Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B746Cu; }
        if (ctx->pc != 0x2B746Cu) { return; }
    }
    ctx->pc = 0x2B746Cu;
label_2b746c:
    // 0x2b746c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7470: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2b7470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2b7474: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7478: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b7478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b747c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B747Cu;
    SET_GPR_U32(ctx, 31, 0x2B7484u);
    ctx->pc = 0x2B7480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B747Cu;
            // 0x2b7480: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7484u; }
        if (ctx->pc != 0x2B7484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7484u; }
        if (ctx->pc != 0x2B7484u) { return; }
    }
    ctx->pc = 0x2B7484u;
label_2b7484:
    // 0x2b7484: 0xae600870  sw          $zero, 0x870($s3)
    ctx->pc = 0x2b7484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2160), GPR_U32(ctx, 0));
    // 0x2b7488: 0x267007e0  addiu       $s0, $s3, 0x7E0
    ctx->pc = 0x2b7488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
    // 0x2b748c: 0xae600874  sw          $zero, 0x874($s3)
    ctx->pc = 0x2b748cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2164), GPR_U32(ctx, 0));
    // 0x2b7490: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2b7490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2b7494: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7494u;
    SET_GPR_U32(ctx, 31, 0x2B749Cu);
    ctx->pc = 0x2B7498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7494u;
            // 0x2b7498: 0xa2600878  sb          $zero, 0x878($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B749Cu; }
        if (ctx->pc != 0x2B749Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B749Cu; }
        if (ctx->pc != 0x2B749Cu) { return; }
    }
    ctx->pc = 0x2B749Cu;
label_2b749c:
    // 0x2b749c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B749Cu;
    SET_GPR_U32(ctx, 31, 0x2B74A4u);
    ctx->pc = 0x2B74A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B749Cu;
            // 0x2b74a0: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74A4u; }
        if (ctx->pc != 0x2B74A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74A4u; }
        if (ctx->pc != 0x2B74A4u) { return; }
    }
    ctx->pc = 0x2B74A4u;
label_2b74a4:
    // 0x2b74a4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B74A4u;
    SET_GPR_U32(ctx, 31, 0x2B74ACu);
    ctx->pc = 0x2B74A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74A4u;
            // 0x2b74a8: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74ACu; }
        if (ctx->pc != 0x2B74ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74ACu; }
        if (ctx->pc != 0x2B74ACu) { return; }
    }
    ctx->pc = 0x2B74ACu;
label_2b74ac:
    // 0x2b74ac: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2b74acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2b74b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b74b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b74b4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2b74b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2b74b8: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2b74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2b74bc: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B74BCu;
    SET_GPR_U32(ctx, 31, 0x2B74C4u);
    ctx->pc = 0x2B74C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74BCu;
            // 0x2b74c0: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74C4u; }
        if (ctx->pc != 0x2B74C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74C4u; }
        if (ctx->pc != 0x2B74C4u) { return; }
    }
    ctx->pc = 0x2B74C4u;
label_2b74c4:
    // 0x2b74c4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B74C4u;
    SET_GPR_U32(ctx, 31, 0x2B74CCu);
    ctx->pc = 0x2B74C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74C4u;
            // 0x2b74c8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74CCu; }
        if (ctx->pc != 0x2B74CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74CCu; }
        if (ctx->pc != 0x2B74CCu) { return; }
    }
    ctx->pc = 0x2B74CCu;
label_2b74cc:
    // 0x2b74cc: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b74ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b74d0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2b74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b74d4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B74D4u;
    SET_GPR_U32(ctx, 31, 0x2B74DCu);
    ctx->pc = 0x2B74D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74D4u;
            // 0x2b74d8: 0x24a518c0  addiu       $a1, $a1, 0x18C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74DCu; }
        if (ctx->pc != 0x2B74DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74DCu; }
        if (ctx->pc != 0x2B74DCu) { return; }
    }
    ctx->pc = 0x2B74DCu;
label_2b74dc:
    // 0x2b74dc: 0xae600920  sw          $zero, 0x920($s3)
    ctx->pc = 0x2b74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2336), GPR_U32(ctx, 0));
    // 0x2b74e0: 0x26700890  addiu       $s0, $s3, 0x890
    ctx->pc = 0x2b74e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
    // 0x2b74e4: 0xae600924  sw          $zero, 0x924($s3)
    ctx->pc = 0x2b74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2340), GPR_U32(ctx, 0));
    // 0x2b74e8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2b74e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2b74ec: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B74ECu;
    SET_GPR_U32(ctx, 31, 0x2B74F4u);
    ctx->pc = 0x2B74F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74ECu;
            // 0x2b74f0: 0xa2600928  sb          $zero, 0x928($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74F4u; }
        if (ctx->pc != 0x2B74F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74F4u; }
        if (ctx->pc != 0x2B74F4u) { return; }
    }
    ctx->pc = 0x2B74F4u;
label_2b74f4:
    // 0x2b74f4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B74F4u;
    SET_GPR_U32(ctx, 31, 0x2B74FCu);
    ctx->pc = 0x2B74F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74F4u;
            // 0x2b74f8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74FCu; }
        if (ctx->pc != 0x2B74FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B74FCu; }
        if (ctx->pc != 0x2B74FCu) { return; }
    }
    ctx->pc = 0x2B74FCu;
label_2b74fc:
    // 0x2b74fc: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B74FCu;
    SET_GPR_U32(ctx, 31, 0x2B7504u);
    ctx->pc = 0x2B7500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B74FCu;
            // 0x2b7500: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7504u; }
        if (ctx->pc != 0x2B7504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7504u; }
        if (ctx->pc != 0x2B7504u) { return; }
    }
    ctx->pc = 0x2B7504u;
label_2b7504:
    // 0x2b7504: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2b7504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2b7508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b750c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2b750cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2b7510: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2b7510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2b7514: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B7514u;
    SET_GPR_U32(ctx, 31, 0x2B751Cu);
    ctx->pc = 0x2B7518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7514u;
            // 0x2b7518: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B751Cu; }
        if (ctx->pc != 0x2B751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B751Cu; }
        if (ctx->pc != 0x2B751Cu) { return; }
    }
    ctx->pc = 0x2B751Cu;
label_2b751c:
    // 0x2b751c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B751Cu;
    SET_GPR_U32(ctx, 31, 0x2B7524u);
    ctx->pc = 0x2B7520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B751Cu;
            // 0x2b7520: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7524u; }
        if (ctx->pc != 0x2B7524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7524u; }
        if (ctx->pc != 0x2B7524u) { return; }
    }
    ctx->pc = 0x2B7524u;
label_2b7524:
    // 0x2b7524: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7528: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2b7528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2b752c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B752Cu;
    SET_GPR_U32(ctx, 31, 0x2B7534u);
    ctx->pc = 0x2B7530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B752Cu;
            // 0x2b7530: 0x24a518c0  addiu       $a1, $a1, 0x18C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7534u; }
        if (ctx->pc != 0x2B7534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7534u; }
        if (ctx->pc != 0x2B7534u) { return; }
    }
    ctx->pc = 0x2B7534u;
label_2b7534:
    // 0x2b7534: 0x26640940  addiu       $a0, $s3, 0x940
    ctx->pc = 0x2b7534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
    // 0x2b7538: 0xc142d20  jal         func_50B480
    ctx->pc = 0x2B7538u;
    SET_GPR_U32(ctx, 31, 0x2B7540u);
    ctx->pc = 0x2B753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7538u;
            // 0x2b753c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B480u;
    if (runtime->hasFunction(0x50B480u)) {
        auto targetFn = runtime->lookupFunction(0x50B480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7540u; }
        if (ctx->pc != 0x2B7540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B480_0x50b480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7540u; }
        if (ctx->pc != 0x2B7540u) { return; }
    }
    ctx->pc = 0x2B7540u;
label_2b7540:
    // 0x2b7540: 0xae730a50  sw          $s3, 0xA50($s3)
    ctx->pc = 0x2b7540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2640), GPR_U32(ctx, 19));
    // 0x2b7544: 0x26700a50  addiu       $s0, $s3, 0xA50
    ctx->pc = 0x2b7544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
    // 0x2b7548: 0xae600a54  sw          $zero, 0xA54($s3)
    ctx->pc = 0x2b7548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2644), GPR_U32(ctx, 0));
    // 0x2b754c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2b754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2b7550: 0xae600a64  sw          $zero, 0xA64($s3)
    ctx->pc = 0x2b7550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2660), GPR_U32(ctx, 0));
    // 0x2b7554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7558: 0xae600a68  sw          $zero, 0xA68($s3)
    ctx->pc = 0x2b7558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2664), GPR_U32(ctx, 0));
    // 0x2b755c: 0xae600a6c  sw          $zero, 0xA6C($s3)
    ctx->pc = 0x2b755cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2668), GPR_U32(ctx, 0));
    // 0x2b7560: 0xae600a70  sw          $zero, 0xA70($s3)
    ctx->pc = 0x2b7560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2672), GPR_U32(ctx, 0));
    // 0x2b7564: 0xc0adf84  jal         func_2B7E10
    ctx->pc = 0x2B7564u;
    SET_GPR_U32(ctx, 31, 0x2B756Cu);
    ctx->pc = 0x2B7568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7564u;
            // 0x2b7568: 0xae600a74  sw          $zero, 0xA74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7E10u;
    if (runtime->hasFunction(0x2B7E10u)) {
        auto targetFn = runtime->lookupFunction(0x2B7E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B756Cu; }
        if (ctx->pc != 0x2B756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7E10_0x2b7e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B756Cu; }
        if (ctx->pc != 0x2B756Cu) { return; }
    }
    ctx->pc = 0x2B756Cu;
label_2b756c:
    // 0x2b756c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2b756cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2b7570: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2b7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2b7574: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2b7574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2b7578: 0xc4408348  lwc1        $f0, -0x7CB8($v0)
    ctx->pc = 0x2b7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b757c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2b757cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2b7580: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2b7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2b7584: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2b7584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2b7588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b758c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2b758cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2b7590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7594: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2b7594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2b7598: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b759c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2b759cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2b75a0: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2b75a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2b75a4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B75A4u;
    SET_GPR_U32(ctx, 31, 0x2B75ACu);
    ctx->pc = 0x2B75A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75A4u;
            // 0x2b75a8: 0xa2020050  sb          $v0, 0x50($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ACu; }
        if (ctx->pc != 0x2B75ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ACu; }
        if (ctx->pc != 0x2B75ACu) { return; }
    }
    ctx->pc = 0x2B75ACu;
label_2b75ac:
    // 0x2b75ac: 0x240401d0  addiu       $a0, $zero, 0x1D0
    ctx->pc = 0x2b75acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x2b75b0: 0xc040180  jal         func_100600
    ctx->pc = 0x2B75B0u;
    SET_GPR_U32(ctx, 31, 0x2B75B8u);
    ctx->pc = 0x2B75B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75B0u;
            // 0x2b75b4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75B8u; }
        if (ctx->pc != 0x2B75B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75B8u; }
        if (ctx->pc != 0x2B75B8u) { return; }
    }
    ctx->pc = 0x2B75B8u;
label_2b75b8:
    // 0x2b75b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B75B8u;
    {
        const bool branch_taken_0x2b75b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b75b8) {
            ctx->pc = 0x2B75BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75B8u;
            // 0x2b75bc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B75D0u;
            goto label_2b75d0;
        }
    }
    ctx->pc = 0x2B75C0u;
    // 0x2b75c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b75c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75c4: 0xc0adf30  jal         func_2B7CC0
    ctx->pc = 0x2B75C4u;
    SET_GPR_U32(ctx, 31, 0x2B75CCu);
    ctx->pc = 0x2B75C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75C4u;
            // 0x2b75c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7CC0u;
    if (runtime->hasFunction(0x2B7CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2B7CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75CCu; }
        if (ctx->pc != 0x2B75CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7CC0_0x2b7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75CCu; }
        if (ctx->pc != 0x2B75CCu) { return; }
    }
    ctx->pc = 0x2B75CCu;
label_2b75cc:
    // 0x2b75cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2b75d0:
    // 0x2b75d0: 0xc040180  jal         func_100600
    ctx->pc = 0x2B75D0u;
    SET_GPR_U32(ctx, 31, 0x2B75D8u);
    ctx->pc = 0x2B75D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75D0u;
            // 0x2b75d4: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75D8u; }
        if (ctx->pc != 0x2B75D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75D8u; }
        if (ctx->pc != 0x2B75D8u) { return; }
    }
    ctx->pc = 0x2B75D8u;
label_2b75d8:
    // 0x2b75d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B75D8u;
    {
        const bool branch_taken_0x2b75d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b75d8) {
            ctx->pc = 0x2B75DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75D8u;
            // 0x2b75dc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B75F0u;
            goto label_2b75f0;
        }
    }
    ctx->pc = 0x2B75E0u;
    // 0x2b75e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b75e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b75e4: 0xc0adef8  jal         func_2B7BE0
    ctx->pc = 0x2B75E4u;
    SET_GPR_U32(ctx, 31, 0x2B75ECu);
    ctx->pc = 0x2B75E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B75E4u;
            // 0x2b75e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7BE0u;
    if (runtime->hasFunction(0x2B7BE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B7BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ECu; }
        if (ctx->pc != 0x2B75ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7BE0_0x2b7be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B75ECu; }
        if (ctx->pc != 0x2B75ECu) { return; }
    }
    ctx->pc = 0x2B75ECu;
label_2b75ec:
    // 0x2b75ec: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b75ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2b75f0:
    // 0x2b75f0: 0x26640ab0  addiu       $a0, $s3, 0xAB0
    ctx->pc = 0x2b75f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2736));
    // 0x2b75f4: 0xae600b90  sw          $zero, 0xB90($s3)
    ctx->pc = 0x2b75f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2960), GPR_U32(ctx, 0));
    // 0x2b75f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b75fc: 0xae600b94  sw          $zero, 0xB94($s3)
    ctx->pc = 0x2b75fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2964), GPR_U32(ctx, 0));
    // 0x2b7600: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B7600u;
    SET_GPR_U32(ctx, 31, 0x2B7608u);
    ctx->pc = 0x2B7604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7600u;
            // 0x2b7604: 0xae620bb0  sw          $v0, 0xBB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7608u; }
        if (ctx->pc != 0x2B7608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7608u; }
        if (ctx->pc != 0x2B7608u) { return; }
    }
    ctx->pc = 0x2B7608u;
label_2b7608:
    // 0x2b7608: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b760c: 0x26640b20  addiu       $a0, $s3, 0xB20
    ctx->pc = 0x2b760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2848));
    // 0x2b7610: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7610u;
    SET_GPR_U32(ctx, 31, 0x2B7618u);
    ctx->pc = 0x2B7614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7610u;
            // 0x2b7614: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7618u; }
        if (ctx->pc != 0x2B7618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7618u; }
        if (ctx->pc != 0x2B7618u) { return; }
    }
    ctx->pc = 0x2B7618u;
label_2b7618:
    // 0x2b7618: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b761c: 0x26640b30  addiu       $a0, $s3, 0xB30
    ctx->pc = 0x2b761cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2864));
    // 0x2b7620: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7620u;
    SET_GPR_U32(ctx, 31, 0x2B7628u);
    ctx->pc = 0x2B7624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7620u;
            // 0x2b7624: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7628u; }
        if (ctx->pc != 0x2B7628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7628u; }
        if (ctx->pc != 0x2B7628u) { return; }
    }
    ctx->pc = 0x2B7628u;
label_2b7628:
    // 0x2b7628: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b762c: 0x26640b40  addiu       $a0, $s3, 0xB40
    ctx->pc = 0x2b762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2880));
    // 0x2b7630: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7630u;
    SET_GPR_U32(ctx, 31, 0x2B7638u);
    ctx->pc = 0x2B7634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7630u;
            // 0x2b7634: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7638u; }
        if (ctx->pc != 0x2B7638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7638u; }
        if (ctx->pc != 0x2B7638u) { return; }
    }
    ctx->pc = 0x2B7638u;
label_2b7638:
    // 0x2b7638: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b763c: 0x26640b50  addiu       $a0, $s3, 0xB50
    ctx->pc = 0x2b763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2896));
    // 0x2b7640: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7640u;
    SET_GPR_U32(ctx, 31, 0x2B7648u);
    ctx->pc = 0x2B7644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7640u;
            // 0x2b7644: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7648u; }
        if (ctx->pc != 0x2B7648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7648u; }
        if (ctx->pc != 0x2B7648u) { return; }
    }
    ctx->pc = 0x2B7648u;
label_2b7648:
    // 0x2b7648: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b764c: 0x26640b60  addiu       $a0, $s3, 0xB60
    ctx->pc = 0x2b764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2912));
    // 0x2b7650: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7650u;
    SET_GPR_U32(ctx, 31, 0x2B7658u);
    ctx->pc = 0x2B7654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7650u;
            // 0x2b7654: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7658u; }
        if (ctx->pc != 0x2B7658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7658u; }
        if (ctx->pc != 0x2B7658u) { return; }
    }
    ctx->pc = 0x2B7658u;
label_2b7658:
    // 0x2b7658: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b765c: 0x26640b70  addiu       $a0, $s3, 0xB70
    ctx->pc = 0x2b765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2928));
    // 0x2b7660: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7660u;
    SET_GPR_U32(ctx, 31, 0x2B7668u);
    ctx->pc = 0x2B7664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7660u;
            // 0x2b7664: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7668u; }
        if (ctx->pc != 0x2B7668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7668u; }
        if (ctx->pc != 0x2B7668u) { return; }
    }
    ctx->pc = 0x2B7668u;
label_2b7668:
    // 0x2b7668: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b766c: 0x26640b80  addiu       $a0, $s3, 0xB80
    ctx->pc = 0x2b766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2944));
    // 0x2b7670: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7670u;
    SET_GPR_U32(ctx, 31, 0x2B7678u);
    ctx->pc = 0x2B7674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7670u;
            // 0x2b7674: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7678u; }
        if (ctx->pc != 0x2B7678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7678u; }
        if (ctx->pc != 0x2B7678u) { return; }
    }
    ctx->pc = 0x2B7678u;
label_2b7678:
    // 0x2b7678: 0xae600b90  sw          $zero, 0xB90($s3)
    ctx->pc = 0x2b7678u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2960), GPR_U32(ctx, 0));
    // 0x2b767c: 0x26640af0  addiu       $a0, $s3, 0xAF0
    ctx->pc = 0x2b767cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2800));
    // 0x2b7680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7684: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2b7684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b7688: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7688u;
    SET_GPR_U32(ctx, 31, 0x2B7690u);
    ctx->pc = 0x2B768Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7688u;
            // 0x2b768c: 0xae600b94  sw          $zero, 0xB94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7690u; }
        if (ctx->pc != 0x2B7690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7690u; }
        if (ctx->pc != 0x2B7690u) { return; }
    }
    ctx->pc = 0x2B7690u;
label_2b7690:
    // 0x2b7690: 0x26640afc  addiu       $a0, $s3, 0xAFC
    ctx->pc = 0x2b7690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2812));
    // 0x2b7694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7698: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7698u;
    SET_GPR_U32(ctx, 31, 0x2B76A0u);
    ctx->pc = 0x2B769Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7698u;
            // 0x2b769c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76A0u; }
        if (ctx->pc != 0x2B76A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76A0u; }
        if (ctx->pc != 0x2B76A0u) { return; }
    }
    ctx->pc = 0x2B76A0u;
label_2b76a0:
    // 0x2b76a0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b76a4: 0x26640b10  addiu       $a0, $s3, 0xB10
    ctx->pc = 0x2b76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2832));
    // 0x2b76a8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B76A8u;
    SET_GPR_U32(ctx, 31, 0x2B76B0u);
    ctx->pc = 0x2B76ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B76A8u;
            // 0x2b76ac: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76B0u; }
        if (ctx->pc != 0x2B76B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76B0u; }
        if (ctx->pc != 0x2B76B0u) { return; }
    }
    ctx->pc = 0x2B76B0u;
label_2b76b0:
    // 0x2b76b0: 0xae730bd0  sw          $s3, 0xBD0($s3)
    ctx->pc = 0x2b76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3024), GPR_U32(ctx, 19));
    // 0x2b76b4: 0x26640bc0  addiu       $a0, $s3, 0xBC0
    ctx->pc = 0x2b76b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3008));
    // 0x2b76b8: 0xae600bd4  sw          $zero, 0xBD4($s3)
    ctx->pc = 0x2b76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3028), GPR_U32(ctx, 0));
    // 0x2b76bc: 0xae600bd8  sw          $zero, 0xBD8($s3)
    ctx->pc = 0x2b76bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3032), GPR_U32(ctx, 0));
    // 0x2b76c0: 0xae600bdc  sw          $zero, 0xBDC($s3)
    ctx->pc = 0x2b76c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3036), GPR_U32(ctx, 0));
    // 0x2b76c4: 0xae600be0  sw          $zero, 0xBE0($s3)
    ctx->pc = 0x2b76c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3040), GPR_U32(ctx, 0));
    // 0x2b76c8: 0xae600be4  sw          $zero, 0xBE4($s3)
    ctx->pc = 0x2b76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3044), GPR_U32(ctx, 0));
    // 0x2b76cc: 0xc0fe000  jal         func_3F8000
    ctx->pc = 0x2B76CCu;
    SET_GPR_U32(ctx, 31, 0x2B76D4u);
    ctx->pc = 0x2B76D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B76CCu;
            // 0x2b76d0: 0xa2600be8  sb          $zero, 0xBE8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3048), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F8000u;
    if (runtime->hasFunction(0x3F8000u)) {
        auto targetFn = runtime->lookupFunction(0x3F8000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76D4u; }
        if (ctx->pc != 0x2B76D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F8000_0x3f8000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B76D4u; }
        if (ctx->pc != 0x2B76D4u) { return; }
    }
    ctx->pc = 0x2B76D4u;
label_2b76d4:
    // 0x2b76d4: 0xae600c30  sw          $zero, 0xC30($s3)
    ctx->pc = 0x2b76d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3120), GPR_U32(ctx, 0));
    // 0x2b76d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b76d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b76dc: 0xae600c34  sw          $zero, 0xC34($s3)
    ctx->pc = 0x2b76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3124), GPR_U32(ctx, 0));
    // 0x2b76e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b76e4: 0xae600c38  sw          $zero, 0xC38($s3)
    ctx->pc = 0x2b76e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3128), GPR_U32(ctx, 0));
    // 0x2b76e8: 0x26640bf0  addiu       $a0, $s3, 0xBF0
    ctx->pc = 0x2b76e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3056));
    // 0x2b76ec: 0xa6600c40  sh          $zero, 0xC40($s3)
    ctx->pc = 0x2b76ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3136), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b76f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b76f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b76f4: 0xa6600c42  sh          $zero, 0xC42($s3)
    ctx->pc = 0x2b76f4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3138), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b76f8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2b76f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2b76fc: 0xa6620c44  sh          $v0, 0xC44($s3)
    ctx->pc = 0x2b76fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3140), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7700: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7700u;
    SET_GPR_U32(ctx, 31, 0x2B7708u);
    ctx->pc = 0x2B7704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7700u;
            // 0x2b7704: 0xa6600c46  sh          $zero, 0xC46($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3142), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7708u; }
        if (ctx->pc != 0x2B7708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7708u; }
        if (ctx->pc != 0x2B7708u) { return; }
    }
    ctx->pc = 0x2B7708u;
label_2b7708:
    // 0x2b7708: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b770c: 0x26640c00  addiu       $a0, $s3, 0xC00
    ctx->pc = 0x2b770cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3072));
    // 0x2b7710: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7710u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7714: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7714u;
    SET_GPR_U32(ctx, 31, 0x2B771Cu);
    ctx->pc = 0x2B7718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7714u;
            // 0x2b7718: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B771Cu; }
        if (ctx->pc != 0x2B771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B771Cu; }
        if (ctx->pc != 0x2B771Cu) { return; }
    }
    ctx->pc = 0x2B771Cu;
label_2b771c:
    // 0x2b771c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b771cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7720: 0x26640c10  addiu       $a0, $s3, 0xC10
    ctx->pc = 0x2b7720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3088));
    // 0x2b7724: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7724u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b7728: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7728u;
    SET_GPR_U32(ctx, 31, 0x2B7730u);
    ctx->pc = 0x2B772Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7728u;
            // 0x2b772c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7730u; }
        if (ctx->pc != 0x2B7730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7730u; }
        if (ctx->pc != 0x2B7730u) { return; }
    }
    ctx->pc = 0x2B7730u;
label_2b7730:
    // 0x2b7730: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7734: 0x26640c20  addiu       $a0, $s3, 0xC20
    ctx->pc = 0x2b7734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3104));
    // 0x2b7738: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b7738u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b773c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B773Cu;
    SET_GPR_U32(ctx, 31, 0x2B7744u);
    ctx->pc = 0x2B7740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B773Cu;
            // 0x2b7740: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7744u; }
        if (ctx->pc != 0x2B7744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7744u; }
        if (ctx->pc != 0x2B7744u) { return; }
    }
    ctx->pc = 0x2B7744u;
label_2b7744:
    // 0x2b7744: 0xae600c60  sw          $zero, 0xC60($s3)
    ctx->pc = 0x2b7744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3168), GPR_U32(ctx, 0));
    // 0x2b7748: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b7748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b774c: 0xae600c64  sw          $zero, 0xC64($s3)
    ctx->pc = 0x2b774cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3172), GPR_U32(ctx, 0));
    // 0x2b7750: 0x26640c50  addiu       $a0, $s3, 0xC50
    ctx->pc = 0x2b7750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3152));
    // 0x2b7754: 0xa6620c68  sh          $v0, 0xC68($s3)
    ctx->pc = 0x2b7754u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3176), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b7758: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2B7758u;
    SET_GPR_U32(ctx, 31, 0x2B7760u);
    ctx->pc = 0x2B775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7758u;
            // 0x2b775c: 0xa6600c6a  sh          $zero, 0xC6A($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3178), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7760u; }
        if (ctx->pc != 0x2B7760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7760u; }
        if (ctx->pc != 0x2B7760u) { return; }
    }
    ctx->pc = 0x2B7760u;
label_2b7760:
    // 0x2b7760: 0xa6600c7c  sh          $zero, 0xC7C($s3)
    ctx->pc = 0x2b7760u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3196), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b7764: 0x26640c6c  addiu       $a0, $s3, 0xC6C
    ctx->pc = 0x2b7764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3180));
    // 0x2b7768: 0xa6600c7e  sh          $zero, 0xC7E($s3)
    ctx->pc = 0x2b7768u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3198), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b776c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b776cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7770: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b7770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b7774: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7774u;
    SET_GPR_U32(ctx, 31, 0x2B777Cu);
    ctx->pc = 0x2B7778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7774u;
            // 0x2b7778: 0xa6600c80  sh          $zero, 0xC80($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 3200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B777Cu; }
        if (ctx->pc != 0x2B777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B777Cu; }
        if (ctx->pc != 0x2B777Cu) { return; }
    }
    ctx->pc = 0x2B777Cu;
label_2b777c:
    // 0x2b777c: 0xae600d50  sw          $zero, 0xD50($s3)
    ctx->pc = 0x2b777cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3408), GPR_U32(ctx, 0));
    // 0x2b7780: 0x26640c90  addiu       $a0, $s3, 0xC90
    ctx->pc = 0x2b7780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
    // 0x2b7784: 0xae600d54  sw          $zero, 0xD54($s3)
    ctx->pc = 0x2b7784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3412), GPR_U32(ctx, 0));
    // 0x2b7788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b778c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2b778cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2b7790: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7790u;
    SET_GPR_U32(ctx, 31, 0x2B7798u);
    ctx->pc = 0x2B7794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7790u;
            // 0x2b7794: 0xae600d58  sw          $zero, 0xD58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7798u; }
        if (ctx->pc != 0x2B7798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7798u; }
        if (ctx->pc != 0x2B7798u) { return; }
    }
    ctx->pc = 0x2B7798u;
label_2b7798:
    // 0x2b7798: 0xae600d60  sw          $zero, 0xD60($s3)
    ctx->pc = 0x2b7798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3424), GPR_U32(ctx, 0));
    // 0x2b779c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2b77a0: 0xae600d64  sw          $zero, 0xD64($s3)
    ctx->pc = 0x2b77a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3428), GPR_U32(ctx, 0));
    // 0x2b77a4: 0x26640d80  addiu       $a0, $s3, 0xD80
    ctx->pc = 0x2b77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3456));
    // 0x2b77a8: 0xae600d68  sw          $zero, 0xD68($s3)
    ctx->pc = 0x2b77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3432), GPR_U32(ctx, 0));
    // 0x2b77ac: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x2b77acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2b77b0: 0xae600d6c  sw          $zero, 0xD6C($s3)
    ctx->pc = 0x2b77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3436), GPR_U32(ctx, 0));
    // 0x2b77b4: 0xae600d70  sw          $zero, 0xD70($s3)
    ctx->pc = 0x2b77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3440), GPR_U32(ctx, 0));
    // 0x2b77b8: 0xae600d74  sw          $zero, 0xD74($s3)
    ctx->pc = 0x2b77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3444), GPR_U32(ctx, 0));
    // 0x2b77bc: 0xae600d78  sw          $zero, 0xD78($s3)
    ctx->pc = 0x2b77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3448), GPR_U32(ctx, 0));
    // 0x2b77c0: 0xae600d7c  sw          $zero, 0xD7C($s3)
    ctx->pc = 0x2b77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3452), GPR_U32(ctx, 0));
    // 0x2b77c4: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x2b77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x2b77c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b77cc: 0xc058300  jal         func_160C00
    ctx->pc = 0x2B77CCu;
    SET_GPR_U32(ctx, 31, 0x2B77D4u);
    ctx->pc = 0x2B77D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B77CCu;
            // 0x2b77d0: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B77D4u; }
        if (ctx->pc != 0x2B77D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B77D4u; }
        if (ctx->pc != 0x2B77D4u) { return; }
    }
    ctx->pc = 0x2B77D4u;
label_2b77d4:
    // 0x2b77d4: 0xae600d94  sw          $zero, 0xD94($s3)
    ctx->pc = 0x2b77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3476), GPR_U32(ctx, 0));
    // 0x2b77d8: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2b77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2b77dc: 0xae600d98  sw          $zero, 0xD98($s3)
    ctx->pc = 0x2b77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3480), GPR_U32(ctx, 0));
    // 0x2b77e0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b77e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b77e4: 0xae620d9c  sw          $v0, 0xD9C($s3)
    ctx->pc = 0x2b77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 2));
    // 0x2b77e8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x2b77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2b77ec: 0xae600da0  sw          $zero, 0xDA0($s3)
    ctx->pc = 0x2b77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 0));
    // 0x2b77f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b77f4: 0xae600da4  sw          $zero, 0xDA4($s3)
    ctx->pc = 0x2b77f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3492), GPR_U32(ctx, 0));
    // 0x2b77f8: 0x26641150  addiu       $a0, $s3, 0x1150
    ctx->pc = 0x2b77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4432));
    // 0x2b77fc: 0xae600da8  sw          $zero, 0xDA8($s3)
    ctx->pc = 0x2b77fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3496), GPR_U32(ctx, 0));
    // 0x2b7800: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b7800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7804: 0xae600dac  sw          $zero, 0xDAC($s3)
    ctx->pc = 0x2b7804u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3500), GPR_U32(ctx, 0));
    // 0x2b7808: 0xae660db0  sw          $a2, 0xDB0($s3)
    ctx->pc = 0x2b7808u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3504), GPR_U32(ctx, 6));
    // 0x2b780c: 0xae660db4  sw          $a2, 0xDB4($s3)
    ctx->pc = 0x2b780cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3508), GPR_U32(ctx, 6));
    // 0x2b7810: 0xae630db8  sw          $v1, 0xDB8($s3)
    ctx->pc = 0x2b7810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 3));
    // 0x2b7814: 0xae620dbc  sw          $v0, 0xDBC($s3)
    ctx->pc = 0x2b7814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3516), GPR_U32(ctx, 2));
    // 0x2b7818: 0xae600dc0  sw          $zero, 0xDC0($s3)
    ctx->pc = 0x2b7818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3520), GPR_U32(ctx, 0));
    // 0x2b781c: 0xae600dc4  sw          $zero, 0xDC4($s3)
    ctx->pc = 0x2b781cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3524), GPR_U32(ctx, 0));
    // 0x2b7820: 0xae600dc8  sw          $zero, 0xDC8($s3)
    ctx->pc = 0x2b7820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3528), GPR_U32(ctx, 0));
    // 0x2b7824: 0xae600dcc  sw          $zero, 0xDCC($s3)
    ctx->pc = 0x2b7824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3532), GPR_U32(ctx, 0));
    // 0x2b7828: 0xae600dd0  sw          $zero, 0xDD0($s3)
    ctx->pc = 0x2b7828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3536), GPR_U32(ctx, 0));
    // 0x2b782c: 0xae600dd4  sw          $zero, 0xDD4($s3)
    ctx->pc = 0x2b782cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3540), GPR_U32(ctx, 0));
    // 0x2b7830: 0xae600dd8  sw          $zero, 0xDD8($s3)
    ctx->pc = 0x2b7830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3544), GPR_U32(ctx, 0));
    // 0x2b7834: 0xae600ddc  sw          $zero, 0xDDC($s3)
    ctx->pc = 0x2b7834u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3548), GPR_U32(ctx, 0));
    // 0x2b7838: 0xae620de0  sw          $v0, 0xDE0($s3)
    ctx->pc = 0x2b7838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3552), GPR_U32(ctx, 2));
    // 0x2b783c: 0xae600de4  sw          $zero, 0xDE4($s3)
    ctx->pc = 0x2b783cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3556), GPR_U32(ctx, 0));
    // 0x2b7840: 0xae600de8  sw          $zero, 0xDE8($s3)
    ctx->pc = 0x2b7840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3560), GPR_U32(ctx, 0));
    // 0x2b7844: 0xae600dec  sw          $zero, 0xDEC($s3)
    ctx->pc = 0x2b7844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3564), GPR_U32(ctx, 0));
    // 0x2b7848: 0xae620df0  sw          $v0, 0xDF0($s3)
    ctx->pc = 0x2b7848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3568), GPR_U32(ctx, 2));
    // 0x2b784c: 0xae600df4  sw          $zero, 0xDF4($s3)
    ctx->pc = 0x2b784cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3572), GPR_U32(ctx, 0));
    // 0x2b7850: 0xae600df8  sw          $zero, 0xDF8($s3)
    ctx->pc = 0x2b7850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3576), GPR_U32(ctx, 0));
    // 0x2b7854: 0xae600dfc  sw          $zero, 0xDFC($s3)
    ctx->pc = 0x2b7854u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3580), GPR_U32(ctx, 0));
    // 0x2b7858: 0xae600e00  sw          $zero, 0xE00($s3)
    ctx->pc = 0x2b7858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3584), GPR_U32(ctx, 0));
    // 0x2b785c: 0xae600e04  sw          $zero, 0xE04($s3)
    ctx->pc = 0x2b785cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3588), GPR_U32(ctx, 0));
    // 0x2b7860: 0xae620e08  sw          $v0, 0xE08($s3)
    ctx->pc = 0x2b7860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3592), GPR_U32(ctx, 2));
    // 0x2b7864: 0xae600e0c  sw          $zero, 0xE0C($s3)
    ctx->pc = 0x2b7864u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3596), GPR_U32(ctx, 0));
    // 0x2b7868: 0xae600e10  sw          $zero, 0xE10($s3)
    ctx->pc = 0x2b7868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3600), GPR_U32(ctx, 0));
    // 0x2b786c: 0xae600e14  sw          $zero, 0xE14($s3)
    ctx->pc = 0x2b786cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3604), GPR_U32(ctx, 0));
    // 0x2b7870: 0xae600e18  sw          $zero, 0xE18($s3)
    ctx->pc = 0x2b7870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3608), GPR_U32(ctx, 0));
    // 0x2b7874: 0xae600e28  sw          $zero, 0xE28($s3)
    ctx->pc = 0x2b7874u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3624), GPR_U32(ctx, 0));
    // 0x2b7878: 0xae600e2c  sw          $zero, 0xE2C($s3)
    ctx->pc = 0x2b7878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3628), GPR_U32(ctx, 0));
    // 0x2b787c: 0xae600e30  sw          $zero, 0xE30($s3)
    ctx->pc = 0x2b787cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3632), GPR_U32(ctx, 0));
    // 0x2b7880: 0xae600e34  sw          $zero, 0xE34($s3)
    ctx->pc = 0x2b7880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3636), GPR_U32(ctx, 0));
    // 0x2b7884: 0xae600e38  sw          $zero, 0xE38($s3)
    ctx->pc = 0x2b7884u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3640), GPR_U32(ctx, 0));
    // 0x2b7888: 0xa2600e3c  sb          $zero, 0xE3C($s3)
    ctx->pc = 0x2b7888u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3644), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b788c: 0xa2600e3d  sb          $zero, 0xE3D($s3)
    ctx->pc = 0x2b788cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3645), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7890: 0xa2600e3e  sb          $zero, 0xE3E($s3)
    ctx->pc = 0x2b7890u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3646), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7894: 0xa2600e3f  sb          $zero, 0xE3F($s3)
    ctx->pc = 0x2b7894u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3647), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7898: 0xae600e64  sw          $zero, 0xE64($s3)
    ctx->pc = 0x2b7898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3684), GPR_U32(ctx, 0));
    // 0x2b789c: 0xae600e68  sw          $zero, 0xE68($s3)
    ctx->pc = 0x2b789cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3688), GPR_U32(ctx, 0));
    // 0x2b78a0: 0xae600e6c  sw          $zero, 0xE6C($s3)
    ctx->pc = 0x2b78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3692), GPR_U32(ctx, 0));
    // 0x2b78a4: 0xae600e70  sw          $zero, 0xE70($s3)
    ctx->pc = 0x2b78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3696), GPR_U32(ctx, 0));
    // 0x2b78a8: 0xae600e74  sw          $zero, 0xE74($s3)
    ctx->pc = 0x2b78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3700), GPR_U32(ctx, 0));
    // 0x2b78ac: 0xae600e98  sw          $zero, 0xE98($s3)
    ctx->pc = 0x2b78acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3736), GPR_U32(ctx, 0));
    // 0x2b78b0: 0xae600e9c  sw          $zero, 0xE9C($s3)
    ctx->pc = 0x2b78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3740), GPR_U32(ctx, 0));
    // 0x2b78b4: 0xae601140  sw          $zero, 0x1140($s3)
    ctx->pc = 0x2b78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4416), GPR_U32(ctx, 0));
    // 0x2b78b8: 0xae601144  sw          $zero, 0x1144($s3)
    ctx->pc = 0x2b78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4420), GPR_U32(ctx, 0));
    // 0x2b78bc: 0xae601148  sw          $zero, 0x1148($s3)
    ctx->pc = 0x2b78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4424), GPR_U32(ctx, 0));
    // 0x2b78c0: 0xc12cac0  jal         func_4B2B00
    ctx->pc = 0x2B78C0u;
    SET_GPR_U32(ctx, 31, 0x2B78C8u);
    ctx->pc = 0x2B78C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B78C0u;
            // 0x2b78c4: 0xae60114c  sw          $zero, 0x114C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B2B00u;
    if (runtime->hasFunction(0x4B2B00u)) {
        auto targetFn = runtime->lookupFunction(0x4B2B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B78C8u; }
        if (ctx->pc != 0x2B78C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B2B00_0x4b2b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B78C8u; }
        if (ctx->pc != 0x2B78C8u) { return; }
    }
    ctx->pc = 0x2B78C8u;
label_2b78c8:
    // 0x2b78c8: 0xae60117c  sw          $zero, 0x117C($s3)
    ctx->pc = 0x2b78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4476), GPR_U32(ctx, 0));
    // 0x2b78cc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b78d0: 0xae601180  sw          $zero, 0x1180($s3)
    ctx->pc = 0x2b78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4480), GPR_U32(ctx, 0));
    // 0x2b78d4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2b78d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2b78d8: 0xae601188  sw          $zero, 0x1188($s3)
    ctx->pc = 0x2b78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4488), GPR_U32(ctx, 0));
    // 0x2b78dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b78dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b78e0: 0xae601190  sw          $zero, 0x1190($s3)
    ctx->pc = 0x2b78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4496), GPR_U32(ctx, 0));
    // 0x2b78e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b78e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b78e8: 0xae681194  sw          $t0, 0x1194($s3)
    ctx->pc = 0x2b78e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4500), GPR_U32(ctx, 8));
    // 0x2b78ec: 0xc440c6d8  lwc1        $f0, -0x3928($v0)
    ctx->pc = 0x2b78ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b78f0: 0xae601198  sw          $zero, 0x1198($s3)
    ctx->pc = 0x2b78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4504), GPR_U32(ctx, 0));
    // 0x2b78f4: 0x266411f4  addiu       $a0, $s3, 0x11F4
    ctx->pc = 0x2b78f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4596));
    // 0x2b78f8: 0xa660119c  sh          $zero, 0x119C($s3)
    ctx->pc = 0x2b78f8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4508), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b78fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b78fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7900: 0xa260119e  sb          $zero, 0x119E($s3)
    ctx->pc = 0x2b7900u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4510), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7904: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b7904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b7908: 0xa26711a1  sb          $a3, 0x11A1($s3)
    ctx->pc = 0x2b7908u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4513), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b790c: 0xa26711a4  sb          $a3, 0x11A4($s3)
    ctx->pc = 0x2b790cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4516), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7910: 0xa26711a5  sb          $a3, 0x11A5($s3)
    ctx->pc = 0x2b7910u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4517), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b7914: 0xa26011a6  sb          $zero, 0x11A6($s3)
    ctx->pc = 0x2b7914u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4518), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7918: 0xa26011a7  sb          $zero, 0x11A7($s3)
    ctx->pc = 0x2b7918u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4519), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b791c: 0xa26311a8  sb          $v1, 0x11A8($s3)
    ctx->pc = 0x2b791cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4520), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7920: 0xa26011a9  sb          $zero, 0x11A9($s3)
    ctx->pc = 0x2b7920u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4521), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7924: 0xa26311aa  sb          $v1, 0x11AA($s3)
    ctx->pc = 0x2b7924u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4522), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7928: 0xa26311ab  sb          $v1, 0x11AB($s3)
    ctx->pc = 0x2b7928u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4523), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b792c: 0xa26311ad  sb          $v1, 0x11AD($s3)
    ctx->pc = 0x2b792cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4525), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7930: 0xa26011c0  sb          $zero, 0x11C0($s3)
    ctx->pc = 0x2b7930u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4544), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7934: 0xae6011c4  sw          $zero, 0x11C4($s3)
    ctx->pc = 0x2b7934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4548), GPR_U32(ctx, 0));
    // 0x2b7938: 0xae6011c8  sw          $zero, 0x11C8($s3)
    ctx->pc = 0x2b7938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4552), GPR_U32(ctx, 0));
    // 0x2b793c: 0xa26011cc  sb          $zero, 0x11CC($s3)
    ctx->pc = 0x2b793cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4556), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7940: 0xae6811d0  sw          $t0, 0x11D0($s3)
    ctx->pc = 0x2b7940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4560), GPR_U32(ctx, 8));
    // 0x2b7944: 0xae6011d4  sw          $zero, 0x11D4($s3)
    ctx->pc = 0x2b7944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4564), GPR_U32(ctx, 0));
    // 0x2b7948: 0xae6011d8  sw          $zero, 0x11D8($s3)
    ctx->pc = 0x2b7948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4568), GPR_U32(ctx, 0));
    // 0x2b794c: 0xae6711dc  sw          $a3, 0x11DC($s3)
    ctx->pc = 0x2b794cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4572), GPR_U32(ctx, 7));
    // 0x2b7950: 0xae6011e0  sw          $zero, 0x11E0($s3)
    ctx->pc = 0x2b7950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4576), GPR_U32(ctx, 0));
    // 0x2b7954: 0xae6011e4  sw          $zero, 0x11E4($s3)
    ctx->pc = 0x2b7954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4580), GPR_U32(ctx, 0));
    // 0x2b7958: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7958u;
    SET_GPR_U32(ctx, 31, 0x2B7960u);
    ctx->pc = 0x2B795Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7958u;
            // 0x2b795c: 0xe6601204  swc1        $f0, 0x1204($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4612), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7960u; }
        if (ctx->pc != 0x2B7960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7960u; }
        if (ctx->pc != 0x2B7960u) { return; }
    }
    ctx->pc = 0x2B7960u;
label_2b7960:
    // 0x2b7960: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2b7960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2b7964: 0x26641208  addiu       $a0, $s3, 0x1208
    ctx->pc = 0x2b7964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4616));
    // 0x2b7968: 0xc440c6e0  lwc1        $f0, -0x3920($v0)
    ctx->pc = 0x2b7968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b796c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b796cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7970: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2b7970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b7974: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B7974u;
    SET_GPR_U32(ctx, 31, 0x2B797Cu);
    ctx->pc = 0x2B7978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7974u;
            // 0x2b7978: 0xe6601218  swc1        $f0, 0x1218($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4632), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B797Cu; }
        if (ctx->pc != 0x2B797Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B797Cu; }
        if (ctx->pc != 0x2B797Cu) { return; }
    }
    ctx->pc = 0x2B797Cu;
label_2b797c:
    // 0x2b797c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7984: 0xae621220  sw          $v0, 0x1220($s3)
    ctx->pc = 0x2b7984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4640), GPR_U32(ctx, 2));
    // 0x2b7988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b7988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b798c: 0xae601224  sw          $zero, 0x1224($s3)
    ctx->pc = 0x2b798cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4644), GPR_U32(ctx, 0));
    // 0x2b7990: 0xae601228  sw          $zero, 0x1228($s3)
    ctx->pc = 0x2b7990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4648), GPR_U32(ctx, 0));
    // 0x2b7994: 0xae60122c  sw          $zero, 0x122C($s3)
    ctx->pc = 0x2b7994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4652), GPR_U32(ctx, 0));
    // 0x2b7998: 0xc0785dc  jal         func_1E1770
    ctx->pc = 0x2B7998u;
    SET_GPR_U32(ctx, 31, 0x2B79A0u);
    ctx->pc = 0x2B799Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7998u;
            // 0x2b799c: 0xae601230  sw          $zero, 0x1230($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1770u;
    if (runtime->hasFunction(0x1E1770u)) {
        auto targetFn = runtime->lookupFunction(0x1E1770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79A0u; }
        if (ctx->pc != 0x2B79A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1770_0x1e1770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79A0u; }
        if (ctx->pc != 0x2B79A0u) { return; }
    }
    ctx->pc = 0x2B79A0u;
label_2b79a0:
    // 0x2b79a0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79A0u;
    SET_GPR_U32(ctx, 31, 0x2B79A8u);
    ctx->pc = 0x2B79A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79A0u;
            // 0x2b79a4: 0x26640140  addiu       $a0, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79A8u; }
        if (ctx->pc != 0x2B79A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79A8u; }
        if (ctx->pc != 0x2B79A8u) { return; }
    }
    ctx->pc = 0x2B79A8u;
label_2b79a8:
    // 0x2b79a8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79A8u;
    SET_GPR_U32(ctx, 31, 0x2B79B0u);
    ctx->pc = 0x2B79ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79A8u;
            // 0x2b79ac: 0x266400c0  addiu       $a0, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79B0u; }
        if (ctx->pc != 0x2B79B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79B0u; }
        if (ctx->pc != 0x2B79B0u) { return; }
    }
    ctx->pc = 0x2B79B0u;
label_2b79b0:
    // 0x2b79b0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79B0u;
    SET_GPR_U32(ctx, 31, 0x2B79B8u);
    ctx->pc = 0x2B79B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79B0u;
            // 0x2b79b4: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79B8u; }
        if (ctx->pc != 0x2B79B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79B8u; }
        if (ctx->pc != 0x2B79B8u) { return; }
    }
    ctx->pc = 0x2B79B8u;
label_2b79b8:
    // 0x2b79b8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79B8u;
    SET_GPR_U32(ctx, 31, 0x2B79C0u);
    ctx->pc = 0x2B79BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79B8u;
            // 0x2b79bc: 0x26640180  addiu       $a0, $s3, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79C0u; }
        if (ctx->pc != 0x2B79C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79C0u; }
        if (ctx->pc != 0x2B79C0u) { return; }
    }
    ctx->pc = 0x2B79C0u;
label_2b79c0:
    // 0x2b79c0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79C0u;
    SET_GPR_U32(ctx, 31, 0x2B79C8u);
    ctx->pc = 0x2B79C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79C0u;
            // 0x2b79c4: 0x266401c0  addiu       $a0, $s3, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79C8u; }
        if (ctx->pc != 0x2B79C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79C8u; }
        if (ctx->pc != 0x2B79C8u) { return; }
    }
    ctx->pc = 0x2B79C8u;
label_2b79c8:
    // 0x2b79c8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79C8u;
    SET_GPR_U32(ctx, 31, 0x2B79D0u);
    ctx->pc = 0x2B79CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79C8u;
            // 0x2b79cc: 0x26640200  addiu       $a0, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79D0u; }
        if (ctx->pc != 0x2B79D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79D0u; }
        if (ctx->pc != 0x2B79D0u) { return; }
    }
    ctx->pc = 0x2B79D0u;
label_2b79d0:
    // 0x2b79d0: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79D0u;
    SET_GPR_U32(ctx, 31, 0x2B79D8u);
    ctx->pc = 0x2B79D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79D0u;
            // 0x2b79d4: 0x26640240  addiu       $a0, $s3, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79D8u; }
        if (ctx->pc != 0x2B79D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79D8u; }
        if (ctx->pc != 0x2B79D8u) { return; }
    }
    ctx->pc = 0x2B79D8u;
label_2b79d8:
    // 0x2b79d8: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B79D8u;
    SET_GPR_U32(ctx, 31, 0x2B79E0u);
    ctx->pc = 0x2B79DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79D8u;
            // 0x2b79dc: 0x26640280  addiu       $a0, $s3, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79E0u; }
        if (ctx->pc != 0x2B79E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79E0u; }
        if (ctx->pc != 0x2B79E0u) { return; }
    }
    ctx->pc = 0x2B79E0u;
label_2b79e0:
    // 0x2b79e0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b79e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b79e4: 0x266402c0  addiu       $a0, $s3, 0x2C0
    ctx->pc = 0x2b79e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
    // 0x2b79e8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B79E8u;
    SET_GPR_U32(ctx, 31, 0x2B79F0u);
    ctx->pc = 0x2B79ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79E8u;
            // 0x2b79ec: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79F0u; }
        if (ctx->pc != 0x2B79F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B79F0u; }
        if (ctx->pc != 0x2B79F0u) { return; }
    }
    ctx->pc = 0x2B79F0u;
label_2b79f0:
    // 0x2b79f0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b79f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b79f4: 0x266402d0  addiu       $a0, $s3, 0x2D0
    ctx->pc = 0x2b79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 720));
    // 0x2b79f8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B79F8u;
    SET_GPR_U32(ctx, 31, 0x2B7A00u);
    ctx->pc = 0x2B79FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B79F8u;
            // 0x2b79fc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A00u; }
        if (ctx->pc != 0x2B7A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A00u; }
        if (ctx->pc != 0x2B7A00u) { return; }
    }
    ctx->pc = 0x2B7A00u;
label_2b7a00:
    // 0x2b7a00: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a04: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x2b7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
    // 0x2b7a08: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A08u;
    SET_GPR_U32(ctx, 31, 0x2B7A10u);
    ctx->pc = 0x2B7A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A08u;
            // 0x2b7a0c: 0x24a518d0  addiu       $a1, $a1, 0x18D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A10u; }
        if (ctx->pc != 0x2B7A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A10u; }
        if (ctx->pc != 0x2B7A10u) { return; }
    }
    ctx->pc = 0x2B7A10u;
label_2b7a10:
    // 0x2b7a10: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a14: 0x26640300  addiu       $a0, $s3, 0x300
    ctx->pc = 0x2b7a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x2b7a18: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A18u;
    SET_GPR_U32(ctx, 31, 0x2B7A20u);
    ctx->pc = 0x2B7A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A18u;
            // 0x2b7a1c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A20u; }
        if (ctx->pc != 0x2B7A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A20u; }
        if (ctx->pc != 0x2B7A20u) { return; }
    }
    ctx->pc = 0x2B7A20u;
label_2b7a20:
    // 0x2b7a20: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a24: 0x26640310  addiu       $a0, $s3, 0x310
    ctx->pc = 0x2b7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    // 0x2b7a28: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A28u;
    SET_GPR_U32(ctx, 31, 0x2B7A30u);
    ctx->pc = 0x2B7A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A28u;
            // 0x2b7a2c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A30u; }
        if (ctx->pc != 0x2B7A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A30u; }
        if (ctx->pc != 0x2B7A30u) { return; }
    }
    ctx->pc = 0x2B7A30u;
label_2b7a30:
    // 0x2b7a30: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a34: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x2b7a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
    // 0x2b7a38: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A38u;
    SET_GPR_U32(ctx, 31, 0x2B7A40u);
    ctx->pc = 0x2B7A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A38u;
            // 0x2b7a3c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A40u; }
        if (ctx->pc != 0x2B7A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A40u; }
        if (ctx->pc != 0x2B7A40u) { return; }
    }
    ctx->pc = 0x2B7A40u;
label_2b7a40:
    // 0x2b7a40: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a44: 0x266403d0  addiu       $a0, $s3, 0x3D0
    ctx->pc = 0x2b7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 976));
    // 0x2b7a48: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A48u;
    SET_GPR_U32(ctx, 31, 0x2B7A50u);
    ctx->pc = 0x2B7A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A48u;
            // 0x2b7a4c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A50u; }
        if (ctx->pc != 0x2B7A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A50u; }
        if (ctx->pc != 0x2B7A50u) { return; }
    }
    ctx->pc = 0x2B7A50u;
label_2b7a50:
    // 0x2b7a50: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a54: 0x26640380  addiu       $a0, $s3, 0x380
    ctx->pc = 0x2b7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
    // 0x2b7a58: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A58u;
    SET_GPR_U32(ctx, 31, 0x2B7A60u);
    ctx->pc = 0x2B7A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A58u;
            // 0x2b7a5c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A60u; }
        if (ctx->pc != 0x2B7A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A60u; }
        if (ctx->pc != 0x2B7A60u) { return; }
    }
    ctx->pc = 0x2B7A60u;
label_2b7a60:
    // 0x2b7a60: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a64: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x2b7a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x2b7a68: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A68u;
    SET_GPR_U32(ctx, 31, 0x2B7A70u);
    ctx->pc = 0x2B7A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A68u;
            // 0x2b7a6c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A70u; }
        if (ctx->pc != 0x2B7A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A70u; }
        if (ctx->pc != 0x2B7A70u) { return; }
    }
    ctx->pc = 0x2B7A70u;
label_2b7a70:
    // 0x2b7a70: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a74: 0x266403a0  addiu       $a0, $s3, 0x3A0
    ctx->pc = 0x2b7a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
    // 0x2b7a78: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A78u;
    SET_GPR_U32(ctx, 31, 0x2B7A80u);
    ctx->pc = 0x2B7A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A78u;
            // 0x2b7a7c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A80u; }
        if (ctx->pc != 0x2B7A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A80u; }
        if (ctx->pc != 0x2B7A80u) { return; }
    }
    ctx->pc = 0x2B7A80u;
label_2b7a80:
    // 0x2b7a80: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a84: 0x26640360  addiu       $a0, $s3, 0x360
    ctx->pc = 0x2b7a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
    // 0x2b7a88: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A88u;
    SET_GPR_U32(ctx, 31, 0x2B7A90u);
    ctx->pc = 0x2B7A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A88u;
            // 0x2b7a8c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A90u; }
        if (ctx->pc != 0x2B7A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7A90u; }
        if (ctx->pc != 0x2B7A90u) { return; }
    }
    ctx->pc = 0x2B7A90u;
label_2b7a90:
    // 0x2b7a90: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7a94: 0x26640370  addiu       $a0, $s3, 0x370
    ctx->pc = 0x2b7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 880));
    // 0x2b7a98: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7A98u;
    SET_GPR_U32(ctx, 31, 0x2B7AA0u);
    ctx->pc = 0x2B7A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7A98u;
            // 0x2b7a9c: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AA0u; }
        if (ctx->pc != 0x2B7AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AA0u; }
        if (ctx->pc != 0x2B7AA0u) { return; }
    }
    ctx->pc = 0x2B7AA0u;
label_2b7aa0:
    // 0x2b7aa0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7aa4: 0x26640330  addiu       $a0, $s3, 0x330
    ctx->pc = 0x2b7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    // 0x2b7aa8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7AA8u;
    SET_GPR_U32(ctx, 31, 0x2B7AB0u);
    ctx->pc = 0x2B7AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AA8u;
            // 0x2b7aac: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AB0u; }
        if (ctx->pc != 0x2B7AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AB0u; }
        if (ctx->pc != 0x2B7AB0u) { return; }
    }
    ctx->pc = 0x2B7AB0u;
label_2b7ab0:
    // 0x2b7ab0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7ab4: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x2b7ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
    // 0x2b7ab8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7AB8u;
    SET_GPR_U32(ctx, 31, 0x2B7AC0u);
    ctx->pc = 0x2B7ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AB8u;
            // 0x2b7abc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AC0u; }
        if (ctx->pc != 0x2B7AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AC0u; }
        if (ctx->pc != 0x2B7AC0u) { return; }
    }
    ctx->pc = 0x2B7AC0u;
label_2b7ac0:
    // 0x2b7ac0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7ac4: 0x266403c0  addiu       $a0, $s3, 0x3C0
    ctx->pc = 0x2b7ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 960));
    // 0x2b7ac8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7AC8u;
    SET_GPR_U32(ctx, 31, 0x2B7AD0u);
    ctx->pc = 0x2B7ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AC8u;
            // 0x2b7acc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AD0u; }
        if (ctx->pc != 0x2B7AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AD0u; }
        if (ctx->pc != 0x2B7AD0u) { return; }
    }
    ctx->pc = 0x2B7AD0u;
label_2b7ad0:
    // 0x2b7ad0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2b7ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2b7ad4: 0x26640350  addiu       $a0, $s3, 0x350
    ctx->pc = 0x2b7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
    // 0x2b7ad8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2B7AD8u;
    SET_GPR_U32(ctx, 31, 0x2B7AE0u);
    ctx->pc = 0x2B7ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AD8u;
            // 0x2b7adc: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AE0u; }
        if (ctx->pc != 0x2B7AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7AE0u; }
        if (ctx->pc != 0x2B7AE0u) { return; }
    }
    ctx->pc = 0x2B7AE0u;
label_2b7ae0:
    // 0x2b7ae0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b7ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7ae4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b7ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b7ae8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2b7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2b7aec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2b7aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2b7af0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b7af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b7af4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2b7af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b7af8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B7AF8u;
    SET_GPR_U32(ctx, 31, 0x2B7B00u);
    ctx->pc = 0x2B7AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7AF8u;
            // 0x2b7afc: 0x26640b80  addiu       $a0, $s3, 0xB80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B00u; }
        if (ctx->pc != 0x2B7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B00u; }
        if (ctx->pc != 0x2B7B00u) { return; }
    }
    ctx->pc = 0x2B7B00u;
label_2b7b00:
    // 0x2b7b00: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b7b04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b7b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b08: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b7b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b7b0c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2b7b0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b10: 0xae620b90  sw          $v0, 0xB90($s3)
    ctx->pc = 0x2b7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2960), GPR_U32(ctx, 2));
    // 0x2b7b14: 0xae620b94  sw          $v0, 0xB94($s3)
    ctx->pc = 0x2b7b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2964), GPR_U32(ctx, 2));
    // 0x2b7b18: 0xae600e1c  sw          $zero, 0xE1C($s3)
    ctx->pc = 0x2b7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3612), GPR_U32(ctx, 0));
    // 0x2b7b1c: 0xae600e20  sw          $zero, 0xE20($s3)
    ctx->pc = 0x2b7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3616), GPR_U32(ctx, 0));
    // 0x2b7b20: 0xae600e24  sw          $zero, 0xE24($s3)
    ctx->pc = 0x2b7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3620), GPR_U32(ctx, 0));
label_2b7b24:
    // 0x2b7b24: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2b7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b7b28: 0xac600ea0  sw          $zero, 0xEA0($v1)
    ctx->pc = 0x2b7b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3744), GPR_U32(ctx, 0));
    // 0x2b7b2c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x2b7b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b7b30: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2b7b30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2b7b34: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2b7b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7b38: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B7B38u;
    {
        const bool branch_taken_0x2b7b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B38u;
            // 0x2b7b3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b38) {
            ctx->pc = 0x2B7B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7b24;
        }
    }
    ctx->pc = 0x2B7B40u;
    // 0x2b7b40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b7b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b7b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b48:
    // 0x2b7b48: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2b7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b7b4c: 0xac800eb0  sw          $zero, 0xEB0($a0)
    ctx->pc = 0x2b7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3760), GPR_U32(ctx, 0));
    // 0x2b7b50: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2b7b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b7b54: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2b7b54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2b7b58: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2b7b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b7b5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B7B5Cu;
    {
        const bool branch_taken_0x2b7b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B5Cu;
            // 0x2b7b60: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7b5c) {
            ctx->pc = 0x2B7B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7b48;
        }
    }
    ctx->pc = 0x2B7B64u;
    // 0x2b7b64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b7b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b7b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b7b6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7b70:
    // 0x2b7b70: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x2b7b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2b7b74: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2b7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2b7b78: 0xaca00ec8  sw          $zero, 0xEC8($a1)
    ctx->pc = 0x2b7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3784), GPR_U32(ctx, 0));
    // 0x2b7b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7b80: 0xaca00ec4  sw          $zero, 0xEC4($a1)
    ctx->pc = 0x2b7b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3780), GPR_U32(ctx, 0));
    // 0x2b7b84: 0x24440f40  addiu       $a0, $v0, 0xF40
    ctx->pc = 0x2b7b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x2b7b88: 0xaca00ec0  sw          $zero, 0xEC0($a1)
    ctx->pc = 0x2b7b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3776), GPR_U32(ctx, 0));
    // 0x2b7b8c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x2B7B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B94u);
    ctx->pc = 0x2B7B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7B8Cu;
            // 0x2b7b90: 0xaca30ecc  sw          $v1, 0xECC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 3788), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B94u; }
        if (ctx->pc != 0x2B7B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7B94u; }
        if (ctx->pc != 0x2B7B94u) { return; }
    }
    ctx->pc = 0x2B7B94u;
label_2b7b94:
    // 0x2b7b94: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2b7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b7b98: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2b7b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2b7b9c: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2b7b9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2b7ba0: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x2b7ba0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x2b7ba4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2b7ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b7ba8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B7BA8u;
    {
        const bool branch_taken_0x2b7ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7BA8u;
            // 0x2b7bac: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ba8) {
            ctx->pc = 0x2B7B70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b7b70;
        }
    }
    ctx->pc = 0x2B7BB0u;
    // 0x2b7bb0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b7bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7bb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b7bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7bb8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b7bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7bbc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b7bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b7bc0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b7bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7bc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b7bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7bc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b7bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B7BCCu;
            // 0x2b7bd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7BD4u;
    // 0x2b7bd4: 0x0  nop
    ctx->pc = 0x2b7bd4u;
    // NOP
    // 0x2b7bd8: 0x0  nop
    ctx->pc = 0x2b7bd8u;
    // NOP
    // 0x2b7bdc: 0x0  nop
    ctx->pc = 0x2b7bdcu;
    // NOP
}
