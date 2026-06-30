#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00427340
// Address: 0x427340 - 0x427540
void sub_00427340_0x427340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427340_0x427340");
#endif

    switch (ctx->pc) {
        case 0x427340u: goto label_427340;
        case 0x427344u: goto label_427344;
        case 0x427348u: goto label_427348;
        case 0x42734cu: goto label_42734c;
        case 0x427350u: goto label_427350;
        case 0x427354u: goto label_427354;
        case 0x427358u: goto label_427358;
        case 0x42735cu: goto label_42735c;
        case 0x427360u: goto label_427360;
        case 0x427364u: goto label_427364;
        case 0x427368u: goto label_427368;
        case 0x42736cu: goto label_42736c;
        case 0x427370u: goto label_427370;
        case 0x427374u: goto label_427374;
        case 0x427378u: goto label_427378;
        case 0x42737cu: goto label_42737c;
        case 0x427380u: goto label_427380;
        case 0x427384u: goto label_427384;
        case 0x427388u: goto label_427388;
        case 0x42738cu: goto label_42738c;
        case 0x427390u: goto label_427390;
        case 0x427394u: goto label_427394;
        case 0x427398u: goto label_427398;
        case 0x42739cu: goto label_42739c;
        case 0x4273a0u: goto label_4273a0;
        case 0x4273a4u: goto label_4273a4;
        case 0x4273a8u: goto label_4273a8;
        case 0x4273acu: goto label_4273ac;
        case 0x4273b0u: goto label_4273b0;
        case 0x4273b4u: goto label_4273b4;
        case 0x4273b8u: goto label_4273b8;
        case 0x4273bcu: goto label_4273bc;
        case 0x4273c0u: goto label_4273c0;
        case 0x4273c4u: goto label_4273c4;
        case 0x4273c8u: goto label_4273c8;
        case 0x4273ccu: goto label_4273cc;
        case 0x4273d0u: goto label_4273d0;
        case 0x4273d4u: goto label_4273d4;
        case 0x4273d8u: goto label_4273d8;
        case 0x4273dcu: goto label_4273dc;
        case 0x4273e0u: goto label_4273e0;
        case 0x4273e4u: goto label_4273e4;
        case 0x4273e8u: goto label_4273e8;
        case 0x4273ecu: goto label_4273ec;
        case 0x4273f0u: goto label_4273f0;
        case 0x4273f4u: goto label_4273f4;
        case 0x4273f8u: goto label_4273f8;
        case 0x4273fcu: goto label_4273fc;
        case 0x427400u: goto label_427400;
        case 0x427404u: goto label_427404;
        case 0x427408u: goto label_427408;
        case 0x42740cu: goto label_42740c;
        case 0x427410u: goto label_427410;
        case 0x427414u: goto label_427414;
        case 0x427418u: goto label_427418;
        case 0x42741cu: goto label_42741c;
        case 0x427420u: goto label_427420;
        case 0x427424u: goto label_427424;
        case 0x427428u: goto label_427428;
        case 0x42742cu: goto label_42742c;
        case 0x427430u: goto label_427430;
        case 0x427434u: goto label_427434;
        case 0x427438u: goto label_427438;
        case 0x42743cu: goto label_42743c;
        case 0x427440u: goto label_427440;
        case 0x427444u: goto label_427444;
        case 0x427448u: goto label_427448;
        case 0x42744cu: goto label_42744c;
        case 0x427450u: goto label_427450;
        case 0x427454u: goto label_427454;
        case 0x427458u: goto label_427458;
        case 0x42745cu: goto label_42745c;
        case 0x427460u: goto label_427460;
        case 0x427464u: goto label_427464;
        case 0x427468u: goto label_427468;
        case 0x42746cu: goto label_42746c;
        case 0x427470u: goto label_427470;
        case 0x427474u: goto label_427474;
        case 0x427478u: goto label_427478;
        case 0x42747cu: goto label_42747c;
        case 0x427480u: goto label_427480;
        case 0x427484u: goto label_427484;
        case 0x427488u: goto label_427488;
        case 0x42748cu: goto label_42748c;
        case 0x427490u: goto label_427490;
        case 0x427494u: goto label_427494;
        case 0x427498u: goto label_427498;
        case 0x42749cu: goto label_42749c;
        case 0x4274a0u: goto label_4274a0;
        case 0x4274a4u: goto label_4274a4;
        case 0x4274a8u: goto label_4274a8;
        case 0x4274acu: goto label_4274ac;
        case 0x4274b0u: goto label_4274b0;
        case 0x4274b4u: goto label_4274b4;
        case 0x4274b8u: goto label_4274b8;
        case 0x4274bcu: goto label_4274bc;
        case 0x4274c0u: goto label_4274c0;
        case 0x4274c4u: goto label_4274c4;
        case 0x4274c8u: goto label_4274c8;
        case 0x4274ccu: goto label_4274cc;
        case 0x4274d0u: goto label_4274d0;
        case 0x4274d4u: goto label_4274d4;
        case 0x4274d8u: goto label_4274d8;
        case 0x4274dcu: goto label_4274dc;
        case 0x4274e0u: goto label_4274e0;
        case 0x4274e4u: goto label_4274e4;
        case 0x4274e8u: goto label_4274e8;
        case 0x4274ecu: goto label_4274ec;
        case 0x4274f0u: goto label_4274f0;
        case 0x4274f4u: goto label_4274f4;
        case 0x4274f8u: goto label_4274f8;
        case 0x4274fcu: goto label_4274fc;
        case 0x427500u: goto label_427500;
        case 0x427504u: goto label_427504;
        case 0x427508u: goto label_427508;
        case 0x42750cu: goto label_42750c;
        case 0x427510u: goto label_427510;
        case 0x427514u: goto label_427514;
        case 0x427518u: goto label_427518;
        case 0x42751cu: goto label_42751c;
        case 0x427520u: goto label_427520;
        case 0x427524u: goto label_427524;
        case 0x427528u: goto label_427528;
        case 0x42752cu: goto label_42752c;
        case 0x427530u: goto label_427530;
        case 0x427534u: goto label_427534;
        case 0x427538u: goto label_427538;
        case 0x42753cu: goto label_42753c;
        default: break;
    }

    ctx->pc = 0x427340u;

