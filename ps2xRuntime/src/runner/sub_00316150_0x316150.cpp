#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316150
// Address: 0x316150 - 0x3163d0
void sub_00316150_0x316150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316150_0x316150");
#endif

    switch (ctx->pc) {
        case 0x316150u: goto label_316150;
        case 0x316154u: goto label_316154;
        case 0x316158u: goto label_316158;
        case 0x31615cu: goto label_31615c;
        case 0x316160u: goto label_316160;
        case 0x316164u: goto label_316164;
        case 0x316168u: goto label_316168;
        case 0x31616cu: goto label_31616c;
        case 0x316170u: goto label_316170;
        case 0x316174u: goto label_316174;
        case 0x316178u: goto label_316178;
        case 0x31617cu: goto label_31617c;
        case 0x316180u: goto label_316180;
        case 0x316184u: goto label_316184;
        case 0x316188u: goto label_316188;
        case 0x31618cu: goto label_31618c;
        case 0x316190u: goto label_316190;
        case 0x316194u: goto label_316194;
        case 0x316198u: goto label_316198;
        case 0x31619cu: goto label_31619c;
        case 0x3161a0u: goto label_3161a0;
        case 0x3161a4u: goto label_3161a4;
        case 0x3161a8u: goto label_3161a8;
        case 0x3161acu: goto label_3161ac;
        case 0x3161b0u: goto label_3161b0;
        case 0x3161b4u: goto label_3161b4;
        case 0x3161b8u: goto label_3161b8;
        case 0x3161bcu: goto label_3161bc;
        case 0x3161c0u: goto label_3161c0;
        case 0x3161c4u: goto label_3161c4;
        case 0x3161c8u: goto label_3161c8;
        case 0x3161ccu: goto label_3161cc;
        case 0x3161d0u: goto label_3161d0;
        case 0x3161d4u: goto label_3161d4;
        case 0x3161d8u: goto label_3161d8;
        case 0x3161dcu: goto label_3161dc;
        case 0x3161e0u: goto label_3161e0;
        case 0x3161e4u: goto label_3161e4;
        case 0x3161e8u: goto label_3161e8;
        case 0x3161ecu: goto label_3161ec;
        case 0x3161f0u: goto label_3161f0;
        case 0x3161f4u: goto label_3161f4;
        case 0x3161f8u: goto label_3161f8;
        case 0x3161fcu: goto label_3161fc;
        case 0x316200u: goto label_316200;
        case 0x316204u: goto label_316204;
        case 0x316208u: goto label_316208;
        case 0x31620cu: goto label_31620c;
        case 0x316210u: goto label_316210;
        case 0x316214u: goto label_316214;
        case 0x316218u: goto label_316218;
        case 0x31621cu: goto label_31621c;
        case 0x316220u: goto label_316220;
        case 0x316224u: goto label_316224;
        case 0x316228u: goto label_316228;
        case 0x31622cu: goto label_31622c;
        case 0x316230u: goto label_316230;
        case 0x316234u: goto label_316234;
        case 0x316238u: goto label_316238;
        case 0x31623cu: goto label_31623c;
        case 0x316240u: goto label_316240;
        case 0x316244u: goto label_316244;
        case 0x316248u: goto label_316248;
        case 0x31624cu: goto label_31624c;
        case 0x316250u: goto label_316250;
        case 0x316254u: goto label_316254;
        case 0x316258u: goto label_316258;
        case 0x31625cu: goto label_31625c;
        case 0x316260u: goto label_316260;
        case 0x316264u: goto label_316264;
        case 0x316268u: goto label_316268;
        case 0x31626cu: goto label_31626c;
        case 0x316270u: goto label_316270;
        case 0x316274u: goto label_316274;
        case 0x316278u: goto label_316278;
        case 0x31627cu: goto label_31627c;
        case 0x316280u: goto label_316280;
        case 0x316284u: goto label_316284;
        case 0x316288u: goto label_316288;
        case 0x31628cu: goto label_31628c;
        case 0x316290u: goto label_316290;
        case 0x316294u: goto label_316294;
        case 0x316298u: goto label_316298;
        case 0x31629cu: goto label_31629c;
        case 0x3162a0u: goto label_3162a0;
        case 0x3162a4u: goto label_3162a4;
        case 0x3162a8u: goto label_3162a8;
        case 0x3162acu: goto label_3162ac;
        case 0x3162b0u: goto label_3162b0;
        case 0x3162b4u: goto label_3162b4;
        case 0x3162b8u: goto label_3162b8;
        case 0x3162bcu: goto label_3162bc;
        case 0x3162c0u: goto label_3162c0;
        case 0x3162c4u: goto label_3162c4;
        case 0x3162c8u: goto label_3162c8;
        case 0x3162ccu: goto label_3162cc;
        case 0x3162d0u: goto label_3162d0;
        case 0x3162d4u: goto label_3162d4;
        case 0x3162d8u: goto label_3162d8;
        case 0x3162dcu: goto label_3162dc;
        case 0x3162e0u: goto label_3162e0;
        case 0x3162e4u: goto label_3162e4;
        case 0x3162e8u: goto label_3162e8;
        case 0x3162ecu: goto label_3162ec;
        case 0x3162f0u: goto label_3162f0;
        case 0x3162f4u: goto label_3162f4;
        case 0x3162f8u: goto label_3162f8;
        case 0x3162fcu: goto label_3162fc;
        case 0x316300u: goto label_316300;
        case 0x316304u: goto label_316304;
        case 0x316308u: goto label_316308;
        case 0x31630cu: goto label_31630c;
        case 0x316310u: goto label_316310;
        case 0x316314u: goto label_316314;
        case 0x316318u: goto label_316318;
        case 0x31631cu: goto label_31631c;
        case 0x316320u: goto label_316320;
        case 0x316324u: goto label_316324;
        case 0x316328u: goto label_316328;
        case 0x31632cu: goto label_31632c;
        case 0x316330u: goto label_316330;
        case 0x316334u: goto label_316334;
        case 0x316338u: goto label_316338;
        case 0x31633cu: goto label_31633c;
        case 0x316340u: goto label_316340;
        case 0x316344u: goto label_316344;
        case 0x316348u: goto label_316348;
        case 0x31634cu: goto label_31634c;
        case 0x316350u: goto label_316350;
        case 0x316354u: goto label_316354;
        case 0x316358u: goto label_316358;
        case 0x31635cu: goto label_31635c;
        case 0x316360u: goto label_316360;
        case 0x316364u: goto label_316364;
        case 0x316368u: goto label_316368;
        case 0x31636cu: goto label_31636c;
        case 0x316370u: goto label_316370;
        case 0x316374u: goto label_316374;
        case 0x316378u: goto label_316378;
        case 0x31637cu: goto label_31637c;
        case 0x316380u: goto label_316380;
        case 0x316384u: goto label_316384;
        case 0x316388u: goto label_316388;
        case 0x31638cu: goto label_31638c;
        case 0x316390u: goto label_316390;
        case 0x316394u: goto label_316394;
        case 0x316398u: goto label_316398;
        case 0x31639cu: goto label_31639c;
        case 0x3163a0u: goto label_3163a0;
        case 0x3163a4u: goto label_3163a4;
        case 0x3163a8u: goto label_3163a8;
        case 0x3163acu: goto label_3163ac;
        case 0x3163b0u: goto label_3163b0;
        case 0x3163b4u: goto label_3163b4;
        case 0x3163b8u: goto label_3163b8;
        case 0x3163bcu: goto label_3163bc;
        case 0x3163c0u: goto label_3163c0;
        case 0x3163c4u: goto label_3163c4;
        case 0x3163c8u: goto label_3163c8;
        case 0x3163ccu: goto label_3163cc;
        default: break;
    }

    ctx->pc = 0x316150u;

