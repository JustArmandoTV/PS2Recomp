#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7450
// Address: 0x2c7450 - 0x2c75d0
void sub_002C7450_0x2c7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7450_0x2c7450");
#endif

    switch (ctx->pc) {
        case 0x2c7450u: goto label_2c7450;
        case 0x2c7454u: goto label_2c7454;
        case 0x2c7458u: goto label_2c7458;
        case 0x2c745cu: goto label_2c745c;
        case 0x2c7460u: goto label_2c7460;
        case 0x2c7464u: goto label_2c7464;
        case 0x2c7468u: goto label_2c7468;
        case 0x2c746cu: goto label_2c746c;
        case 0x2c7470u: goto label_2c7470;
        case 0x2c7474u: goto label_2c7474;
        case 0x2c7478u: goto label_2c7478;
        case 0x2c747cu: goto label_2c747c;
        case 0x2c7480u: goto label_2c7480;
        case 0x2c7484u: goto label_2c7484;
        case 0x2c7488u: goto label_2c7488;
        case 0x2c748cu: goto label_2c748c;
        case 0x2c7490u: goto label_2c7490;
        case 0x2c7494u: goto label_2c7494;
        case 0x2c7498u: goto label_2c7498;
        case 0x2c749cu: goto label_2c749c;
        case 0x2c74a0u: goto label_2c74a0;
        case 0x2c74a4u: goto label_2c74a4;
        case 0x2c74a8u: goto label_2c74a8;
        case 0x2c74acu: goto label_2c74ac;
        case 0x2c74b0u: goto label_2c74b0;
        case 0x2c74b4u: goto label_2c74b4;
        case 0x2c74b8u: goto label_2c74b8;
        case 0x2c74bcu: goto label_2c74bc;
        case 0x2c74c0u: goto label_2c74c0;
        case 0x2c74c4u: goto label_2c74c4;
        case 0x2c74c8u: goto label_2c74c8;
        case 0x2c74ccu: goto label_2c74cc;
        case 0x2c74d0u: goto label_2c74d0;
        case 0x2c74d4u: goto label_2c74d4;
        case 0x2c74d8u: goto label_2c74d8;
        case 0x2c74dcu: goto label_2c74dc;
        case 0x2c74e0u: goto label_2c74e0;
        case 0x2c74e4u: goto label_2c74e4;
        case 0x2c74e8u: goto label_2c74e8;
        case 0x2c74ecu: goto label_2c74ec;
        case 0x2c74f0u: goto label_2c74f0;
        case 0x2c74f4u: goto label_2c74f4;
        case 0x2c74f8u: goto label_2c74f8;
        case 0x2c74fcu: goto label_2c74fc;
        case 0x2c7500u: goto label_2c7500;
        case 0x2c7504u: goto label_2c7504;
        case 0x2c7508u: goto label_2c7508;
        case 0x2c750cu: goto label_2c750c;
        case 0x2c7510u: goto label_2c7510;
        case 0x2c7514u: goto label_2c7514;
        case 0x2c7518u: goto label_2c7518;
        case 0x2c751cu: goto label_2c751c;
        case 0x2c7520u: goto label_2c7520;
        case 0x2c7524u: goto label_2c7524;
        case 0x2c7528u: goto label_2c7528;
        case 0x2c752cu: goto label_2c752c;
        case 0x2c7530u: goto label_2c7530;
        case 0x2c7534u: goto label_2c7534;
        case 0x2c7538u: goto label_2c7538;
        case 0x2c753cu: goto label_2c753c;
        case 0x2c7540u: goto label_2c7540;
        case 0x2c7544u: goto label_2c7544;
        case 0x2c7548u: goto label_2c7548;
        case 0x2c754cu: goto label_2c754c;
        case 0x2c7550u: goto label_2c7550;
        case 0x2c7554u: goto label_2c7554;
        case 0x2c7558u: goto label_2c7558;
        case 0x2c755cu: goto label_2c755c;
        case 0x2c7560u: goto label_2c7560;
        case 0x2c7564u: goto label_2c7564;
        case 0x2c7568u: goto label_2c7568;
        case 0x2c756cu: goto label_2c756c;
        case 0x2c7570u: goto label_2c7570;
        case 0x2c7574u: goto label_2c7574;
        case 0x2c7578u: goto label_2c7578;
        case 0x2c757cu: goto label_2c757c;
        case 0x2c7580u: goto label_2c7580;
        case 0x2c7584u: goto label_2c7584;
        case 0x2c7588u: goto label_2c7588;
        case 0x2c758cu: goto label_2c758c;
        case 0x2c7590u: goto label_2c7590;
        case 0x2c7594u: goto label_2c7594;
        case 0x2c7598u: goto label_2c7598;
        case 0x2c759cu: goto label_2c759c;
        case 0x2c75a0u: goto label_2c75a0;
        case 0x2c75a4u: goto label_2c75a4;
        case 0x2c75a8u: goto label_2c75a8;
        case 0x2c75acu: goto label_2c75ac;
        case 0x2c75b0u: goto label_2c75b0;
        case 0x2c75b4u: goto label_2c75b4;
        case 0x2c75b8u: goto label_2c75b8;
        case 0x2c75bcu: goto label_2c75bc;
        case 0x2c75c0u: goto label_2c75c0;
        case 0x2c75c4u: goto label_2c75c4;
        case 0x2c75c8u: goto label_2c75c8;
        case 0x2c75ccu: goto label_2c75cc;
        default: break;
    }

    ctx->pc = 0x2c7450u;

