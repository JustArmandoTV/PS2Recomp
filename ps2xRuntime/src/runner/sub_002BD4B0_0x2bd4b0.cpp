#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BD4B0
// Address: 0x2bd4b0 - 0x2bd610
void sub_002BD4B0_0x2bd4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD4B0_0x2bd4b0");
#endif

    switch (ctx->pc) {
        case 0x2bd4b0u: goto label_2bd4b0;
        case 0x2bd4b4u: goto label_2bd4b4;
        case 0x2bd4b8u: goto label_2bd4b8;
        case 0x2bd4bcu: goto label_2bd4bc;
        case 0x2bd4c0u: goto label_2bd4c0;
        case 0x2bd4c4u: goto label_2bd4c4;
        case 0x2bd4c8u: goto label_2bd4c8;
        case 0x2bd4ccu: goto label_2bd4cc;
        case 0x2bd4d0u: goto label_2bd4d0;
        case 0x2bd4d4u: goto label_2bd4d4;
        case 0x2bd4d8u: goto label_2bd4d8;
        case 0x2bd4dcu: goto label_2bd4dc;
        case 0x2bd4e0u: goto label_2bd4e0;
        case 0x2bd4e4u: goto label_2bd4e4;
        case 0x2bd4e8u: goto label_2bd4e8;
        case 0x2bd4ecu: goto label_2bd4ec;
        case 0x2bd4f0u: goto label_2bd4f0;
        case 0x2bd4f4u: goto label_2bd4f4;
        case 0x2bd4f8u: goto label_2bd4f8;
        case 0x2bd4fcu: goto label_2bd4fc;
        case 0x2bd500u: goto label_2bd500;
        case 0x2bd504u: goto label_2bd504;
        case 0x2bd508u: goto label_2bd508;
        case 0x2bd50cu: goto label_2bd50c;
        case 0x2bd510u: goto label_2bd510;
        case 0x2bd514u: goto label_2bd514;
        case 0x2bd518u: goto label_2bd518;
        case 0x2bd51cu: goto label_2bd51c;
        case 0x2bd520u: goto label_2bd520;
        case 0x2bd524u: goto label_2bd524;
        case 0x2bd528u: goto label_2bd528;
        case 0x2bd52cu: goto label_2bd52c;
        case 0x2bd530u: goto label_2bd530;
        case 0x2bd534u: goto label_2bd534;
        case 0x2bd538u: goto label_2bd538;
        case 0x2bd53cu: goto label_2bd53c;
        case 0x2bd540u: goto label_2bd540;
        case 0x2bd544u: goto label_2bd544;
        case 0x2bd548u: goto label_2bd548;
        case 0x2bd54cu: goto label_2bd54c;
        case 0x2bd550u: goto label_2bd550;
        case 0x2bd554u: goto label_2bd554;
        case 0x2bd558u: goto label_2bd558;
        case 0x2bd55cu: goto label_2bd55c;
        case 0x2bd560u: goto label_2bd560;
        case 0x2bd564u: goto label_2bd564;
        case 0x2bd568u: goto label_2bd568;
        case 0x2bd56cu: goto label_2bd56c;
        case 0x2bd570u: goto label_2bd570;
        case 0x2bd574u: goto label_2bd574;
        case 0x2bd578u: goto label_2bd578;
        case 0x2bd57cu: goto label_2bd57c;
        case 0x2bd580u: goto label_2bd580;
        case 0x2bd584u: goto label_2bd584;
        case 0x2bd588u: goto label_2bd588;
        case 0x2bd58cu: goto label_2bd58c;
        case 0x2bd590u: goto label_2bd590;
        case 0x2bd594u: goto label_2bd594;
        case 0x2bd598u: goto label_2bd598;
        case 0x2bd59cu: goto label_2bd59c;
        case 0x2bd5a0u: goto label_2bd5a0;
        case 0x2bd5a4u: goto label_2bd5a4;
        case 0x2bd5a8u: goto label_2bd5a8;
        case 0x2bd5acu: goto label_2bd5ac;
        case 0x2bd5b0u: goto label_2bd5b0;
        case 0x2bd5b4u: goto label_2bd5b4;
        case 0x2bd5b8u: goto label_2bd5b8;
        case 0x2bd5bcu: goto label_2bd5bc;
        case 0x2bd5c0u: goto label_2bd5c0;
        case 0x2bd5c4u: goto label_2bd5c4;
        case 0x2bd5c8u: goto label_2bd5c8;
        case 0x2bd5ccu: goto label_2bd5cc;
        case 0x2bd5d0u: goto label_2bd5d0;
        case 0x2bd5d4u: goto label_2bd5d4;
        case 0x2bd5d8u: goto label_2bd5d8;
        case 0x2bd5dcu: goto label_2bd5dc;
        case 0x2bd5e0u: goto label_2bd5e0;
        case 0x2bd5e4u: goto label_2bd5e4;
        case 0x2bd5e8u: goto label_2bd5e8;
        case 0x2bd5ecu: goto label_2bd5ec;
        case 0x2bd5f0u: goto label_2bd5f0;
        case 0x2bd5f4u: goto label_2bd5f4;
        case 0x2bd5f8u: goto label_2bd5f8;
        case 0x2bd5fcu: goto label_2bd5fc;
        case 0x2bd600u: goto label_2bd600;
        case 0x2bd604u: goto label_2bd604;
        case 0x2bd608u: goto label_2bd608;
        case 0x2bd60cu: goto label_2bd60c;
        default: break;
    }

    ctx->pc = 0x2bd4b0u;