label_316150:
    // 0x316150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x316150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_316154:
    // 0x316154: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x316154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_316158:
    // 0x316158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x316158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31615c:
    // 0x31615c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x31615cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_316160:
    // 0x316160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_316164:
    // 0x316164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316168:
    // 0x316168: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x316168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31616c:
    // 0x31616c: 0xc10f6ec  jal         func_43DBB0
label_316170:
    if (ctx->pc == 0x316170u) {
        ctx->pc = 0x316170u;
            // 0x316170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316174u;
        goto label_316174;
    }
    ctx->pc = 0x31616Cu;
    SET_GPR_U32(ctx, 31, 0x316174u);
    ctx->pc = 0x316170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31616Cu;
            // 0x316170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316174u; }
        if (ctx->pc != 0x316174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316174u; }
        if (ctx->pc != 0x316174u) { return; }
    }
    ctx->pc = 0x316174u;
label_316174:
    // 0x316174: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x316174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316178:
    // 0x316178: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x316178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_31617c:
    // 0x31617c: 0x244243d0  addiu       $v0, $v0, 0x43D0
    ctx->pc = 0x31617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
label_316180:
    // 0x316180: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x316180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_316184:
    // 0x316184: 0xc040180  jal         func_100600
label_316188:
    if (ctx->pc == 0x316188u) {
        ctx->pc = 0x316188u;
            // 0x316188: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x31618Cu;
        goto label_31618c;
    }
    ctx->pc = 0x316184u;
    SET_GPR_U32(ctx, 31, 0x31618Cu);
    ctx->pc = 0x316188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316184u;
            // 0x316188: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31618Cu; }
        if (ctx->pc != 0x31618Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31618Cu; }
        if (ctx->pc != 0x31618Cu) { return; }
    }
    ctx->pc = 0x31618Cu;
