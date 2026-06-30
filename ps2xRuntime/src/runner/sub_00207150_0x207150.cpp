#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207150
// Address: 0x207150 - 0x2073e0
void sub_00207150_0x207150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207150_0x207150");
#endif

    switch (ctx->pc) {
        case 0x207150u: goto label_207150;
        case 0x207154u: goto label_207154;
        case 0x207158u: goto label_207158;
        case 0x20715cu: goto label_20715c;
        case 0x207160u: goto label_207160;
        case 0x207164u: goto label_207164;
        case 0x207168u: goto label_207168;
        case 0x20716cu: goto label_20716c;
        case 0x207170u: goto label_207170;
        case 0x207174u: goto label_207174;
        case 0x207178u: goto label_207178;
        case 0x20717cu: goto label_20717c;
        case 0x207180u: goto label_207180;
        case 0x207184u: goto label_207184;
        case 0x207188u: goto label_207188;
        case 0x20718cu: goto label_20718c;
        case 0x207190u: goto label_207190;
        case 0x207194u: goto label_207194;
        case 0x207198u: goto label_207198;
        case 0x20719cu: goto label_20719c;
        case 0x2071a0u: goto label_2071a0;
        case 0x2071a4u: goto label_2071a4;
        case 0x2071a8u: goto label_2071a8;
        case 0x2071acu: goto label_2071ac;
        case 0x2071b0u: goto label_2071b0;
        case 0x2071b4u: goto label_2071b4;
        case 0x2071b8u: goto label_2071b8;
        case 0x2071bcu: goto label_2071bc;
        case 0x2071c0u: goto label_2071c0;
        case 0x2071c4u: goto label_2071c4;
        case 0x2071c8u: goto label_2071c8;
        case 0x2071ccu: goto label_2071cc;
        case 0x2071d0u: goto label_2071d0;
        case 0x2071d4u: goto label_2071d4;
        case 0x2071d8u: goto label_2071d8;
        case 0x2071dcu: goto label_2071dc;
        case 0x2071e0u: goto label_2071e0;
        case 0x2071e4u: goto label_2071e4;
        case 0x2071e8u: goto label_2071e8;
        case 0x2071ecu: goto label_2071ec;
        case 0x2071f0u: goto label_2071f0;
        case 0x2071f4u: goto label_2071f4;
        case 0x2071f8u: goto label_2071f8;
        case 0x2071fcu: goto label_2071fc;
        case 0x207200u: goto label_207200;
        case 0x207204u: goto label_207204;
        case 0x207208u: goto label_207208;
        case 0x20720cu: goto label_20720c;
        case 0x207210u: goto label_207210;
        case 0x207214u: goto label_207214;
        case 0x207218u: goto label_207218;
        case 0x20721cu: goto label_20721c;
        case 0x207220u: goto label_207220;
        case 0x207224u: goto label_207224;
        case 0x207228u: goto label_207228;
        case 0x20722cu: goto label_20722c;
        case 0x207230u: goto label_207230;
        case 0x207234u: goto label_207234;
        case 0x207238u: goto label_207238;
        case 0x20723cu: goto label_20723c;
        case 0x207240u: goto label_207240;
        case 0x207244u: goto label_207244;
        case 0x207248u: goto label_207248;
        case 0x20724cu: goto label_20724c;
        case 0x207250u: goto label_207250;
        case 0x207254u: goto label_207254;
        case 0x207258u: goto label_207258;
        case 0x20725cu: goto label_20725c;
        case 0x207260u: goto label_207260;
        case 0x207264u: goto label_207264;
        case 0x207268u: goto label_207268;
        case 0x20726cu: goto label_20726c;
        case 0x207270u: goto label_207270;
        case 0x207274u: goto label_207274;
        case 0x207278u: goto label_207278;
        case 0x20727cu: goto label_20727c;
        case 0x207280u: goto label_207280;
        case 0x207284u: goto label_207284;
        case 0x207288u: goto label_207288;
        case 0x20728cu: goto label_20728c;
        case 0x207290u: goto label_207290;
        case 0x207294u: goto label_207294;
        case 0x207298u: goto label_207298;
        case 0x20729cu: goto label_20729c;
        case 0x2072a0u: goto label_2072a0;
        case 0x2072a4u: goto label_2072a4;
        case 0x2072a8u: goto label_2072a8;
        case 0x2072acu: goto label_2072ac;
        case 0x2072b0u: goto label_2072b0;
        case 0x2072b4u: goto label_2072b4;
        case 0x2072b8u: goto label_2072b8;
        case 0x2072bcu: goto label_2072bc;
        case 0x2072c0u: goto label_2072c0;
        case 0x2072c4u: goto label_2072c4;
        case 0x2072c8u: goto label_2072c8;
        case 0x2072ccu: goto label_2072cc;
        case 0x2072d0u: goto label_2072d0;
        case 0x2072d4u: goto label_2072d4;
        case 0x2072d8u: goto label_2072d8;
        case 0x2072dcu: goto label_2072dc;
        case 0x2072e0u: goto label_2072e0;
        case 0x2072e4u: goto label_2072e4;
        case 0x2072e8u: goto label_2072e8;
        case 0x2072ecu: goto label_2072ec;
        case 0x2072f0u: goto label_2072f0;
        case 0x2072f4u: goto label_2072f4;
        case 0x2072f8u: goto label_2072f8;
        case 0x2072fcu: goto label_2072fc;
        case 0x207300u: goto label_207300;
        case 0x207304u: goto label_207304;
        case 0x207308u: goto label_207308;
        case 0x20730cu: goto label_20730c;
        case 0x207310u: goto label_207310;
        case 0x207314u: goto label_207314;
        case 0x207318u: goto label_207318;
        case 0x20731cu: goto label_20731c;
        case 0x207320u: goto label_207320;
        case 0x207324u: goto label_207324;
        case 0x207328u: goto label_207328;
        case 0x20732cu: goto label_20732c;
        case 0x207330u: goto label_207330;
        case 0x207334u: goto label_207334;
        case 0x207338u: goto label_207338;
        case 0x20733cu: goto label_20733c;
        case 0x207340u: goto label_207340;
        case 0x207344u: goto label_207344;
        case 0x207348u: goto label_207348;
        case 0x20734cu: goto label_20734c;
        case 0x207350u: goto label_207350;
        case 0x207354u: goto label_207354;
        case 0x207358u: goto label_207358;
        case 0x20735cu: goto label_20735c;
        case 0x207360u: goto label_207360;
        case 0x207364u: goto label_207364;
        case 0x207368u: goto label_207368;
        case 0x20736cu: goto label_20736c;
        case 0x207370u: goto label_207370;
        case 0x207374u: goto label_207374;
        case 0x207378u: goto label_207378;
        case 0x20737cu: goto label_20737c;
        case 0x207380u: goto label_207380;
        case 0x207384u: goto label_207384;
        case 0x207388u: goto label_207388;
        case 0x20738cu: goto label_20738c;
        case 0x207390u: goto label_207390;
        case 0x207394u: goto label_207394;
        case 0x207398u: goto label_207398;
        case 0x20739cu: goto label_20739c;
        case 0x2073a0u: goto label_2073a0;
        case 0x2073a4u: goto label_2073a4;
        case 0x2073a8u: goto label_2073a8;
        case 0x2073acu: goto label_2073ac;
        case 0x2073b0u: goto label_2073b0;
        case 0x2073b4u: goto label_2073b4;
        case 0x2073b8u: goto label_2073b8;
        case 0x2073bcu: goto label_2073bc;
        case 0x2073c0u: goto label_2073c0;
        case 0x2073c4u: goto label_2073c4;
        case 0x2073c8u: goto label_2073c8;
        case 0x2073ccu: goto label_2073cc;
        case 0x2073d0u: goto label_2073d0;
        case 0x2073d4u: goto label_2073d4;
        case 0x2073d8u: goto label_2073d8;
        case 0x2073dcu: goto label_2073dc;
        default: break;
    }

    ctx->pc = 0x207150u;