label_2c7450:
    // 0x2c7450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c7454:
    // 0x2c7454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7458:
    // 0x2c7458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c745c:
    // 0x2c745c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c7460:
    // 0x2c7460: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c7460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7464:
    // 0x2c7464: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
label_2c7468:
    if (ctx->pc == 0x2C7468u) {
        ctx->pc = 0x2C7468u;
            // 0x2c7468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C746Cu;
        goto label_2c746c;
    }
    ctx->pc = 0x2C7464u;
    {
        const bool branch_taken_0x2c7464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7464u;
            // 0x2c7468: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7464) {
            ctx->pc = 0x2C75ACu;
            goto label_2c75ac;
        }
    }
    ctx->pc = 0x2C746Cu;
label_2c746c:
    // 0x2c746c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c746cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c7470:
    // 0x2c7470: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7474:
    // 0x2c7474: 0x24630940  addiu       $v1, $v1, 0x940
    ctx->pc = 0x2c7474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2368));
label_2c7478:
    // 0x2c7478: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c7478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c747c:
    // 0x2c747c: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x2c747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
label_2c7480:
    // 0x2c7480: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c7480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c7484:
    // 0x2c7484: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c7484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c7488:
    // 0x2c7488: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c7488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c748c:
    // 0x2c748c: 0xc0407c0  jal         func_101F00
label_2c7490:
    if (ctx->pc == 0x2C7490u) {
        ctx->pc = 0x2C7490u;
            // 0x2c7490: 0x24a573c0  addiu       $a1, $a1, 0x73C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29632));
        ctx->pc = 0x2C7494u;
        goto label_2c7494;
    }
    ctx->pc = 0x2C748Cu;
    SET_GPR_U32(ctx, 31, 0x2C7494u);
    ctx->pc = 0x2C7490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C748Cu;
            // 0x2c7490: 0x24a573c0  addiu       $a1, $a1, 0x73C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7494u; }
        if (ctx->pc != 0x2C7494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7494u; }
        if (ctx->pc != 0x2C7494u) { return; }
    }
    ctx->pc = 0x2C7494u;
label_2c7494:
    // 0x2c7494: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c7494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c7498:
    // 0x2c7498: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2c749c:
    if (ctx->pc == 0x2C749Cu) {
        ctx->pc = 0x2C749Cu;
            // 0x2c749c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C74A0u;
        goto label_2c74a0;
    }
    ctx->pc = 0x2C7498u;
    {
        const bool branch_taken_0x2c7498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7498) {
            ctx->pc = 0x2C749Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7498u;
            // 0x2c749c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C74C0u;
            goto label_2c74c0;
        }
    }
    ctx->pc = 0x2C74A0u;
label_2c74a0:
    // 0x2c74a0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2c74a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2c74a4:
    // 0x2c74a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c74a8:
    if (ctx->pc == 0x2C74A8u) {
        ctx->pc = 0x2C74A8u;
            // 0x2c74a8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x2C74ACu;
        goto label_2c74ac;
    }
    ctx->pc = 0x2C74A4u;
    {
        const bool branch_taken_0x2c74a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74a4) {
            ctx->pc = 0x2C74A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74A4u;
            // 0x2c74a8: 0xae200088  sw          $zero, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C74BCu;
            goto label_2c74bc;
        }
    }
    ctx->pc = 0x2C74ACu;
