#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033C390
// Address: 0x33c390 - 0x33c5f0
void sub_0033C390_0x33c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C390_0x33c390");
#endif

    switch (ctx->pc) {
        case 0x33c390u: goto label_33c390;
        case 0x33c394u: goto label_33c394;
        case 0x33c398u: goto label_33c398;
        case 0x33c39cu: goto label_33c39c;
        case 0x33c3a0u: goto label_33c3a0;
        case 0x33c3a4u: goto label_33c3a4;
        case 0x33c3a8u: goto label_33c3a8;
        case 0x33c3acu: goto label_33c3ac;
        case 0x33c3b0u: goto label_33c3b0;
        case 0x33c3b4u: goto label_33c3b4;
        case 0x33c3b8u: goto label_33c3b8;
        case 0x33c3bcu: goto label_33c3bc;
        case 0x33c3c0u: goto label_33c3c0;
        case 0x33c3c4u: goto label_33c3c4;
        case 0x33c3c8u: goto label_33c3c8;
        case 0x33c3ccu: goto label_33c3cc;
        case 0x33c3d0u: goto label_33c3d0;
        case 0x33c3d4u: goto label_33c3d4;
        case 0x33c3d8u: goto label_33c3d8;
        case 0x33c3dcu: goto label_33c3dc;
        case 0x33c3e0u: goto label_33c3e0;
        case 0x33c3e4u: goto label_33c3e4;
        case 0x33c3e8u: goto label_33c3e8;
        case 0x33c3ecu: goto label_33c3ec;
        case 0x33c3f0u: goto label_33c3f0;
        case 0x33c3f4u: goto label_33c3f4;
        case 0x33c3f8u: goto label_33c3f8;
        case 0x33c3fcu: goto label_33c3fc;
        case 0x33c400u: goto label_33c400;
        case 0x33c404u: goto label_33c404;
        case 0x33c408u: goto label_33c408;
        case 0x33c40cu: goto label_33c40c;
        case 0x33c410u: goto label_33c410;
        case 0x33c414u: goto label_33c414;
        case 0x33c418u: goto label_33c418;
        case 0x33c41cu: goto label_33c41c;
        case 0x33c420u: goto label_33c420;
        case 0x33c424u: goto label_33c424;
        case 0x33c428u: goto label_33c428;
        case 0x33c42cu: goto label_33c42c;
        case 0x33c430u: goto label_33c430;
        case 0x33c434u: goto label_33c434;
        case 0x33c438u: goto label_33c438;
        case 0x33c43cu: goto label_33c43c;
        case 0x33c440u: goto label_33c440;
        case 0x33c444u: goto label_33c444;
        case 0x33c448u: goto label_33c448;
        case 0x33c44cu: goto label_33c44c;
        case 0x33c450u: goto label_33c450;
        case 0x33c454u: goto label_33c454;
        case 0x33c458u: goto label_33c458;
        case 0x33c45cu: goto label_33c45c;
        case 0x33c460u: goto label_33c460;
        case 0x33c464u: goto label_33c464;
        case 0x33c468u: goto label_33c468;
        case 0x33c46cu: goto label_33c46c;
        case 0x33c470u: goto label_33c470;
        case 0x33c474u: goto label_33c474;
        case 0x33c478u: goto label_33c478;
        case 0x33c47cu: goto label_33c47c;
        case 0x33c480u: goto label_33c480;
        case 0x33c484u: goto label_33c484;
        case 0x33c488u: goto label_33c488;
        case 0x33c48cu: goto label_33c48c;
        case 0x33c490u: goto label_33c490;
        case 0x33c494u: goto label_33c494;
        case 0x33c498u: goto label_33c498;
        case 0x33c49cu: goto label_33c49c;
        case 0x33c4a0u: goto label_33c4a0;
        case 0x33c4a4u: goto label_33c4a4;
        case 0x33c4a8u: goto label_33c4a8;
        case 0x33c4acu: goto label_33c4ac;
        case 0x33c4b0u: goto label_33c4b0;
        case 0x33c4b4u: goto label_33c4b4;
        case 0x33c4b8u: goto label_33c4b8;
        case 0x33c4bcu: goto label_33c4bc;
        case 0x33c4c0u: goto label_33c4c0;
        case 0x33c4c4u: goto label_33c4c4;
        case 0x33c4c8u: goto label_33c4c8;
        case 0x33c4ccu: goto label_33c4cc;
        case 0x33c4d0u: goto label_33c4d0;
        case 0x33c4d4u: goto label_33c4d4;
        case 0x33c4d8u: goto label_33c4d8;
        case 0x33c4dcu: goto label_33c4dc;
        case 0x33c4e0u: goto label_33c4e0;
        case 0x33c4e4u: goto label_33c4e4;
        case 0x33c4e8u: goto label_33c4e8;
        case 0x33c4ecu: goto label_33c4ec;
        case 0x33c4f0u: goto label_33c4f0;
        case 0x33c4f4u: goto label_33c4f4;
        case 0x33c4f8u: goto label_33c4f8;
        case 0x33c4fcu: goto label_33c4fc;
        case 0x33c500u: goto label_33c500;
        case 0x33c504u: goto label_33c504;
        case 0x33c508u: goto label_33c508;
        case 0x33c50cu: goto label_33c50c;
        case 0x33c510u: goto label_33c510;
        case 0x33c514u: goto label_33c514;
        case 0x33c518u: goto label_33c518;
        case 0x33c51cu: goto label_33c51c;
        case 0x33c520u: goto label_33c520;
        case 0x33c524u: goto label_33c524;
        case 0x33c528u: goto label_33c528;
        case 0x33c52cu: goto label_33c52c;
        case 0x33c530u: goto label_33c530;
        case 0x33c534u: goto label_33c534;
        case 0x33c538u: goto label_33c538;
        case 0x33c53cu: goto label_33c53c;
        case 0x33c540u: goto label_33c540;
        case 0x33c544u: goto label_33c544;
        case 0x33c548u: goto label_33c548;
        case 0x33c54cu: goto label_33c54c;
        case 0x33c550u: goto label_33c550;
        case 0x33c554u: goto label_33c554;
        case 0x33c558u: goto label_33c558;
        case 0x33c55cu: goto label_33c55c;
        case 0x33c560u: goto label_33c560;
        case 0x33c564u: goto label_33c564;
        case 0x33c568u: goto label_33c568;
        case 0x33c56cu: goto label_33c56c;
        case 0x33c570u: goto label_33c570;
        case 0x33c574u: goto label_33c574;
        case 0x33c578u: goto label_33c578;
        case 0x33c57cu: goto label_33c57c;
        case 0x33c580u: goto label_33c580;
        case 0x33c584u: goto label_33c584;
        case 0x33c588u: goto label_33c588;
        case 0x33c58cu: goto label_33c58c;
        case 0x33c590u: goto label_33c590;
        case 0x33c594u: goto label_33c594;
        case 0x33c598u: goto label_33c598;
        case 0x33c59cu: goto label_33c59c;
        case 0x33c5a0u: goto label_33c5a0;
        case 0x33c5a4u: goto label_33c5a4;
        case 0x33c5a8u: goto label_33c5a8;
        case 0x33c5acu: goto label_33c5ac;
        case 0x33c5b0u: goto label_33c5b0;
        case 0x33c5b4u: goto label_33c5b4;
        case 0x33c5b8u: goto label_33c5b8;
        case 0x33c5bcu: goto label_33c5bc;
        case 0x33c5c0u: goto label_33c5c0;
        case 0x33c5c4u: goto label_33c5c4;
        case 0x33c5c8u: goto label_33c5c8;
        case 0x33c5ccu: goto label_33c5cc;
        case 0x33c5d0u: goto label_33c5d0;
        case 0x33c5d4u: goto label_33c5d4;
        case 0x33c5d8u: goto label_33c5d8;
        case 0x33c5dcu: goto label_33c5dc;
        case 0x33c5e0u: goto label_33c5e0;
        case 0x33c5e4u: goto label_33c5e4;
        case 0x33c5e8u: goto label_33c5e8;
        case 0x33c5ecu: goto label_33c5ec;
        default: break;
    }

    ctx->pc = 0x33c390u;

