#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C34E0
// Address: 0x2c34e0 - 0x2c3640
void sub_002C34E0_0x2c34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C34E0_0x2c34e0");
#endif

    switch (ctx->pc) {
        case 0x2c34e0u: goto label_2c34e0;
        case 0x2c34e4u: goto label_2c34e4;
        case 0x2c34e8u: goto label_2c34e8;
        case 0x2c34ecu: goto label_2c34ec;
        case 0x2c34f0u: goto label_2c34f0;
        case 0x2c34f4u: goto label_2c34f4;
        case 0x2c34f8u: goto label_2c34f8;
        case 0x2c34fcu: goto label_2c34fc;
        case 0x2c3500u: goto label_2c3500;
        case 0x2c3504u: goto label_2c3504;
        case 0x2c3508u: goto label_2c3508;
        case 0x2c350cu: goto label_2c350c;
        case 0x2c3510u: goto label_2c3510;
        case 0x2c3514u: goto label_2c3514;
        case 0x2c3518u: goto label_2c3518;
        case 0x2c351cu: goto label_2c351c;
        case 0x2c3520u: goto label_2c3520;
        case 0x2c3524u: goto label_2c3524;
        case 0x2c3528u: goto label_2c3528;
        case 0x2c352cu: goto label_2c352c;
        case 0x2c3530u: goto label_2c3530;
        case 0x2c3534u: goto label_2c3534;
        case 0x2c3538u: goto label_2c3538;
        case 0x2c353cu: goto label_2c353c;
        case 0x2c3540u: goto label_2c3540;
        case 0x2c3544u: goto label_2c3544;
        case 0x2c3548u: goto label_2c3548;
        case 0x2c354cu: goto label_2c354c;
        case 0x2c3550u: goto label_2c3550;
        case 0x2c3554u: goto label_2c3554;
        case 0x2c3558u: goto label_2c3558;
        case 0x2c355cu: goto label_2c355c;
        case 0x2c3560u: goto label_2c3560;
        case 0x2c3564u: goto label_2c3564;
        case 0x2c3568u: goto label_2c3568;
        case 0x2c356cu: goto label_2c356c;
        case 0x2c3570u: goto label_2c3570;
        case 0x2c3574u: goto label_2c3574;
        case 0x2c3578u: goto label_2c3578;
        case 0x2c357cu: goto label_2c357c;
        case 0x2c3580u: goto label_2c3580;
        case 0x2c3584u: goto label_2c3584;
        case 0x2c3588u: goto label_2c3588;
        case 0x2c358cu: goto label_2c358c;
        case 0x2c3590u: goto label_2c3590;
        case 0x2c3594u: goto label_2c3594;
        case 0x2c3598u: goto label_2c3598;
        case 0x2c359cu: goto label_2c359c;
        case 0x2c35a0u: goto label_2c35a0;
        case 0x2c35a4u: goto label_2c35a4;
        case 0x2c35a8u: goto label_2c35a8;
        case 0x2c35acu: goto label_2c35ac;
        case 0x2c35b0u: goto label_2c35b0;
        case 0x2c35b4u: goto label_2c35b4;
        case 0x2c35b8u: goto label_2c35b8;
        case 0x2c35bcu: goto label_2c35bc;
        case 0x2c35c0u: goto label_2c35c0;
        case 0x2c35c4u: goto label_2c35c4;
        case 0x2c35c8u: goto label_2c35c8;
        case 0x2c35ccu: goto label_2c35cc;
        case 0x2c35d0u: goto label_2c35d0;
        case 0x2c35d4u: goto label_2c35d4;
        case 0x2c35d8u: goto label_2c35d8;
        case 0x2c35dcu: goto label_2c35dc;
        case 0x2c35e0u: goto label_2c35e0;
        case 0x2c35e4u: goto label_2c35e4;
        case 0x2c35e8u: goto label_2c35e8;
        case 0x2c35ecu: goto label_2c35ec;
        case 0x2c35f0u: goto label_2c35f0;
        case 0x2c35f4u: goto label_2c35f4;
        case 0x2c35f8u: goto label_2c35f8;
        case 0x2c35fcu: goto label_2c35fc;
        case 0x2c3600u: goto label_2c3600;
        case 0x2c3604u: goto label_2c3604;
        case 0x2c3608u: goto label_2c3608;
        case 0x2c360cu: goto label_2c360c;
        case 0x2c3610u: goto label_2c3610;
        case 0x2c3614u: goto label_2c3614;
        case 0x2c3618u: goto label_2c3618;
        case 0x2c361cu: goto label_2c361c;
        case 0x2c3620u: goto label_2c3620;
        case 0x2c3624u: goto label_2c3624;
        case 0x2c3628u: goto label_2c3628;
        case 0x2c362cu: goto label_2c362c;
        case 0x2c3630u: goto label_2c3630;
        case 0x2c3634u: goto label_2c3634;
        case 0x2c3638u: goto label_2c3638;
        case 0x2c363cu: goto label_2c363c;
        default: break;
    }

    ctx->pc = 0x2c34e0u;

