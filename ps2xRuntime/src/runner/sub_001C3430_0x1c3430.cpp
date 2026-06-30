#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3430
// Address: 0x1c3430 - 0x1c37d8
void sub_001C3430_0x1c3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3430_0x1c3430");
#endif

    switch (ctx->pc) {
        case 0x1c3494u: goto label_1c3494;
        case 0x1c34c8u: goto label_1c34c8;
        case 0x1c3510u: goto label_1c3510;
        case 0x1c3520u: goto label_1c3520;
        case 0x1c3558u: goto label_1c3558;
        case 0x1c35b8u: goto label_1c35b8;
        case 0x1c35d8u: goto label_1c35d8;
        case 0x1c35f0u: goto label_1c35f0;
        case 0x1c3610u: goto label_1c3610;
        case 0x1c3654u: goto label_1c3654;
        case 0x1c36d8u: goto label_1c36d8;
        case 0x1c3730u: goto label_1c3730;
        case 0x1c374cu: goto label_1c374c;
        case 0x1c376cu: goto label_1c376c;
        case 0x1c37b4u: goto label_1c37b4;
        default: break;
    }

    ctx->pc = 0x1c3430u;

    // 0x1c3430: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c3430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c3434: 0x8c43a4d8  lw          $v1, -0x5B28($v0)
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c3438: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1c3438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1c343c: 0x38440000  xori        $a0, $v0, 0x0
    ctx->pc = 0x1c343cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c3440: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x1c3440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x1c3444: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3444u;
            // 0x1c3448: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C344Cu;
    // 0x1c344c: 0x0  nop
    ctx->pc = 0x1c344cu;
    // NOP
    // 0x1c3450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c3454: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c3454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3458: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c3458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c345c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1c345cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c3460: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c3460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c3464: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c3464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3468: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c3468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c346c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c346cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3474: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1c3474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c3478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c347c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c3480: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c3480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c3484: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1c3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1c3488: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c3488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c348c: 0xc070810  jal         func_1C2040
    ctx->pc = 0x1C348Cu;
    SET_GPR_U32(ctx, 31, 0x1C3494u);
    ctx->pc = 0x1C3490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C348Cu;
            // 0x1c3490: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2040u;
    if (runtime->hasFunction(0x1C2040u)) {
        auto targetFn = runtime->lookupFunction(0x1C2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3494u; }
        if (ctx->pc != 0x1C3494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2040_0x1c2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3494u; }
        if (ctx->pc != 0x1C3494u) { return; }
    }
    ctx->pc = 0x1C3494u;
label_1c3494:
    // 0x1c3494: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3494u;
    {
        const bool branch_taken_0x1c3494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3494) {
            ctx->pc = 0x1C3498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3494u;
            // 0x1c3498: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C34C0u;
            goto label_1c34c0;
        }
    }
    ctx->pc = 0x1C349Cu;
    // 0x1c349c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c349cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c34a0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c34a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c34a4: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c34a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c34a8: 0x24c6bc80  addiu       $a2, $a2, -0x4380
    ctx->pc = 0x1c34a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950016));
    // 0x1c34ac: 0x240504e7  addiu       $a1, $zero, 0x4E7
    ctx->pc = 0x1c34acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1255));
    // 0x1c34b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c34b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34b4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1C34B4u;
    {
        const bool branch_taken_0x1c34b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34B4u;
            // 0x1c34b8: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34b4) {
            ctx->pc = 0x1C364Cu;
            goto label_1c364c;
        }
    }
    ctx->pc = 0x1C34BCu;
    // 0x1c34bc: 0x0  nop
    ctx->pc = 0x1c34bcu;
    // NOP
label_1c34c0:
    // 0x1c34c0: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C34C0u;
    SET_GPR_U32(ctx, 31, 0x1C34C8u);
    ctx->pc = 0x1C34C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34C0u;
            // 0x1c34c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C8u; }
        if (ctx->pc != 0x1C34C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C34C8u; }
        if (ctx->pc != 0x1C34C8u) { return; }
    }
    ctx->pc = 0x1C34C8u;