label_31618c:
    // 0x31618c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_316190:
    if (ctx->pc == 0x316190u) {
        ctx->pc = 0x316190u;
            // 0x316190: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x316194u;
        goto label_316194;
    }
    ctx->pc = 0x31618Cu;
    {
        const bool branch_taken_0x31618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31618c) {
            ctx->pc = 0x316190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31618Cu;
            // 0x316190: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3161B0u;
            goto label_3161b0;
        }
    }
    ctx->pc = 0x316194u;
label_316194:
    // 0x316194: 0x8e270d98  lw          $a3, 0xD98($s1)
    ctx->pc = 0x316194u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_316198:
    // 0x316198: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x316198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_31619c:
    // 0x31619c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3161a0:
    // 0x3161a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3161a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3161a4:
    // 0x3161a4: 0xc0c3f60  jal         func_30FD80
label_3161a8:
    if (ctx->pc == 0x3161A8u) {
        ctx->pc = 0x3161A8u;
            // 0x3161a8: 0x24c6f710  addiu       $a2, $a2, -0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965008));
        ctx->pc = 0x3161ACu;
        goto label_3161ac;
    }
    ctx->pc = 0x3161A4u;
    SET_GPR_U32(ctx, 31, 0x3161ACu);
    ctx->pc = 0x3161A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3161A4u;
            // 0x3161a8: 0x24c6f710  addiu       $a2, $a2, -0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161ACu; }
        if (ctx->pc != 0x3161ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161ACu; }
        if (ctx->pc != 0x3161ACu) { return; }
    }
    ctx->pc = 0x3161ACu;
label_3161ac:
    // 0x3161ac: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3161acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3161b0:
    // 0x3161b0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3161b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_3161b4:
    // 0x3161b4: 0x94480064  lhu         $t0, 0x64($v0)
    ctx->pc = 0x3161b4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_3161b8:
    // 0x3161b8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x3161b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3161bc:
    // 0x3161bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3161bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3161c0:
    // 0x3161c0: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x3161c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3161c4:
    // 0x3161c4: 0x26260ec0  addiu       $a2, $s1, 0xEC0
    ctx->pc = 0x3161c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3776));
label_3161c8:
    // 0x3161c8: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x3161c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_3161cc:
    // 0x3161cc: 0x35030200  ori         $v1, $t0, 0x200
    ctx->pc = 0x3161ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)512);
label_3161d0:
    // 0x3161d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3161d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3161d4:
    // 0x3161d4: 0xa4430064  sh          $v1, 0x64($v0)
    ctx->pc = 0x3161d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 3));
label_3161d8:
    // 0x3161d8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3161d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3161dc:
    // 0x3161dc: 0xac4700c0  sw          $a3, 0xC0($v0)
    ctx->pc = 0x3161dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 7));
label_3161e0:
    // 0x3161e0: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x3161e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
label_3161e4:
    // 0x3161e4: 0xc04cbd8  jal         func_132F60
label_3161e8:
    if (ctx->pc == 0x3161E8u) {
        ctx->pc = 0x3161E8u;
            // 0x3161e8: 0xac4500c8  sw          $a1, 0xC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 5));
        ctx->pc = 0x3161ECu;
        goto label_3161ec;
    }
    ctx->pc = 0x3161E4u;
    SET_GPR_U32(ctx, 31, 0x3161ECu);
    ctx->pc = 0x3161E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3161E4u;
            // 0x3161e8: 0xac4500c8  sw          $a1, 0xC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161ECu; }
        if (ctx->pc != 0x3161ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161ECu; }
        if (ctx->pc != 0x3161ECu) { return; }
    }
    ctx->pc = 0x3161ECu;
