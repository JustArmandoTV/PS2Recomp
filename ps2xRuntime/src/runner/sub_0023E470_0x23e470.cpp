#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023E470
// Address: 0x23e470 - 0x23e500
void sub_0023E470_0x23e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E470_0x23e470");
#endif

    switch (ctx->pc) {
        case 0x23e470u: goto label_23e470;
        case 0x23e474u: goto label_23e474;
        case 0x23e478u: goto label_23e478;
        case 0x23e47cu: goto label_23e47c;
        case 0x23e480u: goto label_23e480;
        case 0x23e484u: goto label_23e484;
        case 0x23e488u: goto label_23e488;
        case 0x23e48cu: goto label_23e48c;
        case 0x23e490u: goto label_23e490;
        case 0x23e494u: goto label_23e494;
        case 0x23e498u: goto label_23e498;
        case 0x23e49cu: goto label_23e49c;
        case 0x23e4a0u: goto label_23e4a0;
        case 0x23e4a4u: goto label_23e4a4;
        case 0x23e4a8u: goto label_23e4a8;
        case 0x23e4acu: goto label_23e4ac;
        case 0x23e4b0u: goto label_23e4b0;
        case 0x23e4b4u: goto label_23e4b4;
        case 0x23e4b8u: goto label_23e4b8;
        case 0x23e4bcu: goto label_23e4bc;
        case 0x23e4c0u: goto label_23e4c0;
        case 0x23e4c4u: goto label_23e4c4;
        case 0x23e4c8u: goto label_23e4c8;
        case 0x23e4ccu: goto label_23e4cc;
        case 0x23e4d0u: goto label_23e4d0;
        case 0x23e4d4u: goto label_23e4d4;
        case 0x23e4d8u: goto label_23e4d8;
        case 0x23e4dcu: goto label_23e4dc;
        case 0x23e4e0u: goto label_23e4e0;
        case 0x23e4e4u: goto label_23e4e4;
        case 0x23e4e8u: goto label_23e4e8;
        case 0x23e4ecu: goto label_23e4ec;
        case 0x23e4f0u: goto label_23e4f0;
        case 0x23e4f4u: goto label_23e4f4;
        case 0x23e4f8u: goto label_23e4f8;
        case 0x23e4fcu: goto label_23e4fc;
        default: break;
    }

    ctx->pc = 0x23e470u;

label_23e470:
    // 0x23e470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23e474:
    // 0x23e474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23e474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_23e478:
    // 0x23e478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23e47c:
    // 0x23e47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23e480:
    // 0x23e480: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23e480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e484:
    // 0x23e484: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x23e484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_23e488:
    // 0x23e488: 0x8cb00094  lw          $s0, 0x94($a1)
    ctx->pc = 0x23e488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23e48c:
    // 0x23e48c: 0xc08b68c  jal         func_22DA30
label_23e490:
    if (ctx->pc == 0x23E490u) {
        ctx->pc = 0x23E490u;
            // 0x23e490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E494u;
        goto label_23e494;
    }
    ctx->pc = 0x23E48Cu;
    SET_GPR_U32(ctx, 31, 0x23E494u);
    ctx->pc = 0x23E490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E48Cu;
            // 0x23e490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DA30u;
    if (runtime->hasFunction(0x22DA30u)) {
        auto targetFn = runtime->lookupFunction(0x22DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E494u; }
        if (ctx->pc != 0x23E494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DA30_0x22da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E494u; }
        if (ctx->pc != 0x23E494u) { return; }
    }
    ctx->pc = 0x23E494u;
label_23e494:
    // 0x23e494: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x23e494u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_23e498:
    // 0x23e498: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x23e498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
label_23e49c:
    // 0x23e49c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x23e49cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23e4a0:
    // 0x23e4a0: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_23e4a4:
    if (ctx->pc == 0x23E4A4u) {
        ctx->pc = 0x23E4A4u;
            // 0x23e4a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x23E4A8u;
        goto label_23e4a8;
    }
    ctx->pc = 0x23E4A0u;
    {
        const bool branch_taken_0x23e4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e4a0) {
            ctx->pc = 0x23E4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4A0u;
            // 0x23e4a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23E4ECu;
            goto label_23e4ec;
        }
    }
    ctx->pc = 0x23E4A8u;