label_1c34c8:
    // 0x1c34c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c34c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34cc: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C34CCu;
    {
        const bool branch_taken_0x1c34cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34CCu;
            // 0x1c34d0: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34cc) {
            ctx->pc = 0x1C34F0u;
            goto label_1c34f0;
        }
    }
    ctx->pc = 0x1C34D4u;
    // 0x1c34d4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c34d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c34d8: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c34dc: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c34dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c34e0: 0x240504ed  addiu       $a1, $zero, 0x4ED
    ctx->pc = 0x1c34e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1261));
    // 0x1c34e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c34e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34e8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1C34E8u;
    {
        const bool branch_taken_0x1c34e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C34ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34E8u;
            // 0x1c34ec: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34e8) {
            ctx->pc = 0x1C364Cu;
            goto label_1c364c;
        }
    }
    ctx->pc = 0x1C34F0u;
label_1c34f0:
    // 0x1c34f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C34F0u;
    {
        const bool branch_taken_0x1c34f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C34F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34F0u;
            // 0x1c34f4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34f0) {
            ctx->pc = 0x1C3500u;
            goto label_1c3500;
        }
    }
    ctx->pc = 0x1C34F8u;
    // 0x1c34f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C34F8u;
    {
        const bool branch_taken_0x1c34f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C34F8u;
            // 0x1c34fc: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34f8) {
            ctx->pc = 0x1C3548u;
            goto label_1c3548;
        }
    }
    ctx->pc = 0x1C3500u;
label_1c3500:
    // 0x1c3500: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1c3500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1c3504: 0x2484bc90  addiu       $a0, $a0, -0x4370
    ctx->pc = 0x1c3504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950032));
    // 0x1c3508: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C3508u;
    SET_GPR_U32(ctx, 31, 0x1C3510u);
    ctx->pc = 0x1C350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3508u;
            // 0x1c350c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3510u; }
        if (ctx->pc != 0x1C3510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3510u; }
        if (ctx->pc != 0x1C3510u) { return; }
    }
    ctx->pc = 0x1C3510u;
label_1c3510:
    // 0x1c3510: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3510u;
    {
        const bool branch_taken_0x1c3510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3510u;
            // 0x1c3514: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3510) {
            ctx->pc = 0x1C3548u;
            goto label_1c3548;
        }
    }
    ctx->pc = 0x1C3518u;
    // 0x1c3518: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C3518u;
    SET_GPR_U32(ctx, 31, 0x1C3520u);
    ctx->pc = 0x1C351Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3518u;
            // 0x1c351c: 0x26640016  addiu       $a0, $s3, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3520u; }
        if (ctx->pc != 0x1C3520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3520u; }
        if (ctx->pc != 0x1C3520u) { return; }
    }
    ctx->pc = 0x1C3520u;
label_1c3520:
    // 0x1c3520: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3520u;
    {
        const bool branch_taken_0x1c3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3520u;
            // 0x1c3524: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3520) {
            ctx->pc = 0x1C3548u;
            goto label_1c3548;
        }
    }
    ctx->pc = 0x1C3528u;
    // 0x1c3528: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c352c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3530: 0x24c6bca0  addiu       $a2, $a2, -0x4360
    ctx->pc = 0x1c3530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950048));
    // 0x1c3534: 0x240504fc  addiu       $a1, $zero, 0x4FC
    ctx->pc = 0x1c3534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1276));
    // 0x1c3538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c353c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C353Cu;
    {
        const bool branch_taken_0x1c353c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C353Cu;
            // 0x1c3540: 0x2408ff94  addiu       $t0, $zero, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c353c) {
            ctx->pc = 0x1C364Cu;
            goto label_1c364c;
        }
    }
    ctx->pc = 0x1C3544u;
    // 0x1c3544: 0x0  nop
    ctx->pc = 0x1c3544u;
    // NOP
