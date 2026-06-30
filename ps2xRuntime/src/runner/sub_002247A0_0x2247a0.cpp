#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002247A0
// Address: 0x2247a0 - 0x2248c0
void sub_002247A0_0x2247a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002247A0_0x2247a0");
#endif

    switch (ctx->pc) {
        case 0x2247a0u: goto label_2247a0;
        case 0x2247a4u: goto label_2247a4;
        case 0x2247a8u: goto label_2247a8;
        case 0x2247acu: goto label_2247ac;
        case 0x2247b0u: goto label_2247b0;
        case 0x2247b4u: goto label_2247b4;
        case 0x2247b8u: goto label_2247b8;
        case 0x2247bcu: goto label_2247bc;
        case 0x2247c0u: goto label_2247c0;
        case 0x2247c4u: goto label_2247c4;
        case 0x2247c8u: goto label_2247c8;
        case 0x2247ccu: goto label_2247cc;
        case 0x2247d0u: goto label_2247d0;
        case 0x2247d4u: goto label_2247d4;
        case 0x2247d8u: goto label_2247d8;
        case 0x2247dcu: goto label_2247dc;
        case 0x2247e0u: goto label_2247e0;
        case 0x2247e4u: goto label_2247e4;
        case 0x2247e8u: goto label_2247e8;
        case 0x2247ecu: goto label_2247ec;
        case 0x2247f0u: goto label_2247f0;
        case 0x2247f4u: goto label_2247f4;
        case 0x2247f8u: goto label_2247f8;
        case 0x2247fcu: goto label_2247fc;
        case 0x224800u: goto label_224800;
        case 0x224804u: goto label_224804;
        case 0x224808u: goto label_224808;
        case 0x22480cu: goto label_22480c;
        case 0x224810u: goto label_224810;
        case 0x224814u: goto label_224814;
        case 0x224818u: goto label_224818;
        case 0x22481cu: goto label_22481c;
        case 0x224820u: goto label_224820;
        case 0x224824u: goto label_224824;
        case 0x224828u: goto label_224828;
        case 0x22482cu: goto label_22482c;
        case 0x224830u: goto label_224830;
        case 0x224834u: goto label_224834;
        case 0x224838u: goto label_224838;
        case 0x22483cu: goto label_22483c;
        case 0x224840u: goto label_224840;
        case 0x224844u: goto label_224844;
        case 0x224848u: goto label_224848;
        case 0x22484cu: goto label_22484c;
        case 0x224850u: goto label_224850;
        case 0x224854u: goto label_224854;
        case 0x224858u: goto label_224858;
        case 0x22485cu: goto label_22485c;
        case 0x224860u: goto label_224860;
        case 0x224864u: goto label_224864;
        case 0x224868u: goto label_224868;
        case 0x22486cu: goto label_22486c;
        case 0x224870u: goto label_224870;
        case 0x224874u: goto label_224874;
        case 0x224878u: goto label_224878;
        case 0x22487cu: goto label_22487c;
        case 0x224880u: goto label_224880;
        case 0x224884u: goto label_224884;
        case 0x224888u: goto label_224888;
        case 0x22488cu: goto label_22488c;
        case 0x224890u: goto label_224890;
        case 0x224894u: goto label_224894;
        case 0x224898u: goto label_224898;
        case 0x22489cu: goto label_22489c;
        case 0x2248a0u: goto label_2248a0;
        case 0x2248a4u: goto label_2248a4;
        case 0x2248a8u: goto label_2248a8;
        case 0x2248acu: goto label_2248ac;
        case 0x2248b0u: goto label_2248b0;
        case 0x2248b4u: goto label_2248b4;
        case 0x2248b8u: goto label_2248b8;
        case 0x2248bcu: goto label_2248bc;
        default: break;
    }

    ctx->pc = 0x2247a0u;

label_2247a0:
    // 0x2247a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2247a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2247a4:
    // 0x2247a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2247a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2247a8:
    // 0x2247a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2247a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2247ac:
    // 0x2247ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2247acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2247b0:
    // 0x2247b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2247b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2247b4:
    // 0x2247b4: 0x8c840090  lw          $a0, 0x90($a0)
    ctx->pc = 0x2247b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_2247b8:
    // 0x2247b8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2247bc:
    if (ctx->pc == 0x2247BCu) {
        ctx->pc = 0x2247BCu;
            // 0x2247bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2247C0u;
        goto label_2247c0;
    }
    ctx->pc = 0x2247B8u;
    {
        const bool branch_taken_0x2247b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2247B8u;
            // 0x2247bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247b8) {
            ctx->pc = 0x2247D8u;
            goto label_2247d8;
        }
    }
    ctx->pc = 0x2247C0u;
label_2247c0:
    // 0x2247c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2247c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2247c4:
    // 0x2247c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2247c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2247c8:
    // 0x2247c8: 0x320f809  jalr        $t9
