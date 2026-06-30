#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003760A0
// Address: 0x3760a0 - 0x376120
void sub_003760A0_0x3760a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003760A0_0x3760a0");
#endif

    switch (ctx->pc) {
        case 0x3760a0u: goto label_3760a0;
        case 0x3760a4u: goto label_3760a4;
        case 0x3760a8u: goto label_3760a8;
        case 0x3760acu: goto label_3760ac;
        case 0x3760b0u: goto label_3760b0;
        case 0x3760b4u: goto label_3760b4;
        case 0x3760b8u: goto label_3760b8;
        case 0x3760bcu: goto label_3760bc;
        case 0x3760c0u: goto label_3760c0;
        case 0x3760c4u: goto label_3760c4;
        case 0x3760c8u: goto label_3760c8;
        case 0x3760ccu: goto label_3760cc;
        case 0x3760d0u: goto label_3760d0;
        case 0x3760d4u: goto label_3760d4;
        case 0x3760d8u: goto label_3760d8;
        case 0x3760dcu: goto label_3760dc;
        case 0x3760e0u: goto label_3760e0;
        case 0x3760e4u: goto label_3760e4;
        case 0x3760e8u: goto label_3760e8;
        case 0x3760ecu: goto label_3760ec;
        case 0x3760f0u: goto label_3760f0;
        case 0x3760f4u: goto label_3760f4;
        case 0x3760f8u: goto label_3760f8;
        case 0x3760fcu: goto label_3760fc;
        case 0x376100u: goto label_376100;
        case 0x376104u: goto label_376104;
        case 0x376108u: goto label_376108;
        case 0x37610cu: goto label_37610c;
        case 0x376110u: goto label_376110;
        case 0x376114u: goto label_376114;
        case 0x376118u: goto label_376118;
        case 0x37611cu: goto label_37611c;
        default: break;
    }

    ctx->pc = 0x3760a0u;

label_3760a0:
    // 0x3760a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3760a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3760a4:
    // 0x3760a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3760a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3760a8:
    // 0x3760a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3760a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3760ac:
    // 0x3760ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3760acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3760b0:
    // 0x3760b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3760b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3760b4:
    // 0x3760b4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3760b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3760b8:
    // 0x3760b8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3760b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3760bc:
    // 0x3760bc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3760bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3760c0:
    // 0x3760c0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3760c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3760c4:
    // 0x3760c4: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x3760c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3760c8:
    // 0x3760c8: 0xc088b74  jal         func_222DD0
label_3760cc:
    if (ctx->pc == 0x3760CCu) {
        ctx->pc = 0x3760CCu;
            // 0x3760cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3760D0u;
        goto label_3760d0;
    }
    ctx->pc = 0x3760C8u;
    SET_GPR_U32(ctx, 31, 0x3760D0u);
    ctx->pc = 0x3760CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3760C8u;
            // 0x3760cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3760D0u; }
        if (ctx->pc != 0x3760D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3760D0u; }
        if (ctx->pc != 0x3760D0u) { return; }
    }
    ctx->pc = 0x3760D0u;
label_3760d0:
    // 0x3760d0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3760d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3760d4:
    // 0x3760d4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3760d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3760d8:
    // 0x3760d8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3760d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3760dc:
    // 0x3760dc: 0x320f809  jalr        $t9
label_3760e0:
    if (ctx->pc == 0x3760E0u) {
        ctx->pc = 0x3760E0u;
            // 0x3760e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3760E4u;
        goto label_3760e4;
    }
    ctx->pc = 0x3760DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3760E4u);
        ctx->pc = 0x3760E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3760DCu;
            // 0x3760e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3760E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3760E4u; }
            if (ctx->pc != 0x3760E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3760E4u;
label_3760e4:
    // 0x3760e4: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x3760e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3760e8:
    // 0x3760e8: 0xc088b74  jal         func_222DD0
label_3760ec:
    if (ctx->pc == 0x3760ECu) {
        ctx->pc = 0x3760ECu;
            // 0x3760ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3760F0u;
        goto label_3760f0;
    }
    ctx->pc = 0x3760E8u;
    SET_GPR_U32(ctx, 31, 0x3760F0u);
    ctx->pc = 0x3760ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3760E8u;
            // 0x3760ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3760F0u; }
        if (ctx->pc != 0x3760F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3760F0u; }
        if (ctx->pc != 0x3760F0u) { return; }
    }
    ctx->pc = 0x3760F0u;
label_3760f0:
    // 0x3760f0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x3760f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_3760f4:
    // 0x3760f4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x3760f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3760f8:
    // 0x3760f8: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x3760f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_3760fc:
    // 0x3760fc: 0x320f809  jalr        $t9
label_376100:
    if (ctx->pc == 0x376100u) {
        ctx->pc = 0x376100u;
            // 0x376100: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x376104u;
        goto label_376104;
    }
    ctx->pc = 0x3760FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x376104u);
        ctx->pc = 0x376100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3760FCu;
            // 0x376100: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x376104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x376104u; }
            if (ctx->pc != 0x376104u) { return; }
        }
        }
    }
    ctx->pc = 0x376104u;
label_376104:
    // 0x376104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x376104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_376108:
    // 0x376108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37610c:
    // 0x37610c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37610cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_376110:
    // 0x376110: 0x3e00008  jr          $ra
label_376114:
    if (ctx->pc == 0x376114u) {
        ctx->pc = 0x376114u;
            // 0x376114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x376118u;
        goto label_376118;
    }
    ctx->pc = 0x376110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376110u;
            // 0x376114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376118u;
label_376118:
    // 0x376118: 0x0  nop
    ctx->pc = 0x376118u;
    // NOP
label_37611c:
    // 0x37611c: 0x0  nop
    ctx->pc = 0x37611cu;
    // NOP
}