label_1c3548:
    // 0x1c3548: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c354c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3550: 0xc071d9e  jal         func_1C7678
    ctx->pc = 0x1C3550u;
    SET_GPR_U32(ctx, 31, 0x1C3558u);
    ctx->pc = 0x1C3554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3550u;
            // 0x1c3554: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7678u;
    if (runtime->hasFunction(0x1C7678u)) {
        auto targetFn = runtime->lookupFunction(0x1C7678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3558u; }
        if (ctx->pc != 0x1C3558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7678_0x1c7678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3558u; }
        if (ctx->pc != 0x1C3558u) { return; }
    }
    ctx->pc = 0x1C3558u;
label_1c3558:
    // 0x1c3558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c3558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c355c: 0x5640000a  bnel        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C355Cu;
    {
        const bool branch_taken_0x1c355c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c355c) {
            ctx->pc = 0x1C3560u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C355Cu;
            // 0x1c3560: 0x3c060060  lui         $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3588u;
            goto label_1c3588;
        }
    }
    ctx->pc = 0x1C3564u;
    // 0x1c3564: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3568: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c356c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c356cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3570: 0x24c6bca8  addiu       $a2, $a2, -0x4358
    ctx->pc = 0x1c3570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950056));
    // 0x1c3574: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c3574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3578: 0x24050506  addiu       $a1, $zero, 0x506
    ctx->pc = 0x1c3578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x1c357c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C357Cu;
    {
        const bool branch_taken_0x1c357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C357Cu;
            // 0x1c3580: 0x2408ff95  addiu       $t0, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c357c) {
            ctx->pc = 0x1C364Cu;
            goto label_1c364c;
        }
    }
    ctx->pc = 0x1C3584u;
    // 0x1c3584: 0x0  nop
    ctx->pc = 0x1c3584u;
    // NOP
label_1c3588:
    // 0x1c3588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c358c: 0x8cc3a4d8  lw          $v1, -0x5B28($a2)
    ctx->pc = 0x1c358cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943960)));
    // 0x1c3590: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c3590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c3594: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3598: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C3598u;
    {
        const bool branch_taken_0x1c3598 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C359Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3598u;
            // 0x1c359c: 0x8c710024  lw          $s1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3598) {
            ctx->pc = 0x1C3630u;
            goto label_1c3630;
        }
    }
    ctx->pc = 0x1C35A0u;
    // 0x1c35a0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c35a4: 0x3c150064  lui         $s5, 0x64
    ctx->pc = 0x1c35a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)100 << 16));
    // 0x1c35a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c35ac: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x1c35acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
    // 0x1c35b0: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1c35b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c35b4: 0x0  nop
    ctx->pc = 0x1c35b4u;
    // NOP
label_1c35b8:
    // 0x1c35b8: 0x86220034  lh          $v0, 0x34($s1)
    ctx->pc = 0x1c35b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1c35bc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C35BCu;
    {
        const bool branch_taken_0x1c35bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c35bc) {
            ctx->pc = 0x1C35C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35BCu;
            // 0x1c35c0: 0x8cc3a4d8  lw          $v1, -0x5B28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943960)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3618u;
            goto label_1c3618;
        }
    }
    ctx->pc = 0x1C35C4u;
    // 0x1c35c4: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1c35c8: 0x2610ffe8  addiu       $s0, $s0, -0x18
    ctx->pc = 0x1c35c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1c35cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c35d0: 0xc071326  jal         func_1C4C98
    ctx->pc = 0x1C35D0u;
    SET_GPR_U32(ctx, 31, 0x1C35D8u);
    ctx->pc = 0x1C35D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35D0u;
            // 0x1c35d4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C98u;
    if (runtime->hasFunction(0x1C4C98u)) {
        auto targetFn = runtime->lookupFunction(0x1C4C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35D8u; }
        if (ctx->pc != 0x1C35D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4C98_0x1c4c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35D8u; }
        if (ctx->pc != 0x1C35D8u) { return; }
    }
    ctx->pc = 0x1C35D8u;