label_207150:
    // 0x207150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_207154:
    // 0x207154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x207154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_207158:
    // 0x207158: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x207158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20715c:
    // 0x20715c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207160:
    // 0x207160: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x207160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207164:
    // 0x207164: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_207168:
    // 0x207168: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x207168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20716c:
    // 0x20716c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20716cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_207170:
    // 0x207170: 0xc080cd4  jal         func_203350
label_207174:
    if (ctx->pc == 0x207174u) {
        ctx->pc = 0x207174u;
            // 0x207174: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x207178u;
        goto label_207178;
    }
    ctx->pc = 0x207170u;
    SET_GPR_U32(ctx, 31, 0x207178u);
    ctx->pc = 0x207174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207170u;
            // 0x207174: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203350u;
    if (runtime->hasFunction(0x203350u)) {
        auto targetFn = runtime->lookupFunction(0x203350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207178u; }
        if (ctx->pc != 0x207178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203350_0x203350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207178u; }
        if (ctx->pc != 0x207178u) { return; }
    }
    ctx->pc = 0x207178u;
label_207178:
    // 0x207178: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x207178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_20717c:
    // 0x20717c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20717cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207180:
    // 0x207180: 0x2463e400  addiu       $v1, $v1, -0x1C00
    ctx->pc = 0x207180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