label_23e4a8:
    // 0x23e4a8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x23e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_23e4ac:
    // 0x23e4ac: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_23e4b0:
    if (ctx->pc == 0x23E4B0u) {
        ctx->pc = 0x23E4B4u;
        goto label_23e4b4;
    }
    ctx->pc = 0x23E4ACu;
    {
        const bool branch_taken_0x23e4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e4ac) {
            ctx->pc = 0x23E4E8u;
            goto label_23e4e8;
        }
    }
    ctx->pc = 0x23E4B4u;
label_23e4b4:
    // 0x23e4b4: 0x822300c4  lb          $v1, 0xC4($s1)
    ctx->pc = 0x23e4b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
label_23e4b8:
    // 0x23e4b8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_23e4bc:
    if (ctx->pc == 0x23E4BCu) {
        ctx->pc = 0x23E4C0u;
        goto label_23e4c0;
    }
    ctx->pc = 0x23E4B8u;
    {
        const bool branch_taken_0x23e4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4b8) {
            ctx->pc = 0x23E4E8u;
            goto label_23e4e8;
        }
    }
    ctx->pc = 0x23E4C0u;
label_23e4c0:
    // 0x23e4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23e4c4:
    // 0x23e4c4: 0xc08fabc  jal         func_23EAF0
label_23e4c8:
    if (ctx->pc == 0x23E4C8u) {
        ctx->pc = 0x23E4C8u;
            // 0x23e4c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E4CCu;
        goto label_23e4cc;
    }
    ctx->pc = 0x23E4C4u;
    SET_GPR_U32(ctx, 31, 0x23E4CCu);
    ctx->pc = 0x23E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4C4u;
            // 0x23e4c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EAF0u;
    if (runtime->hasFunction(0x23EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x23EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4CCu; }
        if (ctx->pc != 0x23E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EAF0_0x23eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E4CCu; }
        if (ctx->pc != 0x23E4CCu) { return; }
    }
    ctx->pc = 0x23E4CCu;
label_23e4cc:
    // 0x23e4cc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_23e4d0:
    if (ctx->pc == 0x23E4D0u) {
        ctx->pc = 0x23E4D4u;
        goto label_23e4d4;
    }
    ctx->pc = 0x23E4CCu;
    {
        const bool branch_taken_0x23e4cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e4cc) {
            ctx->pc = 0x23E4E8u;
            goto label_23e4e8;
        }
    }
    ctx->pc = 0x23E4D4u;
label_23e4d4:
    // 0x23e4d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x23e4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23e4d8:
    // 0x23e4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e4dc:
    // 0x23e4dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23e4e0:
    // 0x23e4e0: 0x320f809  jalr        $t9
label_23e4e4:
    if (ctx->pc == 0x23E4E4u) {
        ctx->pc = 0x23E4E4u;
            // 0x23e4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23E4E8u;
        goto label_23e4e8;
    }
    ctx->pc = 0x23E4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E4E8u);
        ctx->pc = 0x23E4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4E0u;
            // 0x23e4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E4E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E4E8u; }
            if (ctx->pc != 0x23E4E8u) { return; }
        }
        }
    }
    ctx->pc = 0x23E4E8u;
label_23e4e8:
    // 0x23e4e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23e4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23e4ec:
    // 0x23e4ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23e4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e4f0:
    // 0x23e4f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23e4f4:
    // 0x23e4f4: 0x3e00008  jr          $ra
label_23e4f8:
    if (ctx->pc == 0x23E4F8u) {
        ctx->pc = 0x23E4F8u;
            // 0x23e4f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x23E4FCu;
        goto label_23e4fc;
    }
    ctx->pc = 0x23E4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E4F4u;
            // 0x23e4f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E4FCu;
label_23e4fc:
    // 0x23e4fc: 0x0  nop
    ctx->pc = 0x23e4fcu;
    // NOP
}