label_2c74ac:
    // 0x2c74ac: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c74acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c74b0:
    // 0x2c74b0: 0xc0407c0  jal         func_101F00
label_2c74b4:
    if (ctx->pc == 0x2C74B4u) {
        ctx->pc = 0x2C74B4u;
            // 0x2c74b4: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->pc = 0x2C74B8u;
        goto label_2c74b8;
    }
    ctx->pc = 0x2C74B0u;
    SET_GPR_U32(ctx, 31, 0x2C74B8u);
    ctx->pc = 0x2C74B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74B0u;
            // 0x2c74b4: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74B8u; }
        if (ctx->pc != 0x2C74B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74B8u; }
        if (ctx->pc != 0x2C74B8u) { return; }
    }
    ctx->pc = 0x2C74B8u;
label_2c74b8:
    // 0x2c74b8: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2c74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2c74bc:
    // 0x2c74bc: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c74c0:
    // 0x2c74c0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c74c4:
    if (ctx->pc == 0x2C74C4u) {
        ctx->pc = 0x2C74C4u;
            // 0x2c74c4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C74C8u;
        goto label_2c74c8;
    }
    ctx->pc = 0x2C74C0u;
    {
        const bool branch_taken_0x2c74c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74c0) {
            ctx->pc = 0x2C74C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74C0u;
            // 0x2c74c4: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C74F0u;
            goto label_2c74f0;
        }
    }
    ctx->pc = 0x2C74C8u;
label_2c74c8:
    // 0x2c74c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c74cc:
    if (ctx->pc == 0x2C74CCu) {
        ctx->pc = 0x2C74D0u;
        goto label_2c74d0;
    }
    ctx->pc = 0x2C74C8u;
    {
        const bool branch_taken_0x2c74c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74c8) {
            ctx->pc = 0x2C74ECu;
            goto label_2c74ec;
        }
    }
    ctx->pc = 0x2C74D0u;
label_2c74d0:
    // 0x2c74d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c74d4:
    if (ctx->pc == 0x2C74D4u) {
        ctx->pc = 0x2C74D8u;
        goto label_2c74d8;
    }
    ctx->pc = 0x2C74D0u;
    {
        const bool branch_taken_0x2c74d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74d0) {
            ctx->pc = 0x2C74ECu;
            goto label_2c74ec;
        }
    }
    ctx->pc = 0x2C74D8u;
label_2c74d8:
    // 0x2c74d8: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c74d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c74dc:
    // 0x2c74dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c74e0:
    if (ctx->pc == 0x2C74E0u) {
        ctx->pc = 0x2C74E4u;
        goto label_2c74e4;
    }
    ctx->pc = 0x2C74DCu;
    {
        const bool branch_taken_0x2c74dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74dc) {
            ctx->pc = 0x2C74ECu;
            goto label_2c74ec;
        }
    }
    ctx->pc = 0x2C74E4u;
label_2c74e4:
    // 0x2c74e4: 0xc0400a8  jal         func_1002A0
label_2c74e8:
    if (ctx->pc == 0x2C74E8u) {
        ctx->pc = 0x2C74ECu;
        goto label_2c74ec;
    }
    ctx->pc = 0x2C74E4u;
    SET_GPR_U32(ctx, 31, 0x2C74ECu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74ECu; }
        if (ctx->pc != 0x2C74ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C74ECu; }
        if (ctx->pc != 0x2C74ECu) { return; }
    }
    ctx->pc = 0x2C74ECu;
label_2c74ec:
    // 0x2c74ec: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c74f0:
    // 0x2c74f0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c74f4:
    if (ctx->pc == 0x2C74F4u) {
        ctx->pc = 0x2C74F4u;
            // 0x2c74f4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C74F8u;
        goto label_2c74f8;
    }
    ctx->pc = 0x2C74F0u;
    {
        const bool branch_taken_0x2c74f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74f0) {
            ctx->pc = 0x2C74F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C74F0u;
            // 0x2c74f4: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7520u;
            goto label_2c7520;
        }
    }
    ctx->pc = 0x2C74F8u;
label_2c74f8:
    // 0x2c74f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c74fc:
    if (ctx->pc == 0x2C74FCu) {
        ctx->pc = 0x2C7500u;
        goto label_2c7500;
    }
    ctx->pc = 0x2C74F8u;
    {
        const bool branch_taken_0x2c74f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c74f8) {
            ctx->pc = 0x2C751Cu;
            goto label_2c751c;
        }
    }
    ctx->pc = 0x2C7500u;
