#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5FF0
// Address: 0x1f5ff0 - 0x1f62d0
void sub_001F5FF0_0x1f5ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5FF0_0x1f5ff0");
#endif

    switch (ctx->pc) {
        case 0x1f5ff0u: goto label_1f5ff0;
        case 0x1f5ff4u: goto label_1f5ff4;
        case 0x1f5ff8u: goto label_1f5ff8;
        case 0x1f5ffcu: goto label_1f5ffc;
        case 0x1f6000u: goto label_1f6000;
        case 0x1f6004u: goto label_1f6004;
        case 0x1f6008u: goto label_1f6008;
        case 0x1f600cu: goto label_1f600c;
        case 0x1f6010u: goto label_1f6010;
        case 0x1f6014u: goto label_1f6014;
        case 0x1f6018u: goto label_1f6018;
        case 0x1f601cu: goto label_1f601c;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f6024u: goto label_1f6024;
        case 0x1f6028u: goto label_1f6028;
        case 0x1f602cu: goto label_1f602c;
        case 0x1f6030u: goto label_1f6030;
        case 0x1f6034u: goto label_1f6034;
        case 0x1f6038u: goto label_1f6038;
        case 0x1f603cu: goto label_1f603c;
        case 0x1f6040u: goto label_1f6040;
        case 0x1f6044u: goto label_1f6044;
        case 0x1f6048u: goto label_1f6048;
        case 0x1f604cu: goto label_1f604c;
        case 0x1f6050u: goto label_1f6050;
        case 0x1f6054u: goto label_1f6054;
        case 0x1f6058u: goto label_1f6058;
        case 0x1f605cu: goto label_1f605c;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6064u: goto label_1f6064;
        case 0x1f6068u: goto label_1f6068;
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f6074u: goto label_1f6074;
        case 0x1f6078u: goto label_1f6078;
        case 0x1f607cu: goto label_1f607c;
        case 0x1f6080u: goto label_1f6080;
        case 0x1f6084u: goto label_1f6084;
        case 0x1f6088u: goto label_1f6088;
        case 0x1f608cu: goto label_1f608c;
        case 0x1f6090u: goto label_1f6090;
        case 0x1f6094u: goto label_1f6094;
        case 0x1f6098u: goto label_1f6098;
        case 0x1f609cu: goto label_1f609c;
        case 0x1f60a0u: goto label_1f60a0;
        case 0x1f60a4u: goto label_1f60a4;
        case 0x1f60a8u: goto label_1f60a8;
        case 0x1f60acu: goto label_1f60ac;
        case 0x1f60b0u: goto label_1f60b0;
        case 0x1f60b4u: goto label_1f60b4;
        case 0x1f60b8u: goto label_1f60b8;
        case 0x1f60bcu: goto label_1f60bc;
        case 0x1f60c0u: goto label_1f60c0;
        case 0x1f60c4u: goto label_1f60c4;
        case 0x1f60c8u: goto label_1f60c8;
        case 0x1f60ccu: goto label_1f60cc;
        case 0x1f60d0u: goto label_1f60d0;
        case 0x1f60d4u: goto label_1f60d4;
        case 0x1f60d8u: goto label_1f60d8;
        case 0x1f60dcu: goto label_1f60dc;
        case 0x1f60e0u: goto label_1f60e0;
        case 0x1f60e4u: goto label_1f60e4;
        case 0x1f60e8u: goto label_1f60e8;
        case 0x1f60ecu: goto label_1f60ec;
        case 0x1f60f0u: goto label_1f60f0;
        case 0x1f60f4u: goto label_1f60f4;
        case 0x1f60f8u: goto label_1f60f8;
        case 0x1f60fcu: goto label_1f60fc;
        case 0x1f6100u: goto label_1f6100;
        case 0x1f6104u: goto label_1f6104;
        case 0x1f6108u: goto label_1f6108;
        case 0x1f610cu: goto label_1f610c;
        case 0x1f6110u: goto label_1f6110;
        case 0x1f6114u: goto label_1f6114;
        case 0x1f6118u: goto label_1f6118;
        case 0x1f611cu: goto label_1f611c;
        case 0x1f6120u: goto label_1f6120;
        case 0x1f6124u: goto label_1f6124;
        case 0x1f6128u: goto label_1f6128;
        case 0x1f612cu: goto label_1f612c;
        case 0x1f6130u: goto label_1f6130;
        case 0x1f6134u: goto label_1f6134;
        case 0x1f6138u: goto label_1f6138;
        case 0x1f613cu: goto label_1f613c;
        case 0x1f6140u: goto label_1f6140;
        case 0x1f6144u: goto label_1f6144;
        case 0x1f6148u: goto label_1f6148;
        case 0x1f614cu: goto label_1f614c;
        case 0x1f6150u: goto label_1f6150;
        case 0x1f6154u: goto label_1f6154;
        case 0x1f6158u: goto label_1f6158;
        case 0x1f615cu: goto label_1f615c;
        case 0x1f6160u: goto label_1f6160;
        case 0x1f6164u: goto label_1f6164;
        case 0x1f6168u: goto label_1f6168;
        case 0x1f616cu: goto label_1f616c;
        case 0x1f6170u: goto label_1f6170;
        case 0x1f6174u: goto label_1f6174;
        case 0x1f6178u: goto label_1f6178;
        case 0x1f617cu: goto label_1f617c;
        case 0x1f6180u: goto label_1f6180;
        case 0x1f6184u: goto label_1f6184;
        case 0x1f6188u: goto label_1f6188;
        case 0x1f618cu: goto label_1f618c;
        case 0x1f6190u: goto label_1f6190;
        case 0x1f6194u: goto label_1f6194;
        case 0x1f6198u: goto label_1f6198;
        case 0x1f619cu: goto label_1f619c;
        case 0x1f61a0u: goto label_1f61a0;
        case 0x1f61a4u: goto label_1f61a4;
        case 0x1f61a8u: goto label_1f61a8;
        case 0x1f61acu: goto label_1f61ac;
        case 0x1f61b0u: goto label_1f61b0;
        case 0x1f61b4u: goto label_1f61b4;
        case 0x1f61b8u: goto label_1f61b8;
        case 0x1f61bcu: goto label_1f61bc;
        case 0x1f61c0u: goto label_1f61c0;
        case 0x1f61c4u: goto label_1f61c4;
        case 0x1f61c8u: goto label_1f61c8;
        case 0x1f61ccu: goto label_1f61cc;
        case 0x1f61d0u: goto label_1f61d0;
        case 0x1f61d4u: goto label_1f61d4;
        case 0x1f61d8u: goto label_1f61d8;
        case 0x1f61dcu: goto label_1f61dc;
        case 0x1f61e0u: goto label_1f61e0;
        case 0x1f61e4u: goto label_1f61e4;
        case 0x1f61e8u: goto label_1f61e8;
        case 0x1f61ecu: goto label_1f61ec;
        case 0x1f61f0u: goto label_1f61f0;
        case 0x1f61f4u: goto label_1f61f4;
        case 0x1f61f8u: goto label_1f61f8;
        case 0x1f61fcu: goto label_1f61fc;
        case 0x1f6200u: goto label_1f6200;
        case 0x1f6204u: goto label_1f6204;
        case 0x1f6208u: goto label_1f6208;
        case 0x1f620cu: goto label_1f620c;
        case 0x1f6210u: goto label_1f6210;
        case 0x1f6214u: goto label_1f6214;
        case 0x1f6218u: goto label_1f6218;
        case 0x1f621cu: goto label_1f621c;
        case 0x1f6220u: goto label_1f6220;
        case 0x1f6224u: goto label_1f6224;
        case 0x1f6228u: goto label_1f6228;
        case 0x1f622cu: goto label_1f622c;
        case 0x1f6230u: goto label_1f6230;
        case 0x1f6234u: goto label_1f6234;
        case 0x1f6238u: goto label_1f6238;
        case 0x1f623cu: goto label_1f623c;
        case 0x1f6240u: goto label_1f6240;
        case 0x1f6244u: goto label_1f6244;
        case 0x1f6248u: goto label_1f6248;
        case 0x1f624cu: goto label_1f624c;
        case 0x1f6250u: goto label_1f6250;
        case 0x1f6254u: goto label_1f6254;
        case 0x1f6258u: goto label_1f6258;
        case 0x1f625cu: goto label_1f625c;
        case 0x1f6260u: goto label_1f6260;
        case 0x1f6264u: goto label_1f6264;
        case 0x1f6268u: goto label_1f6268;
        case 0x1f626cu: goto label_1f626c;
        case 0x1f6270u: goto label_1f6270;
        case 0x1f6274u: goto label_1f6274;
        case 0x1f6278u: goto label_1f6278;
        case 0x1f627cu: goto label_1f627c;
        case 0x1f6280u: goto label_1f6280;
        case 0x1f6284u: goto label_1f6284;
        case 0x1f6288u: goto label_1f6288;
        case 0x1f628cu: goto label_1f628c;
        case 0x1f6290u: goto label_1f6290;
        case 0x1f6294u: goto label_1f6294;
        case 0x1f6298u: goto label_1f6298;
        case 0x1f629cu: goto label_1f629c;
        case 0x1f62a0u: goto label_1f62a0;
        case 0x1f62a4u: goto label_1f62a4;
        case 0x1f62a8u: goto label_1f62a8;
        case 0x1f62acu: goto label_1f62ac;
        case 0x1f62b0u: goto label_1f62b0;
        case 0x1f62b4u: goto label_1f62b4;
        case 0x1f62b8u: goto label_1f62b8;
        case 0x1f62bcu: goto label_1f62bc;
        case 0x1f62c0u: goto label_1f62c0;
        case 0x1f62c4u: goto label_1f62c4;
        case 0x1f62c8u: goto label_1f62c8;
        case 0x1f62ccu: goto label_1f62cc;
        default: break;
    }

    ctx->pc = 0x1f5ff0u;

