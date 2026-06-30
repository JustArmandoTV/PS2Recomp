#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6100
// Address: 0x4a6100 - 0x4a6390
void sub_004A6100_0x4a6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6100_0x4a6100");
#endif

    switch (ctx->pc) {
        case 0x4a6100u: goto label_4a6100;
        case 0x4a6104u: goto label_4a6104;
        case 0x4a6108u: goto label_4a6108;
        case 0x4a610cu: goto label_4a610c;
        case 0x4a6110u: goto label_4a6110;
        case 0x4a6114u: goto label_4a6114;
        case 0x4a6118u: goto label_4a6118;
        case 0x4a611cu: goto label_4a611c;
        case 0x4a6120u: goto label_4a6120;
        case 0x4a6124u: goto label_4a6124;
        case 0x4a6128u: goto label_4a6128;
        case 0x4a612cu: goto label_4a612c;
        case 0x4a6130u: goto label_4a6130;
        case 0x4a6134u: goto label_4a6134;
        case 0x4a6138u: goto label_4a6138;
        case 0x4a613cu: goto label_4a613c;
        case 0x4a6140u: goto label_4a6140;
        case 0x4a6144u: goto label_4a6144;
        case 0x4a6148u: goto label_4a6148;
        case 0x4a614cu: goto label_4a614c;
        case 0x4a6150u: goto label_4a6150;
        case 0x4a6154u: goto label_4a6154;
        case 0x4a6158u: goto label_4a6158;
        case 0x4a615cu: goto label_4a615c;
        case 0x4a6160u: goto label_4a6160;
        case 0x4a6164u: goto label_4a6164;
        case 0x4a6168u: goto label_4a6168;
        case 0x4a616cu: goto label_4a616c;
        case 0x4a6170u: goto label_4a6170;
        case 0x4a6174u: goto label_4a6174;
        case 0x4a6178u: goto label_4a6178;
        case 0x4a617cu: goto label_4a617c;
        case 0x4a6180u: goto label_4a6180;
        case 0x4a6184u: goto label_4a6184;
        case 0x4a6188u: goto label_4a6188;
        case 0x4a618cu: goto label_4a618c;
        case 0x4a6190u: goto label_4a6190;
        case 0x4a6194u: goto label_4a6194;
        case 0x4a6198u: goto label_4a6198;
        case 0x4a619cu: goto label_4a619c;
        case 0x4a61a0u: goto label_4a61a0;
        case 0x4a61a4u: goto label_4a61a4;
        case 0x4a61a8u: goto label_4a61a8;
        case 0x4a61acu: goto label_4a61ac;
        case 0x4a61b0u: goto label_4a61b0;
        case 0x4a61b4u: goto label_4a61b4;
        case 0x4a61b8u: goto label_4a61b8;
        case 0x4a61bcu: goto label_4a61bc;
        case 0x4a61c0u: goto label_4a61c0;
        case 0x4a61c4u: goto label_4a61c4;
        case 0x4a61c8u: goto label_4a61c8;
        case 0x4a61ccu: goto label_4a61cc;
        case 0x4a61d0u: goto label_4a61d0;
        case 0x4a61d4u: goto label_4a61d4;
        case 0x4a61d8u: goto label_4a61d8;
        case 0x4a61dcu: goto label_4a61dc;
        case 0x4a61e0u: goto label_4a61e0;
        case 0x4a61e4u: goto label_4a61e4;
        case 0x4a61e8u: goto label_4a61e8;
        case 0x4a61ecu: goto label_4a61ec;
        case 0x4a61f0u: goto label_4a61f0;
        case 0x4a61f4u: goto label_4a61f4;
        case 0x4a61f8u: goto label_4a61f8;
        case 0x4a61fcu: goto label_4a61fc;
        case 0x4a6200u: goto label_4a6200;
        case 0x4a6204u: goto label_4a6204;
        case 0x4a6208u: goto label_4a6208;
        case 0x4a620cu: goto label_4a620c;
        case 0x4a6210u: goto label_4a6210;
        case 0x4a6214u: goto label_4a6214;
        case 0x4a6218u: goto label_4a6218;
        case 0x4a621cu: goto label_4a621c;
        case 0x4a6220u: goto label_4a6220;
        case 0x4a6224u: goto label_4a6224;
        case 0x4a6228u: goto label_4a6228;
        case 0x4a622cu: goto label_4a622c;
        case 0x4a6230u: goto label_4a6230;
        case 0x4a6234u: goto label_4a6234;
        case 0x4a6238u: goto label_4a6238;
        case 0x4a623cu: goto label_4a623c;
        case 0x4a6240u: goto label_4a6240;
        case 0x4a6244u: goto label_4a6244;
        case 0x4a6248u: goto label_4a6248;
        case 0x4a624cu: goto label_4a624c;
        case 0x4a6250u: goto label_4a6250;
        case 0x4a6254u: goto label_4a6254;
        case 0x4a6258u: goto label_4a6258;
        case 0x4a625cu: goto label_4a625c;
        case 0x4a6260u: goto label_4a6260;
        case 0x4a6264u: goto label_4a6264;
        case 0x4a6268u: goto label_4a6268;
        case 0x4a626cu: goto label_4a626c;
        case 0x4a6270u: goto label_4a6270;
        case 0x4a6274u: goto label_4a6274;
        case 0x4a6278u: goto label_4a6278;
        case 0x4a627cu: goto label_4a627c;
        case 0x4a6280u: goto label_4a6280;
        case 0x4a6284u: goto label_4a6284;
        case 0x4a6288u: goto label_4a6288;
        case 0x4a628cu: goto label_4a628c;
        case 0x4a6290u: goto label_4a6290;
        case 0x4a6294u: goto label_4a6294;
        case 0x4a6298u: goto label_4a6298;
        case 0x4a629cu: goto label_4a629c;
        case 0x4a62a0u: goto label_4a62a0;
        case 0x4a62a4u: goto label_4a62a4;
        case 0x4a62a8u: goto label_4a62a8;
        case 0x4a62acu: goto label_4a62ac;
        case 0x4a62b0u: goto label_4a62b0;
        case 0x4a62b4u: goto label_4a62b4;
        case 0x4a62b8u: goto label_4a62b8;
        case 0x4a62bcu: goto label_4a62bc;
        case 0x4a62c0u: goto label_4a62c0;
        case 0x4a62c4u: goto label_4a62c4;
        case 0x4a62c8u: goto label_4a62c8;
        case 0x4a62ccu: goto label_4a62cc;
        case 0x4a62d0u: goto label_4a62d0;
        case 0x4a62d4u: goto label_4a62d4;
        case 0x4a62d8u: goto label_4a62d8;
        case 0x4a62dcu: goto label_4a62dc;
        case 0x4a62e0u: goto label_4a62e0;
        case 0x4a62e4u: goto label_4a62e4;
        case 0x4a62e8u: goto label_4a62e8;
        case 0x4a62ecu: goto label_4a62ec;
        case 0x4a62f0u: goto label_4a62f0;
        case 0x4a62f4u: goto label_4a62f4;
        case 0x4a62f8u: goto label_4a62f8;
        case 0x4a62fcu: goto label_4a62fc;
        case 0x4a6300u: goto label_4a6300;
        case 0x4a6304u: goto label_4a6304;
        case 0x4a6308u: goto label_4a6308;
        case 0x4a630cu: goto label_4a630c;
        case 0x4a6310u: goto label_4a6310;
        case 0x4a6314u: goto label_4a6314;
        case 0x4a6318u: goto label_4a6318;
        case 0x4a631cu: goto label_4a631c;
        case 0x4a6320u: goto label_4a6320;
        case 0x4a6324u: goto label_4a6324;
        case 0x4a6328u: goto label_4a6328;
        case 0x4a632cu: goto label_4a632c;
        case 0x4a6330u: goto label_4a6330;
        case 0x4a6334u: goto label_4a6334;
        case 0x4a6338u: goto label_4a6338;
        case 0x4a633cu: goto label_4a633c;
        case 0x4a6340u: goto label_4a6340;
        case 0x4a6344u: goto label_4a6344;
        case 0x4a6348u: goto label_4a6348;
        case 0x4a634cu: goto label_4a634c;
        case 0x4a6350u: goto label_4a6350;
        case 0x4a6354u: goto label_4a6354;
        case 0x4a6358u: goto label_4a6358;
        case 0x4a635cu: goto label_4a635c;
        case 0x4a6360u: goto label_4a6360;
        case 0x4a6364u: goto label_4a6364;
        case 0x4a6368u: goto label_4a6368;
        case 0x4a636cu: goto label_4a636c;
        case 0x4a6370u: goto label_4a6370;
        case 0x4a6374u: goto label_4a6374;
        case 0x4a6378u: goto label_4a6378;
        case 0x4a637cu: goto label_4a637c;
        case 0x4a6380u: goto label_4a6380;
        case 0x4a6384u: goto label_4a6384;
        case 0x4a6388u: goto label_4a6388;
        case 0x4a638cu: goto label_4a638c;
        default: break;
    }

    ctx->pc = 0x4a6100u;