label_207184:
    // 0x207184: 0x2442e428  addiu       $v0, $v0, -0x1BD8
    ctx->pc = 0x207184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960168));
label_207188:
    // 0x207188: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x207188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_20718c:
    // 0x20718c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x20718cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_207190:
    // 0x207190: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x207190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_207194:
    // 0x207194: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x207194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_207198:
    // 0x207198: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x207198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_20719c:
    // 0x20719c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x20719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2071a0:
    // 0x2071a0: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x2071a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_2071a4:
    // 0x2071a4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2071a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2071a8:
    // 0x2071a8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2071ac:
    if (ctx->pc == 0x2071ACu) {
        ctx->pc = 0x2071ACu;
            // 0x2071ac: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->pc = 0x2071B0u;
        goto label_2071b0;
    }
    ctx->pc = 0x2071A8u;
    {
        const bool branch_taken_0x2071a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2071A8u;
            // 0x2071ac: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071a8) {
            ctx->pc = 0x2071CCu;
            goto label_2071cc;
        }
    }
    ctx->pc = 0x2071B0u;
label_2071b0:
    // 0x2071b0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2071b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2071b4:
    // 0x2071b4: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x2071b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_2071b8:
    // 0x2071b8: 0x54200001  bnel        $at, $zero, . + 4 + (0x1 << 2)
label_2071bc:
    if (ctx->pc == 0x2071BCu) {
        ctx->pc = 0x2071BCu;
            // 0x2071bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2071C0u;
        goto label_2071c0;
    }
    ctx->pc = 0x2071B8u;
    {
        const bool branch_taken_0x2071b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2071b8) {
            ctx->pc = 0x2071BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2071B8u;
            // 0x2071bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2071C0u;
            goto label_2071c0;
        }
    }
    ctx->pc = 0x2071C0u;
label_2071c0:
    // 0x2071c0: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2071c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2071c4:
    // 0x2071c4: 0xc0a725c  jal         func_29C970
label_2071c8:
    if (ctx->pc == 0x2071C8u) {
        ctx->pc = 0x2071C8u;
            // 0x2071c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2071CCu;
        goto label_2071cc;
    }
    ctx->pc = 0x2071C4u;
    SET_GPR_U32(ctx, 31, 0x2071CCu);
    ctx->pc = 0x2071C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2071C4u;
            // 0x2071c8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071CCu; }
        if (ctx->pc != 0x2071CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071CCu; }
        if (ctx->pc != 0x2071CCu) { return; }
    }
    ctx->pc = 0x2071CCu;