label_1f5ff0:
    // 0x1f5ff0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x1f5ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_1f5ff4:
    // 0x1f5ff4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f5ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f5ff8:
    // 0x1f5ff8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f5ffc:
    // 0x1f5ffc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f5ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f6000:
    // 0x1f6000: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1f6000u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f6004:
    // 0x1f6004: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f6004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f6008:
    // 0x1f6008: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1f6008u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f600c:
    // 0x1f600c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f6010:
    // 0x1f6010: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f6014:
    // 0x1f6014: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f6014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f6018:
    // 0x1f6018: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f6018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f601c:
    // 0x1f601c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f6020:
    // 0x1f6020: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f6020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f6024:
    // 0x1f6024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f6028:
    // 0x1f6028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f602c:
    // 0x1f602c: 0xafbe02bc  sw          $fp, 0x2BC($sp)
    ctx->pc = 0x1f602cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 30));
label_1f6030:
    // 0x1f6030: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1f6030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1f6034:
    // 0x1f6034: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x1f6034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
label_1f6038:
    // 0x1f6038: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f6038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f603c:
    // 0x1f603c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f603cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6040:
    // 0x1f6040: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f6040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f6044:
    // 0x1f6044: 0x320f809  jalr        $t9
label_1f6048:
    if (ctx->pc == 0x1F6048u) {
        ctx->pc = 0x1F6048u;
            // 0x1f6048: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F604Cu;
        goto label_1f604c;
    }
    ctx->pc = 0x1F6044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F604Cu);
        ctx->pc = 0x1F6048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6044u;
            // 0x1f6048: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F604Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F604Cu; }
            if (ctx->pc != 0x1F604Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F604Cu;
label_1f604c:
    // 0x1f604c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1f604cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6050:
    // 0x1f6050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f6054:
    // 0x1f6054: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f6058:
    // 0x1f6058: 0x320f809  jalr        $t9
label_1f605c:
    if (ctx->pc == 0x1F605Cu) {
        ctx->pc = 0x1F605Cu;
            // 0x1f605c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6060u;
        goto label_1f6060;
    }
    ctx->pc = 0x1F6058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6060u);
        ctx->pc = 0x1F605Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6058u;
            // 0x1f605c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6060u; }
            if (ctx->pc != 0x1F6060u) { return; }
        }
        }
    }
    ctx->pc = 0x1F6060u;