label_3161ec:
    // 0x3161ec: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3161ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3161f0:
    // 0x3161f0: 0xc04cc04  jal         func_133010
label_3161f4:
    if (ctx->pc == 0x3161F4u) {
        ctx->pc = 0x3161F4u;
            // 0x3161f4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3161F8u;
        goto label_3161f8;
    }
    ctx->pc = 0x3161F0u;
    SET_GPR_U32(ctx, 31, 0x3161F8u);
    ctx->pc = 0x3161F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3161F0u;
            // 0x3161f4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161F8u; }
        if (ctx->pc != 0x3161F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3161F8u; }
        if (ctx->pc != 0x3161F8u) { return; }
    }
    ctx->pc = 0x3161F8u;
label_3161f8:
    // 0x3161f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3161f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3161fc:
    // 0x3161fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3161fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316200:
    // 0x316200: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x316200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_316204:
    // 0x316204: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x316204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_316208:
    // 0x316208: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x316208u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_31620c:
    // 0x31620c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x31620cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_316210:
    // 0x316210: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x316210u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_316214:
    // 0x316214: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x316214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_316218:
    // 0x316218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31621c:
    // 0x31621c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31621cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_316220:
    // 0x316220: 0x3e00008  jr          $ra
label_316224:
    if (ctx->pc == 0x316224u) {
        ctx->pc = 0x316224u;
            // 0x316224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x316228u;
        goto label_316228;
    }
    ctx->pc = 0x316220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316220u;
            // 0x316224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316228u;
label_316228:
    // 0x316228: 0x0  nop
    ctx->pc = 0x316228u;
    // NOP
label_31622c:
    // 0x31622c: 0x0  nop
    ctx->pc = 0x31622cu;
    // NOP
label_316230:
    // 0x316230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x316230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_316234:
    // 0x316234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x316234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_316238:
    // 0x316238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31623c:
    // 0x31623c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31623cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316240:
    // 0x316240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x316240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316244:
    // 0x316244: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_316248:
    if (ctx->pc == 0x316248u) {
        ctx->pc = 0x316248u;
            // 0x316248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31624Cu;
        goto label_31624c;
    }
    ctx->pc = 0x316244u;
    {
        const bool branch_taken_0x316244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316244u;
            // 0x316248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316244) {
            ctx->pc = 0x3162A8u;
            goto label_3162a8;
        }
    }
    ctx->pc = 0x31624Cu;
label_31624c:
    // 0x31624c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x31624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316250:
    // 0x316250: 0x244243d0  addiu       $v0, $v0, 0x43D0
    ctx->pc = 0x316250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
label_316254:
    // 0x316254: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x316254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_316258:
    // 0x316258: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x316258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_31625c:
    // 0x31625c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x31625cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316260:
    // 0x316260: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x316260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_316264:
    // 0x316264: 0x320f809  jalr        $t9
label_316268:
    if (ctx->pc == 0x316268u) {
        ctx->pc = 0x316268u;
            // 0x316268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31626Cu;
        goto label_31626c;
    }
    ctx->pc = 0x316264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31626Cu);
        ctx->pc = 0x316268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316264u;
            // 0x316268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31626Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31626Cu; }
            if (ctx->pc != 0x31626Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31626Cu;
label_31626c:
    // 0x31626c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_316270:
    if (ctx->pc == 0x316270u) {
        ctx->pc = 0x316270u;
            // 0x316270: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x316274u;
        goto label_316274;
    }
    ctx->pc = 0x31626Cu;
    {
        const bool branch_taken_0x31626c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31626c) {
            ctx->pc = 0x316270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31626Cu;
            // 0x316270: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316294u;
            goto label_316294;
        }
    }
    ctx->pc = 0x316274u;
label_316274:
    // 0x316274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x316274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316278:
    // 0x316278: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x316278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_31627c:
    // 0x31627c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_316280:
    if (ctx->pc == 0x316280u) {
        ctx->pc = 0x316280u;
            // 0x316280: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x316284u;
        goto label_316284;
    }
    ctx->pc = 0x31627Cu;
    {
        const bool branch_taken_0x31627c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31627Cu;
            // 0x316280: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31627c) {
            ctx->pc = 0x316290u;
            goto label_316290;
        }
    }
    ctx->pc = 0x316284u;
