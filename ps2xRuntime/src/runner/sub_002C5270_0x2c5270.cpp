#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5270
// Address: 0x2c5270 - 0x2c53d0
void sub_002C5270_0x2c5270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5270_0x2c5270");
#endif

    switch (ctx->pc) {
        case 0x2c5270u: goto label_2c5270;
        case 0x2c5274u: goto label_2c5274;
        case 0x2c5278u: goto label_2c5278;
        case 0x2c527cu: goto label_2c527c;
        case 0x2c5280u: goto label_2c5280;
        case 0x2c5284u: goto label_2c5284;
        case 0x2c5288u: goto label_2c5288;
        case 0x2c528cu: goto label_2c528c;
        case 0x2c5290u: goto label_2c5290;
        case 0x2c5294u: goto label_2c5294;
        case 0x2c5298u: goto label_2c5298;
        case 0x2c529cu: goto label_2c529c;
        case 0x2c52a0u: goto label_2c52a0;
        case 0x2c52a4u: goto label_2c52a4;
        case 0x2c52a8u: goto label_2c52a8;
        case 0x2c52acu: goto label_2c52ac;
        case 0x2c52b0u: goto label_2c52b0;
        case 0x2c52b4u: goto label_2c52b4;
        case 0x2c52b8u: goto label_2c52b8;
        case 0x2c52bcu: goto label_2c52bc;
        case 0x2c52c0u: goto label_2c52c0;
        case 0x2c52c4u: goto label_2c52c4;
        case 0x2c52c8u: goto label_2c52c8;
        case 0x2c52ccu: goto label_2c52cc;
        case 0x2c52d0u: goto label_2c52d0;
        case 0x2c52d4u: goto label_2c52d4;
        case 0x2c52d8u: goto label_2c52d8;
        case 0x2c52dcu: goto label_2c52dc;
        case 0x2c52e0u: goto label_2c52e0;
        case 0x2c52e4u: goto label_2c52e4;
        case 0x2c52e8u: goto label_2c52e8;
        case 0x2c52ecu: goto label_2c52ec;
        case 0x2c52f0u: goto label_2c52f0;
        case 0x2c52f4u: goto label_2c52f4;
        case 0x2c52f8u: goto label_2c52f8;
        case 0x2c52fcu: goto label_2c52fc;
        case 0x2c5300u: goto label_2c5300;
        case 0x2c5304u: goto label_2c5304;
        case 0x2c5308u: goto label_2c5308;
        case 0x2c530cu: goto label_2c530c;
        case 0x2c5310u: goto label_2c5310;
        case 0x2c5314u: goto label_2c5314;
        case 0x2c5318u: goto label_2c5318;
        case 0x2c531cu: goto label_2c531c;
        case 0x2c5320u: goto label_2c5320;
        case 0x2c5324u: goto label_2c5324;
        case 0x2c5328u: goto label_2c5328;
        case 0x2c532cu: goto label_2c532c;
        case 0x2c5330u: goto label_2c5330;
        case 0x2c5334u: goto label_2c5334;
        case 0x2c5338u: goto label_2c5338;
        case 0x2c533cu: goto label_2c533c;
        case 0x2c5340u: goto label_2c5340;
        case 0x2c5344u: goto label_2c5344;
        case 0x2c5348u: goto label_2c5348;
        case 0x2c534cu: goto label_2c534c;
        case 0x2c5350u: goto label_2c5350;
        case 0x2c5354u: goto label_2c5354;
        case 0x2c5358u: goto label_2c5358;
        case 0x2c535cu: goto label_2c535c;
        case 0x2c5360u: goto label_2c5360;
        case 0x2c5364u: goto label_2c5364;
        case 0x2c5368u: goto label_2c5368;
        case 0x2c536cu: goto label_2c536c;
        case 0x2c5370u: goto label_2c5370;
        case 0x2c5374u: goto label_2c5374;
        case 0x2c5378u: goto label_2c5378;
        case 0x2c537cu: goto label_2c537c;
        case 0x2c5380u: goto label_2c5380;
        case 0x2c5384u: goto label_2c5384;
        case 0x2c5388u: goto label_2c5388;
        case 0x2c538cu: goto label_2c538c;
        case 0x2c5390u: goto label_2c5390;
        case 0x2c5394u: goto label_2c5394;
        case 0x2c5398u: goto label_2c5398;
        case 0x2c539cu: goto label_2c539c;
        case 0x2c53a0u: goto label_2c53a0;
        case 0x2c53a4u: goto label_2c53a4;
        case 0x2c53a8u: goto label_2c53a8;
        case 0x2c53acu: goto label_2c53ac;
        case 0x2c53b0u: goto label_2c53b0;
        case 0x2c53b4u: goto label_2c53b4;
        case 0x2c53b8u: goto label_2c53b8;
        case 0x2c53bcu: goto label_2c53bc;
        case 0x2c53c0u: goto label_2c53c0;
        case 0x2c53c4u: goto label_2c53c4;
        case 0x2c53c8u: goto label_2c53c8;
        case 0x2c53ccu: goto label_2c53cc;
        default: break;
    }

    ctx->pc = 0x2c5270u;