label_2c34e0:
    // 0x2c34e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c34e4:
    // 0x2c34e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c34e8:
    // 0x2c34e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c34ec:
    // 0x2c34ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c34ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c34f0:
    // 0x2c34f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c34f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c34f4:
    // 0x2c34f4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_2c34f8:
    if (ctx->pc == 0x2C34F8u) {
        ctx->pc = 0x2C34F8u;
            // 0x2c34f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C34FCu;
        goto label_2c34fc;
    }
    ctx->pc = 0x2C34F4u;
    {
        const bool branch_taken_0x2c34f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C34F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C34F4u;
            // 0x2c34f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c34f4) {
            ctx->pc = 0x2C3628u;
            goto label_2c3628;
        }
    }
    ctx->pc = 0x2C34FCu;
label_2c34fc:
    // 0x2c34fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c3500:
    // 0x2c3500: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c3500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c3504:
    // 0x2c3504: 0x24631180  addiu       $v1, $v1, 0x1180
    ctx->pc = 0x2c3504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4480));
label_2c3508:
    // 0x2c3508: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c3508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_2c350c:
    // 0x2c350c: 0x244211b8  addiu       $v0, $v0, 0x11B8
    ctx->pc = 0x2c350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4536));
label_2c3510:
    // 0x2c3510: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2c3510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2c3514:
    // 0x2c3514: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x2c3514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_2c3518:
    // 0x2c3518: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x2c3518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2c351c:
    // 0x2c351c: 0xc0407c0  jal         func_101F00
label_2c3520:
    if (ctx->pc == 0x2C3520u) {
        ctx->pc = 0x2C3520u;
            // 0x2c3520: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
        ctx->pc = 0x2C3524u;
        goto label_2c3524;
    }
    ctx->pc = 0x2C351Cu;
    SET_GPR_U32(ctx, 31, 0x2C3524u);
    ctx->pc = 0x2C3520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C351Cu;
            // 0x2c3520: 0x24a52eb0  addiu       $a1, $a1, 0x2EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3524u; }
        if (ctx->pc != 0x2C3524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3524u; }
        if (ctx->pc != 0x2C3524u) { return; }
    }
    ctx->pc = 0x2C3524u;
label_2c3524:
    // 0x2c3524: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x2c3524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_2c3528:
    // 0x2c3528: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2c352c:
    if (ctx->pc == 0x2C352Cu) {
        ctx->pc = 0x2C352Cu;
            // 0x2c352c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x2C3530u;
        goto label_2c3530;
    }
    ctx->pc = 0x2C3528u;
    {
        const bool branch_taken_0x2c3528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3528) {
            ctx->pc = 0x2C352Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3528u;
            // 0x2c352c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C353Cu;
            goto label_2c353c;
        }
    }
    ctx->pc = 0x2C3530u;
label_2c3530:
    // 0x2c3530: 0xc07507c  jal         func_1D41F0