label_2247cc:
    if (ctx->pc == 0x2247CCu) {
        ctx->pc = 0x2247D0u;
        goto label_2247d0;
    }
    ctx->pc = 0x2247C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2247D0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2247D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2247D0u; }
            if (ctx->pc != 0x2247D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2247D0u;
label_2247d0:
    // 0x2247d0: 0x52020035  beql        $s0, $v0, . + 4 + (0x35 << 2)
label_2247d4:
    if (ctx->pc == 0x2247D4u) {
        ctx->pc = 0x2247D4u;
            // 0x2247d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2247D8u;
        goto label_2247d8;
    }
    ctx->pc = 0x2247D0u;
    {
        const bool branch_taken_0x2247d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2247d0) {
            ctx->pc = 0x2247D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2247D0u;
            // 0x2247d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2248A8u;
            goto label_2248a8;
        }
    }
    ctx->pc = 0x2247D8u;
label_2247d8:
    // 0x2247d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2247d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2247dc:
    // 0x2247dc: 0x1203000f  beq         $s0, $v1, . + 4 + (0xF << 2)
label_2247e0:
    if (ctx->pc == 0x2247E0u) {
        ctx->pc = 0x2247E4u;
        goto label_2247e4;
    }
    ctx->pc = 0x2247DCu;
    {
        const bool branch_taken_0x2247dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2247dc) {
            ctx->pc = 0x22481Cu;
            goto label_22481c;
        }
    }
    ctx->pc = 0x2247E4u;
label_2247e4:
    // 0x2247e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2247e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2247e8:
    // 0x2247e8: 0x12030003  beq         $s0, $v1, . + 4 + (0x3 << 2)
label_2247ec:
    if (ctx->pc == 0x2247ECu) {
        ctx->pc = 0x2247F0u;
        goto label_2247f0;
    }
    ctx->pc = 0x2247E8u;
    {
        const bool branch_taken_0x2247e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2247e8) {
            ctx->pc = 0x2247F8u;
            goto label_2247f8;
        }
    }
    ctx->pc = 0x2247F0u;
label_2247f0:
    // 0x2247f0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2247f4:
    if (ctx->pc == 0x2247F4u) {
        ctx->pc = 0x2247F8u;
        goto label_2247f8;
    }
    ctx->pc = 0x2247F0u;
    {
        const bool branch_taken_0x2247f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2247f0) {
            ctx->pc = 0x2248A4u;
            goto label_2248a4;
        }
    }
    ctx->pc = 0x2247F8u;
label_2247f8:
    // 0x2247f8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2247f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2247fc:
    // 0x2247fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2247fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224800:
    // 0x224800: 0xc089004  jal         func_224010
label_224804:
    if (ctx->pc == 0x224804u) {
        ctx->pc = 0x224804u;
            // 0x224804: 0x24a5e818  addiu       $a1, $a1, -0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961176));
        ctx->pc = 0x224808u;
        goto label_224808;
    }
    ctx->pc = 0x224800u;
    SET_GPR_U32(ctx, 31, 0x224808u);
    ctx->pc = 0x224804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224800u;
            // 0x224804: 0x24a5e818  addiu       $a1, $a1, -0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224010u;
    if (runtime->hasFunction(0x224010u)) {
        auto targetFn = runtime->lookupFunction(0x224010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224808u; }
        if (ctx->pc != 0x224808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224010_0x224010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224808u; }
        if (ctx->pc != 0x224808u) { return; }
    }
    ctx->pc = 0x224808u;
label_224808:
    // 0x224808: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22480c:
    // 0x22480c: 0xa22300a9  sb          $v1, 0xA9($s1)
    ctx->pc = 0x22480cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 3));
label_224810:
    // 0x224810: 0xa62000aa  sh          $zero, 0xAA($s1)
    ctx->pc = 0x224810u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 0));
label_224814:
    // 0x224814: 0x10000023  b           . + 4 + (0x23 << 2)
label_224818:
    if (ctx->pc == 0x224818u) {
        ctx->pc = 0x224818u;
            // 0x224818: 0xa62000ac  sh          $zero, 0xAC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22481Cu;
        goto label_22481c;
    }
    ctx->pc = 0x224814u;
    {
        const bool branch_taken_0x224814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224814u;
            // 0x224818: 0xa62000ac  sh          $zero, 0xAC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224814) {
            ctx->pc = 0x2248A4u;
            goto label_2248a4;
        }
    }
    ctx->pc = 0x22481Cu;
label_22481c:
    // 0x22481c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_224820:
    // 0x224820: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x224820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_224824:
    // 0x224824: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x224824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_224828:
    // 0x224828: 0xc0a7a88  jal         func_29EA20
label_22482c:
    if (ctx->pc == 0x22482Cu) {
        ctx->pc = 0x22482Cu;
            // 0x22482c: 0x24060029  addiu       $a2, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x224830u;
        goto label_224830;
    }
    ctx->pc = 0x224828u;
    SET_GPR_U32(ctx, 31, 0x224830u);
    ctx->pc = 0x22482Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224828u;
            // 0x22482c: 0x24060029  addiu       $a2, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224830u; }
        if (ctx->pc != 0x224830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224830u; }
        if (ctx->pc != 0x224830u) { return; }
    }
    ctx->pc = 0x224830u;
