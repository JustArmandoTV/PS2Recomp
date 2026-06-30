#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196760
// Address: 0x196760 - 0x196828
void sub_00196760_0x196760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196760_0x196760");
#endif

    switch (ctx->pc) {
        case 0x196784u: goto label_196784;
        case 0x196798u: goto label_196798;
        case 0x1967b4u: goto label_1967b4;
        case 0x1967d0u: goto label_1967d0;
        case 0x1967dcu: goto label_1967dc;
        case 0x1967f4u: goto label_1967f4;
        case 0x1967fcu: goto label_1967fc;
        default: break;
    }

    ctx->pc = 0x196760u;

    // 0x196760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196764: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19676c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x196770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x196778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19677c: 0xc0628a2  jal         func_18A288
    ctx->pc = 0x19677Cu;
    SET_GPR_U32(ctx, 31, 0x196784u);
    ctx->pc = 0x196780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19677Cu;
            // 0x196780: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A288u;
    if (runtime->hasFunction(0x18A288u)) {
        auto targetFn = runtime->lookupFunction(0x18A288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196784u; }
        if (ctx->pc != 0x196784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A288_0x18a288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196784u; }
        if (ctx->pc != 0x196784u) { return; }
    }
    ctx->pc = 0x196784u;
label_196784:
    // 0x196784: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x196784u;
    {
        const bool branch_taken_0x196784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196784u;
            // 0x196788: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196784) {
            ctx->pc = 0x196808u;
            goto label_196808;
        }
    }
    ctx->pc = 0x19678Cu;
    // 0x19678c: 0x263003dc  addiu       $s0, $s1, 0x3DC
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 988));
    // 0x196790: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x196790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196794: 0x0  nop
    ctx->pc = 0x196794u;
    // NOP
label_196798:
    // 0x196798: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19679c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x19679cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1967a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1967a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1967a4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1967a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1967a8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1967a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1967ac: 0xc062924  jal         func_18A490
    ctx->pc = 0x1967ACu;
    SET_GPR_U32(ctx, 31, 0x1967B4u);
    ctx->pc = 0x1967B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967ACu;
            // 0x1967b0: 0x8e2403d4  lw          $a0, 0x3D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A490u;
    if (runtime->hasFunction(0x18A490u)) {
        auto targetFn = runtime->lookupFunction(0x18A490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967B4u; }
        if (ctx->pc != 0x1967B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A490_0x18a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967B4u; }
        if (ctx->pc != 0x1967B4u) { return; }
    }
    ctx->pc = 0x1967B4u;
label_1967b4:
    // 0x1967b4: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1967b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1967b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1967B8u;
    {
        const bool branch_taken_0x1967b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1967b8) {
            ctx->pc = 0x1967BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1967B8u;
            // 0x1967bc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196798;
        }
    }
    ctx->pc = 0x1967C0u;
    // 0x1967c0: 0x8e2403d4  lw          $a0, 0x3D4($s1)
    ctx->pc = 0x1967c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
    // 0x1967c4: 0x8e25040c  lw          $a1, 0x40C($s1)
    ctx->pc = 0x1967c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1036)));
    // 0x1967c8: 0xc06292e  jal         func_18A4B8
    ctx->pc = 0x1967C8u;
    SET_GPR_U32(ctx, 31, 0x1967D0u);
    ctx->pc = 0x1967CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967C8u;
            // 0x1967cc: 0x8e260410  lw          $a2, 0x410($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A4B8u;
    if (runtime->hasFunction(0x18A4B8u)) {
        auto targetFn = runtime->lookupFunction(0x18A4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967D0u; }
        if (ctx->pc != 0x1967D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A4B8_0x18a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967D0u; }
        if (ctx->pc != 0x1967D0u) { return; }
    }
    ctx->pc = 0x1967D0u;
label_1967d0:
    // 0x1967d0: 0x8e2403d4  lw          $a0, 0x3D4($s1)
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
    // 0x1967d4: 0xc062942  jal         func_18A508
    ctx->pc = 0x1967D4u;
    SET_GPR_U32(ctx, 31, 0x1967DCu);
    ctx->pc = 0x1967D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967D4u;
            // 0x1967d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A508u;
    if (runtime->hasFunction(0x18A508u)) {
        auto targetFn = runtime->lookupFunction(0x18A508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967DCu; }
        if (ctx->pc != 0x1967DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A508_0x18a508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967DCu; }
        if (ctx->pc != 0x1967DCu) { return; }
    }
    ctx->pc = 0x1967DCu;
label_1967dc:
    // 0x1967dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1967DCu;
    {
        const bool branch_taken_0x1967dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1967DCu;
            // 0x1967e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967dc) {
            ctx->pc = 0x19680Cu;
            goto label_19680c;
        }
    }
    ctx->pc = 0x1967E4u;
    // 0x1967e4: 0x8e2403d4  lw          $a0, 0x3D4($s1)
    ctx->pc = 0x1967e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
    // 0x1967e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1967e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967ec: 0xc062938  jal         func_18A4E0
    ctx->pc = 0x1967ECu;
    SET_GPR_U32(ctx, 31, 0x1967F4u);
    ctx->pc = 0x1967F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967ECu;
            // 0x1967f0: 0x26260414  addiu       $a2, $s1, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1044));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A4E0u;
    if (runtime->hasFunction(0x18A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x18A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967F4u; }
        if (ctx->pc != 0x1967F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A4E0_0x18a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967F4u; }
        if (ctx->pc != 0x1967F4u) { return; }
    }
    ctx->pc = 0x1967F4u;
label_1967f4:
    // 0x1967f4: 0xc065a0a  jal         func_196828
    ctx->pc = 0x1967F4u;
    SET_GPR_U32(ctx, 31, 0x1967FCu);
    ctx->pc = 0x1967F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1967F4u;
            // 0x1967f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196828u;
    if (runtime->hasFunction(0x196828u)) {
        auto targetFn = runtime->lookupFunction(0x196828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967FCu; }
        if (ctx->pc != 0x1967FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196828_0x196828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1967FCu; }
        if (ctx->pc != 0x1967FCu) { return; }
    }
    ctx->pc = 0x1967FCu;
label_1967fc:
    // 0x1967fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1967FCu;
    {
        const bool branch_taken_0x1967fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1967FCu;
            // 0x196800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967fc) {
            ctx->pc = 0x19680Cu;
            goto label_19680c;
        }
    }
    ctx->pc = 0x196804u;
    // 0x196804: 0x0  nop
    ctx->pc = 0x196804u;
    // NOP
label_196808:
    // 0x196808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19680c:
    // 0x19680c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19680cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196814: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196818: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x196818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19681c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196820: 0x3e00008  jr          $ra
    ctx->pc = 0x196820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196820u;
            // 0x196824: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196828u;
}
