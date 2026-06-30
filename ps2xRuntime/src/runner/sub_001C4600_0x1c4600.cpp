#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4600
// Address: 0x1c4600 - 0x1c47c8
void sub_001C4600_0x1c4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4600_0x1c4600");
#endif

    switch (ctx->pc) {
        case 0x1c4670u: goto label_1c4670;
        case 0x1c4698u: goto label_1c4698;
        case 0x1c46b4u: goto label_1c46b4;
        case 0x1c46e4u: goto label_1c46e4;
        case 0x1c46fcu: goto label_1c46fc;
        case 0x1c4714u: goto label_1c4714;
        case 0x1c4724u: goto label_1c4724;
        case 0x1c4758u: goto label_1c4758;
        case 0x1c4760u: goto label_1c4760;
        case 0x1c476cu: goto label_1c476c;
        case 0x1c4778u: goto label_1c4778;
        case 0x1c479cu: goto label_1c479c;
        default: break;
    }

    ctx->pc = 0x1c4600u;

    // 0x1c4600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4604: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c4604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c4608: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c4608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c460c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c460cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c4610: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c4610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4614: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c4614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c4618: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c461c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C461Cu;
    {
        const bool branch_taken_0x1c461c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C461Cu;
            // 0x1c4620: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c461c) {
            ctx->pc = 0x1C462Cu;
            goto label_1c462c;
        }
    }
    ctx->pc = 0x1C4624u;
    // 0x1c4624: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4624u;
    {
        const bool branch_taken_0x1c4624 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4624) {
            ctx->pc = 0x1C4628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4624u;
            // 0x1c4628: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4648u;
            goto label_1c4648;
        }
    }
    ctx->pc = 0x1C462Cu;
label_1c462c:
    // 0x1c462c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c462cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4630: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4634: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4638: 0x24c6bdc0  addiu       $a2, $a2, -0x4240
    ctx->pc = 0x1c4638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950336));
    // 0x1c463c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C463Cu;
    {
        const bool branch_taken_0x1c463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C463Cu;
            // 0x1c4640: 0x240507f4  addiu       $a1, $zero, 0x7F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c463c) {
            ctx->pc = 0x1C4664u;
            goto label_1c4664;
        }
    }
    ctx->pc = 0x1C4644u;
    // 0x1c4644: 0x0  nop
    ctx->pc = 0x1c4644u;
    // NOP
label_1c4648:
    // 0x1c4648: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4648u;
    {
        const bool branch_taken_0x1c4648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C464Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4648u;
            // 0x1c464c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4648) {
            ctx->pc = 0x1C4678u;
            goto label_1c4678;
        }
    }
    ctx->pc = 0x1C4650u;
    // 0x1c4650: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4654: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4654u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4658: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c465c: 0x24c6bdc0  addiu       $a2, $a2, -0x4240
    ctx->pc = 0x1c465cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950336));
    // 0x1c4660: 0x240507f7  addiu       $a1, $zero, 0x7F7
    ctx->pc = 0x1c4660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2039));
label_1c4664:
    // 0x1c4664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4668: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4668u;
    SET_GPR_U32(ctx, 31, 0x1C4670u);
    ctx->pc = 0x1C466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4668u;
            // 0x1c466c: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4670u; }
        if (ctx->pc != 0x1C4670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4670u; }
        if (ctx->pc != 0x1C4670u) { return; }
    }
    ctx->pc = 0x1C4670u;
label_1c4670:
    // 0x1c4670: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1C4670u;
    {
        const bool branch_taken_0x1c4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4670u;
            // 0x1c4674: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4670) {
            ctx->pc = 0x1C47B0u;
            goto label_1c47b0;
        }
    }
    ctx->pc = 0x1C4678u;
label_1c4678:
    // 0x1c4678: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c4678u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c467c: 0x2453a4d8  addiu       $s3, $v0, -0x5B28
    ctx->pc = 0x1c467cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943960));
    // 0x1c4680: 0x113ac0  sll         $a3, $s1, 11
    ctx->pc = 0x1c4680u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1c4684: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c4688: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c4688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c468c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4690: 0xc0702d0  jal         func_1C0B40
    ctx->pc = 0x1C4690u;
    SET_GPR_U32(ctx, 31, 0x1C4698u);
    ctx->pc = 0x1C4694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4690u;
            // 0x1c4694: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B40u;
    if (runtime->hasFunction(0x1C0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1C0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4698u; }
        if (ctx->pc != 0x1C4698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0B40_0x1c0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4698u; }
        if (ctx->pc != 0x1C4698u) { return; }
    }
    ctx->pc = 0x1C4698u;