label_2c5270:
    // 0x2c5270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c5274:
    // 0x2c5274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c5278:
    // 0x2c5278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c527c:
    // 0x2c527c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c5280:
    // 0x2c5280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5284:
    // 0x2c5284: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c5288:
    if (ctx->pc == 0x2C5288u) {
        ctx->pc = 0x2C5288u;
            // 0x2c5288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C528Cu;
        goto label_2c528c;
    }
    ctx->pc = 0x2C5284u;
    {
        const bool branch_taken_0x2c5284 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5284u;
            // 0x2c5288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5284) {
            ctx->pc = 0x2C53B8u;
            goto label_2c53b8;
        }
    }
    ctx->pc = 0x2C528Cu;
label_2c528c:
    // 0x2c528c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c5290:
    // 0x2c5290: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c5294:
    // 0x2c5294: 0x24630e60  addiu       $v1, $v1, 0xE60
    ctx->pc = 0x2c5294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3680));
label_2c5298:
    // 0x2c5298: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c5298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c529c:
    // 0x2c529c: 0x24420e98  addiu       $v0, $v0, 0xE98
    ctx->pc = 0x2c529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3736));
label_2c52a0:
    // 0x2c52a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c52a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c52a4:
    // 0x2c52a4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c52a8:
    // 0x2c52a8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c52ac:
    // 0x2c52ac: 0xc0407c0  jal         func_101F00
label_2c52b0:
    if (ctx->pc == 0x2C52B0u) {
        ctx->pc = 0x2C52B0u;
            // 0x2c52b0: 0x24a55170  addiu       $a1, $a1, 0x5170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20848));
        ctx->pc = 0x2C52B4u;
        goto label_2c52b4;
    }
    ctx->pc = 0x2C52ACu;
    SET_GPR_U32(ctx, 31, 0x2C52B4u);
    ctx->pc = 0x2C52B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52ACu;
            // 0x2c52b0: 0x24a55170  addiu       $a1, $a1, 0x5170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52B4u; }
        if (ctx->pc != 0x2C52B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52B4u; }
        if (ctx->pc != 0x2C52B4u) { return; }
    }
    ctx->pc = 0x2C52B4u;
label_2c52b4:
    // 0x2c52b4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c52b8:
    // 0x2c52b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c52bc:
    if (ctx->pc == 0x2C52BCu) {
        ctx->pc = 0x2C52BCu;
            // 0x2c52bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C52C0u;
        goto label_2c52c0;
    }
    ctx->pc = 0x2C52B8u;
    {
        const bool branch_taken_0x2c52b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52b8) {
            ctx->pc = 0x2C52BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52B8u;
            // 0x2c52bc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C52CCu;
            goto label_2c52cc;
        }
    }
    ctx->pc = 0x2C52C0u;
label_2c52c0:
    // 0x2c52c0: 0xc07507c  jal         func_1D41F0