label_4a6100:
    // 0x4a6100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a6104:
    // 0x4a6104: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6108:
    // 0x4a6108: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a6108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4a610c:
    // 0x4a610c: 0x3c034204  lui         $v1, 0x4204
    ctx->pc = 0x4a610cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16900 << 16));
label_4a6110:
    // 0x4a6110: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a6110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4a6114:
    // 0x4a6114: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a6114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a6118:
    // 0x4a6118: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a6118u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a611c:
    // 0x4a611c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a611cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a6120:
    // 0x4a6120: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a6120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6124:
    // 0x4a6124: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a6124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a6128:
    // 0x4a6128: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a6128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a612c:
    // 0x4a612c: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x4a612cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_4a6130:
    // 0x4a6130: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6130u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a6134:
    // 0x4a6134: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4a6134u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_4a6138:
    // 0x4a6138: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a6138u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a613c:
    // 0x4a613c: 0x26314e80  addiu       $s1, $s1, 0x4E80
    ctx->pc = 0x4a613cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20096));
label_4a6140:
    // 0x4a6140: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a6144:
    // 0x4a6144: 0x26104e78  addiu       $s0, $s0, 0x4E78
    ctx->pc = 0x4a6144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20088));
label_4a6148:
    // 0x4a6148: 0x8c440e84  lw          $a0, 0xE84($v0)
    ctx->pc = 0x4a6148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_4a614c:
    // 0x4a614c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x4a614cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_4a6150:
    // 0x4a6150: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x4a6150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_4a6154:
    // 0x4a6154: 0x8c840518  lw          $a0, 0x518($a0)
    ctx->pc = 0x4a6154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