label_2bd4b0:
    // 0x2bd4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bd4b4:
    // 0x2bd4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bd4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bd4b8:
    // 0x2bd4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bd4bc:
    // 0x2bd4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bd4c0:
    // 0x2bd4c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bd4c4:
    // 0x2bd4c4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2bd4c8:
    if (ctx->pc == 0x2BD4C8u) {
        ctx->pc = 0x2BD4C8u;
            // 0x2bd4c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4CCu;
        goto label_2bd4cc;
    }
    ctx->pc = 0x2BD4C4u;
    {
        const bool branch_taken_0x2bd4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD4C4u;
            // 0x2bd4c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd4c4) {
            ctx->pc = 0x2BD5F8u;
            goto label_2bd5f8;
        }
    }
    ctx->pc = 0x2BD4CCu;
label_2bd4cc:
    // 0x2bd4cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bd4d0:
    // 0x2bd4d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd4d4:
    // 0x2bd4d4: 0x24631ef0  addiu       $v1, $v1, 0x1EF0
    ctx->pc = 0x2bd4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7920));
label_2bd4d8:
    // 0x2bd4d8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bd4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2bd4dc:
    // 0x2bd4dc: 0x24421f28  addiu       $v0, $v0, 0x1F28
    ctx->pc = 0x2bd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7976));
label_2bd4e0:
    // 0x2bd4e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bd4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bd4e4:
    // 0x2bd4e4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2bd4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2bd4e8:
    // 0x2bd4e8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2bd4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2bd4ec:
    // 0x2bd4ec: 0xc0407c0  jal         func_101F00
label_2bd4f0:
    if (ctx->pc == 0x2BD4F0u) {
        ctx->pc = 0x2BD4F0u;
            // 0x2bd4f0: 0x24a5d370  addiu       $a1, $a1, -0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955888));
        ctx->pc = 0x2BD4F4u;
        goto label_2bd4f4;
    }
    ctx->pc = 0x2BD4ECu;
    SET_GPR_U32(ctx, 31, 0x2BD4F4u);
    ctx->pc = 0x2BD4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD4ECu;
            // 0x2bd4f0: 0x24a5d370  addiu       $a1, $a1, -0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4F4u; }
        if (ctx->pc != 0x2BD4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD4F4u; }
        if (ctx->pc != 0x2BD4F4u) { return; }
    }
    ctx->pc = 0x2BD4F4u;
label_2bd4f4:
    // 0x2bd4f4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2bd4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2bd4f8:
    // 0x2bd4f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2bd4fc:
    if (ctx->pc == 0x2BD4FCu) {
        ctx->pc = 0x2BD4FCu;
            // 0x2bd4fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2BD500u;
        goto label_2bd500;
    }
    ctx->pc = 0x2BD4F8u;
    {
        const bool branch_taken_0x2bd4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd4f8) {
            ctx->pc = 0x2BD4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD4F8u;
            // 0x2bd4fc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD50Cu;
            goto label_2bd50c;
        }
    }
    ctx->pc = 0x2BD500u;