label_2071cc:
    // 0x2071cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2071ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2071d0:
    // 0x2071d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2071d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2071d4:
    // 0x2071d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2071d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2071d8:
    // 0x2071d8: 0xc081cf8  jal         func_2073E0
label_2071dc:
    if (ctx->pc == 0x2071DCu) {
        ctx->pc = 0x2071DCu;
            // 0x2071dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2071E0u;
        goto label_2071e0;
    }
    ctx->pc = 0x2071D8u;
    SET_GPR_U32(ctx, 31, 0x2071E0u);
    ctx->pc = 0x2071DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2071D8u;
            // 0x2071dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2073E0u;
    if (runtime->hasFunction(0x2073E0u)) {
        auto targetFn = runtime->lookupFunction(0x2073E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071E0u; }
        if (ctx->pc != 0x2071E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002073E0_0x2073e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071E0u; }
        if (ctx->pc != 0x2071E0u) { return; }
    }
    ctx->pc = 0x2071E0u;
label_2071e0:
    // 0x2071e0: 0xc081e60  jal         func_207980
label_2071e4:
    if (ctx->pc == 0x2071E4u) {
        ctx->pc = 0x2071E4u;
            // 0x2071e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2071E8u;
        goto label_2071e8;
    }
    ctx->pc = 0x2071E0u;
    SET_GPR_U32(ctx, 31, 0x2071E8u);
    ctx->pc = 0x2071E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2071E0u;
            // 0x2071e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207980u;
    if (runtime->hasFunction(0x207980u)) {
        auto targetFn = runtime->lookupFunction(0x207980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071E8u; }
        if (ctx->pc != 0x2071E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207980_0x207980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2071E8u; }
        if (ctx->pc != 0x2071E8u) { return; }
    }
    ctx->pc = 0x2071E8u;
label_2071e8:
    // 0x2071e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2071e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2071ec:
    // 0x2071ec: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2071ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2071f0:
    // 0x2071f0: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x2071f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_2071f4:
    // 0x2071f4: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x2071f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_2071f8:
    // 0x2071f8: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x2071f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
label_2071fc:
    // 0x2071fc: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x2071fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
label_207200:
    // 0x207200: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x207200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_207204:
    // 0x207204: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x207204u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_207208:
    // 0x207208: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x207208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
label_20720c:
    // 0x20720c: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x20720cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
label_207210:
    // 0x207210: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x207210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_207214:
    // 0x207214: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x207214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_207218:
    // 0x207218: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x207218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20721c:
    // 0x20721c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20721cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_207220:
    // 0x207220: 0x3e00008  jr          $ra
label_207224:
    if (ctx->pc == 0x207224u) {
        ctx->pc = 0x207224u;
            // 0x207224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x207228u;
        goto label_207228;
    }
    ctx->pc = 0x207220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207220u;
            // 0x207224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207228u;
label_207228:
    // 0x207228: 0x0  nop
    ctx->pc = 0x207228u;
    // NOP
label_20722c:
    // 0x20722c: 0x0  nop
    ctx->pc = 0x20722cu;
    // NOP
label_207230:
    // 0x207230: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_207234:
    // 0x207234: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x207234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_207238:
    // 0x207238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20723c:
    // 0x20723c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_207240:
    // 0x207240: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x207240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207244:
    // 0x207244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_207248:
    // 0x207248: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x207248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20724c:
    // 0x20724c: 0x12600059  beqz        $s3, . + 4 + (0x59 << 2)
label_207250:
    if (ctx->pc == 0x207250u) {
        ctx->pc = 0x207250u;
            // 0x207250: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x207254u;
        goto label_207254;
    }
    ctx->pc = 0x20724Cu;
    {
        const bool branch_taken_0x20724c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x207250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20724Cu;
            // 0x207250: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20724c) {
            ctx->pc = 0x2073B4u;
            goto label_2073b4;
        }
    }
    ctx->pc = 0x207254u;