label_427340:
    // 0x427340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x427340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_427344:
    // 0x427344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x427344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_427348:
    // 0x427348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x427348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42734c:
    // 0x42734c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_427350:
    // 0x427350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x427350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_427354:
    // 0x427354: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_427358:
    if (ctx->pc == 0x427358u) {
        ctx->pc = 0x427358u;
            // 0x427358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42735Cu;
        goto label_42735c;
    }
    ctx->pc = 0x427354u;
    {
        const bool branch_taken_0x427354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x427358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427354u;
            // 0x427358: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427354) {
            ctx->pc = 0x427488u;
            goto label_427488;
        }
    }
    ctx->pc = 0x42735Cu;
label_42735c:
    // 0x42735c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42735cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_427360:
    // 0x427360: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x427360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_427364:
    // 0x427364: 0x2463c000  addiu       $v1, $v1, -0x4000
    ctx->pc = 0x427364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950912));
label_427368:
    // 0x427368: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x427368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_42736c:
    // 0x42736c: 0x2442c038  addiu       $v0, $v0, -0x3FC8
    ctx->pc = 0x42736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950968));
label_427370:
    // 0x427370: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x427370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_427374:
    // 0x427374: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x427374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_427378:
    // 0x427378: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x427378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_42737c:
    // 0x42737c: 0xc0407c0  jal         func_101F00
label_427380:
    if (ctx->pc == 0x427380u) {
        ctx->pc = 0x427380u;
            // 0x427380: 0x24a574a0  addiu       $a1, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->pc = 0x427384u;
        goto label_427384;
    }
    ctx->pc = 0x42737Cu;
    SET_GPR_U32(ctx, 31, 0x427384u);
    ctx->pc = 0x427380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42737Cu;
            // 0x427380: 0x24a574a0  addiu       $a1, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427384u; }
        if (ctx->pc != 0x427384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427384u; }
        if (ctx->pc != 0x427384u) { return; }
    }
    ctx->pc = 0x427384u;
label_427384:
    // 0x427384: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x427384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_427388:
    // 0x427388: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_42738c:
    if (ctx->pc == 0x42738Cu) {
        ctx->pc = 0x42738Cu;
            // 0x42738c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x427390u;
        goto label_427390;
    }
    ctx->pc = 0x427388u;
    {
        const bool branch_taken_0x427388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427388) {
            ctx->pc = 0x42738Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427388u;
            // 0x42738c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42739Cu;
            goto label_42739c;
        }
    }
    ctx->pc = 0x427390u;