label_2bd500:
    // 0x2bd500: 0xc07507c  jal         func_1D41F0
label_2bd504:
    if (ctx->pc == 0x2BD504u) {
        ctx->pc = 0x2BD504u;
            // 0x2bd504: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2BD508u;
        goto label_2bd508;
    }
    ctx->pc = 0x2BD500u;
    SET_GPR_U32(ctx, 31, 0x2BD508u);
    ctx->pc = 0x2BD504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD500u;
            // 0x2bd504: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD508u; }
        if (ctx->pc != 0x2BD508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD508u; }
        if (ctx->pc != 0x2BD508u) { return; }
    }
    ctx->pc = 0x2BD508u;
label_2bd508:
    // 0x2bd508: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2bd508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2bd50c:
    // 0x2bd50c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bd510:
    if (ctx->pc == 0x2BD510u) {
        ctx->pc = 0x2BD510u;
            // 0x2bd510: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BD514u;
        goto label_2bd514;
    }
    ctx->pc = 0x2BD50Cu;
    {
        const bool branch_taken_0x2bd50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd50c) {
            ctx->pc = 0x2BD510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD50Cu;
            // 0x2bd510: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD53Cu;
            goto label_2bd53c;
        }
    }
    ctx->pc = 0x2BD514u;
label_2bd514:
    // 0x2bd514: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bd518:
    if (ctx->pc == 0x2BD518u) {
        ctx->pc = 0x2BD51Cu;
        goto label_2bd51c;
    }
    ctx->pc = 0x2BD514u;
    {
        const bool branch_taken_0x2bd514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd514) {
            ctx->pc = 0x2BD538u;
            goto label_2bd538;
        }
    }
    ctx->pc = 0x2BD51Cu;
label_2bd51c:
    // 0x2bd51c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bd520:
    if (ctx->pc == 0x2BD520u) {
        ctx->pc = 0x2BD524u;
        goto label_2bd524;
    }
    ctx->pc = 0x2BD51Cu;
    {
        const bool branch_taken_0x2bd51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd51c) {
            ctx->pc = 0x2BD538u;
            goto label_2bd538;
        }
    }
    ctx->pc = 0x2BD524u;
label_2bd524:
    // 0x2bd524: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2bd524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2bd528:
    // 0x2bd528: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bd52c:
    if (ctx->pc == 0x2BD52Cu) {
        ctx->pc = 0x2BD530u;
        goto label_2bd530;
    }
    ctx->pc = 0x2BD528u;
    {
        const bool branch_taken_0x2bd528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd528) {
            ctx->pc = 0x2BD538u;
            goto label_2bd538;
        }
    }
    ctx->pc = 0x2BD530u;
label_2bd530:
    // 0x2bd530: 0xc0400a8  jal         func_1002A0
label_2bd534:
    if (ctx->pc == 0x2BD534u) {
        ctx->pc = 0x2BD538u;
        goto label_2bd538;
    }
    ctx->pc = 0x2BD530u;
    SET_GPR_U32(ctx, 31, 0x2BD538u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD538u; }
        if (ctx->pc != 0x2BD538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD538u; }
        if (ctx->pc != 0x2BD538u) { return; }
    }
    ctx->pc = 0x2BD538u;
label_2bd538:
    // 0x2bd538: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2bd538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bd53c:
    // 0x2bd53c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2bd540:
    if (ctx->pc == 0x2BD540u) {
        ctx->pc = 0x2BD540u;
            // 0x2bd540: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2BD544u;
        goto label_2bd544;
    }
    ctx->pc = 0x2BD53Cu;
    {
        const bool branch_taken_0x2bd53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd53c) {
            ctx->pc = 0x2BD540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD53Cu;
            // 0x2bd540: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD56Cu;
            goto label_2bd56c;
        }
    }
    ctx->pc = 0x2BD544u;
label_2bd544:
    // 0x2bd544: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bd548:
    if (ctx->pc == 0x2BD548u) {
        ctx->pc = 0x2BD54Cu;
        goto label_2bd54c;
    }
    ctx->pc = 0x2BD544u;
    {
        const bool branch_taken_0x2bd544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd544) {
            ctx->pc = 0x2BD568u;
            goto label_2bd568;
        }
    }
    ctx->pc = 0x2BD54Cu;