label_316284:
    // 0x316284: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x316284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316288:
    // 0x316288: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x316288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_31628c:
    // 0x31628c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x31628cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_316290:
    // 0x316290: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x316290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_316294:
    // 0x316294: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x316294u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_316298:
    // 0x316298: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_31629c:
    if (ctx->pc == 0x31629Cu) {
        ctx->pc = 0x31629Cu;
            // 0x31629c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3162A0u;
        goto label_3162a0;
    }
    ctx->pc = 0x316298u;
    {
        const bool branch_taken_0x316298 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x316298) {
            ctx->pc = 0x31629Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316298u;
            // 0x31629c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3162ACu;
            goto label_3162ac;
        }
    }
    ctx->pc = 0x3162A0u;
label_3162a0:
    // 0x3162a0: 0xc0400a8  jal         func_1002A0
label_3162a4:
    if (ctx->pc == 0x3162A4u) {
        ctx->pc = 0x3162A4u;
            // 0x3162a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3162A8u;
        goto label_3162a8;
    }
    ctx->pc = 0x3162A0u;
    SET_GPR_U32(ctx, 31, 0x3162A8u);
    ctx->pc = 0x3162A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3162A0u;
            // 0x3162a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3162A8u; }
        if (ctx->pc != 0x3162A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3162A8u; }
        if (ctx->pc != 0x3162A8u) { return; }
    }
    ctx->pc = 0x3162A8u;
label_3162a8:
    // 0x3162a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3162a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3162ac:
    // 0x3162ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3162acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3162b0:
    // 0x3162b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3162b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3162b4:
    // 0x3162b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3162b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3162b8:
    // 0x3162b8: 0x3e00008  jr          $ra
label_3162bc:
    if (ctx->pc == 0x3162BCu) {
        ctx->pc = 0x3162BCu;
            // 0x3162bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3162C0u;
        goto label_3162c0;
    }
    ctx->pc = 0x3162B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3162BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3162B8u;
            // 0x3162bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3162C0u;
label_3162c0:
    // 0x3162c0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3162c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3162c4:
    // 0x3162c4: 0x3e00008  jr          $ra
label_3162c8:
    if (ctx->pc == 0x3162C8u) {
        ctx->pc = 0x3162C8u;
            // 0x3162c8: 0xc440bd90  lwc1        $f0, -0x4270($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3162CCu;
        goto label_3162cc;
    }
    ctx->pc = 0x3162C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3162C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3162C4u;
            // 0x3162c8: 0xc440bd90  lwc1        $f0, -0x4270($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3162CCu;
label_3162cc:
    // 0x3162cc: 0x0  nop
    ctx->pc = 0x3162ccu;
    // NOP
label_3162d0:
    // 0x3162d0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3162d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3162d4:
    // 0x3162d4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x3162d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3162d8:
    // 0x3162d8: 0xc440bd90  lwc1        $f0, -0x4270($v0)
    ctx->pc = 0x3162d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3162dc:
    // 0x3162dc: 0x3e00008  jr          $ra
label_3162e0:
    if (ctx->pc == 0x3162E0u) {
        ctx->pc = 0x3162E0u;
            // 0x3162e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3162E4u;
        goto label_3162e4;
    }
    ctx->pc = 0x3162DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3162E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3162DCu;
            // 0x3162e0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3162E4u;
label_3162e4:
    // 0x3162e4: 0x0  nop
    ctx->pc = 0x3162e4u;
    // NOP
label_3162e8:
    // 0x3162e8: 0x0  nop
    ctx->pc = 0x3162e8u;
    // NOP
label_3162ec:
    // 0x3162ec: 0x0  nop
    ctx->pc = 0x3162ecu;
    // NOP
label_3162f0:
    // 0x3162f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3162f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3162f4:
    // 0x3162f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3162f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3162f8:
    // 0x3162f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3162f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3162fc:
    // 0x3162fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3162fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_316300:
    // 0x316300: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x316300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316304:
    // 0x316304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316308:
    // 0x316308: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_31630c:
    if (ctx->pc == 0x31630Cu) {
        ctx->pc = 0x31630Cu;
            // 0x31630c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316310u;
        goto label_316310;
    }
    ctx->pc = 0x316308u;
    {
        const bool branch_taken_0x316308 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316308u;
            // 0x31630c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316308) {
            ctx->pc = 0x3163B0u;
            goto label_3163b0;
        }
    }
    ctx->pc = 0x316310u;