label_427390:
    // 0x427390: 0xc07507c  jal         func_1D41F0
label_427394:
    if (ctx->pc == 0x427394u) {
        ctx->pc = 0x427394u;
            // 0x427394: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x427398u;
        goto label_427398;
    }
    ctx->pc = 0x427390u;
    SET_GPR_U32(ctx, 31, 0x427398u);
    ctx->pc = 0x427394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427390u;
            // 0x427394: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427398u; }
        if (ctx->pc != 0x427398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427398u; }
        if (ctx->pc != 0x427398u) { return; }
    }
    ctx->pc = 0x427398u;
label_427398:
    // 0x427398: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x427398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_42739c:
    // 0x42739c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4273a0:
    if (ctx->pc == 0x4273A0u) {
        ctx->pc = 0x4273A0u;
            // 0x4273a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4273A4u;
        goto label_4273a4;
    }
    ctx->pc = 0x42739Cu;
    {
        const bool branch_taken_0x42739c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42739c) {
            ctx->pc = 0x4273A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42739Cu;
            // 0x4273a0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4273CCu;
            goto label_4273cc;
        }
    }
    ctx->pc = 0x4273A4u;
label_4273a4:
    // 0x4273a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4273a8:
    if (ctx->pc == 0x4273A8u) {
        ctx->pc = 0x4273ACu;
        goto label_4273ac;
    }
    ctx->pc = 0x4273A4u;
    {
        const bool branch_taken_0x4273a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273a4) {
            ctx->pc = 0x4273C8u;
            goto label_4273c8;
        }
    }
    ctx->pc = 0x4273ACu;
label_4273ac:
    // 0x4273ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4273b0:
    if (ctx->pc == 0x4273B0u) {
        ctx->pc = 0x4273B4u;
        goto label_4273b4;
    }
    ctx->pc = 0x4273ACu;
    {
        const bool branch_taken_0x4273ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273ac) {
            ctx->pc = 0x4273C8u;
            goto label_4273c8;
        }
    }
    ctx->pc = 0x4273B4u;
label_4273b4:
    // 0x4273b4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4273b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4273b8:
    // 0x4273b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4273bc:
    if (ctx->pc == 0x4273BCu) {
        ctx->pc = 0x4273C0u;
        goto label_4273c0;
    }
    ctx->pc = 0x4273B8u;
    {
        const bool branch_taken_0x4273b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273b8) {
            ctx->pc = 0x4273C8u;
            goto label_4273c8;
        }
    }
    ctx->pc = 0x4273C0u;
label_4273c0:
    // 0x4273c0: 0xc0400a8  jal         func_1002A0
label_4273c4:
    if (ctx->pc == 0x4273C4u) {
        ctx->pc = 0x4273C8u;
        goto label_4273c8;
    }
    ctx->pc = 0x4273C0u;
    SET_GPR_U32(ctx, 31, 0x4273C8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4273C8u; }
        if (ctx->pc != 0x4273C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4273C8u; }
        if (ctx->pc != 0x4273C8u) { return; }
    }
    ctx->pc = 0x4273C8u;
label_4273c8:
    // 0x4273c8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4273c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4273cc:
    // 0x4273cc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4273d0:
    if (ctx->pc == 0x4273D0u) {
        ctx->pc = 0x4273D0u;
            // 0x4273d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4273D4u;
        goto label_4273d4;
    }
    ctx->pc = 0x4273CCu;
    {
        const bool branch_taken_0x4273cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273cc) {
            ctx->pc = 0x4273D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4273CCu;
            // 0x4273d0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4273FCu;
            goto label_4273fc;
        }
    }
    ctx->pc = 0x4273D4u;
label_4273d4:
    // 0x4273d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4273d8:
    if (ctx->pc == 0x4273D8u) {
        ctx->pc = 0x4273DCu;
        goto label_4273dc;
    }
    ctx->pc = 0x4273D4u;
    {
        const bool branch_taken_0x4273d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273d4) {
            ctx->pc = 0x4273F8u;
            goto label_4273f8;
        }
    }
    ctx->pc = 0x4273DCu;
