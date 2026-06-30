#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC300
// Address: 0x2fc300 - 0x2fc450
void sub_002FC300_0x2fc300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC300_0x2fc300");
#endif

    switch (ctx->pc) {
        case 0x2fc300u: goto label_2fc300;
        case 0x2fc304u: goto label_2fc304;
        case 0x2fc308u: goto label_2fc308;
        case 0x2fc30cu: goto label_2fc30c;
        case 0x2fc310u: goto label_2fc310;
        case 0x2fc314u: goto label_2fc314;
        case 0x2fc318u: goto label_2fc318;
        case 0x2fc31cu: goto label_2fc31c;
        case 0x2fc320u: goto label_2fc320;
        case 0x2fc324u: goto label_2fc324;
        case 0x2fc328u: goto label_2fc328;
        case 0x2fc32cu: goto label_2fc32c;
        case 0x2fc330u: goto label_2fc330;
        case 0x2fc334u: goto label_2fc334;
        case 0x2fc338u: goto label_2fc338;
        case 0x2fc33cu: goto label_2fc33c;
        case 0x2fc340u: goto label_2fc340;
        case 0x2fc344u: goto label_2fc344;
        case 0x2fc348u: goto label_2fc348;
        case 0x2fc34cu: goto label_2fc34c;
        case 0x2fc350u: goto label_2fc350;
        case 0x2fc354u: goto label_2fc354;
        case 0x2fc358u: goto label_2fc358;
        case 0x2fc35cu: goto label_2fc35c;
        case 0x2fc360u: goto label_2fc360;
        case 0x2fc364u: goto label_2fc364;
        case 0x2fc368u: goto label_2fc368;
        case 0x2fc36cu: goto label_2fc36c;
        case 0x2fc370u: goto label_2fc370;
        case 0x2fc374u: goto label_2fc374;
        case 0x2fc378u: goto label_2fc378;
        case 0x2fc37cu: goto label_2fc37c;
        case 0x2fc380u: goto label_2fc380;
        case 0x2fc384u: goto label_2fc384;
        case 0x2fc388u: goto label_2fc388;
        case 0x2fc38cu: goto label_2fc38c;
        case 0x2fc390u: goto label_2fc390;
        case 0x2fc394u: goto label_2fc394;
        case 0x2fc398u: goto label_2fc398;
        case 0x2fc39cu: goto label_2fc39c;
        case 0x2fc3a0u: goto label_2fc3a0;
        case 0x2fc3a4u: goto label_2fc3a4;
        case 0x2fc3a8u: goto label_2fc3a8;
        case 0x2fc3acu: goto label_2fc3ac;
        case 0x2fc3b0u: goto label_2fc3b0;
        case 0x2fc3b4u: goto label_2fc3b4;
        case 0x2fc3b8u: goto label_2fc3b8;
        case 0x2fc3bcu: goto label_2fc3bc;
        case 0x2fc3c0u: goto label_2fc3c0;
        case 0x2fc3c4u: goto label_2fc3c4;
        case 0x2fc3c8u: goto label_2fc3c8;
        case 0x2fc3ccu: goto label_2fc3cc;
        case 0x2fc3d0u: goto label_2fc3d0;
        case 0x2fc3d4u: goto label_2fc3d4;
        case 0x2fc3d8u: goto label_2fc3d8;
        case 0x2fc3dcu: goto label_2fc3dc;
        case 0x2fc3e0u: goto label_2fc3e0;
        case 0x2fc3e4u: goto label_2fc3e4;
        case 0x2fc3e8u: goto label_2fc3e8;
        case 0x2fc3ecu: goto label_2fc3ec;
        case 0x2fc3f0u: goto label_2fc3f0;
        case 0x2fc3f4u: goto label_2fc3f4;
        case 0x2fc3f8u: goto label_2fc3f8;
        case 0x2fc3fcu: goto label_2fc3fc;
        case 0x2fc400u: goto label_2fc400;
        case 0x2fc404u: goto label_2fc404;
        case 0x2fc408u: goto label_2fc408;
        case 0x2fc40cu: goto label_2fc40c;
        case 0x2fc410u: goto label_2fc410;
        case 0x2fc414u: goto label_2fc414;
        case 0x2fc418u: goto label_2fc418;
        case 0x2fc41cu: goto label_2fc41c;
        case 0x2fc420u: goto label_2fc420;
        case 0x2fc424u: goto label_2fc424;
        case 0x2fc428u: goto label_2fc428;
        case 0x2fc42cu: goto label_2fc42c;
        case 0x2fc430u: goto label_2fc430;
        case 0x2fc434u: goto label_2fc434;
        case 0x2fc438u: goto label_2fc438;
        case 0x2fc43cu: goto label_2fc43c;
        case 0x2fc440u: goto label_2fc440;
        case 0x2fc444u: goto label_2fc444;
        case 0x2fc448u: goto label_2fc448;
        case 0x2fc44cu: goto label_2fc44c;
        default: break;
    }

    ctx->pc = 0x2fc300u;