label_2c3534:
    if (ctx->pc == 0x2C3534u) {
        ctx->pc = 0x2C3534u;
            // 0x2c3534: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2C3538u;
        goto label_2c3538;
    }
    ctx->pc = 0x2C3530u;
    SET_GPR_U32(ctx, 31, 0x2C3538u);
    ctx->pc = 0x2C3534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3530u;
            // 0x2c3534: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3538u; }
        if (ctx->pc != 0x2C3538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3538u; }
        if (ctx->pc != 0x2C3538u) { return; }
    }
    ctx->pc = 0x2C3538u;
label_2c3538:
    // 0x2c3538: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x2c3538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2c353c:
    // 0x2c353c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c3540:
    if (ctx->pc == 0x2C3540u) {
        ctx->pc = 0x2C3540u;
            // 0x2c3540: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2C3544u;
        goto label_2c3544;
    }
    ctx->pc = 0x2C353Cu;
    {
        const bool branch_taken_0x2c353c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c353c) {
            ctx->pc = 0x2C3540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C353Cu;
            // 0x2c3540: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C356Cu;
            goto label_2c356c;
        }
    }
    ctx->pc = 0x2C3544u;
label_2c3544:
    // 0x2c3544: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c3548:
    if (ctx->pc == 0x2C3548u) {
        ctx->pc = 0x2C354Cu;
        goto label_2c354c;
    }
    ctx->pc = 0x2C3544u;
    {
        const bool branch_taken_0x2c3544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3544) {
            ctx->pc = 0x2C3568u;
            goto label_2c3568;
        }
    }
    ctx->pc = 0x2C354Cu;
label_2c354c:
    // 0x2c354c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c3550:
    if (ctx->pc == 0x2C3550u) {
        ctx->pc = 0x2C3554u;
        goto label_2c3554;
    }
    ctx->pc = 0x2C354Cu;
    {
        const bool branch_taken_0x2c354c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c354c) {
            ctx->pc = 0x2C3568u;
            goto label_2c3568;
        }
    }
    ctx->pc = 0x2C3554u;
label_2c3554:
    // 0x2c3554: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2c3554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_2c3558:
    // 0x2c3558: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c355c:
    if (ctx->pc == 0x2C355Cu) {
        ctx->pc = 0x2C3560u;
        goto label_2c3560;
    }
    ctx->pc = 0x2C3558u;
    {
        const bool branch_taken_0x2c3558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3558) {
            ctx->pc = 0x2C3568u;
            goto label_2c3568;
        }
    }
    ctx->pc = 0x2C3560u;
label_2c3560:
    // 0x2c3560: 0xc0400a8  jal         func_1002A0
label_2c3564:
    if (ctx->pc == 0x2C3564u) {
        ctx->pc = 0x2C3568u;
        goto label_2c3568;
    }
    ctx->pc = 0x2C3560u;
    SET_GPR_U32(ctx, 31, 0x2C3568u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3568u; }
        if (ctx->pc != 0x2C3568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3568u; }
        if (ctx->pc != 0x2C3568u) { return; }
    }
    ctx->pc = 0x2C3568u;
label_2c3568:
    // 0x2c3568: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x2c3568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2c356c:
    // 0x2c356c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2c3570:
    if (ctx->pc == 0x2C3570u) {
        ctx->pc = 0x2C3570u;
            // 0x2c3570: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x2C3574u;
        goto label_2c3574;
    }
    ctx->pc = 0x2C356Cu;
    {
        const bool branch_taken_0x2c356c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c356c) {
            ctx->pc = 0x2C3570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C356Cu;
            // 0x2c3570: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C359Cu;
            goto label_2c359c;
        }
    }
    ctx->pc = 0x2C3574u;
label_2c3574:
    // 0x2c3574: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c3578:
    if (ctx->pc == 0x2C3578u) {
        ctx->pc = 0x2C357Cu;
        goto label_2c357c;
    }
    ctx->pc = 0x2C3574u;
    {
        const bool branch_taken_0x2c3574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3574) {
            ctx->pc = 0x2C3598u;
            goto label_2c3598;
        }
    }
    ctx->pc = 0x2C357Cu;