label_4273dc:
    // 0x4273dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4273e0:
    if (ctx->pc == 0x4273E0u) {
        ctx->pc = 0x4273E4u;
        goto label_4273e4;
    }
    ctx->pc = 0x4273DCu;
    {
        const bool branch_taken_0x4273dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273dc) {
            ctx->pc = 0x4273F8u;
            goto label_4273f8;
        }
    }
    ctx->pc = 0x4273E4u;
label_4273e4:
    // 0x4273e4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4273e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4273e8:
    // 0x4273e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4273ec:
    if (ctx->pc == 0x4273ECu) {
        ctx->pc = 0x4273F0u;
        goto label_4273f0;
    }
    ctx->pc = 0x4273E8u;
    {
        const bool branch_taken_0x4273e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273e8) {
            ctx->pc = 0x4273F8u;
            goto label_4273f8;
        }
    }
    ctx->pc = 0x4273F0u;
label_4273f0:
    // 0x4273f0: 0xc0400a8  jal         func_1002A0
label_4273f4:
    if (ctx->pc == 0x4273F4u) {
        ctx->pc = 0x4273F8u;
        goto label_4273f8;
    }
    ctx->pc = 0x4273F0u;
    SET_GPR_U32(ctx, 31, 0x4273F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4273F8u; }
        if (ctx->pc != 0x4273F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4273F8u; }
        if (ctx->pc != 0x4273F8u) { return; }
    }
    ctx->pc = 0x4273F8u;
label_4273f8:
    // 0x4273f8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4273f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4273fc:
    // 0x4273fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_427400:
    if (ctx->pc == 0x427400u) {
        ctx->pc = 0x427404u;
        goto label_427404;
    }
    ctx->pc = 0x4273FCu;
    {
        const bool branch_taken_0x4273fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4273fc) {
            ctx->pc = 0x427418u;
            goto label_427418;
        }
    }
    ctx->pc = 0x427404u;
label_427404:
    // 0x427404: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x427404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_427408:
    // 0x427408: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42740c:
    // 0x42740c: 0x2463bff0  addiu       $v1, $v1, -0x4010
    ctx->pc = 0x42740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950896));
label_427410:
    // 0x427410: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x427410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_427414:
    // 0x427414: 0xac406ec8  sw          $zero, 0x6EC8($v0)
    ctx->pc = 0x427414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28360), GPR_U32(ctx, 0));
label_427418:
    // 0x427418: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_42741c:
    if (ctx->pc == 0x42741Cu) {
        ctx->pc = 0x42741Cu;
            // 0x42741c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x427420u;
        goto label_427420;
    }
    ctx->pc = 0x427418u;
    {
        const bool branch_taken_0x427418 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x427418) {
            ctx->pc = 0x42741Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427418u;
            // 0x42741c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427474u;
            goto label_427474;
        }
    }
    ctx->pc = 0x427420u;
label_427420:
    // 0x427420: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x427420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_427424:
    // 0x427424: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x427424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_427428:
    // 0x427428: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x427428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42742c:
    // 0x42742c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x42742cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_427430:
    // 0x427430: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_427434:
    if (ctx->pc == 0x427434u) {
        ctx->pc = 0x427434u;
            // 0x427434: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x427438u;
        goto label_427438;
    }
    ctx->pc = 0x427430u;
    {
        const bool branch_taken_0x427430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x427430) {
            ctx->pc = 0x427434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427430u;
            // 0x427434: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42744Cu;
            goto label_42744c;
        }
    }
    ctx->pc = 0x427438u;
label_427438:
    // 0x427438: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x427438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42743c:
    // 0x42743c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x42743cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_427440:
    // 0x427440: 0x320f809  jalr        $t9
label_427444:
    if (ctx->pc == 0x427444u) {
        ctx->pc = 0x427444u;
            // 0x427444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x427448u;
        goto label_427448;
    }
    ctx->pc = 0x427440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427448u);
        ctx->pc = 0x427444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427440u;
            // 0x427444: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x427448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427448u; }
            if (ctx->pc != 0x427448u) { return; }
        }
        }
    }
    ctx->pc = 0x427448u;
label_427448:
    // 0x427448: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x427448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_42744c:
    // 0x42744c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_427450:
    if (ctx->pc == 0x427450u) {
        ctx->pc = 0x427450u;
            // 0x427450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427454u;
        goto label_427454;
    }
    ctx->pc = 0x42744Cu;
    {
        const bool branch_taken_0x42744c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42744c) {
            ctx->pc = 0x427450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42744Cu;
            // 0x427450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427468u;
            goto label_427468;
        }
    }
    ctx->pc = 0x427454u;