label_2c52c4:
    if (ctx->pc == 0x2C52C4u) {
        ctx->pc = 0x2C52C4u;
            // 0x2c52c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C52C8u;
        goto label_2c52c8;
    }
    ctx->pc = 0x2C52C0u;
    SET_GPR_U32(ctx, 31, 0x2C52C8u);
    ctx->pc = 0x2C52C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52C0u;
            // 0x2c52c4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52C8u; }
        if (ctx->pc != 0x2C52C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52C8u; }
        if (ctx->pc != 0x2C52C8u) { return; }
    }
    ctx->pc = 0x2C52C8u;
label_2c52c8:
    // 0x2c52c8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c52cc:
    // 0x2c52cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c52d0:
    if (ctx->pc == 0x2C52D0u) {
        ctx->pc = 0x2C52D0u;
            // 0x2c52d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C52D4u;
        goto label_2c52d4;
    }
    ctx->pc = 0x2C52CCu;
    {
        const bool branch_taken_0x2c52cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52cc) {
            ctx->pc = 0x2C52D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52CCu;
            // 0x2c52d0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C52FCu;
            goto label_2c52fc;
        }
    }
    ctx->pc = 0x2C52D4u;
label_2c52d4:
    // 0x2c52d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c52d8:
    if (ctx->pc == 0x2C52D8u) {
        ctx->pc = 0x2C52DCu;
        goto label_2c52dc;
    }
    ctx->pc = 0x2C52D4u;
    {
        const bool branch_taken_0x2c52d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52d4) {
            ctx->pc = 0x2C52F8u;
            goto label_2c52f8;
        }
    }
    ctx->pc = 0x2C52DCu;
label_2c52dc:
    // 0x2c52dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c52e0:
    if (ctx->pc == 0x2C52E0u) {
        ctx->pc = 0x2C52E4u;
        goto label_2c52e4;
    }
    ctx->pc = 0x2C52DCu;
    {
        const bool branch_taken_0x2c52dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52dc) {
            ctx->pc = 0x2C52F8u;
            goto label_2c52f8;
        }
    }
    ctx->pc = 0x2C52E4u;
label_2c52e4:
    // 0x2c52e4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c52e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c52e8:
    // 0x2c52e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c52ec:
    if (ctx->pc == 0x2C52ECu) {
        ctx->pc = 0x2C52F0u;
        goto label_2c52f0;
    }
    ctx->pc = 0x2C52E8u;
    {
        const bool branch_taken_0x2c52e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52e8) {
            ctx->pc = 0x2C52F8u;
            goto label_2c52f8;
        }
    }
    ctx->pc = 0x2C52F0u;
label_2c52f0:
    // 0x2c52f0: 0xc0400a8  jal         func_1002A0
label_2c52f4:
    if (ctx->pc == 0x2C52F4u) {
        ctx->pc = 0x2C52F8u;
        goto label_2c52f8;
    }
    ctx->pc = 0x2C52F0u;
    SET_GPR_U32(ctx, 31, 0x2C52F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52F8u; }
        if (ctx->pc != 0x2C52F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C52F8u; }
        if (ctx->pc != 0x2C52F8u) { return; }
    }
    ctx->pc = 0x2C52F8u;
label_2c52f8:
    // 0x2c52f8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c52fc:
    // 0x2c52fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c5300:
    if (ctx->pc == 0x2C5300u) {
        ctx->pc = 0x2C5300u;
            // 0x2c5300: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C5304u;
        goto label_2c5304;
    }
    ctx->pc = 0x2C52FCu;
    {
        const bool branch_taken_0x2c52fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c52fc) {
            ctx->pc = 0x2C5300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C52FCu;
            // 0x2c5300: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C532Cu;
            goto label_2c532c;
        }
    }
    ctx->pc = 0x2C5304u;
label_2c5304:
    // 0x2c5304: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c5308:
    if (ctx->pc == 0x2C5308u) {
        ctx->pc = 0x2C530Cu;
        goto label_2c530c;
    }
    ctx->pc = 0x2C5304u;
    {
        const bool branch_taken_0x2c5304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5304) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C530Cu;