label_1f6060:
    // 0x1f6060: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f6064:
    // 0x1f6064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6068:
    // 0x1f6068: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f6068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f606c:
    // 0x1f606c: 0x320f809  jalr        $t9
label_1f6070:
    if (ctx->pc == 0x1F6070u) {
        ctx->pc = 0x1F6070u;
            // 0x1f6070: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x1F6074u;
        goto label_1f6074;
    }
    ctx->pc = 0x1F606Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6074u);
        ctx->pc = 0x1F6070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F606Cu;
            // 0x1f6070: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6074u; }
            if (ctx->pc != 0x1F6074u) { return; }
        }
        }
    }
    ctx->pc = 0x1F6074u;
label_1f6074:
    // 0x1f6074: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1f6074u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f6078:
    // 0x1f6078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f6078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f607c:
    // 0x1f607c: 0x18600086  blez        $v1, . + 4 + (0x86 << 2)
label_1f6080:
    if (ctx->pc == 0x1F6080u) {
        ctx->pc = 0x1F6080u;
            // 0x1f6080: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6084u;
        goto label_1f6084;
    }
    ctx->pc = 0x1F607Cu;
    {
        const bool branch_taken_0x1f607c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F6080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F607Cu;
            // 0x1f6080: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f607c) {
            ctx->pc = 0x1F6298u;
            goto label_1f6298;
        }
    }
    ctx->pc = 0x1F6084u;