label_4a6158:
    // 0x4a6158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a615c:
    // 0x4a615c: 0x0  nop
    ctx->pc = 0x4a615cu;
    // NOP
label_4a6160:
    // 0x4a6160: 0x46160540  add.s       $f21, $f0, $f22
    ctx->pc = 0x4a6160u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_4a6164:
    // 0x4a6164: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a6164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a6168:
    // 0x4a6168: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x4a6168u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a616c:
    // 0x4a616c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a616cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6170:
    // 0x4a6170: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x4a6170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_4a6174:
    // 0x4a6174: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_4a6178:
    if (ctx->pc == 0x4A6178u) {
        ctx->pc = 0x4A6178u;
            // 0x4a6178: 0x460d0500  add.s       $f20, $f0, $f13 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->pc = 0x4A617Cu;
        goto label_4a617c;
    }
    ctx->pc = 0x4A6174u;
    {
        const bool branch_taken_0x4a6174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6174u;
            // 0x4a6178: 0x460d0500  add.s       $f20, $f0, $f13 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6174) {
            ctx->pc = 0x4A6204u;
            goto label_4a6204;
        }
    }
    ctx->pc = 0x4A617Cu;
label_4a617c:
    // 0x4a617c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6180:
    // 0x4a6180: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6184:
    // 0x4a6184: 0xc0506ac  jal         func_141AB0