label_207254:
    // 0x207254: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x207254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_207258:
    // 0x207258: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20725c:
    // 0x20725c: 0x2463e400  addiu       $v1, $v1, -0x1C00
    ctx->pc = 0x20725cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960128));
label_207260:
    // 0x207260: 0x2442e428  addiu       $v0, $v0, -0x1BD8
    ctx->pc = 0x207260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960168));
label_207264:
    // 0x207264: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x207264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_207268:
    // 0x207268: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x207268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_20726c:
    // 0x20726c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x20726cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_207270:
    // 0x207270: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_207274:
    if (ctx->pc == 0x207274u) {
        ctx->pc = 0x207274u;
            // 0x207274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207278u;
        goto label_207278;
    }
    ctx->pc = 0x207270u;
    {
        const bool branch_taken_0x207270 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x207274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207270u;
            // 0x207274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207270) {
            ctx->pc = 0x2072E0u;
            goto label_2072e0;
        }
    }
    ctx->pc = 0x207278u;
label_207278:
    // 0x207278: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x207278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20727c:
    // 0x20727c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x20727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_207280:
    // 0x207280: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x207280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_207284:
    // 0x207284: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207288:
    // 0x207288: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x207288u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_20728c:
    // 0x20728c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_207290:
    if (ctx->pc == 0x207290u) {
        ctx->pc = 0x207294u;
        goto label_207294;
    }
    ctx->pc = 0x20728Cu;
    {
        const bool branch_taken_0x20728c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20728c) {
            ctx->pc = 0x2072C8u;
            goto label_2072c8;
        }
    }
    ctx->pc = 0x207294u;
label_207294:
    // 0x207294: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x207294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_207298:
    // 0x207298: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x207298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20729c:
    // 0x20729c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x20729cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2072a0:
    // 0x2072a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2072a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2072a4:
    // 0x2072a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2072a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2072a8:
    // 0x2072a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2072ac:
    if (ctx->pc == 0x2072ACu) {
        ctx->pc = 0x2072B0u;
        goto label_2072b0;
    }
    ctx->pc = 0x2072A8u;
    {
        const bool branch_taken_0x2072a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2072a8) {
            ctx->pc = 0x2072C8u;
            goto label_2072c8;
        }
    }
    ctx->pc = 0x2072B0u;
label_2072b0:
    // 0x2072b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2072b4:
    if (ctx->pc == 0x2072B4u) {
        ctx->pc = 0x2072B8u;
        goto label_2072b8;
    }
    ctx->pc = 0x2072B0u;
    {
        const bool branch_taken_0x2072b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2072b0) {
            ctx->pc = 0x2072C8u;
            goto label_2072c8;
        }
    }
    ctx->pc = 0x2072B8u;
label_2072b8:
    // 0x2072b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2072b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2072bc:
    // 0x2072bc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2072bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2072c0:
    // 0x2072c0: 0x320f809  jalr        $t9
label_2072c4:
    if (ctx->pc == 0x2072C4u) {
        ctx->pc = 0x2072C4u;
            // 0x2072c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2072C8u;
        goto label_2072c8;
    }
    ctx->pc = 0x2072C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2072C8u);
        ctx->pc = 0x2072C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072C0u;
            // 0x2072c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2072C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2072C8u; }
            if (ctx->pc != 0x2072C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2072C8u;
label_2072c8:
    // 0x2072c8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2072c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2072cc:
    // 0x2072cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2072d0:
    // 0x2072d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2072d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2072d4:
    // 0x2072d4: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_2072d8:
    if (ctx->pc == 0x2072D8u) {
        ctx->pc = 0x2072D8u;
            // 0x2072d8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2072DCu;
        goto label_2072dc;
    }
    ctx->pc = 0x2072D4u;
    {
        const bool branch_taken_0x2072d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2072D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072D4u;
            // 0x2072d8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072d4) {
            ctx->pc = 0x20727Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20727c;
        }
    }
    ctx->pc = 0x2072DCu;