label_2c530c:
    // 0x2c530c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c5310:
    if (ctx->pc == 0x2C5310u) {
        ctx->pc = 0x2C5314u;
        goto label_2c5314;
    }
    ctx->pc = 0x2C530Cu;
    {
        const bool branch_taken_0x2c530c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c530c) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C5314u;
label_2c5314:
    // 0x2c5314: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c5314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c5318:
    // 0x2c5318: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c531c:
    if (ctx->pc == 0x2C531Cu) {
        ctx->pc = 0x2C5320u;
        goto label_2c5320;
    }
    ctx->pc = 0x2C5318u;
    {
        const bool branch_taken_0x2c5318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5318) {
            ctx->pc = 0x2C5328u;
            goto label_2c5328;
        }
    }
    ctx->pc = 0x2C5320u;
label_2c5320:
    // 0x2c5320: 0xc0400a8  jal         func_1002A0
label_2c5324:
    if (ctx->pc == 0x2C5324u) {
        ctx->pc = 0x2C5328u;
        goto label_2c5328;
    }
    ctx->pc = 0x2C5320u;
    SET_GPR_U32(ctx, 31, 0x2C5328u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5328u; }
        if (ctx->pc != 0x2C5328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5328u; }
        if (ctx->pc != 0x2C5328u) { return; }
    }
    ctx->pc = 0x2C5328u;
label_2c5328:
    // 0x2c5328: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c5328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c532c:
    // 0x2c532c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c5330:
    if (ctx->pc == 0x2C5330u) {
        ctx->pc = 0x2C5334u;
        goto label_2c5334;
    }
    ctx->pc = 0x2C532Cu;
    {
        const bool branch_taken_0x2c532c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c532c) {
            ctx->pc = 0x2C5348u;
            goto label_2c5348;
        }
    }
    ctx->pc = 0x2C5334u;
label_2c5334:
    // 0x2c5334: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c5334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c5338:
    // 0x2c5338: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c5338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c533c:
    // 0x2c533c: 0x24630e50  addiu       $v1, $v1, 0xE50
    ctx->pc = 0x2c533cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3664));
label_2c5340:
    // 0x2c5340: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c5340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c5344:
    // 0x2c5344: 0xac400db8  sw          $zero, 0xDB8($v0)
    ctx->pc = 0x2c5344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3512), GPR_U32(ctx, 0));
label_2c5348:
    // 0x2c5348: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c534c:
    if (ctx->pc == 0x2C534Cu) {
        ctx->pc = 0x2C534Cu;
            // 0x2c534c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C5350u;
        goto label_2c5350;
    }
    ctx->pc = 0x2C5348u;
    {
        const bool branch_taken_0x2c5348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5348) {
            ctx->pc = 0x2C534Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5348u;
            // 0x2c534c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C53A4u;
            goto label_2c53a4;
        }
    }
    ctx->pc = 0x2C5350u;
label_2c5350:
    // 0x2c5350: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c5354:
    // 0x2c5354: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c5354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c5358:
    // 0x2c5358: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c5358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c535c:
    // 0x2c535c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c535cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c5360:
    // 0x2c5360: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c5364:
    if (ctx->pc == 0x2C5364u) {
        ctx->pc = 0x2C5364u;
            // 0x2c5364: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C5368u;
        goto label_2c5368;
    }
    ctx->pc = 0x2C5360u;
    {
        const bool branch_taken_0x2c5360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5360) {
            ctx->pc = 0x2C5364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5360u;
            // 0x2c5364: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C537Cu;
            goto label_2c537c;
        }
    }
    ctx->pc = 0x2C5368u;
label_2c5368:
    // 0x2c5368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c5368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c536c:
    // 0x2c536c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c536cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c5370:
    // 0x2c5370: 0x320f809  jalr        $t9
label_2c5374:
    if (ctx->pc == 0x2C5374u) {
        ctx->pc = 0x2C5374u;
            // 0x2c5374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C5378u;
        goto label_2c5378;
    }
    ctx->pc = 0x2C5370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C5378u);
        ctx->pc = 0x2C5374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5370u;
            // 0x2c5374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C5378u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C5378u; }
            if (ctx->pc != 0x2C5378u) { return; }
        }
        }
    }
    ctx->pc = 0x2C5378u;