label_4a6188:
    if (ctx->pc == 0x4A6188u) {
        ctx->pc = 0x4A6188u;
            // 0x4a6188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A618Cu;
        goto label_4a618c;
    }
    ctx->pc = 0x4A6184u;
    SET_GPR_U32(ctx, 31, 0x4A618Cu);
    ctx->pc = 0x4A6188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6184u;
            // 0x4a6188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A618Cu; }
        if (ctx->pc != 0x4A618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A618Cu; }
        if (ctx->pc != 0x4A618Cu) { return; }
    }
    ctx->pc = 0x4A618Cu;
label_4a618c:
    // 0x4a618c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a618cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a6190:
    // 0x4a6190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a6190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6194:
    // 0x4a6194: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6198:
    // 0x4a6198: 0x320f809  jalr        $t9
label_4a619c:
    if (ctx->pc == 0x4A619Cu) {
        ctx->pc = 0x4A619Cu;
            // 0x4a619c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A61A0u;
        goto label_4a61a0;
    }
    ctx->pc = 0x4A6198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A61A0u);
        ctx->pc = 0x4A619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6198u;
            // 0x4a619c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A61A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A61A0u; }
            if (ctx->pc != 0x4A61A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A61A0u;
label_4a61a0:
    // 0x4a61a0: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x4a61a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a61a4:
    // 0x4a61a4: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a61a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a61a8:
    // 0x4a61a8: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x4a61a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a61ac:
    // 0x4a61ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a61acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a61b0:
    // 0x4a61b0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a61b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a61b4:
    // 0x4a61b4: 0x262500a0  addiu       $a1, $s1, 0xA0
    ctx->pc = 0x4a61b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4a61b8:
    // 0x4a61b8: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x4a61b8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a61bc:
    // 0x4a61bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4a61bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a61c0:
    // 0x4a61c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a61c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a61c4:
    // 0x4a61c4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a61c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a61c8:
    // 0x4a61c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a61c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a61cc:
    // 0x4a61cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a61d0:
    // 0x4a61d0: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a61d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a61d4:
    // 0x4a61d4: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x4a61d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a61d8:
    // 0x4a61d8: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4a61d8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a61dc:
    // 0x4a61dc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a61dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a61e0:
    // 0x4a61e0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a61e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a61e4:
    // 0x4a61e4: 0xc0bc284  jal         func_2F0A10
label_4a61e8:
    if (ctx->pc == 0x4A61E8u) {
        ctx->pc = 0x4A61E8u;
            // 0x4a61e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A61ECu;
        goto label_4a61ec;
    }
    ctx->pc = 0x4A61E4u;
    SET_GPR_U32(ctx, 31, 0x4A61ECu);
    ctx->pc = 0x4A61E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A61E4u;
            // 0x4a61e8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A61ECu; }
        if (ctx->pc != 0x4A61ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A61ECu; }
        if (ctx->pc != 0x4A61ECu) { return; }
    }
    ctx->pc = 0x4A61ECu;
label_4a61ec:
    // 0x4a61ec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a61ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a61f0:
    // 0x4a61f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a61f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a61f4:
    // 0x4a61f4: 0x320f809  jalr        $t9
label_4a61f8:
    if (ctx->pc == 0x4A61F8u) {
        ctx->pc = 0x4A61F8u;
            // 0x4a61f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A61FCu;
        goto label_4a61fc;
    }
    ctx->pc = 0x4A61F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A61FCu);
        ctx->pc = 0x4A61F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A61F4u;
            // 0x4a61f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A61FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A61FCu; }
            if (ctx->pc != 0x4A61FCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A61FCu;
label_4a61fc:
    // 0x4a61fc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_4a6200:
    if (ctx->pc == 0x4A6200u) {
        ctx->pc = 0x4A6200u;
            // 0x4a6200: 0x3c024319  lui         $v0, 0x4319 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17177 << 16));
        ctx->pc = 0x4A6204u;
        goto label_4a6204;
    }
    ctx->pc = 0x4A61FCu;
    {
        const bool branch_taken_0x4a61fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A61FCu;
            // 0x4a6200: 0x3c024319  lui         $v0, 0x4319 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a61fc) {
            ctx->pc = 0x4A6330u;
            goto label_4a6330;
        }
    }
    ctx->pc = 0x4A6204u;