label_1f6084:
    // 0x1f6084: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1f6084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1f6088:
    // 0x1f6088: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_1f608c:
    if (ctx->pc == 0x1F608Cu) {
        ctx->pc = 0x1F608Cu;
            // 0x1f608c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6090u;
        goto label_1f6090;
    }
    ctx->pc = 0x1F6088u;
    {
        const bool branch_taken_0x1f6088 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6088u;
            // 0x1f608c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6088) {
            ctx->pc = 0x1F60C0u;
            goto label_1f60c0;
        }
    }
    ctx->pc = 0x1F6090u;
label_1f6090:
    // 0x1f6090: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1f6090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1f6094:
    // 0x1f6094: 0x0  nop
    ctx->pc = 0x1f6094u;
    // NOP
label_1f6098:
    // 0x1f6098: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f609c:
    // 0x1f609c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1f60a0:
    if (ctx->pc == 0x1F60A0u) {
        ctx->pc = 0x1F60A4u;
        goto label_1f60a4;
    }
    ctx->pc = 0x1F609Cu;
    {
        const bool branch_taken_0x1f609c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f609c) {
            ctx->pc = 0x1F60B0u;
            goto label_1f60b0;
        }
    }
    ctx->pc = 0x1F60A4u;
label_1f60a4:
    // 0x1f60a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f60a8:
    if (ctx->pc == 0x1F60A8u) {
        ctx->pc = 0x1F60ACu;
        goto label_1f60ac;
    }
    ctx->pc = 0x1F60A4u;
    {
        const bool branch_taken_0x1f60a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60a4) {
            ctx->pc = 0x1F60C8u;
            goto label_1f60c8;
        }
    }
    ctx->pc = 0x1F60ACu;
label_1f60ac:
    // 0x1f60ac: 0x0  nop
    ctx->pc = 0x1f60acu;
    // NOP
