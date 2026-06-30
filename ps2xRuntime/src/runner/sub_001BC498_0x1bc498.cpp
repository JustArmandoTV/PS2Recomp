#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC498
// Address: 0x1bc498 - 0x1bc518
void sub_001BC498_0x1bc498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC498_0x1bc498");
#endif

    switch (ctx->pc) {
        case 0x1bc4c4u: goto label_1bc4c4;
        case 0x1bc4e8u: goto label_1bc4e8;
        case 0x1bc4fcu: goto label_1bc4fc;
        default: break;
    }

    ctx->pc = 0x1bc498u;

    // 0x1bc498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bc4a0: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1bc4a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bc4a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bc4a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bc4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bc4b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bc4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bc4b4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1bc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1bc4b8: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1bc4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bc4bc: 0xc06f4c0  jal         func_1BD300
    ctx->pc = 0x1BC4BCu;
    SET_GPR_U32(ctx, 31, 0x1BC4C4u);
    ctx->pc = 0x1BC4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4BCu;
            // 0x1bc4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD300u;
    if (runtime->hasFunction(0x1BD300u)) {
        auto targetFn = runtime->lookupFunction(0x1BD300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4C4u; }
        if (ctx->pc != 0x1BC4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD300_0x1bd300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4C4u; }
        if (ctx->pc != 0x1BC4C4u) { return; }
    }
    ctx->pc = 0x1BC4C4u;
label_1bc4c4:
    // 0x1bc4c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bc4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4c8: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bc4cc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC4CCu;
    {
        const bool branch_taken_0x1bc4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4CCu;
            // 0x1bc4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4cc) {
            ctx->pc = 0x1BC4E0u;
            goto label_1bc4e0;
        }
    }
    ctx->pc = 0x1BC4D4u;
    // 0x1bc4d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BC4D4u;
    {
        const bool branch_taken_0x1bc4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4D4u;
            // 0x1bc4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4d4) {
            ctx->pc = 0x1BC500u;
            goto label_1bc500;
        }
    }
    ctx->pc = 0x1BC4DCu;
    // 0x1bc4dc: 0x0  nop
    ctx->pc = 0x1bc4dcu;
    // NOP
label_1bc4e0:
    // 0x1bc4e0: 0xc06f146  jal         func_1BC518
    ctx->pc = 0x1BC4E0u;
    SET_GPR_U32(ctx, 31, 0x1BC4E8u);
    ctx->pc = 0x1BC518u;
    if (runtime->hasFunction(0x1BC518u)) {
        auto targetFn = runtime->lookupFunction(0x1BC518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4E8u; }
        if (ctx->pc != 0x1BC4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC518_0x1bc518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4E8u; }
        if (ctx->pc != 0x1BC4E8u) { return; }
    }
    ctx->pc = 0x1BC4E8u;
label_1bc4e8:
    // 0x1bc4e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bc4e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC4ECu;
    {
        const bool branch_taken_0x1bc4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC4ECu;
            // 0x1bc4f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4ec) {
            ctx->pc = 0x1BC500u;
            goto label_1bc500;
        }
    }
    ctx->pc = 0x1BC4F4u;
    // 0x1bc4f4: 0xc06f4bc  jal         func_1BD2F0
    ctx->pc = 0x1BC4F4u;
    SET_GPR_U32(ctx, 31, 0x1BC4FCu);
    ctx->pc = 0x1BD2F0u;
    if (runtime->hasFunction(0x1BD2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BD2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4FCu; }
        if (ctx->pc != 0x1BC4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD2F0_0x1bd2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC4FCu; }
        if (ctx->pc != 0x1BC4FCu) { return; }
    }
    ctx->pc = 0x1BC4FCu;
label_1bc4fc:
    // 0x1bc4fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1bc4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1bc500:
    // 0x1bc500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bc508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bc508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc50c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bc50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bc510: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC510u;
            // 0x1bc514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC518u;
}