label_2072dc:
    // 0x2072dc: 0x0  nop
    ctx->pc = 0x2072dcu;
    // NOP
label_2072e0:
    // 0x2072e0: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_2072e4:
    // 0x2072e4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2072e8:
    if (ctx->pc == 0x2072E8u) {
        ctx->pc = 0x2072ECu;
        goto label_2072ec;
    }
    ctx->pc = 0x2072E4u;
    {
        const bool branch_taken_0x2072e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2072e4) {
            ctx->pc = 0x207324u;
            goto label_207324;
        }
    }
    ctx->pc = 0x2072ECu;
label_2072ec:
    // 0x2072ec: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2072ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_2072f0:
    // 0x2072f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2072f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2072f4:
    // 0x2072f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2072f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2072f8:
    // 0x2072f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2072fc:
    if (ctx->pc == 0x2072FCu) {
        ctx->pc = 0x207300u;
        goto label_207300;
    }
    ctx->pc = 0x2072F8u;
    {
        const bool branch_taken_0x2072f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2072f8) {
            ctx->pc = 0x207324u;
            goto label_207324;
        }
    }
    ctx->pc = 0x207300u;
label_207300:
    // 0x207300: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_207304:
    // 0x207304: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_207308:
    // 0x207308: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x207308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_20730c:
    // 0x20730c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x20730cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_207310:
    // 0x207310: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x207310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_207314:
    // 0x207314: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x207314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_207318:
    // 0x207318: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x207318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_20731c:
    // 0x20731c: 0xc0a7ab4  jal         func_29EAD0
label_207320:
    if (ctx->pc == 0x207320u) {
        ctx->pc = 0x207320u;
            // 0x207320: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x207324u;
        goto label_207324;
    }
    ctx->pc = 0x20731Cu;
    SET_GPR_U32(ctx, 31, 0x207324u);
    ctx->pc = 0x207320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20731Cu;
            // 0x207320: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207324u; }
        if (ctx->pc != 0x207324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207324u; }
        if (ctx->pc != 0x207324u) { return; }
    }
    ctx->pc = 0x207324u;
label_207324:
    // 0x207324: 0x5260001a  beql        $s3, $zero, . + 4 + (0x1A << 2)
label_207328:
    if (ctx->pc == 0x207328u) {
        ctx->pc = 0x207328u;
            // 0x207328: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x20732Cu;
        goto label_20732c;
    }
    ctx->pc = 0x207324u;
    {
        const bool branch_taken_0x207324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x207324) {
            ctx->pc = 0x207328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207324u;
            // 0x207328: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207390u;
            goto label_207390;
        }
    }
    ctx->pc = 0x20732Cu;
label_20732c:
    // 0x20732c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207330:
    // 0x207330: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x207330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_207334:
    // 0x207334: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x207334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_207338:
    // 0x207338: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x207338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
label_20733c:
    // 0x20733c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20733cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_207340:
    // 0x207340: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_207344:
    // 0x207344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_207348:
    if (ctx->pc == 0x207348u) {
        ctx->pc = 0x207348u;
            // 0x207348: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x20734Cu;
        goto label_20734c;
    }
    ctx->pc = 0x207344u;
    {
        const bool branch_taken_0x207344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207344u;
            // 0x207348: 0xae630010  sw          $v1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207344) {
            ctx->pc = 0x207358u;
            goto label_207358;
        }
    }
    ctx->pc = 0x20734Cu;
label_20734c:
    // 0x20734c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20734cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207350:
    // 0x207350: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x207350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_207354:
    // 0x207354: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x207354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_207358:
    // 0x207358: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_20735c:
    if (ctx->pc == 0x20735Cu) {
        ctx->pc = 0x207360u;
        goto label_207360;
    }
    ctx->pc = 0x207358u;
    {
        const bool branch_taken_0x207358 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x207358) {
            ctx->pc = 0x20738Cu;
            goto label_20738c;
        }
    }
    ctx->pc = 0x207360u;
