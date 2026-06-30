#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181F48
// Address: 0x181f48 - 0x181fe8
void sub_00181F48_0x181f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181F48_0x181f48");
#endif

    switch (ctx->pc) {
        case 0x181f58u: goto label_181f58;
        case 0x181f88u: goto label_181f88;
        case 0x181fb8u: goto label_181fb8;
        case 0x181fccu: goto label_181fcc;
        default: break;
    }

    ctx->pc = 0x181f48u;

    // 0x181f48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x181f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x181f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f50: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x181f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x181f54: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x181f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_181f58:
    // 0x181f58: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x181f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x181f5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x181f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x181f60: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x181f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x181f64: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x181f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x181f68: 0x28a30060  slti        $v1, $a1, 0x60
    ctx->pc = 0x181f68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x181f6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x181f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x181f70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x181F70u;
    {
        const bool branch_taken_0x181f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181F70u;
            // 0x181f74: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f70) {
            ctx->pc = 0x181F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_181f58;
        }
    }
    ctx->pc = 0x181F78u;
    // 0x181f78: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x181f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x181f7c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x181f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x181f80: 0x3e00008  jr          $ra
    ctx->pc = 0x181F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181F80u;
            // 0x181f84: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181F88u;
label_181f88:
    // 0x181f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181f90: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x181f90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x181f94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181f98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x181f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x181fa0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x181fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fa4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x181fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x181fa8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x181fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x181facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x181fb0: 0xc060704  jal         func_181C10
    ctx->pc = 0x181FB0u;
    SET_GPR_U32(ctx, 31, 0x181FB8u);
    ctx->pc = 0x181FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FB0u;
            // 0x181fb4: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    if (runtime->hasFunction(0x181C10u)) {
        auto targetFn = runtime->lookupFunction(0x181C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FB8u; }
        if (ctx->pc != 0x181FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181C10_0x181c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FB8u; }
        if (ctx->pc != 0x181FB8u) { return; }
    }
    ctx->pc = 0x181FB8u;
label_181fb8:
    // 0x181fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x181fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x181fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fc4: 0xc0607fa  jal         func_181FE8
    ctx->pc = 0x181FC4u;
    SET_GPR_U32(ctx, 31, 0x181FCCu);
    ctx->pc = 0x181FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FC4u;
            // 0x181fc8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181FE8u;
    if (runtime->hasFunction(0x181FE8u)) {
        auto targetFn = runtime->lookupFunction(0x181FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FCCu; }
        if (ctx->pc != 0x181FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181FE8_0x181fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FCCu; }
        if (ctx->pc != 0x181FCCu) { return; }
    }
    ctx->pc = 0x181FCCu;
label_181fcc:
    // 0x181fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181fd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x181fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x181fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181fe0: 0x806070a  j           func_181C28
    ctx->pc = 0x181FE0u;
    ctx->pc = 0x181FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FE0u;
            // 0x181fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C28u;
    if (runtime->hasFunction(0x181C28u)) {
        auto targetFn = runtime->lookupFunction(0x181C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181C28_0x181c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181FE8u;
}