label_1f60b0:
    // 0x1f60b0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f60b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1f60b4:
    // 0x1f60b4: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1f60b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f60b8:
    // 0x1f60b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1f60bc:
    if (ctx->pc == 0x1F60BCu) {
        ctx->pc = 0x1F60BCu;
            // 0x1f60bc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1F60C0u;
        goto label_1f60c0;
    }
    ctx->pc = 0x1F60B8u;
    {
        const bool branch_taken_0x1f60b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F60BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F60B8u;
            // 0x1f60bc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60b8) {
            ctx->pc = 0x1F6098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6098;
        }
    }
    ctx->pc = 0x1F60C0u;
label_1f60c0:
    // 0x1f60c0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f60c4:
    // 0x1f60c4: 0x0  nop
    ctx->pc = 0x1f60c4u;
    // NOP
label_1f60c8:
    // 0x1f60c8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f60c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f60cc:
    // 0x1f60cc: 0x27a402cc  addiu       $a0, $sp, 0x2CC
    ctx->pc = 0x1f60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_1f60d0:
    // 0x1f60d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f60d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f60d4:
    // 0x1f60d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f60d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f60d8:
    // 0x1f60d8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1f60d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f60dc:
    // 0x1f60dc: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f60e0:
    // 0x1f60e0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f60e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f60e4:
    // 0x1f60e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f60e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f60e8:
    // 0x1f60e8: 0x320f809  jalr        $t9
label_1f60ec:
    if (ctx->pc == 0x1F60ECu) {
        ctx->pc = 0x1F60ECu;
            // 0x1f60ec: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F60F0u;
        goto label_1f60f0;
    }
    ctx->pc = 0x1F60E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F60F0u);
        ctx->pc = 0x1F60ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F60E8u;
            // 0x1f60ec: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F60F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F60F0u; }
            if (ctx->pc != 0x1F60F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1F60F0u;
label_1f60f0:
    // 0x1f60f0: 0x27a202cc  addiu       $v0, $sp, 0x2CC
    ctx->pc = 0x1f60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_1f60f4:
    // 0x1f60f4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f60f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f60f8:
    // 0x1f60f8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_1f60fc:
    if (ctx->pc == 0x1F60FCu) {
        ctx->pc = 0x1F6100u;
        goto label_1f6100;
    }
    ctx->pc = 0x1F60F8u;
    {
        const bool branch_taken_0x1f60f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60f8) {
            ctx->pc = 0x1F6218u;
            goto label_1f6218;
        }
    }
    ctx->pc = 0x1F6100u;
label_1f6100:
    // 0x1f6100: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f6100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f6104:
    // 0x1f6104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f6108:
    // 0x1f6108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f610c:
    // 0x1f610c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f610cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f6110:
    // 0x1f6110: 0x320f809  jalr        $t9
label_1f6114:
    if (ctx->pc == 0x1F6114u) {
        ctx->pc = 0x1F6114u;
            // 0x1f6114: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1F6118u;
        goto label_1f6118;
    }
    ctx->pc = 0x1F6110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6118u);
        ctx->pc = 0x1F6114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6110u;
            // 0x1f6114: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6118u; }
            if (ctx->pc != 0x1F6118u) { return; }
        }
        }
    }
    ctx->pc = 0x1F6118u;
label_1f6118:
    // 0x1f6118: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x1f6118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
label_1f611c:
    // 0x1f611c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f6120:
    // 0x1f6120: 0x16a2002f  bne         $s5, $v0, . + 4 + (0x2F << 2)
label_1f6124:
    if (ctx->pc == 0x1F6124u) {
        ctx->pc = 0x1F6124u;
            // 0x1f6124: 0xafb002b4  sw          $s0, 0x2B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 16));
        ctx->pc = 0x1F6128u;
        goto label_1f6128;
    }
    ctx->pc = 0x1F6120u;
    {
        const bool branch_taken_0x1f6120 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6120u;
            // 0x1f6124: 0xafb002b4  sw          $s0, 0x2B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6120) {
            ctx->pc = 0x1F61E0u;
            goto label_1f61e0;
        }
    }
    ctx->pc = 0x1F6128u;