label_33c390:
    // 0x33c390: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33c394:
    // 0x33c394: 0x3e00008  jr          $ra
label_33c398:
    if (ctx->pc == 0x33C398u) {
        ctx->pc = 0x33C398u;
            // 0x33c398: 0x8c420c78  lw          $v0, 0xC78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
        ctx->pc = 0x33C39Cu;
        goto label_33c39c;
    }
    ctx->pc = 0x33C394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C394u;
            // 0x33c398: 0x8c420c78  lw          $v0, 0xC78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C39Cu;
label_33c39c:
    // 0x33c39c: 0x0  nop
    ctx->pc = 0x33c39cu;
    // NOP
label_33c3a0:
    // 0x33c3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33c3a4:
    // 0x33c3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33c3a8:
    // 0x33c3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33c3ac:
    // 0x33c3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33c3b0:
    // 0x33c3b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c3b4:
    // 0x33c3b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_33c3b8:
    if (ctx->pc == 0x33C3B8u) {
        ctx->pc = 0x33C3B8u;
            // 0x33c3b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C3BCu;
        goto label_33c3bc;
    }
    ctx->pc = 0x33C3B4u;
    {
        const bool branch_taken_0x33c3b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C3B4u;
            // 0x33c3b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3b4) {
            ctx->pc = 0x33C3F8u;
            goto label_33c3f8;
        }
    }
    ctx->pc = 0x33C3BCu;