label_427454:
    // 0x427454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x427454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_427458:
    // 0x427458: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x427458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_42745c:
    // 0x42745c: 0x320f809  jalr        $t9
label_427460:
    if (ctx->pc == 0x427460u) {
        ctx->pc = 0x427460u;
            // 0x427460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x427464u;
        goto label_427464;
    }
    ctx->pc = 0x42745Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x427464u);
        ctx->pc = 0x427460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42745Cu;
            // 0x427460: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x427464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x427464u; }
            if (ctx->pc != 0x427464u) { return; }
        }
        }
    }
    ctx->pc = 0x427464u;
label_427464:
    // 0x427464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x427464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_427468:
    // 0x427468: 0xc075bf8  jal         func_1D6FE0
label_42746c:
    if (ctx->pc == 0x42746Cu) {
        ctx->pc = 0x42746Cu;
            // 0x42746c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427470u;
        goto label_427470;
    }
    ctx->pc = 0x427468u;
    SET_GPR_U32(ctx, 31, 0x427470u);
    ctx->pc = 0x42746Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427468u;
            // 0x42746c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427470u; }
        if (ctx->pc != 0x427470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427470u; }
        if (ctx->pc != 0x427470u) { return; }
    }
    ctx->pc = 0x427470u;
label_427470:
    // 0x427470: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x427470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_427474:
    // 0x427474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x427474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_427478:
    // 0x427478: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_42747c:
    if (ctx->pc == 0x42747Cu) {
        ctx->pc = 0x42747Cu;
            // 0x42747c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427480u;
        goto label_427480;
    }
    ctx->pc = 0x427478u;
    {
        const bool branch_taken_0x427478 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x427478) {
            ctx->pc = 0x42747Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427478u;
            // 0x42747c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42748Cu;
            goto label_42748c;
        }
    }
    ctx->pc = 0x427480u;
label_427480:
    // 0x427480: 0xc0400a8  jal         func_1002A0
label_427484:
    if (ctx->pc == 0x427484u) {
        ctx->pc = 0x427484u;
            // 0x427484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427488u;
        goto label_427488;
    }
    ctx->pc = 0x427480u;
    SET_GPR_U32(ctx, 31, 0x427488u);
    ctx->pc = 0x427484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427480u;
            // 0x427484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427488u; }
        if (ctx->pc != 0x427488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x427488u; }
        if (ctx->pc != 0x427488u) { return; }
    }
    ctx->pc = 0x427488u;
label_427488:
    // 0x427488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x427488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42748c:
    // 0x42748c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42748cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_427490:
    // 0x427490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x427490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_427494:
    // 0x427494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x427494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_427498:
    // 0x427498: 0x3e00008  jr          $ra
label_42749c:
    if (ctx->pc == 0x42749Cu) {
        ctx->pc = 0x42749Cu;
            // 0x42749c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4274A0u;
        goto label_4274a0;
    }
    ctx->pc = 0x427498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42749Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427498u;
            // 0x42749c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4274A0u;
label_4274a0:
    // 0x4274a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4274a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4274a4:
    // 0x4274a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4274a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4274a8:
    // 0x4274a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4274a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4274ac:
    // 0x4274ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4274acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4274b0:
    // 0x4274b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4274b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4274b4:
    // 0x4274b4: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_4274b8:
    if (ctx->pc == 0x4274B8u) {
        ctx->pc = 0x4274B8u;
            // 0x4274b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4274BCu;
        goto label_4274bc;
    }
    ctx->pc = 0x4274B4u;
    {
        const bool branch_taken_0x4274b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4274B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4274B4u;
            // 0x4274b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4274b4) {
            ctx->pc = 0x42751Cu;
            goto label_42751c;
        }
    }
    ctx->pc = 0x4274BCu;
label_4274bc:
    // 0x4274bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4274bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4274c0:
    // 0x4274c0: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x4274c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_4274c4:
    // 0x4274c4: 0x2442bfb0  addiu       $v0, $v0, -0x4050
    ctx->pc = 0x4274c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950832));