label_1c35d8:
    // 0x1c35d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c35d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35dc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1c35dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c35e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c35e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c35e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35e8: 0xc0702ba  jal         func_1C0AE8
    ctx->pc = 0x1C35E8u;
    SET_GPR_U32(ctx, 31, 0x1C35F0u);
    ctx->pc = 0x1C35ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35E8u;
            // 0x1c35ec: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AE8u;
    if (runtime->hasFunction(0x1C0AE8u)) {
        auto targetFn = runtime->lookupFunction(0x1C0AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35F0u; }
        if (ctx->pc != 0x1C35F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0AE8_0x1c0ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C35F0u; }
        if (ctx->pc != 0x1C35F0u) { return; }
    }
    ctx->pc = 0x1C35F0u;
label_1c35f0:
    // 0x1c35f0: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C35F0u;
    {
        const bool branch_taken_0x1c35f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C35F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C35F0u;
            // 0x1c35f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35f0) {
            ctx->pc = 0x1C3658u;
            goto label_1c3658;
        }
    }
    ctx->pc = 0x1C35F8u;
    // 0x1c35f8: 0x26a4bb88  addiu       $a0, $s5, -0x4478
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949768));
    // 0x1c35fc: 0x2686bcc0  addiu       $a2, $s4, -0x4340
    ctx->pc = 0x1c35fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950080));
    // 0x1c3600: 0x2405051d  addiu       $a1, $zero, 0x51D
    ctx->pc = 0x1c3600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x1c3604: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3608: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3608u;
    SET_GPR_U32(ctx, 31, 0x1C3610u);
    ctx->pc = 0x1C360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3608u;
            // 0x1c360c: 0x2408ff9a  addiu       $t0, $zero, -0x66 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3610u; }
        if (ctx->pc != 0x1C3610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3610u; }
        if (ctx->pc != 0x1C3610u) { return; }
    }
    ctx->pc = 0x1C3610u;
label_1c3610:
    // 0x1c3610: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3610u;
    {
        const bool branch_taken_0x1c3610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3610u;
            // 0x1c3614: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3610) {
            ctx->pc = 0x1C3658u;
            goto label_1c3658;
        }
    }
    ctx->pc = 0x1C3618u;
label_1c3618:
    // 0x1c3618: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c361c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c3620: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3624: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c3624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3628: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1C3628u;
    {
        const bool branch_taken_0x1c3628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3628u;
            // 0x1c362c: 0x2631003c  addiu       $s1, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3628) {
            ctx->pc = 0x1C35B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c35b8;
        }
    }
    ctx->pc = 0x1C3630u;
label_1c3630:
    // 0x1c3630: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3634: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3638: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c363c: 0x24c6bcd0  addiu       $a2, $a2, -0x4330
    ctx->pc = 0x1c363cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950096));
    // 0x1c3640: 0x24050524  addiu       $a1, $zero, 0x524
    ctx->pc = 0x1c3640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
    // 0x1c3644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3648: 0x2408ff9a  addiu       $t0, $zero, -0x66
    ctx->pc = 0x1c3648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
label_1c364c:
    // 0x1c364c: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C364Cu;
    SET_GPR_U32(ctx, 31, 0x1C3654u);
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3654u; }
        if (ctx->pc != 0x1C3654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3654u; }
        if (ctx->pc != 0x1C3654u) { return; }
    }
    ctx->pc = 0x1C3654u;