label_33c3bc:
    // 0x33c3bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33c3c0:
    // 0x33c3c0: 0x24425440  addiu       $v0, $v0, 0x5440
    ctx->pc = 0x33c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21568));
label_33c3c4:
    // 0x33c3c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_33c3c8:
    if (ctx->pc == 0x33C3C8u) {
        ctx->pc = 0x33C3C8u;
            // 0x33c3c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33C3CCu;
        goto label_33c3cc;
    }
    ctx->pc = 0x33C3C4u;
    {
        const bool branch_taken_0x33c3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C3C4u;
            // 0x33c3c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c3c4) {
            ctx->pc = 0x33C3E0u;
            goto label_33c3e0;
        }
    }
    ctx->pc = 0x33C3CCu;
label_33c3cc:
    // 0x33c3cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_33c3d0:
    // 0x33c3d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33c3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c3d4:
    // 0x33c3d4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x33c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_33c3d8:
    // 0x33c3d8: 0xc057a68  jal         func_15E9A0
label_33c3dc:
    if (ctx->pc == 0x33C3DCu) {
        ctx->pc = 0x33C3DCu;
            // 0x33c3dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x33C3E0u;
        goto label_33c3e0;
    }
    ctx->pc = 0x33C3D8u;
    SET_GPR_U32(ctx, 31, 0x33C3E0u);
    ctx->pc = 0x33C3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C3D8u;
            // 0x33c3dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C3E0u; }
        if (ctx->pc != 0x33C3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C3E0u; }
        if (ctx->pc != 0x33C3E0u) { return; }
    }
    ctx->pc = 0x33C3E0u;
label_33c3e0:
    // 0x33c3e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x33c3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_33c3e4:
    // 0x33c3e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c3e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_33c3e8:
    // 0x33c3e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_33c3ec:
    if (ctx->pc == 0x33C3ECu) {
        ctx->pc = 0x33C3ECu;
            // 0x33c3ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C3F0u;
        goto label_33c3f0;
    }
    ctx->pc = 0x33C3E8u;
    {
        const bool branch_taken_0x33c3e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x33c3e8) {
            ctx->pc = 0x33C3ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C3E8u;
            // 0x33c3ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C3FCu;
            goto label_33c3fc;
        }
    }
    ctx->pc = 0x33C3F0u;
label_33c3f0:
    // 0x33c3f0: 0xc0400a8  jal         func_1002A0