label_4a6204:
    // 0x4a6204: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4a6204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4a6208:
    // 0x4a6208: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_4a620c:
    if (ctx->pc == 0x4A620Cu) {
        ctx->pc = 0x4A620Cu;
            // 0x4a620c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x4A6210u;
        goto label_4a6210;
    }
    ctx->pc = 0x4A6208u;
    {
        const bool branch_taken_0x4a6208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a6208) {
            ctx->pc = 0x4A620Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6208u;
            // 0x4a620c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A62A4u;
            goto label_4a62a4;
        }
    }
    ctx->pc = 0x4A6210u;
label_4a6210:
    // 0x4a6210: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6214:
    // 0x4a6214: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4a6214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4a6218:
    // 0x4a6218: 0xc0506ac  jal         func_141AB0
label_4a621c:
    if (ctx->pc == 0x4A621Cu) {
        ctx->pc = 0x4A621Cu;
            // 0x4a621c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4A6220u;
        goto label_4a6220;
    }
    ctx->pc = 0x4A6218u;
    SET_GPR_U32(ctx, 31, 0x4A6220u);
    ctx->pc = 0x4A621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6218u;
            // 0x4a621c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6220u; }
        if (ctx->pc != 0x4A6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6220u; }
        if (ctx->pc != 0x4A6220u) { return; }
    }
    ctx->pc = 0x4A6220u;
label_4a6220:
    // 0x4a6220: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a6220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a6224:
    // 0x4a6224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a6224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a6228:
    // 0x4a6228: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a622c:
    // 0x4a622c: 0x320f809  jalr        $t9
label_4a6230:
    if (ctx->pc == 0x4A6230u) {
        ctx->pc = 0x4A6230u;
            // 0x4a6230: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6234u;
        goto label_4a6234;
    }
    ctx->pc = 0x4A622Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6234u);
        ctx->pc = 0x4A6230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A622Cu;
            // 0x4a6230: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6234u; }
            if (ctx->pc != 0x4A6234u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6234u;
label_4a6234:
    // 0x4a6234: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4a6234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4a6238:
    // 0x4a6238: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a6238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a623c:
    // 0x4a623c: 0x24a5a310  addiu       $a1, $a1, -0x5CF0
    ctx->pc = 0x4a623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943504));
label_4a6240:
    // 0x4a6240: 0x84442100  lh          $a0, 0x2100($v0)
    ctx->pc = 0x4a6240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8448)));
label_4a6244:
    // 0x4a6244: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a6244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a6248:
    // 0x4a6248: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4a6248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a624c:
    // 0x4a624c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a6250:
    // 0x4a6250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6254:
    // 0x4a6254: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a6254u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a6258:
    // 0x4a6258: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a6258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a625c:
    // 0x4a625c: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x4a625cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a6260:
    // 0x4a6260: 0x84432102  lh          $v1, 0x2102($v0)
    ctx->pc = 0x4a6260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8450)));
label_4a6264:
    // 0x4a6264: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6268:
    // 0x4a6268: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a626c:
    // 0x4a626c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a626cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a6270:
    // 0x4a6270: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a6270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6274:
    // 0x4a6274: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x4a6274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6278:
    // 0x4a6278: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4a6278u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a627c:
    // 0x4a627c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a627cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a6280:
    // 0x4a6280: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a6280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6284:
    // 0x4a6284: 0xc0bc284  jal         func_2F0A10