label_1f6128:
    // 0x1f6128: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x1f6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1f612c:
    // 0x1f612c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1f612cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1f6130:
    // 0x1f6130: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1f6130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1f6134:
    // 0x1f6134: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1f6134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1f6138:
    // 0x1f6138: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1f613c:
    if (ctx->pc == 0x1F613Cu) {
        ctx->pc = 0x1F6140u;
        goto label_1f6140;
    }
    ctx->pc = 0x1F6138u;
    {
        const bool branch_taken_0x1f6138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6138) {
            ctx->pc = 0x1F6150u;
            goto label_1f6150;
        }
    }
    ctx->pc = 0x1F6140u;
label_1f6140:
    // 0x1f6140: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x1f6140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1f6144:
    // 0x1f6144: 0xc0a728c  jal         func_29CA30
label_1f6148:
    if (ctx->pc == 0x1F6148u) {
        ctx->pc = 0x1F6148u;
            // 0x1f6148: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1F614Cu;
        goto label_1f614c;
    }
    ctx->pc = 0x1F6144u;
    SET_GPR_U32(ctx, 31, 0x1F614Cu);
    ctx->pc = 0x1F6148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6144u;
            // 0x1f6148: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F614Cu; }
        if (ctx->pc != 0x1F614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F614Cu; }
        if (ctx->pc != 0x1F614Cu) { return; }
    }
    ctx->pc = 0x1F614Cu;
label_1f614c:
    // 0x1f614c: 0x0  nop
    ctx->pc = 0x1f614cu;
    // NOP
label_1f6150:
    // 0x1f6150: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1f6154:
    // 0x1f6154: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1f6158:
    // 0x1f6158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f6158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f615c:
    // 0x1f615c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f6160:
    // 0x1f6160: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1f6160u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1f6164:
    // 0x1f6164: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f6164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f6168:
    // 0x1f6168: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1f6168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1f616c:
    // 0x1f616c: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1f616cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f6170:
    // 0x1f6170: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1f6170u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_1f6174:
    // 0x1f6174: 0x8fa902b0  lw          $t1, 0x2B0($sp)
    ctx->pc = 0x1f6174u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_1f6178:
    // 0x1f6178: 0x82430010  lb          $v1, 0x10($s2)
    ctx->pc = 0x1f6178u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_1f617c:
    // 0x1f617c: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1f617cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f6180:
    // 0x1f6180: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_1f6184:
    // 0x1f6184: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x1f6184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f6188:
    // 0x1f6188: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f6188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f618c:
    // 0x1f618c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6190:
    // 0x1f6190: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x1f6190u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_1f6194:
    // 0x1f6194: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f6198:
    if (ctx->pc == 0x1F6198u) {
        ctx->pc = 0x1F6198u;
            // 0x1f6198: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F619Cu;
        goto label_1f619c;
    }
    ctx->pc = 0x1F6194u;
    {
        const bool branch_taken_0x1f6194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6194u;
            // 0x1f6198: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6194) {
            ctx->pc = 0x1F61A4u;
            goto label_1f61a4;
        }
    }
    ctx->pc = 0x1F619Cu;
label_1f619c:
    // 0x1f619c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f61a0:
    if (ctx->pc == 0x1F61A0u) {
        ctx->pc = 0x1F61A0u;
            // 0x1f61a0: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->pc = 0x1F61A4u;
        goto label_1f61a4;
    }
    ctx->pc = 0x1F619Cu;
    {
        const bool branch_taken_0x1f619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F619Cu;
            // 0x1f61a0: 0x244805a0  addiu       $t0, $v0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f619c) {
            ctx->pc = 0x1F61A8u;
            goto label_1f61a8;
        }
    }
    ctx->pc = 0x1F61A4u;
