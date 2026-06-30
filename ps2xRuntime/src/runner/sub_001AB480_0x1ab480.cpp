#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB480
// Address: 0x1ab480 - 0x1ab4f0
void sub_001AB480_0x1ab480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB480_0x1ab480");
#endif

    switch (ctx->pc) {
        case 0x1ab4c8u: goto label_1ab4c8;
        default: break;
    }

    ctx->pc = 0x1ab480u;

    // 0x1ab480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab484: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ab484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ab488: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ab488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ab48c: 0x8c902030  lw          $s0, 0x2030($a0)
    ctx->pc = 0x1ab48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1ab490: 0x8c830d84  lw          $v1, 0xD84($a0)
    ctx->pc = 0x1ab490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3460)));
    // 0x1ab494: 0x8c820d80  lw          $v0, 0xD80($a0)
    ctx->pc = 0x1ab494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3456)));
    // 0x1ab498: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1ab498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1ab49c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ab49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ab4a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AB4A0u;
    {
        const bool branch_taken_0x1ab4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4A0u;
            // 0x1ab4a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4a0) {
            ctx->pc = 0x1AB4E0u;
            goto label_1ab4e0;
        }
    }
    ctx->pc = 0x1AB4A8u;
    // 0x1ab4a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1AB4A8u;
    {
        const bool branch_taken_0x1ab4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4A8u;
            // 0x1ab4ac: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4a8) {
            ctx->pc = 0x1AB4E0u;
            goto label_1ab4e0;
        }
    }
    ctx->pc = 0x1AB4B0u;
    // 0x1ab4b0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1ab4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1ab4b4: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AB4B4u;
    {
        const bool branch_taken_0x1ab4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab4b4) {
            ctx->pc = 0x1AB4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4B4u;
            // 0x1ab4b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB4E4u;
            goto label_1ab4e4;
        }
    }
    ctx->pc = 0x1AB4BCu;
    // 0x1ab4bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ab4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4c0: 0xc06515c  jal         func_194570
    ctx->pc = 0x1AB4C0u;
    SET_GPR_U32(ctx, 31, 0x1AB4C8u);
    ctx->pc = 0x1AB4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4C0u;
            // 0x1ab4c4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194570u;
    if (runtime->hasFunction(0x194570u)) {
        auto targetFn = runtime->lookupFunction(0x194570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4C8u; }
        if (ctx->pc != 0x1AB4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194570_0x194570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4C8u; }
        if (ctx->pc != 0x1AB4C8u) { return; }
    }
    ctx->pc = 0x1AB4C8u;
label_1ab4c8:
    // 0x1ab4c8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB4C8u;
    {
        const bool branch_taken_0x1ab4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4c8) {
            ctx->pc = 0x1AB4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4C8u;
            // 0x1ab4cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB4E4u;
            goto label_1ab4e4;
        }
    }
    ctx->pc = 0x1AB4D0u;
    // 0x1ab4d0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1ab4d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ab4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab4d8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1ab4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1ab4dc: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1ab4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_1ab4e0:
    // 0x1ab4e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ab4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab4e4:
    // 0x1ab4e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ab4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4E8u;
            // 0x1ab4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB4F0u;
}
