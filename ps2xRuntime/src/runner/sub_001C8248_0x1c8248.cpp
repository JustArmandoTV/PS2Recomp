#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8248
// Address: 0x1c8248 - 0x1c82b0
void sub_001C8248_0x1c8248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8248_0x1c8248");
#endif

    switch (ctx->pc) {
        case 0x1c826cu: goto label_1c826c;
        default: break;
    }

    ctx->pc = 0x1c8248u;

    // 0x1c8248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c824c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c824cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c8250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8254: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c8254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c8258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c825c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1c825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1c8260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8264: 0xc072082  jal         func_1C8208
    ctx->pc = 0x1C8264u;
    SET_GPR_U32(ctx, 31, 0x1C826Cu);
    ctx->pc = 0x1C8268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8264u;
            // 0x1c8268: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8208u;
    if (runtime->hasFunction(0x1C8208u)) {
        auto targetFn = runtime->lookupFunction(0x1C8208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C826Cu; }
        if (ctx->pc != 0x1C826Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8208_0x1c8208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C826Cu; }
        if (ctx->pc != 0x1C826Cu) { return; }
    }
    ctx->pc = 0x1C826Cu;
label_1c826c:
    // 0x1c826c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8270: 0x26030025  addiu       $v1, $s0, 0x25
    ctx->pc = 0x1c8270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 37));
    // 0x1c8274: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1c8274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1c8278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8278u;
    {
        const bool branch_taken_0x1c8278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8278u;
            // 0x1c827c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8278) {
            ctx->pc = 0x1C8290u;
            goto label_1c8290;
        }
    }
    ctx->pc = 0x1C8280u;
    // 0x1c8280: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1c8280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x1c8284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8284u;
    {
        const bool branch_taken_0x1c8284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8284u;
            // 0x1c8288: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8284) {
            ctx->pc = 0x1C8298u;
            goto label_1c8298;
        }
    }
    ctx->pc = 0x1C828Cu;
    // 0x1c828c: 0x0  nop
    ctx->pc = 0x1c828cu;
    // NOP
label_1c8290:
    // 0x1c8290: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c8290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c8294: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c8294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c8298:
    // 0x1c8298: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c8298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c829c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c829cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c82a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c82a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c82a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C82A4u;
            // 0x1c82a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C82ACu;
    // 0x1c82ac: 0x0  nop
    ctx->pc = 0x1c82acu;
    // NOP
}