label_4274c8:
    // 0x4274c8: 0x26240210  addiu       $a0, $s1, 0x210
    ctx->pc = 0x4274c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_4274cc:
    // 0x4274cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4274ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4274d0:
    // 0x4274d0: 0x24a568b0  addiu       $a1, $a1, 0x68B0
    ctx->pc = 0x4274d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26800));
label_4274d4:
    // 0x4274d4: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x4274d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_4274d8:
    // 0x4274d8: 0xc0407e8  jal         func_101FA0
label_4274dc:
    if (ctx->pc == 0x4274DCu) {
        ctx->pc = 0x4274DCu;
            // 0x4274dc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4274E0u;
        goto label_4274e0;
    }
    ctx->pc = 0x4274D8u;
    SET_GPR_U32(ctx, 31, 0x4274E0u);
    ctx->pc = 0x4274DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4274D8u;
            // 0x4274dc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4274E0u; }
        if (ctx->pc != 0x4274E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4274E0u; }
        if (ctx->pc != 0x4274E0u) { return; }
    }
    ctx->pc = 0x4274E0u;
label_4274e0:
    // 0x4274e0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_4274e4:
    if (ctx->pc == 0x4274E4u) {
        ctx->pc = 0x4274E4u;
            // 0x4274e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4274E8u;
        goto label_4274e8;
    }
    ctx->pc = 0x4274E0u;
    {
        const bool branch_taken_0x4274e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4274e0) {
            ctx->pc = 0x4274E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4274E0u;
            // 0x4274e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427508u;
            goto label_427508;
        }
    }
    ctx->pc = 0x4274E8u;
label_4274e8:
    // 0x4274e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4274e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4274ec:
    // 0x4274ec: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4274ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4274f0:
    // 0x4274f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4274f4:
    if (ctx->pc == 0x4274F4u) {
        ctx->pc = 0x4274F4u;
            // 0x4274f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4274F8u;
        goto label_4274f8;
    }
    ctx->pc = 0x4274F0u;
    {
        const bool branch_taken_0x4274f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4274F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4274F0u;
            // 0x4274f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4274f0) {
            ctx->pc = 0x427504u;
            goto label_427504;
        }
    }
    ctx->pc = 0x4274F8u;
label_4274f8:
    // 0x4274f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4274f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4274fc:
    // 0x4274fc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4274fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_427500:
    // 0x427500: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x427500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_427504:
    // 0x427504: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x427504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_427508:
    // 0x427508: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x427508u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_42750c:
    // 0x42750c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_427510:
    if (ctx->pc == 0x427510u) {
        ctx->pc = 0x427510u;
            // 0x427510: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x427514u;
        goto label_427514;
    }
    ctx->pc = 0x42750Cu;
    {
        const bool branch_taken_0x42750c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42750c) {
            ctx->pc = 0x427510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42750Cu;
            // 0x427510: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427520u;
            goto label_427520;
        }
    }
    ctx->pc = 0x427514u;
label_427514:
    // 0x427514: 0xc0400a8  jal         func_1002A0
label_427518:
    if (ctx->pc == 0x427518u) {
        ctx->pc = 0x427518u;
            // 0x427518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42751Cu;
        goto label_42751c;
    }
    ctx->pc = 0x427514u;
    SET_GPR_U32(ctx, 31, 0x42751Cu);
    ctx->pc = 0x427518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x427514u;
            // 0x427518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42751Cu; }
        if (ctx->pc != 0x42751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42751Cu; }
        if (ctx->pc != 0x42751Cu) { return; }
    }
    ctx->pc = 0x42751Cu;
label_42751c:
    // 0x42751c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42751cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_427520:
    // 0x427520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x427520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_427524:
    // 0x427524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x427524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_427528:
    // 0x427528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x427528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42752c:
    // 0x42752c: 0x3e00008  jr          $ra
label_427530:
    if (ctx->pc == 0x427530u) {
        ctx->pc = 0x427530u;
            // 0x427530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x427534u;
        goto label_427534;
    }
    ctx->pc = 0x42752Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x427530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42752Cu;
            // 0x427530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x427534u;
label_427534:
    // 0x427534: 0x0  nop
    ctx->pc = 0x427534u;
    // NOP
label_427538:
    // 0x427538: 0x0  nop
    ctx->pc = 0x427538u;
    // NOP
label_42753c:
    // 0x42753c: 0x0  nop
    ctx->pc = 0x42753cu;
    // NOP
}