label_316310:
    // 0x316310: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x316310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316314:
    // 0x316314: 0x24424410  addiu       $v0, $v0, 0x4410
    ctx->pc = 0x316314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17424));
label_316318:
    // 0x316318: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_31631c:
    if (ctx->pc == 0x31631Cu) {
        ctx->pc = 0x31631Cu;
            // 0x31631c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x316320u;
        goto label_316320;
    }
    ctx->pc = 0x316318u;
    {
        const bool branch_taken_0x316318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316318u;
            // 0x31631c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316318) {
            ctx->pc = 0x316398u;
            goto label_316398;
        }
    }
    ctx->pc = 0x316320u;
label_316320:
    // 0x316320: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x316320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316324:
    // 0x316324: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x316324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_316328:
    // 0x316328: 0x24424be0  addiu       $v0, $v0, 0x4BE0
    ctx->pc = 0x316328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_31632c:
    // 0x31632c: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x31632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
label_316330:
    // 0x316330: 0xc0ad6c4  jal         func_2B5B10
label_316334:
    if (ctx->pc == 0x316334u) {
        ctx->pc = 0x316334u;
            // 0x316334: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x316338u;
        goto label_316338;
    }
    ctx->pc = 0x316330u;
    SET_GPR_U32(ctx, 31, 0x316338u);
    ctx->pc = 0x316334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316330u;
            // 0x316334: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316338u; }
        if (ctx->pc != 0x316338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316338u; }
        if (ctx->pc != 0x316338u) { return; }
    }
    ctx->pc = 0x316338u;
label_316338:
    // 0x316338: 0xc0c05c4  jal         func_301710
label_31633c:
    if (ctx->pc == 0x31633Cu) {
        ctx->pc = 0x316340u;
        goto label_316340;
    }
    ctx->pc = 0x316338u;
    SET_GPR_U32(ctx, 31, 0x316340u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316340u; }
        if (ctx->pc != 0x316340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316340u; }
        if (ctx->pc != 0x316340u) { return; }
    }
    ctx->pc = 0x316340u;
label_316340:
    // 0x316340: 0xc077318  jal         func_1DCC60
label_316344:
    if (ctx->pc == 0x316344u) {
        ctx->pc = 0x316344u;
            // 0x316344: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316348u;
        goto label_316348;
    }
    ctx->pc = 0x316340u;
    SET_GPR_U32(ctx, 31, 0x316348u);
    ctx->pc = 0x316344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316340u;
            // 0x316344: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316348u; }
        if (ctx->pc != 0x316348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316348u; }
        if (ctx->pc != 0x316348u) { return; }
    }
    ctx->pc = 0x316348u;
label_316348:
    // 0x316348: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x316348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_31634c:
    // 0x31634c: 0xc0c58f4  jal         func_3163D0
label_316350:
    if (ctx->pc == 0x316350u) {
        ctx->pc = 0x316350u;
            // 0x316350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316354u;
        goto label_316354;
    }
    ctx->pc = 0x31634Cu;
    SET_GPR_U32(ctx, 31, 0x316354u);
    ctx->pc = 0x316350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31634Cu;
            // 0x316350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316354u; }
        if (ctx->pc != 0x316354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316354u; }
        if (ctx->pc != 0x316354u) { return; }
    }
    ctx->pc = 0x316354u;
label_316354:
    // 0x316354: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x316354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_316358:
    // 0x316358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31635c:
    // 0x31635c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31635cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_316360:
    // 0x316360: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_316364:
    if (ctx->pc == 0x316364u) {
        ctx->pc = 0x316364u;
            // 0x316364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316368u;
        goto label_316368;
    }
    ctx->pc = 0x316360u;
    {
        const bool branch_taken_0x316360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x316360) {
            ctx->pc = 0x316364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316360u;
            // 0x316364: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316390u;
            goto label_316390;
        }
    }
    ctx->pc = 0x316368u;
label_316368:
    // 0x316368: 0x9242005b  lbu         $v0, 0x5B($s2)
    ctx->pc = 0x316368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