label_1f61a4:
    // 0x1f61a4: 0x244801a0  addiu       $t0, $v0, 0x1A0
    ctx->pc = 0x1f61a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1f61a8:
    // 0x1f61a8: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1f61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1f61ac:
    // 0x1f61ac: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1f61acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f61b0:
    // 0x1f61b0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1f61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f61b4:
    // 0x1f61b4: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1f61b4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f61b8:
    // 0x1f61b8: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f61b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1f61bc:
    // 0x1f61bc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1f61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1f61c0:
    // 0x1f61c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f61c4:
    // 0x1f61c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f61c8:
    // 0x1f61c8: 0x8c4209a0  lw          $v0, 0x9A0($v0)
    ctx->pc = 0x1f61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2464)));
label_1f61cc:
    // 0x1f61cc: 0x40f809  jalr        $v0
label_1f61d0:
    if (ctx->pc == 0x1F61D0u) {
        ctx->pc = 0x1F61D4u;
        goto label_1f61d4;
    }
    ctx->pc = 0x1F61CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F61D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F61D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F61D4u; }
            if (ctx->pc != 0x1F61D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F61D4u;
label_1f61d4:
    // 0x1f61d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_1f61d8:
    if (ctx->pc == 0x1F61D8u) {
        ctx->pc = 0x1F61D8u;
            // 0x1f61d8: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1F61DCu;
        goto label_1f61dc;
    }
    ctx->pc = 0x1F61D4u;
    {
        const bool branch_taken_0x1f61d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61D4u;
            // 0x1f61d8: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61d4) {
            ctx->pc = 0x1F6270u;
            goto label_1f6270;
        }
    }
    ctx->pc = 0x1F61DCu;
label_1f61dc:
    // 0x1f61dc: 0x0  nop
    ctx->pc = 0x1f61dcu;
    // NOP
label_1f61e0:
    // 0x1f61e0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1f61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1f61e4:
    // 0x1f61e4: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1f61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1f61e8:
    // 0x1f61e8: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1f61ec:
    // 0x1f61ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f61ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f61f0:
    // 0x1f61f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1f61f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f61f4:
    // 0x1f61f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f61f8:
    // 0x1f61f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f61fc:
    // 0x1f61fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f61fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6200:
    // 0x1f6200: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1f6200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1f6204:
    // 0x1f6204: 0x320f809  jalr        $t9
label_1f6208:
    if (ctx->pc == 0x1F6208u) {
        ctx->pc = 0x1F6208u;
            // 0x1f6208: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F620Cu;
        goto label_1f620c;
    }
    ctx->pc = 0x1F6204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F620Cu);
        ctx->pc = 0x1F6208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6204u;
            // 0x1f6208: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F620Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F620Cu; }
            if (ctx->pc != 0x1F620Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F620Cu;
label_1f620c:
    // 0x1f620c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1f6210:
    if (ctx->pc == 0x1F6210u) {
        ctx->pc = 0x1F6214u;
        goto label_1f6214;
    }
    ctx->pc = 0x1F620Cu;
    {
        const bool branch_taken_0x1f620c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f620c) {
            ctx->pc = 0x1F6270u;
            goto label_1f6270;
        }
    }
    ctx->pc = 0x1F6214u;
label_1f6214:
    // 0x1f6214: 0x0  nop
    ctx->pc = 0x1f6214u;
    // NOP
label_1f6218:
    // 0x1f6218: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f6218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f621c:
    // 0x1f621c: 0x12a20014  beq         $s5, $v0, . + 4 + (0x14 << 2)
label_1f6220:
    if (ctx->pc == 0x1F6220u) {
        ctx->pc = 0x1F6224u;
        goto label_1f6224;
    }
    ctx->pc = 0x1F621Cu;
    {
        const bool branch_taken_0x1f621c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f621c) {
            ctx->pc = 0x1F6270u;
            goto label_1f6270;
        }
    }
    ctx->pc = 0x1F6224u;