label_207360:
    // 0x207360: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207364:
    // 0x207364: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x207364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_207368:
    // 0x207368: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_20736c:
    if (ctx->pc == 0x20736Cu) {
        ctx->pc = 0x20736Cu;
            // 0x20736c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x207370u;
        goto label_207370;
    }
    ctx->pc = 0x207368u;
    {
        const bool branch_taken_0x207368 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207368u;
            // 0x20736c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207368) {
            ctx->pc = 0x20738Cu;
            goto label_20738c;
        }
    }
    ctx->pc = 0x207370u;
label_207370:
    // 0x207370: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207374:
    // 0x207374: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x207374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_207378:
    // 0x207378: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_20737c:
    if (ctx->pc == 0x20737Cu) {
        ctx->pc = 0x20737Cu;
            // 0x20737c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x207380u;
        goto label_207380;
    }
    ctx->pc = 0x207378u;
    {
        const bool branch_taken_0x207378 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207378u;
            // 0x20737c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207378) {
            ctx->pc = 0x20738Cu;
            goto label_20738c;
        }
    }
    ctx->pc = 0x207380u;
label_207380:
    // 0x207380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x207380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_207384:
    // 0x207384: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x207384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_207388:
    // 0x207388: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x207388u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_20738c:
    // 0x20738c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x20738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_207390:
    // 0x207390: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207390u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_207394:
    // 0x207394: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_207398:
    if (ctx->pc == 0x207398u) {
        ctx->pc = 0x207398u;
            // 0x207398: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20739Cu;
        goto label_20739c;
    }
    ctx->pc = 0x207394u;
    {
        const bool branch_taken_0x207394 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207394) {
            ctx->pc = 0x207398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207394u;
            // 0x207398: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2073B8u;
            goto label_2073b8;
        }
    }
    ctx->pc = 0x20739Cu;
label_20739c:
    // 0x20739c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2073a0:
    // 0x2073a0: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x2073a0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_2073a4:
    // 0x2073a4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2073a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2073a8:
    // 0x2073a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2073a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2073ac:
    // 0x2073ac: 0xc0a7ab4  jal         func_29EAD0
label_2073b0:
    if (ctx->pc == 0x2073B0u) {
        ctx->pc = 0x2073B0u;
            // 0x2073b0: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x2073B4u;
        goto label_2073b4;
    }
    ctx->pc = 0x2073ACu;
    SET_GPR_U32(ctx, 31, 0x2073B4u);
    ctx->pc = 0x2073B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2073ACu;
            // 0x2073b0: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073B4u; }
        if (ctx->pc != 0x2073B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2073B4u; }
        if (ctx->pc != 0x2073B4u) { return; }
    }
    ctx->pc = 0x2073B4u;
label_2073b4:
    // 0x2073b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2073b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2073b8:
    // 0x2073b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2073b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2073bc:
    // 0x2073bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2073bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2073c0:
    // 0x2073c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2073c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2073c4:
    // 0x2073c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2073c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2073c8:
    // 0x2073c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2073c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2073cc:
    // 0x2073cc: 0x3e00008  jr          $ra
label_2073d0:
    if (ctx->pc == 0x2073D0u) {
        ctx->pc = 0x2073D0u;
            // 0x2073d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2073D4u;
        goto label_2073d4;
    }
    ctx->pc = 0x2073CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2073CCu;
            // 0x2073d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2073D4u;
label_2073d4:
    // 0x2073d4: 0x0  nop
    ctx->pc = 0x2073d4u;
    // NOP
label_2073d8:
    // 0x2073d8: 0x0  nop
    ctx->pc = 0x2073d8u;
    // NOP
label_2073dc:
    // 0x2073dc: 0x0  nop
    ctx->pc = 0x2073dcu;
    // NOP
}