label_2c357c:
    // 0x2c357c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c3580:
    if (ctx->pc == 0x2C3580u) {
        ctx->pc = 0x2C3584u;
        goto label_2c3584;
    }
    ctx->pc = 0x2C357Cu;
    {
        const bool branch_taken_0x2c357c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c357c) {
            ctx->pc = 0x2C3598u;
            goto label_2c3598;
        }
    }
    ctx->pc = 0x2C3584u;
label_2c3584:
    // 0x2c3584: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2c3584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2c3588:
    // 0x2c3588: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c358c:
    if (ctx->pc == 0x2C358Cu) {
        ctx->pc = 0x2C3590u;
        goto label_2c3590;
    }
    ctx->pc = 0x2C3588u;
    {
        const bool branch_taken_0x2c3588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3588) {
            ctx->pc = 0x2C3598u;
            goto label_2c3598;
        }
    }
    ctx->pc = 0x2C3590u;
label_2c3590:
    // 0x2c3590: 0xc0400a8  jal         func_1002A0
label_2c3594:
    if (ctx->pc == 0x2C3594u) {
        ctx->pc = 0x2C3598u;
        goto label_2c3598;
    }
    ctx->pc = 0x2C3590u;
    SET_GPR_U32(ctx, 31, 0x2C3598u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3598u; }
        if (ctx->pc != 0x2C3598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3598u; }
        if (ctx->pc != 0x2C3598u) { return; }
    }
    ctx->pc = 0x2C3598u;
label_2c3598:
    // 0x2c3598: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x2c3598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2c359c:
    // 0x2c359c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c35a0:
    if (ctx->pc == 0x2C35A0u) {
        ctx->pc = 0x2C35A4u;
        goto label_2c35a4;
    }
    ctx->pc = 0x2C359Cu;
    {
        const bool branch_taken_0x2c359c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c359c) {
            ctx->pc = 0x2C35B8u;
            goto label_2c35b8;
        }
    }
    ctx->pc = 0x2C35A4u;
label_2c35a4:
    // 0x2c35a4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2c35a8:
    // 0x2c35a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2c35ac:
    // 0x2c35ac: 0x24631168  addiu       $v1, $v1, 0x1168
    ctx->pc = 0x2c35acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4456));
label_2c35b0:
    // 0x2c35b0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2c35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2c35b4:
    // 0x2c35b4: 0xac400da8  sw          $zero, 0xDA8($v0)
    ctx->pc = 0x2c35b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3496), GPR_U32(ctx, 0));
label_2c35b8:
    // 0x2c35b8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_2c35bc:
    if (ctx->pc == 0x2C35BCu) {
        ctx->pc = 0x2C35BCu;
            // 0x2c35bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C35C0u;
        goto label_2c35c0;
    }
    ctx->pc = 0x2C35B8u;
    {
        const bool branch_taken_0x2c35b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35b8) {
            ctx->pc = 0x2C35BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35B8u;
            // 0x2c35bc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3614u;
            goto label_2c3614;
        }
    }
    ctx->pc = 0x2C35C0u;
label_2c35c0:
    // 0x2c35c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2c35c4:
    // 0x2c35c4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_2c35c8:
    // 0x2c35c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2c35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2c35cc:
    // 0x2c35cc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2c35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c35d0:
    // 0x2c35d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c35d4:
    if (ctx->pc == 0x2C35D4u) {
        ctx->pc = 0x2C35D4u;
            // 0x2c35d4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x2C35D8u;
        goto label_2c35d8;
    }
    ctx->pc = 0x2C35D0u;
    {
        const bool branch_taken_0x2c35d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35d0) {
            ctx->pc = 0x2C35D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35D0u;
            // 0x2c35d4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C35ECu;
            goto label_2c35ec;
        }
    }
    ctx->pc = 0x2C35D8u;
label_2c35d8:
    // 0x2c35d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c35d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c35dc:
    // 0x2c35dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c35dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c35e0:
    // 0x2c35e0: 0x320f809  jalr        $t9
