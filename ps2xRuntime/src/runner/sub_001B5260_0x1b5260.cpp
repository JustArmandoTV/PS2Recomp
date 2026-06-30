#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5260
// Address: 0x1b5260 - 0x1b52f0
void sub_001B5260_0x1b5260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5260_0x1b5260");
#endif

    switch (ctx->pc) {
        case 0x1b5278u: goto label_1b5278;
        case 0x1b52a8u: goto label_1b52a8;
        case 0x1b52ccu: goto label_1b52cc;
        default: break;
    }

    ctx->pc = 0x1b5260u;

    // 0x1b5260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b5264: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1b5264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b5268: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1b5268u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1b526c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B526Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B526Cu;
            // 0x1b5270: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5274u;
    // 0x1b5274: 0x0  nop
    ctx->pc = 0x1b5274u;
    // NOP
label_1b5278:
    // 0x1b5278: 0x8c833720  lw          $v1, 0x3720($a0)
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14112)));
    // 0x1b527c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B527Cu;
    {
        const bool branch_taken_0x1b527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b527c) {
            ctx->pc = 0x1B529Cu;
            goto label_1b529c;
        }
    }
    ctx->pc = 0x1B5284u;
    // 0x1b5284: 0x8c620db8  lw          $v0, 0xDB8($v1)
    ctx->pc = 0x1b5284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3512)));
    // 0x1b5288: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5288u;
    {
        const bool branch_taken_0x1b5288 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b5288) {
            ctx->pc = 0x1B528Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5288u;
            // 0x1b528c: 0xac650db8  sw          $a1, 0xDB8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3512), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5290u;
            goto label_1b5290;
        }
    }
    ctx->pc = 0x1B5290u;
label_1b5290:
    // 0x1b5290: 0x8c620dbc  lw          $v0, 0xDBC($v1)
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3516)));
    // 0x1b5294: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5294u;
    {
        const bool branch_taken_0x1b5294 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b5294) {
            ctx->pc = 0x1B5298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5294u;
            // 0x1b5298: 0xac660dbc  sw          $a2, 0xDBC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3516), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B529Cu;
            goto label_1b529c;
        }
    }
    ctx->pc = 0x1B529Cu;
label_1b529c:
    // 0x1b529c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B529Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B52A4u;
    // 0x1b52a4: 0x0  nop
    ctx->pc = 0x1b52a4u;
    // NOP
label_1b52a8:
    // 0x1b52a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b52a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b52ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b52acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b52b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b52b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b52b8: 0x8e023720  lw          $v0, 0x3720($s0)
    ctx->pc = 0x1b52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14112)));
    // 0x1b52bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B52BCu;
    {
        const bool branch_taken_0x1b52bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52bc) {
            ctx->pc = 0x1B52C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52BCu;
            // 0x1b52c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B52E0u;
            goto label_1b52e0;
        }
    }
    ctx->pc = 0x1B52C4u;
    // 0x1b52c4: 0xc06d4bc  jal         func_1B52F0
    ctx->pc = 0x1B52C4u;
    SET_GPR_U32(ctx, 31, 0x1B52CCu);
    ctx->pc = 0x1B52F0u;
    if (runtime->hasFunction(0x1B52F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B52F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52CCu; }
        if (ctx->pc != 0x1B52CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B52F0_0x1b52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B52CCu; }
        if (ctx->pc != 0x1B52CCu) { return; }
    }
    ctx->pc = 0x1B52CCu;
label_1b52cc:
    // 0x1b52cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b52ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b52d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b52d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b52d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b52d8: 0x806d6d4  j           func_1B5B50
    ctx->pc = 0x1B52D8u;
    ctx->pc = 0x1B52DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52D8u;
            // 0x1b52dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B50u;
    {
        auto targetFn = runtime->lookupFunction(0x1B5B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B52E0u;
label_1b52e0:
    // 0x1b52e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b52e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b52e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B52E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B52E4u;
            // 0x1b52e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B52ECu;
    // 0x1b52ec: 0x0  nop
    ctx->pc = 0x1b52ecu;
    // NOP
}