label_2fc300:
    // 0x2fc300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fc304:
    // 0x2fc304: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2fc308:
    // 0x2fc308: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fc308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fc30c:
    // 0x2fc30c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fc310:
    // 0x2fc310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fc310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fc314:
    // 0x2fc314: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
label_2fc318:
    // 0x2fc318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fc318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fc31c:
    // 0x2fc31c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fc31cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc320:
    // 0x2fc320: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fc324:
    // 0x2fc324: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fc324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fc328:
    // 0x2fc328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc32c:
    // 0x2fc32c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc32cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2fc330:
    // 0x2fc330: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2fc334:
    // 0x2fc334: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc334u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2fc338:
    // 0x2fc338: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x2fc338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
label_2fc33c:
    // 0x2fc33c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2fc340:
    // 0x2fc340: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_2fc344:
    // 0x2fc344: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2fc348:
    // 0x2fc348: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2fc34c:
    // 0x2fc34c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc34cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_2fc350:
    // 0x2fc350: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_2fc354:
    // 0x2fc354: 0xc04cbd8  jal         func_132F60
label_2fc358:
    if (ctx->pc == 0x2FC358u) {
        ctx->pc = 0x2FC358u;
            // 0x2fc358: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x2FC35Cu;
        goto label_2fc35c;
    }
    ctx->pc = 0x2FC354u;
    SET_GPR_U32(ctx, 31, 0x2FC35Cu);
    ctx->pc = 0x2FC358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC354u;
            // 0x2fc358: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC35Cu; }
        if (ctx->pc != 0x2FC35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC35Cu; }
        if (ctx->pc != 0x2FC35Cu) { return; }
    }
    ctx->pc = 0x2FC35Cu;
label_2fc35c:
    // 0x2fc35c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x2fc35cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_2fc360:
    // 0x2fc360: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fc360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_2fc364:
    // 0x2fc364: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x2fc364u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
label_2fc368:
    // 0x2fc368: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fc36c:
    // 0x2fc36c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2fc36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2fc370:
    // 0x2fc370: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x2fc370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_2fc374:
    // 0x2fc374: 0xae64003c  sw          $a0, 0x3C($s3)
    ctx->pc = 0x2fc374u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 4));
label_2fc378:
    // 0x2fc378: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x2fc378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
label_2fc37c:
    // 0x2fc37c: 0xae640040  sw          $a0, 0x40($s3)
    ctx->pc = 0x2fc37cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 4));
label_2fc380:
    // 0x2fc380: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2fc380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
label_2fc384:
    // 0x2fc384: 0xae640044  sw          $a0, 0x44($s3)
    ctx->pc = 0x2fc384u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
label_2fc388:
    // 0x2fc388: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fc388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fc38c:
    // 0x2fc38c: 0xae660048  sw          $a2, 0x48($s3)
    ctx->pc = 0x2fc38cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 6));
label_2fc390:
    // 0x2fc390: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x2fc390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
label_2fc394:
    // 0x2fc394: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2fc394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2fc398:
    // 0x2fc398: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x2fc398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_2fc39c:
    // 0x2fc39c: 0xae630050  sw          $v1, 0x50($s3)
    ctx->pc = 0x2fc39cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 3));
label_2fc3a0:
    // 0x2fc3a0: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x2fc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_2fc3a4:
    // 0x2fc3a4: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2fc3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_2fc3a8:
    // 0x2fc3a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2fc3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_2fc3ac:
    // 0x2fc3ac: 0xa2600064  sb          $zero, 0x64($s3)
    ctx->pc = 0x2fc3acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 0));
label_2fc3b0:
    // 0x2fc3b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fc3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fc3b4:
    // 0x2fc3b4: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2fc3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_2fc3b8:
    // 0x2fc3b8: 0x8e5000c8  lw          $s0, 0xC8($s2)
    ctx->pc = 0x2fc3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2fc3bc:
    // 0x2fc3bc: 0xc040180  jal         func_100600
label_2fc3c0:
    if (ctx->pc == 0x2FC3C0u) {
        ctx->pc = 0x2FC3C0u;
            // 0x2fc3c0: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x2FC3C4u;
        goto label_2fc3c4;
    }
    ctx->pc = 0x2FC3BCu;
    SET_GPR_U32(ctx, 31, 0x2FC3C4u);
    ctx->pc = 0x2FC3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3BCu;
            // 0x2fc3c0: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC3C4u; }
        if (ctx->pc != 0x2FC3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC3C4u; }
        if (ctx->pc != 0x2FC3C4u) { return; }
    }
    ctx->pc = 0x2FC3C4u;
