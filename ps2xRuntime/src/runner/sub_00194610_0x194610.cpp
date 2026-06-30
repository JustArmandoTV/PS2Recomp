#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194610
// Address: 0x194610 - 0x1946b8
void sub_00194610_0x194610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194610_0x194610");
#endif

    switch (ctx->pc) {
        case 0x194644u: goto label_194644;
        case 0x19466cu: goto label_19466c;
        case 0x194680u: goto label_194680;
        default: break;
    }

    ctx->pc = 0x194610u;

    // 0x194610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x194614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194618: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x194618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19461c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19461cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x194620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194628: 0x8e23037c  lw          $v1, 0x37C($s1)
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
    // 0x19462c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x19462Cu;
    {
        const bool branch_taken_0x19462c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19462Cu;
            // 0x194630: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19462c) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x194634u;
    // 0x194634: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x194634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194638: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x194638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19463c: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x19463Cu;
    SET_GPR_U32(ctx, 31, 0x194644u);
    ctx->pc = 0x194640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19463Cu;
            // 0x194640: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194644u; }
        if (ctx->pc != 0x194644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194644u; }
        if (ctx->pc != 0x194644u) { return; }
    }
    ctx->pc = 0x194644u;
label_194644:
    // 0x194644: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x194644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194648: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x194648u;
    {
        const bool branch_taken_0x194648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19464Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194648u;
            // 0x19464c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194648) {
            ctx->pc = 0x19469Cu;
            goto label_19469c;
        }
    }
    ctx->pc = 0x194650u;
    // 0x194650: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x194650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194654: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x194658: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x194658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19465c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x19465cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x194660: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194664: 0xc064bc8  jal         func_192F20
    ctx->pc = 0x194664u;
    SET_GPR_U32(ctx, 31, 0x19466Cu);
    ctx->pc = 0x194668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194664u;
            // 0x194668: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19466Cu; }
        if (ctx->pc != 0x19466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19466Cu; }
        if (ctx->pc != 0x19466Cu) { return; }
    }
    ctx->pc = 0x19466Cu;
label_19466c:
    // 0x19466c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19466cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194670: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x194670u;
    {
        const bool branch_taken_0x194670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194670) {
            ctx->pc = 0x194674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x194670u;
            // 0x194674: 0x8e22037c  lw          $v0, 0x37C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x194678u;
    // 0x194678: 0xc064b62  jal         func_192D88
    ctx->pc = 0x194678u;
    SET_GPR_U32(ctx, 31, 0x194680u);
    ctx->pc = 0x19467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194678u;
            // 0x19467c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194680u; }
        if (ctx->pc != 0x194680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194680u; }
        if (ctx->pc != 0x194680u) { return; }
    }
    ctx->pc = 0x194680u;
label_194680:
    // 0x194680: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x194680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194684: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x194684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x194688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194688u;
    {
        const bool branch_taken_0x194688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19468Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194688u;
            // 0x19468c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194688) {
            ctx->pc = 0x194698u;
            goto label_194698;
        }
    }
    ctx->pc = 0x194690u;
    // 0x194690: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x194690u;
    {
        const bool branch_taken_0x194690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x194694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194690u;
            // 0x194694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194690) {
            ctx->pc = 0x19469Cu;
            goto label_19469c;
        }
    }
    ctx->pc = 0x194698u;
label_194698:
    // 0x194698: 0xae22037c  sw          $v0, 0x37C($s1)
    ctx->pc = 0x194698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 892), GPR_U32(ctx, 2));
label_19469c:
    // 0x19469c: 0x8e22037c  lw          $v0, 0x37C($s1)
    ctx->pc = 0x19469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
label_1946a0:
    // 0x1946a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1946a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1946a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1946a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1946a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1946a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1946ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1946ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1946B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1946ACu;
            // 0x1946b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1946B4u;
    // 0x1946b4: 0x0  nop
    ctx->pc = 0x1946b4u;
    // NOP
}
