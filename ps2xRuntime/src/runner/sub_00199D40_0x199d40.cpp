#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199D40
// Address: 0x199d40 - 0x199dd8
void sub_00199D40_0x199d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199D40_0x199d40");
#endif

    switch (ctx->pc) {
        case 0x199d78u: goto label_199d78;
        default: break;
    }

    ctx->pc = 0x199d40u;

    // 0x199d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x199d48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x199d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199d4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x199d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x199d50: 0x249303d4  addiu       $s3, $a0, 0x3D4
    ctx->pc = 0x199d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 980));
    // 0x199d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199d58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199d5c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x199d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x199d60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x199d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x199d64: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x199d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x199d68: 0x8c9403ec  lw          $s4, 0x3EC($a0)
    ctx->pc = 0x199d68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1004)));
    // 0x199d6c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x199d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x199d70: 0xc066d2a  jal         func_19B4A8
    ctx->pc = 0x199D70u;
    SET_GPR_U32(ctx, 31, 0x199D78u);
    ctx->pc = 0x199D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199D70u;
            // 0x199d74: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B4A8u;
    if (runtime->hasFunction(0x19B4A8u)) {
        auto targetFn = runtime->lookupFunction(0x19B4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D78u; }
        if (ctx->pc != 0x199D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B4A8_0x19b4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199D78u; }
        if (ctx->pc != 0x199D78u) { return; }
    }
    ctx->pc = 0x199D78u;
label_199d78:
    // 0x199d78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199d7c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199D7Cu;
    {
        const bool branch_taken_0x199d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x199d7c) {
            ctx->pc = 0x199D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199D7Cu;
            // 0x199d80: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199D90u;
            goto label_199d90;
        }
    }
    ctx->pc = 0x199D84u;
    // 0x199d84: 0x16930004  bne         $s4, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x199D84u;
    {
        const bool branch_taken_0x199d84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x199d84) {
            ctx->pc = 0x199D98u;
            goto label_199d98;
        }
    }
    ctx->pc = 0x199D8Cu;
    // 0x199d8c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x199d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_199d90:
    // 0x199d90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x199D90u;
    {
        const bool branch_taken_0x199d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D90u;
            // 0x199d94: 0xae400044  sw          $zero, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d90) {
            ctx->pc = 0x199DB8u;
            goto label_199db8;
        }
    }
    ctx->pc = 0x199D98u;
label_199d98:
    // 0x199d98: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199D98u;
    {
        const bool branch_taken_0x199d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D98u;
            // 0x199d9c: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d98) {
            ctx->pc = 0x199DB0u;
            goto label_199db0;
        }
    }
    ctx->pc = 0x199DA0u;
    // 0x199da0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x199DA0u;
    {
        const bool branch_taken_0x199da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199da0) {
            ctx->pc = 0x199DA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199DA0u;
            // 0x199da4: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199DB4u;
            goto label_199db4;
        }
    }
    ctx->pc = 0x199DA8u;
    // 0x199da8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x199dac: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x199dacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_199db0:
    // 0x199db0: 0xae510048  sw          $s1, 0x48($s2)
    ctx->pc = 0x199db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
label_199db4:
    // 0x199db4: 0xae500044  sw          $s0, 0x44($s2)
    ctx->pc = 0x199db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 16));
label_199db8:
    // 0x199db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199dc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x199dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199dc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x199dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199dc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x199dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199dcc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x199dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x199DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199DD0u;
            // 0x199dd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199DD8u;
}