label_33c3f4:
    if (ctx->pc == 0x33C3F4u) {
        ctx->pc = 0x33C3F4u;
            // 0x33c3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C3F8u;
        goto label_33c3f8;
    }
    ctx->pc = 0x33C3F0u;
    SET_GPR_U32(ctx, 31, 0x33C3F8u);
    ctx->pc = 0x33C3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C3F0u;
            // 0x33c3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C3F8u; }
        if (ctx->pc != 0x33C3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C3F8u; }
        if (ctx->pc != 0x33C3F8u) { return; }
    }
    ctx->pc = 0x33C3F8u;
label_33c3f8:
    // 0x33c3f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33c3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c3fc:
    // 0x33c3fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33c3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33c400:
    // 0x33c400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33c404:
    // 0x33c404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33c408:
    // 0x33c408: 0x3e00008  jr          $ra
label_33c40c:
    if (ctx->pc == 0x33C40Cu) {
        ctx->pc = 0x33C40Cu;
            // 0x33c40c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x33C410u;
        goto label_33c410;
    }
    ctx->pc = 0x33C408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C408u;
            // 0x33c40c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C410u;
label_33c410:
    // 0x33c410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_33c414:
    // 0x33c414: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x33c414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_33c418:
    // 0x33c418: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33c41c:
    // 0x33c41c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33c41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33c420:
    // 0x33c420: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33c420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_33c424:
    // 0x33c424: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33c424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_33c428:
    // 0x33c428: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33c428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33c42c:
    // 0x33c42c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x33c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_33c430:
    // 0x33c430: 0x8c650cb4  lw          $a1, 0xCB4($v1)
    ctx->pc = 0x33c430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_33c434:
    // 0x33c434: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x33c434u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_33c438:
    // 0x33c438: 0x14a00063  bnez        $a1, . + 4 + (0x63 << 2)
label_33c43c:
    if (ctx->pc == 0x33C43Cu) {
        ctx->pc = 0x33C43Cu;
            // 0x33c43c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33C440u;
        goto label_33c440;
    }
    ctx->pc = 0x33C438u;
    {
        const bool branch_taken_0x33c438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C438u;
            // 0x33c43c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c438) {
            ctx->pc = 0x33C5C8u;
            goto label_33c5c8;
        }
    }
    ctx->pc = 0x33C440u;
label_33c440:
    // 0x33c440: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x33c440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
label_33c444:
    // 0x33c444: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x33c444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
label_33c448:
    // 0x33c448: 0x8ca9d130  lw          $t1, -0x2ED0($a1)
    ctx->pc = 0x33c448u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955312)));
label_33c44c:
    // 0x33c44c: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x33c44cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_33c450:
    // 0x33c450: 0x8cc8d120  lw          $t0, -0x2EE0($a2)
    ctx->pc = 0x33c450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955296)));
label_33c454:
    // 0x33c454: 0x24e7fe6c  addiu       $a3, $a3, -0x194
    ctx->pc = 0x33c454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966892));
label_33c458:
    // 0x33c458: 0x8d310130  lw          $s1, 0x130($t1)
    ctx->pc = 0x33c458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
label_33c45c:
    // 0x33c45c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x33c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_33c460:
    // 0x33c460: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x33c460u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_33c464:
    // 0x33c464: 0x8ca68a08  lw          $a2, -0x75F8($a1)
    ctx->pc = 0x33c464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_33c468:
    // 0x33c468: 0x114880  sll         $t1, $s1, 2
    ctx->pc = 0x33c468u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_33c46c:
    // 0x33c46c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x33c46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_33c470:
    // 0x33c470: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x33c470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_33c474:
    // 0x33c474: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33c474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33c478:
    // 0x33c478: 0x25100200  addiu       $s0, $t0, 0x200
    ctx->pc = 0x33c478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
label_33c47c:
    // 0x33c47c: 0xa3a0005f  sb          $zero, 0x5F($sp)
    ctx->pc = 0x33c47cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 95), (uint8_t)GPR_U32(ctx, 0));