label_2c7500:
    // 0x2c7500: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c7504:
    if (ctx->pc == 0x2C7504u) {
        ctx->pc = 0x2C7508u;
        goto label_2c7508;
    }
    ctx->pc = 0x2C7500u;
    {
        const bool branch_taken_0x2c7500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7500) {
            ctx->pc = 0x2C751Cu;
            goto label_2c751c;
        }
    }
    ctx->pc = 0x2C7508u;
label_2c7508:
    // 0x2c7508: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c7508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c750c:
    // 0x2c750c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c7510:
    if (ctx->pc == 0x2C7510u) {
        ctx->pc = 0x2C7514u;
        goto label_2c7514;
    }
    ctx->pc = 0x2C750Cu;
    {
        const bool branch_taken_0x2c750c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c750c) {
            ctx->pc = 0x2C751Cu;
            goto label_2c751c;
        }
    }
    ctx->pc = 0x2C7514u;
label_2c7514:
    // 0x2c7514: 0xc0400a8  jal         func_1002A0
label_2c7518:
    if (ctx->pc == 0x2C7518u) {
        ctx->pc = 0x2C751Cu;
        goto label_2c751c;
    }
    ctx->pc = 0x2C7514u;
    SET_GPR_U32(ctx, 31, 0x2C751Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C751Cu; }
        if (ctx->pc != 0x2C751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C751Cu; }
        if (ctx->pc != 0x2C751Cu) { return; }
    }
    ctx->pc = 0x2C751Cu;
label_2c751c:
    // 0x2c751c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c7520:
    // 0x2c7520: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c7524:
    if (ctx->pc == 0x2C7524u) {
        ctx->pc = 0x2C7528u;
        goto label_2c7528;
    }
    ctx->pc = 0x2C7520u;
    {
        const bool branch_taken_0x2c7520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7520) {
            ctx->pc = 0x2C753Cu;
            goto label_2c753c;
        }
    }
    ctx->pc = 0x2C7528u;
label_2c7528:
    // 0x2c7528: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c752c:
    // 0x2c752c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c7530:
    // 0x2c7530: 0x24630928  addiu       $v1, $v1, 0x928
    ctx->pc = 0x2c7530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2344));
label_2c7534:
    // 0x2c7534: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c7534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c7538:
    // 0x2c7538: 0xac400df8  sw          $zero, 0xDF8($v0)
    ctx->pc = 0x2c7538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3576), GPR_U32(ctx, 0));
label_2c753c:
    // 0x2c753c: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c7540:
    if (ctx->pc == 0x2C7540u) {
        ctx->pc = 0x2C7540u;
            // 0x2c7540: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C7544u;
        goto label_2c7544;
    }
    ctx->pc = 0x2C753Cu;
    {
        const bool branch_taken_0x2c753c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c753c) {
            ctx->pc = 0x2C7540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C753Cu;
            // 0x2c7540: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7598u;
            goto label_2c7598;
        }
    }
    ctx->pc = 0x2C7544u;
label_2c7544:
    // 0x2c7544: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c7548:
    // 0x2c7548: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c7548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c754c:
    // 0x2c754c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c754cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c7550:
    // 0x2c7550: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c7550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c7554:
    // 0x2c7554: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c7558:
    if (ctx->pc == 0x2C7558u) {
        ctx->pc = 0x2C7558u;
            // 0x2c7558: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C755Cu;
        goto label_2c755c;
    }
    ctx->pc = 0x2C7554u;
    {
        const bool branch_taken_0x2c7554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7554) {
            ctx->pc = 0x2C7558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7554u;
            // 0x2c7558: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C7570u;
            goto label_2c7570;
        }
    }
    ctx->pc = 0x2C755Cu;
label_2c755c:
    // 0x2c755c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c755cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c7560:
    // 0x2c7560: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c7560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c7564:
    // 0x2c7564: 0x320f809  jalr        $t9