label_1c3654:
    // 0x1c3654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3658:
    // 0x1c3658: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c3658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c365c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c365cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3660: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c3660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3664: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c3664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c3668: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c3668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c366c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1c366cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c3670: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c3670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3674: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3674u;
            // 0x1c3678: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C367Cu;
    // 0x1c367c: 0x0  nop
    ctx->pc = 0x1c367cu;
    // NOP
    // 0x1c3680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3688: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c3688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c368c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3698: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c369c: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C369Cu;
    {
        const bool branch_taken_0x1c369c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1C36A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C369Cu;
            // 0x1c36a0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c369c) {
            ctx->pc = 0x1C36ACu;
            goto label_1c36ac;
        }
    }
    ctx->pc = 0x1C36A4u;
    // 0x1c36a4: 0x641000a  bgez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1C36A4u;
    {
        const bool branch_taken_0x1c36a4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1c36a4) {
            ctx->pc = 0x1C36D0u;
            goto label_1c36d0;
        }
    }
    ctx->pc = 0x1C36ACu;
label_1c36ac:
    // 0x1c36ac: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c36acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c36b0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c36b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c36b4: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c36b8: 0x24c6bce0  addiu       $a2, $a2, -0x4320
    ctx->pc = 0x1c36b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950112));
    // 0x1c36bc: 0x24050533  addiu       $a1, $zero, 0x533
    ctx->pc = 0x1c36bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1331));
    // 0x1c36c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c36c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36c4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C36C4u;
    {
        const bool branch_taken_0x1c36c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36C4u;
            // 0x1c36c8: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36c4) {
            ctx->pc = 0x1C37ACu;
            goto label_1c37ac;
        }
    }
    ctx->pc = 0x1C36CCu;
    // 0x1c36cc: 0x0  nop
    ctx->pc = 0x1c36ccu;
    // NOP
label_1c36d0:
    // 0x1c36d0: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C36D0u;
    SET_GPR_U32(ctx, 31, 0x1C36D8u);
    ctx->pc = 0x1C36D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36D0u;
            // 0x1c36d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36D8u; }
        if (ctx->pc != 0x1C36D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36D8u; }
        if (ctx->pc != 0x1C36D8u) { return; }
    }
    ctx->pc = 0x1C36D8u;
label_1c36d8:
    // 0x1c36d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c36d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36dc: 0x5500000a  bnel        $t0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C36DCu;
    {
        const bool branch_taken_0x1c36dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c36dc) {
            ctx->pc = 0x1C36E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36DCu;
            // 0x1c36e0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3708u;
            goto label_1c3708;
        }
    }
    ctx->pc = 0x1C36E4u;
    // 0x1c36e4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c36e8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c36e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c36ec: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c36f0: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c36f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c36f4: 0x2405053a  addiu       $a1, $zero, 0x53A
    ctx->pc = 0x1c36f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1338));
    // 0x1c36f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c36f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36fc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C36FCu;
    {
        const bool branch_taken_0x1c36fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36FCu;
            // 0x1c3700: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36fc) {
            ctx->pc = 0x1C37ACu;
            goto label_1c37ac;
        }
    }
    ctx->pc = 0x1C3704u;
    // 0x1c3704: 0x0  nop
    ctx->pc = 0x1c3704u;
    // NOP
label_1c3708:
    // 0x1c3708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c370c: 0x8ca3a4d8  lw          $v1, -0x5B28($a1)
    ctx->pc = 0x1c370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943960)));
    // 0x1c3710: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c3714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3718: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C3718u;
    {
        const bool branch_taken_0x1c3718 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3718u;
            // 0x1c371c: 0x8c700024  lw          $s0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3718) {
            ctx->pc = 0x1C3790u;
            goto label_1c3790;
        }
    }
    ctx->pc = 0x1C3720u;
    // 0x1c3720: 0x113ac0  sll         $a3, $s1, 11
    ctx->pc = 0x1c3720u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1c3724: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x1c3724u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
    // 0x1c3728: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x1c3728u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
    // 0x1c372c: 0x0  nop
    ctx->pc = 0x1c372cu;
    // NOP