label_4a6288:
    if (ctx->pc == 0x4A6288u) {
        ctx->pc = 0x4A6288u;
            // 0x4a6288: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A628Cu;
        goto label_4a628c;
    }
    ctx->pc = 0x4A6284u;
    SET_GPR_U32(ctx, 31, 0x4A628Cu);
    ctx->pc = 0x4A6288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6284u;
            // 0x4a6288: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A628Cu; }
        if (ctx->pc != 0x4A628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A628Cu; }
        if (ctx->pc != 0x4A628Cu) { return; }
    }
    ctx->pc = 0x4A628Cu;
label_4a628c:
    // 0x4a628c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a628cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a6290:
    // 0x4a6290: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6294:
    // 0x4a6294: 0x320f809  jalr        $t9
label_4a6298:
    if (ctx->pc == 0x4A6298u) {
        ctx->pc = 0x4A6298u;
            // 0x4a6298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A629Cu;
        goto label_4a629c;
    }
    ctx->pc = 0x4A6294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A629Cu);
        ctx->pc = 0x4A6298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6294u;
            // 0x4a6298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A629Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A629Cu; }
            if (ctx->pc != 0x4A629Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A629Cu;
label_4a629c:
    // 0x4a629c: 0x10000023  b           . + 4 + (0x23 << 2)
label_4a62a0:
    if (ctx->pc == 0x4A62A0u) {
        ctx->pc = 0x4A62A4u;
        goto label_4a62a4;
    }
    ctx->pc = 0x4A629Cu;
    {
        const bool branch_taken_0x4a629c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a629c) {
            ctx->pc = 0x4A632Cu;
            goto label_4a632c;
        }
    }
    ctx->pc = 0x4A62A4u;
label_4a62a4:
    // 0x4a62a4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4a62a8:
    if (ctx->pc == 0x4A62A8u) {
        ctx->pc = 0x4A62ACu;
        goto label_4a62ac;
    }
    ctx->pc = 0x4A62A4u;
    {
        const bool branch_taken_0x4a62a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a62a4) {
            ctx->pc = 0x4A632Cu;
            goto label_4a632c;
        }
    }
    ctx->pc = 0x4A62ACu;
label_4a62ac:
    // 0x4a62ac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a62acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a62b0:
    // 0x4a62b0: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a62b4:
    // 0x4a62b4: 0xc0506ac  jal         func_141AB0
label_4a62b8:
    if (ctx->pc == 0x4A62B8u) {
        ctx->pc = 0x4A62B8u;
            // 0x4a62b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A62BCu;
        goto label_4a62bc;
    }
    ctx->pc = 0x4A62B4u;
    SET_GPR_U32(ctx, 31, 0x4A62BCu);
    ctx->pc = 0x4A62B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A62B4u;
            // 0x4a62b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A62BCu; }
        if (ctx->pc != 0x4A62BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A62BCu; }
        if (ctx->pc != 0x4A62BCu) { return; }
    }
    ctx->pc = 0x4A62BCu;
label_4a62bc:
    // 0x4a62bc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a62bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a62c0:
    // 0x4a62c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a62c4:
    // 0x4a62c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a62c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a62c8:
    // 0x4a62c8: 0x320f809  jalr        $t9