label_2c5378:
    // 0x2c5378: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c5378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c537c:
    // 0x2c537c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c5380:
    if (ctx->pc == 0x2C5380u) {
        ctx->pc = 0x2C5380u;
            // 0x2c5380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C5384u;
        goto label_2c5384;
    }
    ctx->pc = 0x2C537Cu;
    {
        const bool branch_taken_0x2c537c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c537c) {
            ctx->pc = 0x2C5380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C537Cu;
            // 0x2c5380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5398u;
            goto label_2c5398;
        }
    }
    ctx->pc = 0x2C5384u;
label_2c5384:
    // 0x2c5384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c5384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c5388:
    // 0x2c5388: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c5388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c538c:
    // 0x2c538c: 0x320f809  jalr        $t9
label_2c5390:
    if (ctx->pc == 0x2C5390u) {
        ctx->pc = 0x2C5390u;
            // 0x2c5390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C5394u;
        goto label_2c5394;
    }
    ctx->pc = 0x2C538Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C5394u);
        ctx->pc = 0x2C5390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C538Cu;
            // 0x2c5390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C5394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C5394u; }
            if (ctx->pc != 0x2C5394u) { return; }
        }
        }
    }
    ctx->pc = 0x2C5394u;
label_2c5394:
    // 0x2c5394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5398:
    // 0x2c5398: 0xc075bf8  jal         func_1D6FE0
label_2c539c:
    if (ctx->pc == 0x2C539Cu) {
        ctx->pc = 0x2C539Cu;
            // 0x2c539c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C53A0u;
        goto label_2c53a0;
    }
    ctx->pc = 0x2C5398u;
    SET_GPR_U32(ctx, 31, 0x2C53A0u);
    ctx->pc = 0x2C539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5398u;
            // 0x2c539c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53A0u; }
        if (ctx->pc != 0x2C53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53A0u; }
        if (ctx->pc != 0x2C53A0u) { return; }
    }
    ctx->pc = 0x2C53A0u;
label_2c53a0:
    // 0x2c53a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c53a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c53a4:
    // 0x2c53a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c53a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c53a8:
    // 0x2c53a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c53ac:
    if (ctx->pc == 0x2C53ACu) {
        ctx->pc = 0x2C53ACu;
            // 0x2c53ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C53B0u;
        goto label_2c53b0;
    }
    ctx->pc = 0x2C53A8u;
    {
        const bool branch_taken_0x2c53a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c53a8) {
            ctx->pc = 0x2C53ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53A8u;
            // 0x2c53ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C53BCu;
            goto label_2c53bc;
        }
    }
    ctx->pc = 0x2C53B0u;
label_2c53b0:
    // 0x2c53b0: 0xc0400a8  jal         func_1002A0
label_2c53b4:
    if (ctx->pc == 0x2C53B4u) {
        ctx->pc = 0x2C53B4u;
            // 0x2c53b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C53B8u;
        goto label_2c53b8;
    }
    ctx->pc = 0x2C53B0u;
    SET_GPR_U32(ctx, 31, 0x2C53B8u);
    ctx->pc = 0x2C53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53B0u;
            // 0x2c53b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53B8u; }
        if (ctx->pc != 0x2C53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C53B8u; }
        if (ctx->pc != 0x2C53B8u) { return; }
    }
    ctx->pc = 0x2C53B8u;
label_2c53b8:
    // 0x2c53b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c53b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c53bc:
    // 0x2c53bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c53bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c53c0:
    // 0x2c53c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c53c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c53c4:
    // 0x2c53c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c53c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c53c8:
    // 0x2c53c8: 0x3e00008  jr          $ra
label_2c53cc:
    if (ctx->pc == 0x2C53CCu) {
        ctx->pc = 0x2C53CCu;
            // 0x2c53cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C53D0u;
        goto label_fallthrough_0x2c53c8;
    }
    ctx->pc = 0x2C53C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C53CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C53C8u;
            // 0x2c53cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c53c8:
    ctx->pc = 0x2C53D0u;
}