label_224830:
    // 0x224830: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x224830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_224834:
    // 0x224834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224838:
    // 0x224838: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_22483c:
    if (ctx->pc == 0x22483Cu) {
        ctx->pc = 0x22483Cu;
            // 0x22483c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x224840u;
        goto label_224840;
    }
    ctx->pc = 0x224838u;
    {
        const bool branch_taken_0x224838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224838u;
            // 0x22483c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224838) {
            ctx->pc = 0x224848u;
            goto label_224848;
        }
    }
    ctx->pc = 0x224840u;
label_224840:
    // 0x224840: 0xc089314  jal         func_224C50
label_224844:
    if (ctx->pc == 0x224844u) {
        ctx->pc = 0x224844u;
            // 0x224844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224848u;
        goto label_224848;
    }
    ctx->pc = 0x224840u;
    SET_GPR_U32(ctx, 31, 0x224848u);
    ctx->pc = 0x224844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224840u;
            // 0x224844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224C50u;
    if (runtime->hasFunction(0x224C50u)) {
        auto targetFn = runtime->lookupFunction(0x224C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224848u; }
        if (ctx->pc != 0x224848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224C50_0x224c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224848u; }
        if (ctx->pc != 0x224848u) { return; }
    }
    ctx->pc = 0x224848u;
label_224848:
    // 0x224848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22484c:
    // 0x22484c: 0xc089004  jal         func_224010
label_224850:
    if (ctx->pc == 0x224850u) {
        ctx->pc = 0x224850u;
            // 0x224850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224854u;
        goto label_224854;
    }
    ctx->pc = 0x22484Cu;
    SET_GPR_U32(ctx, 31, 0x224854u);
    ctx->pc = 0x224850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22484Cu;
            // 0x224850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224010u;
    if (runtime->hasFunction(0x224010u)) {
        auto targetFn = runtime->lookupFunction(0x224010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224854u; }
        if (ctx->pc != 0x224854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224010_0x224010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224854u; }
        if (ctx->pc != 0x224854u) { return; }
    }
    ctx->pc = 0x224854u;
label_224854:
    // 0x224854: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x224854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_224858:
    // 0x224858: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x224858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_22485c:
    // 0x22485c: 0xa22300a9  sb          $v1, 0xA9($s1)
    ctx->pc = 0x22485cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 3));
label_224860:
    // 0x224860: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x224860u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_224864:
    // 0x224864: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_224868:
    if (ctx->pc == 0x224868u) {
        ctx->pc = 0x22486Cu;
        goto label_22486c;
    }
    ctx->pc = 0x224864u;
    {
        const bool branch_taken_0x224864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x224864) {
            ctx->pc = 0x2248A4u;
            goto label_2248a4;
        }
    }
    ctx->pc = 0x22486Cu;
label_22486c:
    // 0x22486c: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x22486cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_224870:
    // 0x224870: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x224870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_224874:
    // 0x224874: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x224874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_224878:
    // 0x224878: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x224878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_22487c:
    // 0x22487c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22487cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_224880:
    // 0x224880: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_224884:
    if (ctx->pc == 0x224884u) {
        ctx->pc = 0x224888u;
        goto label_224888;
    }
    ctx->pc = 0x224880u;
    {
        const bool branch_taken_0x224880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224880) {
            ctx->pc = 0x2248A4u;
            goto label_2248a4;
        }
    }
    ctx->pc = 0x224888u;
label_224888:
    // 0x224888: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_22488c:
    if (ctx->pc == 0x22488Cu) {
        ctx->pc = 0x224890u;
        goto label_224890;
    }
    ctx->pc = 0x224888u;
    {
        const bool branch_taken_0x224888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x224888) {
            ctx->pc = 0x2248A4u;
            goto label_2248a4;
        }
    }
    ctx->pc = 0x224890u;
label_224890:
    // 0x224890: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x224890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224894:
    // 0x224894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224898:
    // 0x224898: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x224898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22489c:
    // 0x22489c: 0x320f809  jalr        $t9
label_2248a0:
    if (ctx->pc == 0x2248A0u) {
        ctx->pc = 0x2248A0u;
            // 0x2248a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2248A4u;
        goto label_2248a4;
    }
    ctx->pc = 0x22489Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2248A4u);
        ctx->pc = 0x2248A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22489Cu;
            // 0x2248a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2248A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2248A4u; }
            if (ctx->pc != 0x2248A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2248A4u;
label_2248a4:
    // 0x2248a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2248a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2248a8:
    // 0x2248a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2248a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2248ac:
    // 0x2248ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2248acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2248b0:
    // 0x2248b0: 0x3e00008  jr          $ra
label_2248b4:
    if (ctx->pc == 0x2248B4u) {
        ctx->pc = 0x2248B4u;
            // 0x2248b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2248B8u;
        goto label_2248b8;
    }
    ctx->pc = 0x2248B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2248B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2248B0u;
            // 0x2248b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2248B8u;
label_2248b8:
    // 0x2248b8: 0x0  nop
    ctx->pc = 0x2248b8u;
    // NOP
label_2248bc:
    // 0x2248bc: 0x0  nop
    ctx->pc = 0x2248bcu;
    // NOP
}
