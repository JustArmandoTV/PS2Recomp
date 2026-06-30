#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155240
// Address: 0x155240 - 0x155290
void sub_00155240_0x155240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155240_0x155240");
#endif

    switch (ctx->pc) {
        case 0x155278u: goto label_155278;
        default: break;
    }

    ctx->pc = 0x155240u;

    // 0x155240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x155244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15524c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x15524cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x155250: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x155254: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x155254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x155258: 0x30630e77  andi        $v1, $v1, 0xE77
    ctx->pc = 0x155258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3703);
    // 0x15525c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15525Cu;
    {
        const bool branch_taken_0x15525c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15525Cu;
            // 0x155260: 0x8c860024  lw          $a2, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15525c) {
            ctx->pc = 0x15526Cu;
            goto label_15526c;
        }
    }
    ctx->pc = 0x155264u;
    // 0x155264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155264u;
    {
        const bool branch_taken_0x155264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155264u;
            // 0x155268: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155264) {
            ctx->pc = 0x15527Cu;
            goto label_15527c;
        }
    }
    ctx->pc = 0x15526Cu;
label_15526c:
    // 0x15526c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15526cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155270: 0xc04e12c  jal         func_1384B0
    ctx->pc = 0x155270u;
    SET_GPR_U32(ctx, 31, 0x155278u);
    ctx->pc = 0x155274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155270u;
            // 0x155274: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1384B0u;
    if (runtime->hasFunction(0x1384B0u)) {
        auto targetFn = runtime->lookupFunction(0x1384B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155278u; }
        if (ctx->pc != 0x155278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001384B0_0x1384b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155278u; }
        if (ctx->pc != 0x155278u) { return; }
    }
    ctx->pc = 0x155278u;
label_155278:
    // 0x155278: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x155278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_15527c:
    // 0x15527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155280: 0x3e00008  jr          $ra
    ctx->pc = 0x155280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155280u;
            // 0x155284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155288u;
    // 0x155288: 0x0  nop
    ctx->pc = 0x155288u;
    // NOP
    // 0x15528c: 0x0  nop
    ctx->pc = 0x15528cu;
    // NOP
}