label_2c35e4:
    if (ctx->pc == 0x2C35E4u) {
        ctx->pc = 0x2C35E4u;
            // 0x2c35e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C35E8u;
        goto label_2c35e8;
    }
    ctx->pc = 0x2C35E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C35E8u);
        ctx->pc = 0x2C35E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35E0u;
            // 0x2c35e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C35E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C35E8u; }
            if (ctx->pc != 0x2C35E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C35E8u;
label_2c35e8:
    // 0x2c35e8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x2c35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2c35ec:
    // 0x2c35ec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c35f0:
    if (ctx->pc == 0x2C35F0u) {
        ctx->pc = 0x2C35F0u;
            // 0x2c35f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C35F4u;
        goto label_2c35f4;
    }
    ctx->pc = 0x2C35ECu;
    {
        const bool branch_taken_0x2c35ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35ec) {
            ctx->pc = 0x2C35F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35ECu;
            // 0x2c35f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C3608u;
            goto label_2c3608;
        }
    }
    ctx->pc = 0x2C35F4u;
label_2c35f4:
    // 0x2c35f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c35f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c35f8:
    // 0x2c35f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2c35f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2c35fc:
    // 0x2c35fc: 0x320f809  jalr        $t9
label_2c3600:
    if (ctx->pc == 0x2C3600u) {
        ctx->pc = 0x2C3600u;
            // 0x2c3600: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C3604u;
        goto label_2c3604;
    }
    ctx->pc = 0x2C35FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C3604u);
        ctx->pc = 0x2C3600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C35FCu;
            // 0x2c3600: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C3604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C3604u; }
            if (ctx->pc != 0x2C3604u) { return; }
        }
        }
    }
    ctx->pc = 0x2C3604u;
label_2c3604:
    // 0x2c3604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3608:
    // 0x2c3608: 0xc075bf8  jal         func_1D6FE0
label_2c360c:
    if (ctx->pc == 0x2C360Cu) {
        ctx->pc = 0x2C360Cu;
            // 0x2c360c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3610u;
        goto label_2c3610;
    }
    ctx->pc = 0x2C3608u;
    SET_GPR_U32(ctx, 31, 0x2C3610u);
    ctx->pc = 0x2C360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3608u;
            // 0x2c360c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3610u; }
        if (ctx->pc != 0x2C3610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3610u; }
        if (ctx->pc != 0x2C3610u) { return; }
    }
    ctx->pc = 0x2C3610u;
label_2c3610:
    // 0x2c3610: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c3610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c3614:
    // 0x2c3614: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c3614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c3618:
    // 0x2c3618: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c361c:
    if (ctx->pc == 0x2C361Cu) {
        ctx->pc = 0x2C361Cu;
            // 0x2c361c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3620u;
        goto label_2c3620;
    }
    ctx->pc = 0x2C3618u;
    {
        const bool branch_taken_0x2c3618 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c3618) {
            ctx->pc = 0x2C361Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3618u;
            // 0x2c361c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C362Cu;
            goto label_2c362c;
        }
    }
    ctx->pc = 0x2C3620u;
label_2c3620:
    // 0x2c3620: 0xc0400a8  jal         func_1002A0
label_2c3624:
    if (ctx->pc == 0x2C3624u) {
        ctx->pc = 0x2C3624u;
            // 0x2c3624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C3628u;
        goto label_2c3628;
    }
    ctx->pc = 0x2C3620u;
    SET_GPR_U32(ctx, 31, 0x2C3628u);
    ctx->pc = 0x2C3624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3620u;
            // 0x2c3624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3628u; }
        if (ctx->pc != 0x2C3628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C3628u; }
        if (ctx->pc != 0x2C3628u) { return; }
    }
    ctx->pc = 0x2C3628u;
label_2c3628:
    // 0x2c3628: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c3628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c362c:
    // 0x2c362c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c362cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3630:
    // 0x2c3630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3634:
    // 0x2c3634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3638:
    // 0x2c3638: 0x3e00008  jr          $ra
label_2c363c:
    if (ctx->pc == 0x2C363Cu) {
        ctx->pc = 0x2C363Cu;
            // 0x2c363c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C3640u;
        goto label_fallthrough_0x2c3638;
    }
    ctx->pc = 0x2C3638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C363Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C3638u;
            // 0x2c363c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c3638:
    ctx->pc = 0x2C3640u;
}