label_1f6224:
    // 0x1f6224: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1f6224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1f6228:
    // 0x1f6228: 0x15a8c0  sll         $s5, $s5, 3
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1f622c:
    // 0x1f622c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1f622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1f6230:
    // 0x1f6230: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1f6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1f6234:
    // 0x1f6234: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f6234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6238:
    // 0x1f6238: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1f6238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1f623c:
    // 0x1f623c: 0x320f809  jalr        $t9
label_1f6240:
    if (ctx->pc == 0x1F6240u) {
        ctx->pc = 0x1F6240u;
            // 0x1f6240: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6244u;
        goto label_1f6244;
    }
    ctx->pc = 0x1F623Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6244u);
        ctx->pc = 0x1F6240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F623Cu;
            // 0x1f6240: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6244u; }
            if (ctx->pc != 0x1F6244u) { return; }
        }
        }
    }
    ctx->pc = 0x1F6244u;
label_1f6244:
    // 0x1f6244: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1f6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_1f6248:
    // 0x1f6248: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f624c:
    // 0x1f624c: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1f624cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_1f6250:
    // 0x1f6250: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1f6254:
    // 0x1f6254: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f6254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f6258:
    // 0x1f6258: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f625c:
    // 0x1f625c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f6260:
    // 0x1f6260: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1f6260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1f6264:
    // 0x1f6264: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f6264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f6268:
    // 0x1f6268: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1f6268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f626c:
    // 0x1f626c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f626cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f6270:
    // 0x1f6270: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f6270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f6274:
    // 0x1f6274: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6278:
    // 0x1f6278: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f6278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f627c:
    // 0x1f627c: 0x320f809  jalr        $t9
label_1f6280:
    if (ctx->pc == 0x1F6280u) {
        ctx->pc = 0x1F6280u;
            // 0x1f6280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6284u;
        goto label_1f6284;
    }
    ctx->pc = 0x1F627Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F6284u);
        ctx->pc = 0x1F6280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F627Cu;
            // 0x1f6280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F6284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F6284u; }
            if (ctx->pc != 0x1F6284u) { return; }
        }
        }
    }
    ctx->pc = 0x1F6284u;
label_1f6284:
    // 0x1f6284: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1f6284u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f6288:
    // 0x1f6288: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1f6288u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1f628c:
    // 0x1f628c: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x1f628cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f6290:
    // 0x1f6290: 0x1460ff7c  bnez        $v1, . + 4 + (-0x84 << 2)
label_1f6294:
    if (ctx->pc == 0x1F6294u) {
        ctx->pc = 0x1F6294u;
            // 0x1f6294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F6298u;
        goto label_1f6298;
    }
    ctx->pc = 0x1F6290u;
    {
        const bool branch_taken_0x1f6290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6290u;
            // 0x1f6294: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6290) {
            ctx->pc = 0x1F6084u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6084;
        }
    }
    ctx->pc = 0x1F6298u;
label_1f6298:
    // 0x1f6298: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f6298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f629c:
    // 0x1f629c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f629cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f62a0:
    // 0x1f62a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f62a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f62a4:
    // 0x1f62a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f62a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f62a8:
    // 0x1f62a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f62a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f62ac:
    // 0x1f62ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f62acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f62b0:
    // 0x1f62b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f62b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f62b4:
    // 0x1f62b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f62b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f62b8:
    // 0x1f62b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f62b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f62bc:
    // 0x1f62bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f62bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f62c0:
    // 0x1f62c0: 0x3e00008  jr          $ra
label_1f62c4:
    if (ctx->pc == 0x1F62C4u) {
        ctx->pc = 0x1F62C4u;
            // 0x1f62c4: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x1F62C8u;
        goto label_1f62c8;
    }
    ctx->pc = 0x1F62C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F62C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F62C0u;
            // 0x1f62c4: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F62C8u;
label_1f62c8:
    // 0x1f62c8: 0x0  nop
    ctx->pc = 0x1f62c8u;
    // NOP
label_1f62cc:
    // 0x1f62cc: 0x0  nop
    ctx->pc = 0x1f62ccu;
    // NOP
}