label_33c480:
    // 0x33c480: 0x80c8007a  lb          $t0, 0x7A($a2)
    ctx->pc = 0x33c480u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 122)));
label_33c484:
    // 0x33c484: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x33c484u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_33c488:
    // 0x33c488: 0x92460010  lbu         $a2, 0x10($s2)
    ctx->pc = 0x33c488u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_33c48c:
    // 0x33c48c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x33c48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_33c490:
    // 0x33c490: 0x10c5000d  beq         $a2, $a1, . + 4 + (0xD << 2)
label_33c494:
    if (ctx->pc == 0x33C494u) {
        ctx->pc = 0x33C494u;
            // 0x33c494: 0xc4f40000  lwc1        $f20, 0x0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x33C498u;
        goto label_33c498;
    }
    ctx->pc = 0x33C490u;
    {
        const bool branch_taken_0x33c490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x33C494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C490u;
            // 0x33c494: 0xc4f40000  lwc1        $f20, 0x0($a3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c490) {
            ctx->pc = 0x33C4C8u;
            goto label_33c4c8;
        }
    }
    ctx->pc = 0x33C498u;
label_33c498:
    // 0x33c498: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33c498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33c49c:
    // 0x33c49c: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
label_33c4a0:
    if (ctx->pc == 0x33C4A0u) {
        ctx->pc = 0x33C4A0u;
            // 0x33c4a0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x33C4A4u;
        goto label_33c4a4;
    }
    ctx->pc = 0x33C49Cu;
    {
        const bool branch_taken_0x33c49c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x33c49c) {
            ctx->pc = 0x33C4A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33C49Cu;
            // 0x33c4a0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33C4ACu;
            goto label_33c4ac;
        }
    }
    ctx->pc = 0x33C4A4u;
label_33c4a4:
    // 0x33c4a4: 0x10000049  b           . + 4 + (0x49 << 2)
label_33c4a8:
    if (ctx->pc == 0x33C4A8u) {
        ctx->pc = 0x33C4A8u;
            // 0x33c4a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x33C4ACu;
        goto label_33c4ac;
    }
    ctx->pc = 0x33C4A4u;
    {
        const bool branch_taken_0x33c4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C4A4u;
            // 0x33c4a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c4a4) {
            ctx->pc = 0x33C5CCu;
            goto label_33c5cc;
        }
    }
    ctx->pc = 0x33C4ACu;
label_33c4ac:
    // 0x33c4ac: 0x8c620cb4  lw          $v0, 0xCB4($v1)
    ctx->pc = 0x33c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_33c4b0:
    // 0x33c4b0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x33c4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_33c4b4:
    // 0x33c4b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33c4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_33c4b8:
    // 0x33c4b8: 0x320f809  jalr        $t9
label_33c4bc:
    if (ctx->pc == 0x33C4BCu) {
        ctx->pc = 0x33C4BCu;
            // 0x33c4bc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x33C4C0u;
        goto label_33c4c0;
    }
    ctx->pc = 0x33C4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C4C0u);
        ctx->pc = 0x33C4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C4B8u;
            // 0x33c4bc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C4C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C4C0u; }
            if (ctx->pc != 0x33C4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x33C4C0u;
label_33c4c0:
    // 0x33c4c0: 0x10000041  b           . + 4 + (0x41 << 2)
label_33c4c4:
    if (ctx->pc == 0x33C4C4u) {
        ctx->pc = 0x33C4C8u;
        goto label_33c4c8;
    }
    ctx->pc = 0x33C4C0u;
    {
        const bool branch_taken_0x33c4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c4c0) {
            ctx->pc = 0x33C5C8u;
            goto label_33c5c8;
        }
    }
    ctx->pc = 0x33C4C8u;
label_33c4c8:
    // 0x33c4c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33c4cc:
    // 0x33c4cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33c4d0:
    // 0x33c4d0: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x33c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_33c4d4:
    // 0x33c4d4: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x33c4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_33c4d8:
    // 0x33c4d8: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x33c4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_33c4dc:
    // 0x33c4dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c4e0:
    // 0x33c4e0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x33c4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_33c4e4:
    // 0x33c4e4: 0x320f809  jalr        $t9