label_2fc3c4:
    // 0x2fc3c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2fc3c8:
    if (ctx->pc == 0x2FC3C8u) {
        ctx->pc = 0x2FC3C8u;
            // 0x2fc3c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3CCu;
        goto label_2fc3cc;
    }
    ctx->pc = 0x2FC3C4u;
    {
        const bool branch_taken_0x2fc3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3C4u;
            // 0x2fc3c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3c4) {
            ctx->pc = 0x2FC424u;
            goto label_2fc424;
        }
    }
    ctx->pc = 0x2FC3CCu;
label_2fc3cc:
    // 0x2fc3cc: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x2fc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_2fc3d0:
    // 0x2fc3d0: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x2fc3d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2fc3d4:
    // 0x2fc3d4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fc3d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fc3d8:
    // 0x2fc3d8: 0x320f809  jalr        $t9
label_2fc3dc:
    if (ctx->pc == 0x2FC3DCu) {
        ctx->pc = 0x2FC3DCu;
            // 0x2fc3dc: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x2FC3E0u;
        goto label_2fc3e0;
    }
    ctx->pc = 0x2FC3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC3E0u);
        ctx->pc = 0x2FC3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3D8u;
            // 0x2fc3dc: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC3E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC3E0u; }
            if (ctx->pc != 0x2FC3E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC3E0u;
label_2fc3e0:
    // 0x2fc3e0: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x2fc3e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_2fc3e4:
    // 0x2fc3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc3e8:
    // 0x2fc3e8: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x2fc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_2fc3ec:
    // 0x2fc3ec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2fc3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2fc3f0:
    // 0x2fc3f0: 0x34457a1a  ori         $a1, $v0, 0x7A1A
    ctx->pc = 0x2fc3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31258);
label_2fc3f4:
    // 0x2fc3f4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2fc3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2fc3f8:
    // 0x2fc3f8: 0xc10ca68  jal         func_4329A0
label_2fc3fc:
    if (ctx->pc == 0x2FC3FCu) {
        ctx->pc = 0x2FC3FCu;
            // 0x2fc3fc: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->pc = 0x2FC400u;
        goto label_2fc400;
    }
    ctx->pc = 0x2FC3F8u;
    SET_GPR_U32(ctx, 31, 0x2FC400u);
    ctx->pc = 0x2FC3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3F8u;
            // 0x2fc3fc: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC400u; }
        if (ctx->pc != 0x2FC400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC400u; }
        if (ctx->pc != 0x2FC400u) { return; }
    }
    ctx->pc = 0x2FC400u;
label_2fc400:
    // 0x2fc400: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2fc404:
    // 0x2fc404: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2fc408:
    // 0x2fc408: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2fc408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_2fc40c:
    // 0x2fc40c: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x2fc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
label_2fc410:
    // 0x2fc410: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2fc410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2fc414:
    // 0x2fc414: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fc414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2fc418:
    // 0x2fc418: 0xae320054  sw          $s2, 0x54($s1)
    ctx->pc = 0x2fc418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 18));
label_2fc41c:
    // 0x2fc41c: 0xa6200058  sh          $zero, 0x58($s1)
    ctx->pc = 0x2fc41cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 88), (uint16_t)GPR_U32(ctx, 0));
label_2fc420:
    // 0x2fc420: 0xa230005a  sb          $s0, 0x5A($s1)
    ctx->pc = 0x2fc420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 16));
label_2fc424:
    // 0x2fc424: 0xae710070  sw          $s1, 0x70($s3)
    ctx->pc = 0x2fc424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 17));
label_2fc428:
    // 0x2fc428: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2fc428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fc42c:
    // 0x2fc42c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fc42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fc430:
    // 0x2fc430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fc430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fc434:
    // 0x2fc434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fc434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fc438:
    // 0x2fc438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc43c:
    // 0x2fc43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc440:
    // 0x2fc440: 0x3e00008  jr          $ra
label_2fc444:
    if (ctx->pc == 0x2FC444u) {
        ctx->pc = 0x2FC444u;
            // 0x2fc444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FC448u;
        goto label_2fc448;
    }
    ctx->pc = 0x2FC440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC440u;
            // 0x2fc444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC448u;
label_2fc448:
    // 0x2fc448: 0x0  nop
    ctx->pc = 0x2fc448u;
    // NOP
label_2fc44c:
    // 0x2fc44c: 0x0  nop
    ctx->pc = 0x2fc44cu;
    // NOP
}