label_1c4698:
    // 0x1c4698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c469c: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C469Cu;
    {
        const bool branch_taken_0x1c469c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C46A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C469Cu;
            // 0x1c46a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c469c) {
            ctx->pc = 0x1C46F0u;
            goto label_1c46f0;
        }
    }
    ctx->pc = 0x1C46A4u;
    // 0x1c46a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c46a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c46ac: 0xc071442  jal         func_1C5108
    ctx->pc = 0x1C46ACu;
    SET_GPR_U32(ctx, 31, 0x1C46B4u);
    ctx->pc = 0x1C46B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46ACu;
            // 0x1c46b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (runtime->hasFunction(0x1C5108u)) {
        auto targetFn = runtime->lookupFunction(0x1C5108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B4u; }
        if (ctx->pc != 0x1C46B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5108_0x1c5108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46B4u; }
        if (ctx->pc != 0x1C46B4u) { return; }
    }
    ctx->pc = 0x1C46B4u;
label_1c46b4:
    // 0x1c46b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c46b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c46bc: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C46BCu;
    {
        const bool branch_taken_0x1c46bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c46bc) {
            ctx->pc = 0x1C46C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46BCu;
            // 0x1c46c0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C46C4u;
    // 0x1c46c4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c46c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c46c8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c46c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c46cc: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c46ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c46d0: 0x24c6bdc0  addiu       $a2, $a2, -0x4240
    ctx->pc = 0x1c46d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950336));
    // 0x1c46d4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1c46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1c46d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c46d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46dc: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C46DCu;
    SET_GPR_U32(ctx, 31, 0x1C46E4u);
    ctx->pc = 0x1C46E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46DCu;
            // 0x1c46e0: 0x2408ff38  addiu       $t0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E4u; }
        if (ctx->pc != 0x1C46E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46E4u; }
        if (ctx->pc != 0x1C46E4u) { return; }
    }
    ctx->pc = 0x1C46E4u;
label_1c46e4:
    // 0x1c46e4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C46E4u;
    {
        const bool branch_taken_0x1c46e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C46E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46E4u;
            // 0x1c46e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46e4) {
            ctx->pc = 0x1C47B0u;
            goto label_1c47b0;
        }
    }
    ctx->pc = 0x1C46ECu;
    // 0x1c46ec: 0x0  nop
    ctx->pc = 0x1c46ecu;
    // NOP
label_1c46f0:
    // 0x1c46f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c46f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c46f4: 0xc0703b6  jal         func_1C0ED8
    ctx->pc = 0x1C46F4u;
    SET_GPR_U32(ctx, 31, 0x1C46FCu);
    ctx->pc = 0x1C46F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C46F4u;
            // 0x1c46f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0ED8u;
    if (runtime->hasFunction(0x1C0ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1C0ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46FCu; }
        if (ctx->pc != 0x1C46FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0ED8_0x1c0ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C46FCu; }
        if (ctx->pc != 0x1C46FCu) { return; }
    }
    ctx->pc = 0x1C46FCu;
label_1c46fc:
    // 0x1c46fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c46fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4700: 0x6210013  bgez        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C4700u;
    {
        const bool branch_taken_0x1c4700 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1c4700) {
            ctx->pc = 0x1C4750u;
            goto label_1c4750;
        }
    }
    ctx->pc = 0x1C4708u;
    // 0x1c4708: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c470c: 0xc070322  jal         func_1C0C88
    ctx->pc = 0x1C470Cu;
    SET_GPR_U32(ctx, 31, 0x1C4714u);
    ctx->pc = 0x1C4710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C470Cu;
            // 0x1c4710: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C88u;
    if (runtime->hasFunction(0x1C0C88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4714u; }
        if (ctx->pc != 0x1C4714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0C88_0x1c0c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4714u; }
        if (ctx->pc != 0x1C4714u) { return; }
    }
    ctx->pc = 0x1C4714u;
label_1c4714:
    // 0x1c4714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4718: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c4718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c471c: 0xc071442  jal         func_1C5108
    ctx->pc = 0x1C471Cu;
    SET_GPR_U32(ctx, 31, 0x1C4724u);
    ctx->pc = 0x1C4720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C471Cu;
            // 0x1c4720: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (runtime->hasFunction(0x1C5108u)) {
        auto targetFn = runtime->lookupFunction(0x1C5108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4724u; }
        if (ctx->pc != 0x1C4724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5108_0x1c5108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4724u; }
        if (ctx->pc != 0x1C4724u) { return; }
    }
    ctx->pc = 0x1C4724u;