label_33c4e8:
    if (ctx->pc == 0x33C4E8u) {
        ctx->pc = 0x33C4ECu;
        goto label_33c4ec;
    }
    ctx->pc = 0x33C4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C4ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C4ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C4ECu; }
            if (ctx->pc != 0x33C4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x33C4ECu;
label_33c4ec:
    // 0x33c4ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33c4f0:
    // 0x33c4f0: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x33c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_33c4f4:
    // 0x33c4f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c4f8:
    // 0x33c4f8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x33c4f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_33c4fc:
    // 0x33c4fc: 0x320f809  jalr        $t9
label_33c500:
    if (ctx->pc == 0x33C500u) {
        ctx->pc = 0x33C500u;
            // 0x33c500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x33C504u;
        goto label_33c504;
    }
    ctx->pc = 0x33C4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C504u);
        ctx->pc = 0x33C500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C4FCu;
            // 0x33c500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C504u; }
            if (ctx->pc != 0x33C504u) { return; }
        }
        }
    }
    ctx->pc = 0x33C504u;
label_33c504:
    // 0x33c504: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33c504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33c508:
    // 0x33c508: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x33c508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_33c50c:
    // 0x33c50c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c50cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c510:
    // 0x33c510: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x33c510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_33c514:
    // 0x33c514: 0x320f809  jalr        $t9
label_33c518:
    if (ctx->pc == 0x33C518u) {
        ctx->pc = 0x33C518u;
            // 0x33c518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x33C51Cu;
        goto label_33c51c;
    }
    ctx->pc = 0x33C514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C51Cu);
        ctx->pc = 0x33C518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C514u;
            // 0x33c518: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C51Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C51Cu; }
            if (ctx->pc != 0x33C51Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33C51Cu;
label_33c51c:
    // 0x33c51c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33c520:
    // 0x33c520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33c524:
    // 0x33c524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33c524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33c528:
    // 0x33c528: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c52c:
    // 0x33c52c: 0x27a6005f  addiu       $a2, $sp, 0x5F
    ctx->pc = 0x33c52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 95));
label_33c530:
    // 0x33c530: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33c530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c534:
    // 0x33c534: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x33c534u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_33c538:
    // 0x33c538: 0xc0cf300  jal         func_33CC00
label_33c53c:
    if (ctx->pc == 0x33C53Cu) {
        ctx->pc = 0x33C53Cu;
            // 0x33c53c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x33C540u;
        goto label_33c540;
    }
    ctx->pc = 0x33C538u;
    SET_GPR_U32(ctx, 31, 0x33C540u);
    ctx->pc = 0x33C53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C538u;
            // 0x33c53c: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33CC00u;
    if (runtime->hasFunction(0x33CC00u)) {
        auto targetFn = runtime->lookupFunction(0x33CC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C540u; }
        if (ctx->pc != 0x33C540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033CC00_0x33cc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C540u; }
        if (ctx->pc != 0x33C540u) { return; }
    }
    ctx->pc = 0x33C540u;
label_33c540:
    // 0x33c540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33c540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_33c544:
    // 0x33c544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33c544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33c548:
    // 0x33c548: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33c548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33c54c:
    // 0x33c54c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c550:
    // 0x33c550: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33c550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c554:
    // 0x33c554: 0x27a6005f  addiu       $a2, $sp, 0x5F
    ctx->pc = 0x33c554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 95));
label_33c558:
    // 0x33c558: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x33c558u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_33c55c:
    // 0x33c55c: 0xc0cf17c  jal         func_33C5F0
label_33c560:
    if (ctx->pc == 0x33C560u) {
        ctx->pc = 0x33C560u;
            // 0x33c560: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x33C564u;
        goto label_33c564;
    }
    ctx->pc = 0x33C55Cu;
    SET_GPR_U32(ctx, 31, 0x33C564u);
    ctx->pc = 0x33C560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33C55Cu;
            // 0x33c560: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33C5F0u;
    if (runtime->hasFunction(0x33C5F0u)) {
        auto targetFn = runtime->lookupFunction(0x33C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C564u; }
        if (ctx->pc != 0x33C564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033C5F0_0x33c5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33C564u; }
        if (ctx->pc != 0x33C564u) { return; }
    }
    ctx->pc = 0x33C564u;