label_2c7568:
    if (ctx->pc == 0x2C7568u) {
        ctx->pc = 0x2C7568u;
            // 0x2c7568: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C756Cu;
        goto label_2c756c;
    }
    ctx->pc = 0x2C7564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C756Cu);
        ctx->pc = 0x2C7568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7564u;
            // 0x2c7568: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C756Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C756Cu; }
            if (ctx->pc != 0x2C756Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C756Cu;
label_2c756c:
    // 0x2c756c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c7570:
    // 0x2c7570: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c7574:
    if (ctx->pc == 0x2C7574u) {
        ctx->pc = 0x2C7574u;
            // 0x2c7574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7578u;
        goto label_2c7578;
    }
    ctx->pc = 0x2C7570u;
    {
        const bool branch_taken_0x2c7570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7570) {
            ctx->pc = 0x2C7574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7570u;
            // 0x2c7574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C758Cu;
            goto label_2c758c;
        }
    }
    ctx->pc = 0x2C7578u;
label_2c7578:
    // 0x2c7578: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c7578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c757c:
    // 0x2c757c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c757cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c7580:
    // 0x2c7580: 0x320f809  jalr        $t9
label_2c7584:
    if (ctx->pc == 0x2C7584u) {
        ctx->pc = 0x2C7584u;
            // 0x2c7584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7588u;
        goto label_2c7588;
    }
    ctx->pc = 0x2C7580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C7588u);
        ctx->pc = 0x2C7584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7580u;
            // 0x2c7584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7588u; }
            if (ctx->pc != 0x2C7588u) { return; }
        }
        }
    }
    ctx->pc = 0x2C7588u;
label_2c7588:
    // 0x2c7588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c7588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c758c:
    // 0x2c758c: 0xc075bf8  jal         func_1D6FE0
label_2c7590:
    if (ctx->pc == 0x2C7590u) {
        ctx->pc = 0x2C7590u;
            // 0x2c7590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7594u;
        goto label_2c7594;
    }
    ctx->pc = 0x2C758Cu;
    SET_GPR_U32(ctx, 31, 0x2C7594u);
    ctx->pc = 0x2C7590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C758Cu;
            // 0x2c7590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7594u; }
        if (ctx->pc != 0x2C7594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7594u; }
        if (ctx->pc != 0x2C7594u) { return; }
    }
    ctx->pc = 0x2C7594u;
label_2c7594:
    // 0x2c7594: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c7594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c7598:
    // 0x2c7598: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c7598u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c759c:
    // 0x2c759c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c75a0:
    if (ctx->pc == 0x2C75A0u) {
        ctx->pc = 0x2C75A0u;
            // 0x2c75a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C75A4u;
        goto label_2c75a4;
    }
    ctx->pc = 0x2C759Cu;
    {
        const bool branch_taken_0x2c759c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c759c) {
            ctx->pc = 0x2C75A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C759Cu;
            // 0x2c75a0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C75B0u;
            goto label_2c75b0;
        }
    }
    ctx->pc = 0x2C75A4u;
label_2c75a4:
    // 0x2c75a4: 0xc0400a8  jal         func_1002A0
label_2c75a8:
    if (ctx->pc == 0x2C75A8u) {
        ctx->pc = 0x2C75A8u;
            // 0x2c75a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C75ACu;
        goto label_2c75ac;
    }
    ctx->pc = 0x2C75A4u;
    SET_GPR_U32(ctx, 31, 0x2C75ACu);
    ctx->pc = 0x2C75A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75A4u;
            // 0x2c75a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75ACu; }
        if (ctx->pc != 0x2C75ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C75ACu; }
        if (ctx->pc != 0x2C75ACu) { return; }
    }
    ctx->pc = 0x2C75ACu;
label_2c75ac:
    // 0x2c75ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c75acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c75b0:
    // 0x2c75b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c75b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c75b4:
    // 0x2c75b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c75b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c75b8:
    // 0x2c75b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c75b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c75bc:
    // 0x2c75bc: 0x3e00008  jr          $ra
label_2c75c0:
    if (ctx->pc == 0x2C75C0u) {
        ctx->pc = 0x2C75C0u;
            // 0x2c75c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C75C4u;
        goto label_2c75c4;
    }
    ctx->pc = 0x2C75BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C75C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C75BCu;
            // 0x2c75c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C75C4u;
label_2c75c4:
    // 0x2c75c4: 0x0  nop
    ctx->pc = 0x2c75c4u;
    // NOP
label_2c75c8:
    // 0x2c75c8: 0x0  nop
    ctx->pc = 0x2c75c8u;
    // NOP
label_2c75cc:
    // 0x2c75cc: 0x0  nop
    ctx->pc = 0x2c75ccu;
    // NOP
}