label_2bd54c:
    // 0x2bd54c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bd550:
    if (ctx->pc == 0x2BD550u) {
        ctx->pc = 0x2BD554u;
        goto label_2bd554;
    }
    ctx->pc = 0x2BD54Cu;
    {
        const bool branch_taken_0x2bd54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd54c) {
            ctx->pc = 0x2BD568u;
            goto label_2bd568;
        }
    }
    ctx->pc = 0x2BD554u;
label_2bd554:
    // 0x2bd554: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2bd554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2bd558:
    // 0x2bd558: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bd55c:
    if (ctx->pc == 0x2BD55Cu) {
        ctx->pc = 0x2BD560u;
        goto label_2bd560;
    }
    ctx->pc = 0x2BD558u;
    {
        const bool branch_taken_0x2bd558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd558) {
            ctx->pc = 0x2BD568u;
            goto label_2bd568;
        }
    }
    ctx->pc = 0x2BD560u;
label_2bd560:
    // 0x2bd560: 0xc0400a8  jal         func_1002A0
label_2bd564:
    if (ctx->pc == 0x2BD564u) {
        ctx->pc = 0x2BD568u;
        goto label_2bd568;
    }
    ctx->pc = 0x2BD560u;
    SET_GPR_U32(ctx, 31, 0x2BD568u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD568u; }
        if (ctx->pc != 0x2BD568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD568u; }
        if (ctx->pc != 0x2BD568u) { return; }
    }
    ctx->pc = 0x2BD568u;
label_2bd568:
    // 0x2bd568: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2bd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2bd56c:
    // 0x2bd56c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bd570:
    if (ctx->pc == 0x2BD570u) {
        ctx->pc = 0x2BD574u;
        goto label_2bd574;
    }
    ctx->pc = 0x2BD56Cu;
    {
        const bool branch_taken_0x2bd56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd56c) {
            ctx->pc = 0x2BD588u;
            goto label_2bd588;
        }
    }
    ctx->pc = 0x2BD574u;
label_2bd574:
    // 0x2bd574: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bd574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bd578:
    // 0x2bd578: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2bd578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2bd57c:
    // 0x2bd57c: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x2bd57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
label_2bd580:
    // 0x2bd580: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2bd580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2bd584:
    // 0x2bd584: 0xac400d50  sw          $zero, 0xD50($v0)
    ctx->pc = 0x2bd584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3408), GPR_U32(ctx, 0));
label_2bd588:
    // 0x2bd588: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2bd58c:
    if (ctx->pc == 0x2BD58Cu) {
        ctx->pc = 0x2BD58Cu;
            // 0x2bd58c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BD590u;
        goto label_2bd590;
    }
    ctx->pc = 0x2BD588u;
    {
        const bool branch_taken_0x2bd588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd588) {
            ctx->pc = 0x2BD58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD588u;
            // 0x2bd58c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5E4u;
            goto label_2bd5e4;
        }
    }
    ctx->pc = 0x2BD590u;
label_2bd590:
    // 0x2bd590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bd590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bd594:
    // 0x2bd594: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2bd594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2bd598:
    // 0x2bd598: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bd598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bd59c:
    // 0x2bd59c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2bd59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2bd5a0:
    // 0x2bd5a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bd5a4:
    if (ctx->pc == 0x2BD5A4u) {
        ctx->pc = 0x2BD5A4u;
            // 0x2bd5a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2BD5A8u;
        goto label_2bd5a8;
    }
    ctx->pc = 0x2BD5A0u;
    {
        const bool branch_taken_0x2bd5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5a0) {
            ctx->pc = 0x2BD5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5A0u;
            // 0x2bd5a4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5BCu;
            goto label_2bd5bc;
        }
    }
    ctx->pc = 0x2BD5A8u;
label_2bd5a8:
    // 0x2bd5a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bd5a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bd5ac:
    // 0x2bd5ac: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bd5acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bd5b0:
    // 0x2bd5b0: 0x320f809  jalr        $t9