label_4a62cc:
    if (ctx->pc == 0x4A62CCu) {
        ctx->pc = 0x4A62CCu;
            // 0x4a62cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A62D0u;
        goto label_4a62d0;
    }
    ctx->pc = 0x4A62C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A62D0u);
        ctx->pc = 0x4A62CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A62C8u;
            // 0x4a62cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A62D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A62D0u; }
            if (ctx->pc != 0x4A62D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A62D0u;
label_4a62d0:
    // 0x4a62d0: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x4a62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a62d4:
    // 0x4a62d4: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a62d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a62d8:
    // 0x4a62d8: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x4a62d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a62dc:
    // 0x4a62dc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a62e0:
    // 0x4a62e0: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x4a62e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a62e4:
    // 0x4a62e4: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x4a62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_4a62e8:
    // 0x4a62e8: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x4a62e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a62ec:
    // 0x4a62ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4a62ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a62f0:
    // 0x4a62f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a62f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a62f4:
    // 0x4a62f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a62f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a62f8:
    // 0x4a62f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a62f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a62fc:
    // 0x4a62fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a62fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6300:
    // 0x4a6300: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a6300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a6304:
    // 0x4a6304: 0x46800c60  cvt.s.w     $f17, $f1
    ctx->pc = 0x4a6304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6308:
    // 0x4a6308: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4a6308u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a630c:
    // 0x4a630c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a630cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a6310:
    // 0x4a6310: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a6310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a6314:
    // 0x4a6314: 0xc0bc284  jal         func_2F0A10
label_4a6318:
    if (ctx->pc == 0x4A6318u) {
        ctx->pc = 0x4A6318u;
            // 0x4a6318: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A631Cu;
        goto label_4a631c;
    }
    ctx->pc = 0x4A6314u;
    SET_GPR_U32(ctx, 31, 0x4A631Cu);
    ctx->pc = 0x4A6318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6314u;
            // 0x4a6318: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A631Cu; }
        if (ctx->pc != 0x4A631Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A631Cu; }
        if (ctx->pc != 0x4A631Cu) { return; }
    }
    ctx->pc = 0x4A631Cu;
label_4a631c:
    // 0x4a631c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x4a631cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a6320:
    // 0x4a6320: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a6324:
    // 0x4a6324: 0x320f809  jalr        $t9
label_4a6328:
    if (ctx->pc == 0x4A6328u) {
        ctx->pc = 0x4A6328u;
            // 0x4a6328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A632Cu;
        goto label_4a632c;
    }
    ctx->pc = 0x4A6324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A632Cu);
        ctx->pc = 0x4A6328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6324u;
            // 0x4a6328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A632Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A632Cu; }
            if (ctx->pc != 0x4A632Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A632Cu;
label_4a632c:
    // 0x4a632c: 0x3c024319  lui         $v0, 0x4319
    ctx->pc = 0x4a632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17177 << 16));
label_4a6330:
    // 0x4a6330: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a6330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a6334:
    // 0x4a6334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a6334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6338:
    // 0x4a6338: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4a6338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a633c:
    // 0x4a633c: 0x46160300  add.s       $f12, $f0, $f22
    ctx->pc = 0x4a633cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_4a6340:
    // 0x4a6340: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6344:
    // 0x4a6344: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a6344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a6348:
    // 0x4a6348: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4a6348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a634c:
    // 0x4a634c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a634cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6350:
    // 0x4a6350: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a6350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a6354:
    // 0x4a6354: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a6354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a6358:
    // 0x4a6358: 0xc15706c  jal         func_55C1B0
label_4a635c:
    if (ctx->pc == 0x4A635Cu) {
        ctx->pc = 0x4A635Cu;
            // 0x4a635c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6360u;
        goto label_4a6360;
    }
    ctx->pc = 0x4A6358u;
    SET_GPR_U32(ctx, 31, 0x4A6360u);
    ctx->pc = 0x4A635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6358u;
            // 0x4a635c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6360u; }
        if (ctx->pc != 0x4A6360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6360u; }
        if (ctx->pc != 0x4A6360u) { return; }
    }
    ctx->pc = 0x4A6360u;
label_4a6360:
    // 0x4a6360: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a6360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a6364:
    // 0x4a6364: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a6364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a6368:
    // 0x4a6368: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a6368u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a636c:
    // 0x4a636c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a6370:
    // 0x4a6370: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a6370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6374:
    // 0x4a6374: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a6374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a6378:
    // 0x4a6378: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a6378u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a637c:
    // 0x4a637c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a637cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6380:
    // 0x4a6380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a6380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6384:
    // 0x4a6384: 0x3e00008  jr          $ra
label_4a6388:
    if (ctx->pc == 0x4A6388u) {
        ctx->pc = 0x4A6388u;
            // 0x4a6388: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4A638Cu;
        goto label_4a638c;
    }
    ctx->pc = 0x4A6384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6384u;
            // 0x4a6388: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A638Cu;
label_4a638c:
    // 0x4a638c: 0x0  nop
    ctx->pc = 0x4a638cu;
    // NOP
}