label_1c4724:
    // 0x1c4724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4728: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c472c: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C472Cu;
    {
        const bool branch_taken_0x1c472c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C472Cu;
            // 0x1c4730: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c472c) {
            ctx->pc = 0x1C47ACu;
            goto label_1c47ac;
        }
    }
    ctx->pc = 0x1C4734u;
    // 0x1c4734: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4738: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c473c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4740: 0x24c6bdd0  addiu       $a2, $a2, -0x4230
    ctx->pc = 0x1c4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950352));
    // 0x1c4744: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1c4744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4748: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4748u;
    {
        const bool branch_taken_0x1c4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4748u;
            // 0x1c474c: 0x24050810  addiu       $a1, $zero, 0x810 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4748) {
            ctx->pc = 0x1C4794u;
            goto label_1c4794;
        }
    }
    ctx->pc = 0x1C4750u;
label_1c4750:
    // 0x1c4750: 0xc0711f2  jal         func_1C47C8
    ctx->pc = 0x1C4750u;
    SET_GPR_U32(ctx, 31, 0x1C4758u);
    ctx->pc = 0x1C4754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4750u;
            // 0x1c4754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47C8u;
    if (runtime->hasFunction(0x1C47C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4758u; }
        if (ctx->pc != 0x1C4758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47C8_0x1c47c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4758u; }
        if (ctx->pc != 0x1C4758u) { return; }
    }
    ctx->pc = 0x1C4758u;
label_1c4758:
    // 0x1c4758: 0xc070260  jal         func_1C0980
    ctx->pc = 0x1C4758u;
    SET_GPR_U32(ctx, 31, 0x1C4760u);
    ctx->pc = 0x1C475Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4758u;
            // 0x1c475c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0980u;
    if (runtime->hasFunction(0x1C0980u)) {
        auto targetFn = runtime->lookupFunction(0x1C0980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4760u; }
        if (ctx->pc != 0x1C4760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0980_0x1c0980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4760u; }
        if (ctx->pc != 0x1C4760u) { return; }
    }
    ctx->pc = 0x1C4760u;
label_1c4760:
    // 0x1c4760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4764: 0xc0711f8  jal         func_1C47E0
    ctx->pc = 0x1C4764u;
    SET_GPR_U32(ctx, 31, 0x1C476Cu);
    ctx->pc = 0x1C4768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4764u;
            // 0x1c4768: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47E0u;
    if (runtime->hasFunction(0x1C47E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C47E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C476Cu; }
        if (ctx->pc != 0x1C476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47E0_0x1c47e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C476Cu; }
        if (ctx->pc != 0x1C476Cu) { return; }
    }
    ctx->pc = 0x1C476Cu;
label_1c476c:
    // 0x1c476c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c4770: 0xc070322  jal         func_1C0C88
    ctx->pc = 0x1C4770u;
    SET_GPR_U32(ctx, 31, 0x1C4778u);
    ctx->pc = 0x1C4774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4770u;
            // 0x1c4774: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0C88u;
    if (runtime->hasFunction(0x1C0C88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4778u; }
        if (ctx->pc != 0x1C4778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0C88_0x1c0c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4778u; }
        if (ctx->pc != 0x1C4778u) { return; }
    }
    ctx->pc = 0x1C4778u;
label_1c4778:
    // 0x1c4778: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4778u;
    {
        const bool branch_taken_0x1c4778 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4778u;
            // 0x1c477c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4778) {
            ctx->pc = 0x1C47A8u;
            goto label_1c47a8;
        }
    }
    ctx->pc = 0x1C4780u;
    // 0x1c4780: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4784: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4788: 0x24c6bde0  addiu       $a2, $a2, -0x4220
    ctx->pc = 0x1c4788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950368));
    // 0x1c478c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1c478cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4790: 0x24050823  addiu       $a1, $zero, 0x823
    ctx->pc = 0x1c4790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2083));
label_1c4794:
    // 0x1c4794: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4794u;
    SET_GPR_U32(ctx, 31, 0x1C479Cu);
    ctx->pc = 0x1C4798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4794u;
            // 0x1c4798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C479Cu; }
        if (ctx->pc != 0x1C479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C479Cu; }
        if (ctx->pc != 0x1C479Cu) { return; }
    }
    ctx->pc = 0x1C479Cu;
label_1c479c:
    // 0x1c479c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C479Cu;
    {
        const bool branch_taken_0x1c479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C479Cu;
            // 0x1c47a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c479c) {
            ctx->pc = 0x1C47B0u;
            goto label_1c47b0;
        }
    }
    ctx->pc = 0x1C47A4u;
    // 0x1c47a4: 0x0  nop
    ctx->pc = 0x1c47a4u;
    // NOP
label_1c47a8:
    // 0x1c47a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c47a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c47ac:
    // 0x1c47ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c47acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c47b0:
    // 0x1c47b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c47b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c47b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c47b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c47b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c47b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c47bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c47bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c47c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C47C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C47C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C47C0u;
            // 0x1c47c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C47C8u;
}