label_2bd5b4:
    if (ctx->pc == 0x2BD5B4u) {
        ctx->pc = 0x2BD5B4u;
            // 0x2bd5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD5B8u;
        goto label_2bd5b8;
    }
    ctx->pc = 0x2BD5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD5B8u);
        ctx->pc = 0x2BD5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5B0u;
            // 0x2bd5b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD5B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5B8u; }
            if (ctx->pc != 0x2BD5B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD5B8u;
label_2bd5b8:
    // 0x2bd5b8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2bd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2bd5bc:
    // 0x2bd5bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bd5c0:
    if (ctx->pc == 0x2BD5C0u) {
        ctx->pc = 0x2BD5C0u;
            // 0x2bd5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5C4u;
        goto label_2bd5c4;
    }
    ctx->pc = 0x2BD5BCu;
    {
        const bool branch_taken_0x2bd5bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd5bc) {
            ctx->pc = 0x2BD5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5BCu;
            // 0x2bd5c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5D8u;
            goto label_2bd5d8;
        }
    }
    ctx->pc = 0x2BD5C4u;
label_2bd5c4:
    // 0x2bd5c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bd5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bd5c8:
    // 0x2bd5c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bd5c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bd5cc:
    // 0x2bd5cc: 0x320f809  jalr        $t9
label_2bd5d0:
    if (ctx->pc == 0x2BD5D0u) {
        ctx->pc = 0x2BD5D0u;
            // 0x2bd5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BD5D4u;
        goto label_2bd5d4;
    }
    ctx->pc = 0x2BD5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BD5D4u);
        ctx->pc = 0x2BD5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5CCu;
            // 0x2bd5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BD5D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5D4u; }
            if (ctx->pc != 0x2BD5D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BD5D4u;
label_2bd5d4:
    // 0x2bd5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd5d8:
    // 0x2bd5d8: 0xc075bf8  jal         func_1D6FE0
label_2bd5dc:
    if (ctx->pc == 0x2BD5DCu) {
        ctx->pc = 0x2BD5DCu;
            // 0x2bd5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5E0u;
        goto label_2bd5e0;
    }
    ctx->pc = 0x2BD5D8u;
    SET_GPR_U32(ctx, 31, 0x2BD5E0u);
    ctx->pc = 0x2BD5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5D8u;
            // 0x2bd5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5E0u; }
        if (ctx->pc != 0x2BD5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5E0u; }
        if (ctx->pc != 0x2BD5E0u) { return; }
    }
    ctx->pc = 0x2BD5E0u;
label_2bd5e0:
    // 0x2bd5e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bd5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bd5e4:
    // 0x2bd5e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bd5e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bd5e8:
    // 0x2bd5e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bd5ec:
    if (ctx->pc == 0x2BD5ECu) {
        ctx->pc = 0x2BD5ECu;
            // 0x2bd5ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5F0u;
        goto label_2bd5f0;
    }
    ctx->pc = 0x2BD5E8u;
    {
        const bool branch_taken_0x2bd5e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bd5e8) {
            ctx->pc = 0x2BD5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5E8u;
            // 0x2bd5ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BD5FCu;
            goto label_2bd5fc;
        }
    }
    ctx->pc = 0x2BD5F0u;
label_2bd5f0:
    // 0x2bd5f0: 0xc0400a8  jal         func_1002A0
label_2bd5f4:
    if (ctx->pc == 0x2BD5F4u) {
        ctx->pc = 0x2BD5F4u;
            // 0x2bd5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BD5F8u;
        goto label_2bd5f8;
    }
    ctx->pc = 0x2BD5F0u;
    SET_GPR_U32(ctx, 31, 0x2BD5F8u);
    ctx->pc = 0x2BD5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD5F0u;
            // 0x2bd5f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5F8u; }
        if (ctx->pc != 0x2BD5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BD5F8u; }
        if (ctx->pc != 0x2BD5F8u) { return; }
    }
    ctx->pc = 0x2BD5F8u;
label_2bd5f8:
    // 0x2bd5f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bd5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bd5fc:
    // 0x2bd5fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bd5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bd600:
    // 0x2bd600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bd604:
    // 0x2bd604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bd608:
    // 0x2bd608: 0x3e00008  jr          $ra
label_2bd60c:
    if (ctx->pc == 0x2BD60Cu) {
        ctx->pc = 0x2BD60Cu;
            // 0x2bd60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BD610u;
        goto label_fallthrough_0x2bd608;
    }
    ctx->pc = 0x2BD608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BD608u;
            // 0x2bd60c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bd608:
    ctx->pc = 0x2BD610u;
}