label_1c3730:
    // 0x1c3730: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c3730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c3734: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C3734u;
    {
        const bool branch_taken_0x1c3734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3734) {
            ctx->pc = 0x1C3738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3734u;
            // 0x1c3738: 0x8ca3a4d8  lw          $v1, -0x5B28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943960)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3778u;
            goto label_1c3778;
        }
    }
    ctx->pc = 0x1C373Cu;
    // 0x1c373c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c373cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3744: 0xc0702ba  jal         func_1C0AE8
    ctx->pc = 0x1C3744u;
    SET_GPR_U32(ctx, 31, 0x1C374Cu);
    ctx->pc = 0x1C3748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3744u;
            // 0x1c3748: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AE8u;
    if (runtime->hasFunction(0x1C0AE8u)) {
        auto targetFn = runtime->lookupFunction(0x1C0AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C374Cu; }
        if (ctx->pc != 0x1C374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0AE8_0x1c0ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C374Cu; }
        if (ctx->pc != 0x1C374Cu) { return; }
    }
    ctx->pc = 0x1C374Cu;
label_1c374c:
    // 0x1c374c: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C374Cu;
    {
        const bool branch_taken_0x1c374c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C374Cu;
            // 0x1c3750: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c374c) {
            ctx->pc = 0x1C37B8u;
            goto label_1c37b8;
        }
    }
    ctx->pc = 0x1C3754u;
    // 0x1c3754: 0x2624bb88  addiu       $a0, $s1, -0x4478
    ctx->pc = 0x1c3754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949768));
    // 0x1c3758: 0x2666bcc0  addiu       $a2, $s3, -0x4340
    ctx->pc = 0x1c3758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950080));
    // 0x1c375c: 0x24050545  addiu       $a1, $zero, 0x545
    ctx->pc = 0x1c375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1349));
    // 0x1c3760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3764: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3764u;
    SET_GPR_U32(ctx, 31, 0x1C376Cu);
    ctx->pc = 0x1C3768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3764u;
            // 0x1c3768: 0x2408ff9a  addiu       $t0, $zero, -0x66 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C376Cu; }
        if (ctx->pc != 0x1C376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C376Cu; }
        if (ctx->pc != 0x1C376Cu) { return; }
    }
    ctx->pc = 0x1C376Cu;
label_1c376c:
    // 0x1c376c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C376Cu;
    {
        const bool branch_taken_0x1c376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C376Cu;
            // 0x1c3770: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c376c) {
            ctx->pc = 0x1C37B8u;
            goto label_1c37b8;
        }
    }
    ctx->pc = 0x1C3774u;
    // 0x1c3774: 0x0  nop
    ctx->pc = 0x1c3774u;
    // NOP
label_1c3778:
    // 0x1c3778: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c3778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c377c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c3780: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c3784: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c3784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c3788: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C3788u;
    {
        const bool branch_taken_0x1c3788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3788u;
            // 0x1c378c: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3788) {
            ctx->pc = 0x1C3730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3730;
        }
    }
    ctx->pc = 0x1C3790u;
label_1c3790:
    // 0x1c3790: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3794: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3798: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c379c: 0x24c6bce0  addiu       $a2, $a2, -0x4320
    ctx->pc = 0x1c379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950112));
    // 0x1c37a0: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x1c37a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x1c37a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c37a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c37a8: 0x2408ff9a  addiu       $t0, $zero, -0x66
    ctx->pc = 0x1c37a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
label_1c37ac:
    // 0x1c37ac: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C37ACu;
    SET_GPR_U32(ctx, 31, 0x1C37B4u);
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37B4u; }
        if (ctx->pc != 0x1C37B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37B4u; }
        if (ctx->pc != 0x1C37B4u) { return; }
    }
    ctx->pc = 0x1C37B4u;
label_1c37b4:
    // 0x1c37b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c37b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c37b8:
    // 0x1c37b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c37b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c37bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c37bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c37c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c37c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c37c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c37c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c37c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c37c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c37cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C37CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C37D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C37CCu;
            // 0x1c37d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C37D4u;
    // 0x1c37d4: 0x0  nop
    ctx->pc = 0x1c37d4u;
    // NOP
}