label_31636c:
    // 0x31636c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_316370:
    if (ctx->pc == 0x316370u) {
        ctx->pc = 0x316374u;
        goto label_316374;
    }
    ctx->pc = 0x31636Cu;
    {
        const bool branch_taken_0x31636c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31636c) {
            ctx->pc = 0x31638Cu;
            goto label_31638c;
        }
    }
    ctx->pc = 0x316374u;
label_316374:
    // 0x316374: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x316374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_316378:
    // 0x316378: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x316378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_31637c:
    // 0x31637c: 0x320f809  jalr        $t9
label_316380:
    if (ctx->pc == 0x316380u) {
        ctx->pc = 0x316380u;
            // 0x316380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316384u;
        goto label_316384;
    }
    ctx->pc = 0x31637Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316384u);
        ctx->pc = 0x316380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31637Cu;
            // 0x316380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316384u; }
            if (ctx->pc != 0x316384u) { return; }
        }
        }
    }
    ctx->pc = 0x316384u;
label_316384:
    // 0x316384: 0xc074708  jal         func_1D1C20
label_316388:
    if (ctx->pc == 0x316388u) {
        ctx->pc = 0x316388u;
            // 0x316388: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x31638Cu;
        goto label_31638c;
    }
    ctx->pc = 0x316384u;
    SET_GPR_U32(ctx, 31, 0x31638Cu);
    ctx->pc = 0x316388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316384u;
            // 0x316388: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31638Cu; }
        if (ctx->pc != 0x31638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31638Cu; }
        if (ctx->pc != 0x31638Cu) { return; }
    }
    ctx->pc = 0x31638Cu;
label_31638c:
    // 0x31638c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316390:
    // 0x316390: 0xc075bf8  jal         func_1D6FE0
label_316394:
    if (ctx->pc == 0x316394u) {
        ctx->pc = 0x316394u;
            // 0x316394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316398u;
        goto label_316398;
    }
    ctx->pc = 0x316390u;
    SET_GPR_U32(ctx, 31, 0x316398u);
    ctx->pc = 0x316394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316390u;
            // 0x316394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316398u; }
        if (ctx->pc != 0x316398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316398u; }
        if (ctx->pc != 0x316398u) { return; }
    }
    ctx->pc = 0x316398u;
label_316398:
    // 0x316398: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x316398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_31639c:
    // 0x31639c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31639cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3163a0:
    // 0x3163a0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3163a4:
    if (ctx->pc == 0x3163A4u) {
        ctx->pc = 0x3163A4u;
            // 0x3163a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3163A8u;
        goto label_3163a8;
    }
    ctx->pc = 0x3163A0u;
    {
        const bool branch_taken_0x3163a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3163a0) {
            ctx->pc = 0x3163A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3163A0u;
            // 0x3163a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3163B4u;
            goto label_3163b4;
        }
    }
    ctx->pc = 0x3163A8u;
label_3163a8:
    // 0x3163a8: 0xc0400a8  jal         func_1002A0
label_3163ac:
    if (ctx->pc == 0x3163ACu) {
        ctx->pc = 0x3163ACu;
            // 0x3163ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3163B0u;
        goto label_3163b0;
    }
    ctx->pc = 0x3163A8u;
    SET_GPR_U32(ctx, 31, 0x3163B0u);
    ctx->pc = 0x3163ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3163A8u;
            // 0x3163ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163B0u; }
        if (ctx->pc != 0x3163B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3163B0u; }
        if (ctx->pc != 0x3163B0u) { return; }
    }
    ctx->pc = 0x3163B0u;
label_3163b0:
    // 0x3163b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3163b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3163b4:
    // 0x3163b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3163b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3163b8:
    // 0x3163b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3163b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3163bc:
    // 0x3163bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3163bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3163c0:
    // 0x3163c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3163c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3163c4:
    // 0x3163c4: 0x3e00008  jr          $ra
label_3163c8:
    if (ctx->pc == 0x3163C8u) {
        ctx->pc = 0x3163C8u;
            // 0x3163c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3163CCu;
        goto label_3163cc;
    }
    ctx->pc = 0x3163C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3163C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3163C4u;
            // 0x3163c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3163CCu;
label_3163cc:
    // 0x3163cc: 0x0  nop
    ctx->pc = 0x3163ccu;
    // NOP
}