label_33c564:
    // 0x33c564: 0x93a2005f  lbu         $v0, 0x5F($sp)
    ctx->pc = 0x33c564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 95)));
label_33c568:
    // 0x33c568: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_33c56c:
    if (ctx->pc == 0x33C56Cu) {
        ctx->pc = 0x33C570u;
        goto label_33c570;
    }
    ctx->pc = 0x33C568u;
    {
        const bool branch_taken_0x33c568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c568) {
            ctx->pc = 0x33C588u;
            goto label_33c588;
        }
    }
    ctx->pc = 0x33C570u;
label_33c570:
    // 0x33c570: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33c570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33c574:
    // 0x33c574: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x33c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_33c578:
    // 0x33c578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c57c:
    // 0x33c57c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x33c57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_33c580:
    // 0x33c580: 0x320f809  jalr        $t9
label_33c584:
    if (ctx->pc == 0x33C584u) {
        ctx->pc = 0x33C588u;
        goto label_33c588;
    }
    ctx->pc = 0x33C580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C588u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C588u; }
            if (ctx->pc != 0x33C588u) { return; }
        }
        }
    }
    ctx->pc = 0x33C588u;
label_33c588:
    // 0x33c588: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_33c58c:
    // 0x33c58c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x33c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_33c590:
    // 0x33c590: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c594:
    // 0x33c594: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x33c594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_33c598:
    // 0x33c598: 0x320f809  jalr        $t9
label_33c59c:
    if (ctx->pc == 0x33C59Cu) {
        ctx->pc = 0x33C5A0u;
        goto label_33c5a0;
    }
    ctx->pc = 0x33C598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C5A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C5A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C5A0u; }
            if (ctx->pc != 0x33C5A0u) { return; }
        }
        }
    }
    ctx->pc = 0x33C5A0u;
label_33c5a0:
    // 0x33c5a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33c5a4:
    // 0x33c5a4: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x33c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_33c5a8:
    // 0x33c5a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33c5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33c5ac:
    // 0x33c5ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x33c5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_33c5b0:
    // 0x33c5b0: 0x320f809  jalr        $t9
label_33c5b4:
    if (ctx->pc == 0x33C5B4u) {
        ctx->pc = 0x33C5B8u;
        goto label_33c5b8;
    }
    ctx->pc = 0x33C5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33C5B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33C5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33C5B8u; }
            if (ctx->pc != 0x33C5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x33C5B8u;
label_33c5b8:
    // 0x33c5b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33c5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33c5bc:
    // 0x33c5bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c5c0:
    // 0x33c5c0: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x33c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_33c5c4:
    // 0x33c5c4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x33c5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_33c5c8:
    // 0x33c5c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33c5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33c5cc:
    // 0x33c5cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33c5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33c5d0:
    // 0x33c5d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33c5d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33c5d4:
    // 0x33c5d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33c5d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33c5d8:
    // 0x33c5d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33c5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33c5dc:
    // 0x33c5dc: 0x3e00008  jr          $ra
label_33c5e0:
    if (ctx->pc == 0x33C5E0u) {
        ctx->pc = 0x33C5E0u;
            // 0x33c5e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x33C5E4u;
        goto label_33c5e4;
    }
    ctx->pc = 0x33C5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C5DCu;
            // 0x33c5e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C5E4u;
label_33c5e4:
    // 0x33c5e4: 0x0  nop
    ctx->pc = 0x33c5e4u;
    // NOP
label_33c5e8:
    // 0x33c5e8: 0x0  nop
    ctx->pc = 0x33c5e8u;
    // NOP
label_33c5ec:
    // 0x33c5ec: 0x0  nop
    ctx->pc = 0x33c5ecu;
    // NOP
}
