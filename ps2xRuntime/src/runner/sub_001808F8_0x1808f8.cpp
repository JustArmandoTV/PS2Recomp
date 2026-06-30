#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001808F8
// Address: 0x1808f8 - 0x1809d8
void sub_001808F8_0x1808f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001808F8_0x1808f8");
#endif

    switch (ctx->pc) {
        case 0x180910u: goto label_180910;
        case 0x180930u: goto label_180930;
        case 0x18096cu: goto label_18096c;
        case 0x180990u: goto label_180990;
        case 0x1809acu: goto label_1809ac;
        case 0x1809b8u: goto label_1809b8;
        case 0x1809c0u: goto label_1809c0;
        default: break;
    }

    ctx->pc = 0x1808f8u;

    // 0x1808f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1808f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1808fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1808FCu;
    {
        const bool branch_taken_0x1808fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x180900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1808FCu;
            // 0x180900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808fc) {
            ctx->pc = 0x180918u;
            goto label_180918;
        }
    }
    ctx->pc = 0x180904u;
    // 0x180904: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180908: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180908u;
    SET_GPR_U32(ctx, 31, 0x180910u);
    ctx->pc = 0x18090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180908u;
            // 0x18090c: 0x24846990  addiu       $a0, $a0, 0x6990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180910u; }
        if (ctx->pc != 0x180910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180910u; }
        if (ctx->pc != 0x180910u) { return; }
    }
    ctx->pc = 0x180910u;
label_180910:
    // 0x180910: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x180910u;
    {
        const bool branch_taken_0x180910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180910u;
            // 0x180914: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180910) {
            ctx->pc = 0x180980u;
            goto label_180980;
        }
    }
    ctx->pc = 0x180918u;
label_180918:
    // 0x180918: 0x24860038  addiu       $a2, $a0, 0x38
    ctx->pc = 0x180918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x18091c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180920: 0x1045000c  beq         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x180920u;
    {
        const bool branch_taken_0x180920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x180924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180920u;
            // 0x180924: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180920) {
            ctx->pc = 0x180954u;
            goto label_180954;
        }
    }
    ctx->pc = 0x180928u;
    // 0x180928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x180928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18092c: 0x0  nop
    ctx->pc = 0x18092cu;
    // NOP
label_180930:
    // 0x180930: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x180930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x180934: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180934u;
    {
        const bool branch_taken_0x180934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180934u;
            // 0x180938: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180934) {
            ctx->pc = 0x180954u;
            goto label_180954;
        }
    }
    ctx->pc = 0x18093Cu;
    // 0x18093c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x180940: 0x0  nop
    ctx->pc = 0x180940u;
    // NOP
    // 0x180944: 0x0  nop
    ctx->pc = 0x180944u;
    // NOP
    // 0x180948: 0x0  nop
    ctx->pc = 0x180948u;
    // NOP
    // 0x18094c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18094Cu;
    {
        const bool branch_taken_0x18094c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18094c) {
            ctx->pc = 0x180950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18094Cu;
            // 0x180950: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_180930;
        }
    }
    ctx->pc = 0x180954u;
label_180954:
    // 0x180954: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x180954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x180958: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180958u;
    {
        const bool branch_taken_0x180958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180958) {
            ctx->pc = 0x18095Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180958u;
            // 0x18095c: 0x31940  sll         $v1, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180978u;
            goto label_180978;
        }
    }
    ctx->pc = 0x180960u;
    // 0x180960: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180964: 0xc060334  jal         func_180CD0
    ctx->pc = 0x180964u;
    SET_GPR_U32(ctx, 31, 0x18096Cu);
    ctx->pc = 0x180968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180964u;
            // 0x180968: 0x248469c0  addiu       $a0, $a0, 0x69C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18096Cu; }
        if (ctx->pc != 0x18096Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180CD0_0x180cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18096Cu; }
        if (ctx->pc != 0x18096Cu) { return; }
    }
    ctx->pc = 0x18096Cu;
label_18096c:
    // 0x18096c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18096Cu;
    {
        const bool branch_taken_0x18096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18096Cu;
            // 0x180970: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18096c) {
            ctx->pc = 0x180980u;
            goto label_180980;
        }
    }
    ctx->pc = 0x180974u;
    // 0x180974: 0x0  nop
    ctx->pc = 0x180974u;
    // NOP
label_180978:
    // 0x180978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18097c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x18097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_180980:
    // 0x180980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180984: 0x3e00008  jr          $ra
    ctx->pc = 0x180984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180984u;
            // 0x180988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18098Cu;
    // 0x18098c: 0x0  nop
    ctx->pc = 0x18098cu;
    // NOP
label_180990:
    // 0x180990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18099c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1809a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1809a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1809a4: 0xc06031a  jal         func_180C68
    ctx->pc = 0x1809A4u;
    SET_GPR_U32(ctx, 31, 0x1809ACu);
    ctx->pc = 0x1809A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1809A4u;
            // 0x1809a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C68u;
    if (runtime->hasFunction(0x180C68u)) {
        auto targetFn = runtime->lookupFunction(0x180C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809ACu; }
        if (ctx->pc != 0x1809ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C68_0x180c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809ACu; }
        if (ctx->pc != 0x1809ACu) { return; }
    }
    ctx->pc = 0x1809ACu;
label_1809ac:
    // 0x1809ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1809acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809b0: 0xc060276  jal         func_1809D8
    ctx->pc = 0x1809B0u;
    SET_GPR_U32(ctx, 31, 0x1809B8u);
    ctx->pc = 0x1809B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1809B0u;
            // 0x1809b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1809D8u;
    if (runtime->hasFunction(0x1809D8u)) {
        auto targetFn = runtime->lookupFunction(0x1809D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809B8u; }
        if (ctx->pc != 0x1809B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001809D8_0x1809d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809B8u; }
        if (ctx->pc != 0x1809B8u) { return; }
    }
    ctx->pc = 0x1809B8u;
label_1809b8:
    // 0x1809b8: 0xc06031c  jal         func_180C70
    ctx->pc = 0x1809B8u;
    SET_GPR_U32(ctx, 31, 0x1809C0u);
    ctx->pc = 0x1809BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1809B8u;
            // 0x1809bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180C70u;
    if (runtime->hasFunction(0x180C70u)) {
        auto targetFn = runtime->lookupFunction(0x180C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809C0u; }
        if (ctx->pc != 0x1809C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180C70_0x180c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1809C0u; }
        if (ctx->pc != 0x1809C0u) { return; }
    }
    ctx->pc = 0x1809C0u;
label_1809c0:
    // 0x1809c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1809c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1809c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1809c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1809c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1809cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1809ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1809d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1809D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1809D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1809D0u;
            // 0x1809d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1809D8u;
}
