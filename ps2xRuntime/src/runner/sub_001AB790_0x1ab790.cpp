#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB790
// Address: 0x1ab790 - 0x1ab818
void sub_001AB790_0x1ab790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB790_0x1ab790");
#endif

    switch (ctx->pc) {
        case 0x1ab7acu: goto label_1ab7ac;
        case 0x1ab7c4u: goto label_1ab7c4;
        case 0x1ab7d8u: goto label_1ab7d8;
        default: break;
    }

    ctx->pc = 0x1ab790u;

    // 0x1ab790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab7a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab7a4: 0xc06c0b0  jal         func_1B02C0
    ctx->pc = 0x1AB7A4u;
    SET_GPR_U32(ctx, 31, 0x1AB7ACu);
    ctx->pc = 0x1AB7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7A4u;
            // 0x1ab7a8: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B02C0u;
    if (runtime->hasFunction(0x1B02C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7ACu; }
        if (ctx->pc != 0x1AB7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02C0_0x1b02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7ACu; }
        if (ctx->pc != 0x1AB7ACu) { return; }
    }
    ctx->pc = 0x1AB7ACu;
label_1ab7ac:
    // 0x1ab7ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab7b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7b4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB7B4u;
    {
        const bool branch_taken_0x1ab7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AB7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7B4u;
            // 0x1ab7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7b4) {
            ctx->pc = 0x1AB7CCu;
            goto label_1ab7cc;
        }
    }
    ctx->pc = 0x1AB7BCu;
    // 0x1ab7bc: 0xc06ae06  jal         func_1AB818
    ctx->pc = 0x1AB7BCu;
    SET_GPR_U32(ctx, 31, 0x1AB7C4u);
    ctx->pc = 0x1AB818u;
    if (runtime->hasFunction(0x1AB818u)) {
        auto targetFn = runtime->lookupFunction(0x1AB818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7C4u; }
        if (ctx->pc != 0x1AB7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB818_0x1ab818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7C4u; }
        if (ctx->pc != 0x1AB7C4u) { return; }
    }
    ctx->pc = 0x1AB7C4u;
label_1ab7c4:
    // 0x1ab7c4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1AB7C4u;
    {
        const bool branch_taken_0x1ab7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab7c4) {
            ctx->pc = 0x1AB7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7C4u;
            // 0x1ab7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB804u;
            goto label_1ab804;
        }
    }
    ctx->pc = 0x1AB7CCu;
label_1ab7cc:
    // 0x1ab7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7d0: 0xc06ae22  jal         func_1AB888
    ctx->pc = 0x1AB7D0u;
    SET_GPR_U32(ctx, 31, 0x1AB7D8u);
    ctx->pc = 0x1AB7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7D0u;
            // 0x1ab7d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB888u;
    if (runtime->hasFunction(0x1AB888u)) {
        auto targetFn = runtime->lookupFunction(0x1AB888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7D8u; }
        if (ctx->pc != 0x1AB7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB888_0x1ab888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB7D8u; }
        if (ctx->pc != 0x1AB7D8u) { return; }
    }
    ctx->pc = 0x1AB7D8u;
label_1ab7d8:
    // 0x1ab7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ab7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ab7e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab7e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB7E4u;
    {
        const bool branch_taken_0x1ab7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7E4u;
            // 0x1ab7e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7e4) {
            ctx->pc = 0x1AB800u;
            goto label_1ab800;
        }
    }
    ctx->pc = 0x1AB7ECu;
    // 0x1ab7ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab7f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab7f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab7f8: 0x806d7aa  j           func_1B5EA8
    ctx->pc = 0x1AB7F8u;
    ctx->pc = 0x1AB7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB7F8u;
            // 0x1ab7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB800u;
label_1ab800:
    // 0x1ab800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab804:
    // 0x1ab804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab80c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB80Cu;
            // 0x1ab810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB814u;
    // 0x1ab814: 0x0  nop
    ctx->pc = 0x1ab814u;
    // NOP
}
